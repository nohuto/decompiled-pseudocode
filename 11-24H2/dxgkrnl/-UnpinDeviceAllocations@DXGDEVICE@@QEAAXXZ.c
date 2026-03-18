/*
 * XREFs of ?UnpinDeviceAllocations@DXGDEVICE@@QEAAXXZ @ 0x1402C8F80
 * Callers:
 *     ?DisablePinnedHardware@DXGDEVICE@@QEAAXXZ @ 0x1402C8ECC (-DisablePinnedHardware@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?DisablePinnedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1402E5640 (-DisablePinnedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 */

void __fastcall DXGDEVICE::UnpinDeviceAllocations(struct _KTHREAD **this)
{
  DXGPUSHLOCK *v1; // rsi
  struct DXGALLOCATION *i; // rbx

  v1 = (DXGPUSHLOCK *)(this + 26);
  if ( this != (struct _KTHREAD **)-208LL && this[27] == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1512;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1512LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGPUSHLOCK::AcquireExclusive(v1);
  for ( i = this[6]; i; i = (struct DXGALLOCATION *)*((_QWORD *)i + 8) )
    DXGDEVICE::DisablePinnedAllocation((DXGDEVICE *)this, i);
  *((_QWORD *)v1 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
}
