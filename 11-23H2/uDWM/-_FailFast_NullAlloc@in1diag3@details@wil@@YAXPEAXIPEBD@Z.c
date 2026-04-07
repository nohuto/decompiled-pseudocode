/*
 * XREFs of ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A3C84
 * Callers:
 *     ?DriverDetected@HolographicDriverDetectedWatcher@Mirage@Windows@@SA_NXZ @ 0x180025A28 (-DriverDetected@HolographicDriverDetectedWatcher@Mirage@Windows@@SA_NXZ.c)
 *     ?Create@CAcrylicSheet@@SAJPEAVCWindowData@@_NPEAPEAV1@@Z @ 0x1800A2990 (-Create@CAcrylicSheet@@SAJPEAVCWindowData@@_NPEAPEAV1@@Z.c)
 *     ?InitializeDisplayManager@CAnalogCompositorManager@@AEAAXXZ @ 0x1800A4E00 (-InitializeDisplayManager@CAnalogCompositorManager@@AEAAXXZ.c)
 * Callees:
 *     ??$ReportFailure_Hr@$02@details@wil@@YAXPEAXIPEBD110J@Z @ 0x180099094 (--$ReportFailure_Hr@$02@details@wil@@YAXPEAXIPEBD110J@Z.c)
 */

void __fastcall __noreturn wil::details::in1diag3::_FailFast_NullAlloc(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  int v4; // [rsp+20h] [rbp-28h]
  wil::details *v5; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  LODWORD(v5) = -2147024882;
  wil::details::ReportFailure_Hr<3>((__int64)this, (int)a2, a3, (__int64)a4, v4, retaddr, v5);
}
