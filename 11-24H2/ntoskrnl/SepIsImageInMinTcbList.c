/*
 * XREFs of SepIsImageInMinTcbList @ 0x1409F9F4C
 * Callers:
 *     SepIsMinTCB @ 0x1409FA28C (SepIsMinTCB.c)
 *     SepIsSystemAppTCB @ 0x1409FA5A0 (SepIsSystemAppTCB.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x140929190 (RtlEqualUnicodeString.c)
 *     SepCheckAndSetAuditModeForProcess @ 0x1409FA668 (SepCheckAndSetAuditModeForProcess.c)
 *     SeCompareSigningLevels @ 0x1409FA8D0 (SeCompareSigningLevels.c)
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
  int v19; // eax
  char v20; // al
  unsigned __int8 v21; // bl
  unsigned __int8 v22; // di
  char *v23; // r15
  char v24; // al
  __int64 v25; // rdx
  __int64 v26; // rcx
  char v27; // bl

  v9 = 0;
  for ( i = 0; ; ++i )
  {
    if ( i >= a2 )
      return (unsigned int)-1073741275;
    v15 = a1 + 24LL * i;
    if ( RtlEqualUnicodeString(a3, (PCUNICODE_STRING)v15, 1u) )
    {
      v19 = *(_DWORD *)(v15 + 20);
      if ( !v19 || v19 == dword_140EFEE10 )
        break;
    }
  }
  _mm_lfence();
  v20 = *(_BYTE *)(v15 + 18);
  if ( v20 || (v21 = a5) == 0 )
  {
    v21 = *(_BYTE *)(v15 + 18);
    v22 = v21;
    if ( !v20 )
    {
      v23 = a7;
      *a7 = *(_BYTE *)(v15 + 16);
      v24 = *(_BYTE *)(v15 + 17);
      goto LABEL_11;
    }
  }
  else
  {
    v22 = a5;
  }
  v23 = a7;
  v16 = SeProtectedMapping;
  v17 = (unsigned __int64)v21 >> 4;
  *a7 = SeProtectedMapping[2 * v17];
  v24 = SeProtectedMapping[2 * v17 + 1];
LABEL_11:
  LOBYTE(v16) = a6;
  *a8 = v24;
  LOBYTE(v17) = *v23;
  if ( !(unsigned int)SeCompareSigningLevels(v17, v16) )
    *v23 = a6;
  LOBYTE(v26) = *a8;
  LOBYTE(v25) = a6;
  if ( !(unsigned int)SeCompareSigningLevels(v26, v25) )
    *a8 = a6;
  v27 = v21 & 7;
  if ( v27 != 1 && ((a4 & 1) != 0 || v27 == 2) )
  {
    if ( (*a8 & 0xFu) < 4 )
      *a8 = *v23;
    v22 = *a9 & 8 ^ v22 & 0xF2 | 2;
  }
  *a9 = v22;
  SepCheckAndSetAuditModeForProcess(a3, a8);
  return v9;
}
