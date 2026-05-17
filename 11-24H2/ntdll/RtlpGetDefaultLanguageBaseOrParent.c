/*
 * XREFs of RtlpGetDefaultLanguageBaseOrParent @ 0x18013FD58
 * Callers:
 *     RtlpGetCompleteLanguageFallback @ 0x18013FBF4 (RtlpGetCompleteLanguageFallback.c)
 *     RtlpSetInstallLanguage @ 0x180140140 (RtlpSetInstallLanguage.c)
 * Callees:
 *     RtlLCIDToCultureName @ 0x1800360C0 (RtlLCIDToCultureName.c)
 *     RtlULongToUShort @ 0x18010CD40 (RtlULongToUShort.c)
 *     RtlpMuiRegGetInstalledLanguageInfoByIndex @ 0x180149640 (RtlpMuiRegGetInstalledLanguageInfoByIndex.c)
 *     RtlpMuiRegGetString @ 0x180149978 (RtlpMuiRegGetString.c)
 */

__int64 __fastcall RtlpGetDefaultLanguageBaseOrParent(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        unsigned int a5,
        _QWORD *a6,
        _QWORD *a7)
{
  unsigned int v7; // ebx
  unsigned int v12; // esi
  int i; // edi
  __int64 v14; // r12
  __int64 v15; // rdx
  int v17; // [rsp+30h] [rbp-48h] BYREF
  __int128 v18; // [rsp+38h] [rbp-40h] BYREF
  int v19; // [rsp+80h] [rbp+8h] BYREF

  v7 = 0;
  v19 = 0;
  v17 = 0;
  v18 = 0LL;
  if ( !a1 || !a2 || !a4 || (*(_BYTE *)a2 & 2) == 0 && (*(_BYTE *)a2 & 4) == 0 )
    return (unsigned int)-1073741811;
  if ( a3 )
    *a3 = 0LL;
  v12 = a5;
  for ( i = 0; ; ++i )
  {
    while ( 1 )
    {
      if ( i >= 4 )
        return (unsigned int)-1073741275;
      v14 = *(__int16 *)(a2 + 2LL * i + 12);
      if ( ((*(_WORD *)(a2 + 8) >> (2 * i)) & 3) != 1 )
        break;
      if ( (*(_BYTE *)a2 & 4) == 0 )
      {
        *((_QWORD *)&v18 + 1) = a4;
        if ( (int)RtlULongToUShort(2 * (unsigned int)(unsigned __int16)v12, (__int16 *)&v18 + 1) >= 0 )
        {
          if ( (unsigned __int8)RtlLCIDToCultureName(v14, (__int64)&v18) )
            goto LABEL_26;
        }
      }
LABEL_23:
      ++i;
    }
    if ( ((*(_WORD *)(a2 + 8) >> (2 * i)) & 3) == 2 )
      break;
    if ( ((*(_WORD *)(a2 + 8) >> (2 * i)) & 3) != 3 )
      goto LABEL_26;
    if ( (*(_BYTE *)a2 & 4) != 0 )
      goto LABEL_23;
    if ( (int)RtlpMuiRegGetString(a1, (unsigned __int16)v14, a4, v12) >= 0 && (*(_WORD *)a2 & 0x1000) == 0 )
      goto LABEL_26;
LABEL_19:
    ;
  }
  if ( (int)RtlpMuiRegGetInstalledLanguageInfoByIndex(
              a1,
              (unsigned __int16)v14,
              (unsigned int)&v17,
              a4,
              v12,
              (__int64)&v19) < 0
    || (v19 & 0x1000) != 0 )
  {
    goto LABEL_19;
  }
  if ( a3 )
    *a3 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 28 * v14;
LABEL_26:
  v15 = -1LL;
  do
    ++v15;
  while ( *(_WORD *)(a4 + 2 * v15) );
  if ( (unsigned int)v15 < v12 )
  {
    if ( a6 )
      *a6 = a4 + 2LL * (unsigned int)v15;
    if ( a7 )
      *a7 = v12 - (unsigned int)v15;
  }
  else
  {
    return (unsigned int)-1073741789;
  }
  return v7;
}
