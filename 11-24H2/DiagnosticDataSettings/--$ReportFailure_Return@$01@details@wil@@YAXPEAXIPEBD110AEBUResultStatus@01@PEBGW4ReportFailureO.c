/*
 * XREFs of ??$ReportFailure_Return@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x1800028A8
 * Callers:
 *     ??$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180002500 (--$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 * Callees:
 *     __security_check_cookie @ 0x180001460 (__security_check_cookie.c)
 *     memset_0 @ 0x180001F2A (memset_0.c)
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEAUFailureInfo@2@@Z @ 0x180002E90 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEA.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x180003798 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     _alloca_probe @ 0x180005590 (_alloca_probe.c)
 */

__int64 __fastcall wil::details::ReportFailure_Return<2>(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 result; // rax
  const struct wil::FailureInfo *v13; // rdx
  char v14; // [rsp+48h] [rbp-1530h]
  _BYTE v15[160]; // [rsp+80h] [rbp-14F8h] BYREF
  _BYTE v16[1024]; // [rsp+120h] [rbp-1458h] BYREF
  _BYTE v17[4096]; // [rsp+520h] [rbp-1058h] BYREF

  memset_0(v15, 0, 0x98uLL);
  v14 = 0;
  result = wil::details::LogFailure(a1, a2, a3, a4, a5, a6, 2, a7, a8, v14, v17, 2048LL, v16, 1024LL, v15);
  if ( (v15[4] & 1) != 0 )
    wil::details::WilFailFast((wil::details *)v15, v13);
  return result;
}
