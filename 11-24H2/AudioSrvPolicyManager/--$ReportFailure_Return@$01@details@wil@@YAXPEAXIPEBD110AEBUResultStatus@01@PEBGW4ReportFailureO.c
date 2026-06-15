/*
 * XREFs of ??$ReportFailure_Return@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x18002225C
 * Callers:
 *     ??$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180021FF4 (--$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 * Callees:
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEAUFailureInfo@2@@Z @ 0x1800185E0 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEA.c)
 *     __security_check_cookie @ 0x1800201B0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800212A8 (memset_0.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x18002681C (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     _alloca_probe @ 0x180048B40 (_alloca_probe.c)
 */

void __fastcall wil::details::ReportFailure_Return<2>(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int *a7,
        _WORD *a8)
{
  const struct wil::FailureInfo *v12; // rdx
  __int64 v13; // [rsp+48h] [rbp-1520h]
  __int64 v14; // [rsp+58h] [rbp-1510h]
  __int64 v15; // [rsp+68h] [rbp-1500h]
  _BYTE v16[160]; // [rsp+80h] [rbp-14E8h] BYREF
  _BYTE v17[1024]; // [rsp+120h] [rbp-1448h] BYREF
  _BYTE v18[4096]; // [rsp+520h] [rbp-1048h] BYREF

  memset_0(v16, 0, 0x98uLL);
  wil::details::LogFailure(a1, a2, a3, a4, a5, a6, 2, a7, a8, v13, (wil *)v18, v14, v17, v15, (unsigned __int64)v16);
  if ( (v16[4] & 1) != 0 )
    wil::details::WilFailFast((wil::details *)v16, v12);
}
