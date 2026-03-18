/*
 * XREFs of DxgkReleaseAdapterFdoReference @ 0x1401A0808
 * Callers:
 *     DpiFdoResetFdo @ 0x1402453A8 (DpiFdoResetFdo.c)
 *     DpiFdoStartAdapter @ 0x140245688 (DpiFdoStartAdapter.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1400391A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkReleaseAdapterFdoReference(DXGADAPTER *this)
{
  if ( this )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGADAPTER *)((char *)this + 104));
    *((_QWORD *)this + 27) = 0LL;
    *((_QWORD *)this + 29) = 0LL;
    *((_QWORD *)this + 14) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 104, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER::ReleaseReferenceNoTracking(this);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 621;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"No pAdapter specified, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
