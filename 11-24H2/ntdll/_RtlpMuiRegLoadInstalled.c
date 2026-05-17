/*
 * XREFs of _RtlpMuiRegLoadInstalled @ 0x18011F248
 * Callers:
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18007CD08 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x1800EAF60 (RtlpMuiRegLoadRegistryInfo.c)
 * Callees:
 *     RtlpLoadInstallLanguageFallback @ 0x1800D1784 (RtlpLoadInstallLanguageFallback.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x1800EB0C0 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlpMuiRegCreateLanguages @ 0x1801492D8 (RtlpMuiRegCreateLanguages.c)
 *     RtlpMuiRegCreateStringPool @ 0x180149338 (RtlpMuiRegCreateStringPool.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x18014A4F4 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     _RtlpMuiRegValidateInstalled @ 0x18014AC60 (_RtlpMuiRegValidateInstalled.c)
 *     NtIsUILanguageComitted @ 0x180163E00 (NtIsUILanguageComitted.c)
 *     NtQueryInstallUILanguage @ 0x180164800 (NtQueryInstallUILanguage.c)
 */

__int64 __fastcall RtlpMuiRegLoadInstalled(__int64 a1)
{
  int InstallUILanguage; // edi
  __int64 result; // rax
  __int64 Languages; // rax
  __int64 StringPool; // rax

  InstallUILanguage = 0;
  if ( !a1 )
    return 3221225485LL;
  if ( (int)NtIsUILanguageComitted() >= 0 )
  {
    InstallUILanguage = NtQueryInstallUILanguage(a1 + 4);
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
