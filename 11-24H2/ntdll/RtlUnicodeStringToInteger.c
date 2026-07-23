/*
 * XREFs of RtlUnicodeStringToInteger @ 0x180013E20
 * Callers:
 *     RtlGetFileMUIPath @ 0x1800016B0 (RtlGetFileMUIPath.c)
 *     RtlpQueryNlsSystemCodePages @ 0x180009BE0 (RtlpQueryNlsSystemCodePages.c)
 *     RtlGetIntegerAtom @ 0x180012A70 (RtlGetIntegerAtom.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180013360 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlLookupAtomInAtomTable @ 0x180013A80 (RtlLookupAtomInAtomTable.c)
 *     RtlAddAtomToAtomTableEx @ 0x18007AD34 (RtlAddAtomToAtomTableEx.c)
 *     LdrpInitializeExecutionOptions @ 0x1800A4268 (LdrpInitializeExecutionOptions.c)
 *     RtlQueryImageFileKeyOption @ 0x1800A5610 (RtlQueryImageFileKeyOption.c)
 *     RtlGetUILanguageInfo @ 0x1800CA620 (RtlGetUILanguageInfo.c)
 *     RtlUnicodeStringToLcid @ 0x1800CB240 (RtlUnicodeStringToLcid.c)
 *     RtlpSetPreferredUILanguages @ 0x18013E940 (RtlpSetPreferredUILanguages.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x1801473B4 (RtlpMuiRegAddAlternateCodePage.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlUnicodeStringToInteger(PUNICODE_STRING String, ULONG Base, PULONG Value)
{
  ULONG v5; // eax
  NTSTATUS v6; // esi
  unsigned int Length; // edx
  wchar_t *Buffer; // r10
  unsigned int v9; // r8d
  unsigned __int16 v10; // di
  unsigned __int16 v12; // dx
  wchar_t *v13; // rcx
  unsigned int v14; // ebx
  int v15; // r11d
  ULONG v16; // edx
  __int16 v18; // dx

  v5 = 0;
  v6 = 0;
  Length = String->Length;
  if ( !(_WORD)Length || (Length & 1) != 0 )
    goto LABEL_22;
  Buffer = String->Buffer;
  v9 = Length >> 1;
  v10 = 0;
  while ( v9-- )
  {
    v10 = *Buffer++;
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
      v12 = *Buffer++;
    }
    else
    {
      v12 = 0;
    }
  }
  v13 = Buffer;
  v14 = v9;
  if ( !Base )
  {
    Base = 10;
    v15 = 0;
    if ( v12 == 48 )
    {
      if ( !v9 )
        goto LABEL_29;
      --v9;
      v18 = *Buffer++;
      switch ( v18 )
      {
        case 'x':
          Base = 16;
          v15 = 4;
          break;
        case 'o':
          Base = 8;
          v15 = 3;
          break;
        case 'b':
          Base = 2;
          v15 = 1;
          break;
        default:
          v9 = v14;
          Buffer = v13;
          break;
      }
      if ( v9 )
      {
        --v9;
        v12 = *Buffer++;
      }
      else
      {
LABEL_29:
        v12 = 0;
      }
    }
    goto LABEL_10;
  }
  if ( Base != 10 )
  {
    switch ( Base )
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
    if ( v16 >= Base )
      break;
    v5 = v15 ? v16 | (v5 << v15) : v16 + Base * v5;
    if ( !v9 )
      break;
    --v9;
    v12 = *Buffer++;
  }
  if ( v10 == 45 )
    v5 = -v5;
LABEL_20:
  *Value = v5;
  return v6;
}
