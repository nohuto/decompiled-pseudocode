/*
 * XREFs of SepIsImageInMinTcbList @ 0x140A1B9DC
 * Callers:
 *     SepIsMinTCB @ 0x140A1BD1C (SepIsMinTCB.c)
 *     SepIsSystemAppTCB @ 0x140A1C030 (SepIsSystemAppTCB.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x140927050 (RtlEqualUnicodeString.c)
 *     SeCompareSigningLevels @ 0x1409354F0 (SeCompareSigningLevels.c)
 *     SepCheckAndSetAuditModeForProcess @ 0x140A1C0F8 (SepCheckAndSetAuditModeForProcess.c)
 */

__int64 __fastcall SepIsImageInMinTcbList(
        __int64 a1,
        unsigned int a2,
        const UNICODE_STRING *a3,
        char a4,
        unsigned __int8 a5,
        char a6,
        char *a7,
        char *a8,
        unsigned __int8 *a9)
{
  unsigned int v9; // esi
  unsigned int i; // ebx
  __int64 v15; // rbp
  char *v16; // rdx
  unsigned __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v21; // eax
  char v22; // al
  unsigned __int8 v23; // bl
  unsigned __int8 v24; // di
  char *v25; // r15
  char v26; // al
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  char v31; // bl

  v9 = 0;
  for ( i = 0; ; ++i )
  {
    if ( i >= a2 )
      return (unsigned int)-1073741275;
    v15 = a1 + 24LL * i;
    if ( RtlEqualUnicodeString(a3, (PCUNICODE_STRING)v15, 1u) )
    {
      v21 = *(_DWORD *)(v15 + 20);
      if ( !v21 || v21 == dword_140EFEAF0 )
        break;
    }
  }
  _mm_lfence();
  v22 = *(_BYTE *)(v15 + 18);
  if ( v22 || (v23 = a5) == 0 )
  {
    v23 = *(_BYTE *)(v15 + 18);
    v24 = v23;
    if ( !v22 )
    {
      v25 = a7;
      *a7 = *(_BYTE *)(v15 + 16);
      v26 = *(_BYTE *)(v15 + 17);
      goto LABEL_11;
    }
  }
  else
  {
    v24 = a5;
  }
  v25 = a7;
  v16 = SeProtectedMapping;
  v17 = (unsigned __int64)v23 >> 4;
  *a7 = SeProtectedMapping[2 * v17];
  v26 = SeProtectedMapping[2 * v17 + 1];
LABEL_11:
  LOBYTE(v16) = a6;
  *a8 = v26;
  LOBYTE(v17) = *v25;
  if ( !(unsigned int)SeCompareSigningLevels(v17, (__int64)v16, v18, v19) )
    *v25 = a6;
  LOBYTE(v28) = *a8;
  LOBYTE(v27) = a6;
  if ( !(unsigned int)SeCompareSigningLevels(v28, v27, v29, v30) )
    *a8 = a6;
  v31 = v23 & 7;
  if ( v31 != 1 && ((a4 & 1) != 0 || v31 == 2) )
  {
    if ( (*a8 & 0xFu) < 4 )
      *a8 = *v25;
    v24 = *a9 & 8 ^ v24 & 0xF2 | 2;
  }
  *a9 = v24;
  SepCheckAndSetAuditModeForProcess(a3, a8);
  return v9;
}
