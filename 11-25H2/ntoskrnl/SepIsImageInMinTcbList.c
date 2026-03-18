/*
 * XREFs of SepIsImageInMinTcbList @ 0x1409BB558
 * Callers:
 *     SepIsSystemAppTCB @ 0x1406E9498 (SepIsSystemAppTCB.c)
 *     SepIsMinTCB @ 0x1409BB9B4 (SepIsMinTCB.c)
 * Callees:
 *     SeCompareSigningLevels @ 0x14091E260 (SeCompareSigningLevels.c)
 *     RtlEqualUnicodeString @ 0x1409329B0 (RtlEqualUnicodeString.c)
 *     SepCheckAndSetAuditModeForProcess @ 0x1409BB8F4 (SepCheckAndSetAuditModeForProcess.c)
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
  unsigned __int64 v16; // rcx
  int v18; // eax
  char v19; // al
  unsigned __int8 v20; // bl
  unsigned __int8 v21; // di
  char *v22; // r15
  char v23; // al
  __int64 v24; // rcx
  char v25; // bl

  v9 = 0;
  for ( i = 0; ; ++i )
  {
    if ( i >= a2 )
      return (unsigned int)-1073741275;
    v15 = a1 + 24LL * i;
    if ( RtlEqualUnicodeString(a3, (PCUNICODE_STRING)v15, 1u) )
    {
      v18 = *(_DWORD *)(v15 + 20);
      if ( !v18 || v18 == dword_140EFE810 )
        break;
    }
  }
  _mm_lfence();
  v19 = *(_BYTE *)(v15 + 18);
  if ( v19 || (v20 = a5) == 0 )
  {
    v20 = *(_BYTE *)(v15 + 18);
    v21 = v20;
    if ( !v19 )
    {
      v22 = a7;
      *a7 = *(_BYTE *)(v15 + 16);
      v23 = *(_BYTE *)(v15 + 17);
      goto LABEL_11;
    }
  }
  else
  {
    v21 = a5;
  }
  v22 = a7;
  v16 = (unsigned __int64)v20 >> 4;
  *a7 = SeProtectedMapping[2 * v16];
  v23 = SeProtectedMapping[2 * v16 + 1];
LABEL_11:
  *a8 = v23;
  LOBYTE(v16) = *v22;
  if ( !(unsigned int)SeCompareSigningLevels(v16) )
    *v22 = a6;
  LOBYTE(v24) = *a8;
  if ( !(unsigned int)SeCompareSigningLevels(v24) )
    *a8 = a6;
  v25 = v20 & 7;
  if ( v25 != 1 && ((a4 & 1) != 0 || v25 == 2) )
  {
    if ( (*a8 & 0xFu) < 4 )
      *a8 = *v22;
    v21 = *a9 & 8 ^ v21 & 0xF2 | 2;
  }
  *a9 = v21;
  SepCheckAndSetAuditModeForProcess(a3, a8);
  return v9;
}
