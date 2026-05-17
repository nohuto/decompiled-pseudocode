/*
 * XREFs of RtlUnicodeStringToInteger @ 0x18005BFF0
 * Callers:
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x18005AD70 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlLookupAtomInAtomTable @ 0x18005BC50 (RtlLookupAtomInAtomTable.c)
 *     RtlAddAtomToAtomTableEx @ 0x180067E44 (RtlAddAtomToAtomTableEx.c)
 *     RtlUnicodeStringToLcid @ 0x180089820 (RtlUnicodeStringToLcid.c)
 *     RtlGetUILanguageInfo @ 0x18008A190 (RtlGetUILanguageInfo.c)
 *     RtlGetFileMUIPath @ 0x1800A9A40 (RtlGetFileMUIPath.c)
 *     RtlpQueryNlsSystemCodePages @ 0x1800B02A0 (RtlpQueryNlsSystemCodePages.c)
 *     LdrpInitializeExecutionOptions @ 0x1800B1738 (LdrpInitializeExecutionOptions.c)
 *     RtlQueryImageFileKeyOption @ 0x1800B2AE0 (RtlQueryImageFileKeyOption.c)
 *     RtlGetIntegerAtom @ 0x1800E1B60 (RtlGetIntegerAtom.c)
 *     RtlpSetPreferredUILanguages @ 0x180141E40 (RtlpSetPreferredUILanguages.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x18014A5B4 (RtlpMuiRegAddAlternateCodePage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUnicodeStringToInteger(unsigned __int16 *a1, unsigned int a2, int *a3)
{
  int v5; // eax
  unsigned int v6; // esi
  unsigned int v7; // edx
  unsigned __int16 *v8; // r10
  unsigned int v9; // r8d
  unsigned __int16 v10; // di
  unsigned __int16 v12; // dx
  unsigned __int16 *v13; // rcx
  unsigned int v14; // ebx
  int v15; // r11d
  unsigned int v16; // edx
  __int16 v18; // dx

  v5 = 0;
  v6 = 0;
  v7 = *a1;
  if ( !(_WORD)v7 || (v7 & 1) != 0 )
    goto LABEL_22;
  v8 = (unsigned __int16 *)*((_QWORD *)a1 + 1);
  v9 = v7 >> 1;
  v10 = 0;
  while ( v9-- )
  {
    v10 = *v8++;
    if ( v10 > 0x20u )
      break;
    if ( !v9 )
    {
      v10 = 0;
      break;
    }
  }
  v12 = v10;
  if ( ((v10 - 43) & 0xFFFD) == 0 )
  {
    if ( v9 )
    {
      --v9;
      v12 = *v8++;
    }
    else
    {
      v12 = 0;
    }
  }
  v13 = v8;
  v14 = v9;
  if ( !a2 )
  {
    a2 = 10;
    v15 = 0;
    if ( v12 == 48 )
    {
      if ( !v9 )
        goto LABEL_29;
      --v9;
      v18 = *v8++;
      switch ( v18 )
      {
        case 'x':
          a2 = 16;
          v15 = 4;
          break;
        case 'o':
          a2 = 8;
          v15 = 3;
          break;
        case 'b':
          a2 = 2;
          v15 = 1;
          break;
        default:
          v9 = v14;
          v8 = v13;
          break;
      }
      if ( v9 )
      {
        --v9;
        v12 = *v8++;
      }
      else
      {
LABEL_29:
        v12 = 0;
      }
    }
    goto LABEL_10;
  }
  if ( a2 != 10 )
  {
    switch ( a2 )
    {
      case 2u:
        v15 = 1;
        goto LABEL_10;
      case 8u:
        v15 = 3;
        goto LABEL_10;
      case 0x10u:
        v15 = 4;
        goto LABEL_10;
    }
LABEL_22:
    v6 = -1073741811;
    goto LABEL_20;
  }
  v15 = 0;
LABEL_10:
  while ( v12 )
  {
    if ( (unsigned __int16)(v12 - 48) > 9u )
    {
      if ( (unsigned __int16)(v12 - 65) <= 5u )
      {
        v16 = v12 - 55;
      }
      else
      {
        if ( (unsigned __int16)(v12 - 97) > 5u )
          break;
        v16 = v12 - 87;
      }
    }
    else
    {
      v16 = v12 - 48;
    }
    if ( v16 >= a2 )
      break;
    v5 = v15 ? v16 | (v5 << v15) : v16 + a2 * v5;
    if ( !v9 )
      break;
    --v9;
    v12 = *v8++;
  }
  if ( v10 == 45 )
    v5 = -v5;
LABEL_20:
  *a3 = v5;
  return v6;
}
