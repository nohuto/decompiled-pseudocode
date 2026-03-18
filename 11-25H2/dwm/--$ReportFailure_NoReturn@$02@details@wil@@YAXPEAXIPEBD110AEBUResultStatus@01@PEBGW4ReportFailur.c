/*
 * XREFs of ??$ReportFailure_NoReturn@$02@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x140006A3C
 * Callers:
 *     ??$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x140006808 (--$ReportFailure_Base@$02$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 * Callees:
 *     memset_0 @ 0x140005D98 (memset_0.c)
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEAUFailureInfo@2@@Z @ 0x140009104 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEA.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x14000BBBC (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     _alloca_probe @ 0x140010B50 (_alloca_probe.c)
 */

void __fastcall __noreturn wil::details::ReportFailure_NoReturn<3>(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  const struct wil::FailureInfo *v10; // rdx
  _BYTE v11[160]; // [rsp+80h] [rbp-14B8h] BYREF

  memset_0(v11, 0, 0x98uLL);
  wil::details::LogFailure(a1, a2, a3, 0LL, 0LL, a6, 3, a7, 0LL);
  wil::details::WilFailFast((wil::details *)v11, v10);
}
