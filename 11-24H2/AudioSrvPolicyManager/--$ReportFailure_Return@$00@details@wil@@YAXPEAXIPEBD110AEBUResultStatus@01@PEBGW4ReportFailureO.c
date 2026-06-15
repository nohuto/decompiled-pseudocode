/*
 * XREFs of ??$ReportFailure_Return@$00@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x18001DCA4
 * Callers:
 *     ??$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x18001BBEC (--$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 * Callees:
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEAUFailureInfo@2@@Z @ 0x1800185E0 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEA.c)
 *     __security_check_cookie @ 0x1800201B0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800212A8 (memset_0.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x18002681C (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     _alloca_probe @ 0x180048B40 (_alloca_probe.c)
 */

void __fastcall wil::details::ReportFailure_Return<1>(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        unsigned int *a7,
        _WORD *a8)
{
  const struct wil::FailureInfo *v11; // rdx
  __int64 v12; // [rsp+48h] [rbp-1500h]
  __int64 v13; // [rsp+58h] [rbp-14F0h]
  __int64 v14; // [rsp+68h] [rbp-14E0h]
  _BYTE v15[160]; // [rsp+80h] [rbp-14C8h] BYREF
  _BYTE v16[1024]; // [rsp+120h] [rbp-1428h] BYREF
  _BYTE v17[4096]; // [rsp+520h] [rbp-1028h] BYREF

  memset_0(v15, 0, 0x98uLL);
  wil::details::LogFailure(a1, a2, a3, 0LL, 0LL, a6, 1, a7, a8, v12, (wil *)v17, v13, v16, v14, (unsigned __int64)v15);
  if ( (v15[4] & 1) != 0 )
    wil::details::WilFailFast((wil::details *)v15, v11);
}
