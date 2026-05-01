/*
 * XREFs of ??$ReportFailure_Return@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x1800741D0
 * Callers:
 *     ??$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180073F40 (--$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 * Callees:
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEAUFailureInfo@2@@Z @ 0x18006D140 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEA.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x180076B9C (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1800A7C00 (_alloca_probe.c)
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
  __int64 v13; // [rsp+48h] [rbp-1530h]
  _BYTE v14[160]; // [rsp+80h] [rbp-14F8h] BYREF
  _BYTE v15[1024]; // [rsp+120h] [rbp-1458h] BYREF
  _BYTE v16[4096]; // [rsp+520h] [rbp-1058h] BYREF

  memset_0(v14, 0, 0x98uLL);
  LOBYTE(v13) = 0;
  wil::details::LogFailure(
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    2,
    a7,
    a8,
    v13,
    (wil *)v16,
    2048LL,
    v15,
    1024LL,
    (unsigned __int64)v14);
  if ( (v14[4] & 1) != 0 )
    wil::details::WilFailFast((wil::details *)v14, v12);
}
