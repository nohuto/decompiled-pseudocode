/*
 * XREFs of StorSetIoGatewayBusy @ 0x1400013B4
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x140001040 (RaidAdapterDeferredRoutine.c)
 * Callees:
 *     StorSetIoGatewayNotBusy @ 0x1400516EC (StorSetIoGatewayNotBusy.c)
 *     StorSetAllIoGatewayBusy @ 0x1400A6F30 (StorSetAllIoGatewayBusy.c)
 */

void __fastcall StorSetIoGatewayBusy(_DWORD *SpinLock, __int64 a2, __int64 a3)
{
  KSPIN_LOCK v4; // rax
  bool v5; // zf
  unsigned int v6; // r8d
  int v7; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( SpinLock )
  {
    v4 = *((_QWORD *)SpinLock + 6);
    memset(&LockHandle, 0, sizeof(LockHandle));
    if ( *(_DWORD *)(v4 + 968) > 1u )
    {
      StorSetAllIoGatewayBusy(SpinLock, a2, a3);
      return;
    }
    if ( !SpinLock[10] )
    {
      if ( FeatureFixKcsanRacyAccessV2 )
      {
        if ( !SpinLock[48] )
          return;
        if ( (unsigned int)a2 <= SpinLock[48] )
          SpinLock[8] = SpinLock[48] - a2;
        else
          SpinLock[8] = 0;
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)SpinLock, &LockHandle);
        SpinLock[10] = 1850304845;
        v5 = SpinLock[48] == 0;
      }
      else
      {
        v6 = SpinLock[48];
        if ( !v6 )
          return;
        v7 = 0;
        if ( (unsigned int)a2 <= v6 )
          v7 = v6 - a2;
        SpinLock[8] = v7;
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)SpinLock, &LockHandle);
        v5 = SpinLock[48] == 0;
        SpinLock[10] = 1850304845;
      }
      if ( v5 )
      {
        if ( SpinLock[10] )
        {
          ++GatewayBusyStateRaceConditionCount;
          StorSetIoGatewayNotBusy(SpinLock, 0LL);
        }
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    }
  }
}
