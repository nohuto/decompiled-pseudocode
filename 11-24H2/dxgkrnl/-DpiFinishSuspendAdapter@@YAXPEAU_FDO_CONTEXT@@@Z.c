/*
 * XREFs of ?DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x14002B120
 * Callers:
 *     DpiPowerArbiterThread @ 0x1402C9300 (DpiPowerArbiterThread.c)
 * Callees:
 *     DpiCancelSuspendAdapterTimer @ 0x14002B244 (DpiCancelSuspendAdapterTimer.c)
 *     DpiRequestDevicePowerIrp @ 0x14002B338 (DpiRequestDevicePowerIrp.c)
 *     DpiSetDevicePowerTransitionState @ 0x14002B618 (DpiSetDevicePowerTransitionState.c)
 */

void __fastcall DpiFinishSuspendAdapter(struct _FDO_CONTEXT *a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 528, &LockHandle);
  if ( *((_DWORD *)a1 + 1072) == 2 )
  {
    WdLogSingleEntry3(9LL, a1, 0LL, 0LL);
    WdLogGlobalForLineNumber = 1929;
    *((_DWORD *)a1 + 1030) = 1;
    KeResetEvent((PRKEVENT)((char *)a1 + 4240));
    if ( *((_DWORD *)a1 + 1073) )
    {
      WdLogSingleEntry3(9LL, a1, 0LL, 0LL);
      WdLogGlobalForLineNumber = 1950;
      DpiRequestDevicePowerIrp(a1, 4LL);
      DpiSetDevicePowerTransitionState(a1, 4LL);
      DpiCancelSuspendAdapterTimer(a1);
    }
    else
    {
      DpiSetDevicePowerTransitionState(a1, 3LL);
    }
  }
  else
  {
    WdLogSingleEntry3(9LL, a1, 1LL, 0LL);
    WdLogGlobalForLineNumber = 1924;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
