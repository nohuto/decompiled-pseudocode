/*
 * XREFs of ??$ReportFailure_Return@$00@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x18001232C
 * Callers:
 *     ??$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x1800132B4 (--$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 * Callees:
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEAUFailureInfo@2@@Z @ 0x180012420 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEA.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x1800133E8 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     memset_0 @ 0x18001C1CE (memset_0.c)
 *     __security_check_cookie @ 0x18001C200 (__security_check_cookie.c)
 *     _alloca_probe @ 0x18001C2C0 (_alloca_probe.c)
 */

__int64 __fastcall wil::details::ReportFailure_Return<1>(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7)
{
  __int64 result; // rax
  const struct wil::FailureInfo *v10; // rdx
  _BYTE v11[160]; // [rsp+80h] [rbp-14B8h] BYREF

  memset_0(v11, 0, 0x98uLL);
  result = wil::details::LogFailure(a1, a2, "wil", 0LL, 0LL, a6, 1, a7, 0LL);
  if ( (v11[4] & 1) != 0 )
    wil::details::WilFailFast((wil::details *)v11, v10);
  return result;
}
