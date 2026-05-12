/*
 * XREFs of RaUnitUnlockForwardIo @ 0x14002B180
 * Callers:
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x140007CC8 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaidBusEnumeratorGetUnit @ 0x140019940 (RaidBusEnumeratorGetUnit.c)
 *     RaidDeleteDeviceQueueEntry @ 0x140026BC8 (RaidDeleteDeviceQueueEntry.c)
 *     RaidRemovePendingDeviceQueue @ 0x140053084 (RaidRemovePendingDeviceQueue.c)
 *     RaidLunQueueCheckWaitTimeout @ 0x14006D2DC (RaidLunQueueCheckWaitTimeout.c)
 *     RaUnitFlushQueueSrb @ 0x140093090 (RaUnitFlushQueueSrb.c)
 *     RaUnitReleaseQueueSrb @ 0x140095AA4 (RaUnitReleaseQueueSrb.c)
 *     RaidResumeAndRestartUnitQueue @ 0x14009DA34 (RaidResumeAndRestartUnitQueue.c)
 *     RaidUnitTestDeviceQueue @ 0x1400A0F68 (RaidUnitTestDeviceQueue.c)
 *     RaUnitStartDeviceIrp @ 0x1401BC368 (RaUnitStartDeviceIrp.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x14001DD30 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x14001DEE0 (RaCallMiniportUnitControl.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

void __fastcall RaUnitUnlockForwardIo(__int64 a1, int a2)
{
  KIRQL v4; // si
  int v5; // edi
  int v6; // edi
  int v7; // edi
  __int64 v8; // rcx
  int v9; // eax
  _DWORD *v10; // rcx
  __int64 v11; // rcx

  if ( *(_QWORD *)(a1 + 32) && RaidIsUnitControlSupported(a1, 31) )
  {
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)(a1 + 32) + 24LL));
    if ( a2 )
    {
      v5 = a2 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          v7 = v6 - 1;
          if ( v7 )
          {
            if ( v7 == 1 )
              --*(_DWORD *)(*(_QWORD *)(a1 + 32) + 84LL);
          }
          else
          {
            *(_DWORD *)(*(_QWORD *)(a1 + 32) + 80LL) &= ~0x80u;
          }
        }
        else
        {
          *(_DWORD *)(*(_QWORD *)(a1 + 32) + 80LL) &= ~0x40u;
        }
      }
      else
      {
        *(_DWORD *)(*(_QWORD *)(a1 + 32) + 80LL) &= ~0x20u;
      }
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 32) + 80LL) &= ~0x100u;
    }
    v8 = *(_QWORD *)(a1 + 32);
    v9 = *(_DWORD *)(v8 + 80);
    if ( (v9 & 0x20) == 0 && (v9 & 0x40) == 0 && (v9 & 0x80u) == 0 && (v9 & 0x100) == 0 && *(int *)(v8 + 84) <= 0 )
    {
      v10 = *(_DWORD **)(a1 + 24);
      if ( *v10 == 1094997074 )
      {
        v11 = (__int64)(v10 + 94);
      }
      else if ( *v10 == 1314275652 )
      {
        v11 = (__int64)(v10 + 42);
      }
      else
      {
        v11 = 0LL;
      }
      RaCallMiniportUnitControl(v11);
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 32) + 24LL), v4);
  }
}
