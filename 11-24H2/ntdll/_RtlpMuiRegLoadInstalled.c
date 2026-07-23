/*
 * XREFs of _RtlpMuiRegLoadInstalled @ 0x18011D478
 * Callers:
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x180011648 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x1800CBFB0 (RtlpMuiRegLoadRegistryInfo.c)
 * Callees:
 *     RtlpLoadInstallLanguageFallback @ 0x18009976C (RtlpLoadInstallLanguageFallback.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x1800CC110 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlpMuiRegCreateLanguages @ 0x180147688 (RtlpMuiRegCreateLanguages.c)
 *     RtlpMuiRegCreateStringPool @ 0x1801476E8 (RtlpMuiRegCreateStringPool.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x1801488A4 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     _RtlpMuiRegValidateInstalled @ 0x180149010 (_RtlpMuiRegValidateInstalled.c)
 *     NtIsUILanguageComitted @ 0x1801621C0 (NtIsUILanguageComitted.c)
 *     NtQueryInstallUILanguage @ 0x180162BC0 (NtQueryInstallUILanguage.c)
 */

__int64 __fastcall RtlpMuiRegLoadInstalled(__int64 a1)
{
  NTSTATUS InstallUILanguage; // edi
  __int64 result; // rax
  __int64 Languages; // rax
  __int64 StringPool; // rax

  InstallUILanguage = 0;
  if ( !a1 )
    return 3221225485LL;
  if ( NtIsUILanguageComitted() >= 0 )
  {
    InstallUILanguage = NtQueryInstallUILanguage((LANGID *)(a1 + 4));
    if ( InstallUILanguage < 0 || ((*(_WORD *)(a1 + 4) - 4096) & 0xFBFF) == 0 )
      goto LABEL_12;
    RtlpLoadInstallLanguageFallback(a1, (_WORD *)(a1 + 6), (_WORD *)(a1 + 8));
  }
  RtlpMuiRegFreeRegistryInfo(a1, 0x3FFu);
  Languages = RtlpMuiRegCreateLanguages();
  *(_QWORD *)(a1 + 24) = Languages;
  if ( !Languages )
  {
    InstallUILanguage = -1073741801;
LABEL_12:
    RtlpMuiRegFreeRegistryInfo(a1, 0x3FFu);
    return (unsigned int)InstallUILanguage;
  }
  *(_DWORD *)a1 |= 1u;
  StringPool = RtlpMuiRegCreateStringPool(0xFFFFFFFFLL, 0xFFFFFFFFLL);
  *(_QWORD *)(a1 + 32) = StringPool;
  if ( !StringPool )
    goto LABEL_12;
  *(_DWORD *)a1 |= 2u;
  InstallUILanguage = RtlpMuiRegLoadInstalledFromKey(a1);
  if ( InstallUILanguage < 0 )
    goto LABEL_12;
  result = RtlpMuiRegValidateInstalled(a1);
  InstallUILanguage = result;
  if ( (int)result < 0 )
    goto LABEL_12;
  return result;
}
