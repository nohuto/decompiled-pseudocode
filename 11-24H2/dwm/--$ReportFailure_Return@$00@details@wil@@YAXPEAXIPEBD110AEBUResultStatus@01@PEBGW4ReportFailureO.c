/*
 * XREFs of ??$ReportFailure_Return@$00@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x14000659C
 * Callers:
 *     ??$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x14000626C (--$ReportFailure_Base@$00$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 * Callees:
 *     __security_check_cookie @ 0x1400049A0 (__security_check_cookie.c)
 *     memset_0 @ 0x140005858 (memset_0.c)
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEAUFailureInfo@2@@Z @ 0x140008988 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEA.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x14000B28C (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     _alloca_probe @ 0x14000F170 (_alloca_probe.c)
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
  const struct wil::FailureInfo *v11; // rdx
  _BYTE v12[160]; // [rsp+80h] [rbp-14C8h] BYREF

  memset_0(v12, 0, 0x98uLL);
  result = wil::details::LogFailure(a1, a2, a3, 0LL, 0LL, a6, 1, a7, 0LL);
  if ( (v12[4] & 1) != 0 )
    wil::details::WilFailFast((wil::details *)v12, v11);
  return result;
}
