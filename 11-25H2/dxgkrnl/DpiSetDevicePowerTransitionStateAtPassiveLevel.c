/*
 * XREFs of DpiSetDevicePowerTransitionStateAtPassiveLevel @ 0x14002A258
 * Callers:
 *     DpiLdaPowerUpAdapterInChain @ 0x14018517C (DpiLdaPowerUpAdapterInChain.c)
 *     DpiPowerArbiterThread @ 0x1402BBB00 (DpiPowerArbiterThread.c)
 *     DpiFdoHandleDevicePower @ 0x1403C4AF0 (DpiFdoHandleDevicePower.c)
 * Callees:
 *     DxgkReportDevicePoweredOn @ 0x14002AF94 (DxgkReportDevicePoweredOn.c)
 */

void __fastcall DpiSetDevicePowerTransitionStateAtPassiveLevel(__int64 a1, int a2, char a3)
{
  __int64 v3; // rbp
  _DWORD *v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 4224), &LockHandle);
  v6 = (_DWORD *)(a1 + 4288);
  if ( (_DWORD)v3 != 5 || *v6 == 4 )
  {
    v7 = v3;
    WdLogSingleEntry3(9LL, a1, v3, 0LL);
    WdLogGlobalForLineNumber = 4274;
    *v6 = v3;
  }
  else
  {
    v7 = v3;
  }
  if ( a3 && !*(_DWORD *)(a1 + 4292) )
  {
    WdLogSingleEntry3(9LL, a1, v7, 1LL);
    v8 = *(_QWORD *)(a1 + 4032);
    WdLogGlobalForLineNumber = 4285;
    DxgkReportDevicePoweredOn(v8);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
