/*
 * XREFs of ??$ReportFailure_Return@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x1800996F4
 * Callers:
 *     ??$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180098C48 (--$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 * Callees:
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1800661A0 (_alloca_probe.c)
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEAUFailureInfo@2@@Z @ 0x18009BB74 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEA.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x18009DAF8 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 */

__int64 __fastcall wil::details::ReportFailure_Return<2>(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  const struct wil::FailureInfo *v6; // rdx
  _BYTE v7[160]; // [rsp+80h] [rbp-14B8h] BYREF

  result = wil::details::LogFailure(a1, a2, a3, a4, a5);
  if ( (v7[4] & 1) != 0 )
    wil::details::WilFailFast((wil::details *)v7, v6);
  return result;
}
