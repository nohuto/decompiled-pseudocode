/*
 * XREFs of _MuiRegAllocArray @ 0x1406A26A4
 * Callers:
 *     RtlpLoadInstallLanguageFallback @ 0x14082B418 (RtlpLoadInstallLanguageFallback.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x14082BBA8 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x14082C4BC (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x14082CD70 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     _RtlpMuiRegValidateInstalled @ 0x14082E674 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall MuiRegAllocArray(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rcx

  result = 0LL;
  v3 = 2LL * a2;
  if ( v3 <= 0xFFFFFFFF )
  {
    if ( (_DWORD)v3 )
      return ExAllocatePool2(0x100uLL);
  }
  return result;
}
