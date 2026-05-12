/*
 * XREFs of RaUnitLockForwardIo @ 0x1400301C0
 * Callers:
 *     RaidPauseAdapterQueue @ 0x1400078E0 (RaidPauseAdapterQueue.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x140007CC8 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     StorPortAdapterIdleCondition @ 0x14001C590 (StorPortAdapterIdleCondition.c)
 *     RaidFreezeUnitQueue @ 0x14009D878 (RaidFreezeUnitQueue.c)
 *     RaidUnitTestDeviceQueue @ 0x1400A0F68 (RaidUnitTestDeviceQueue.c)
 *     RaUnitStopDeviceIrp @ 0x140187608 (RaUnitStopDeviceIrp.c)
 *     StorProcessNVMeNewUnit @ 0x14018E2E4 (StorProcessNVMeNewUnit.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x14001DD30 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x14001DEE0 (RaCallMiniportUnitControl.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

void __fastcall RaUnitLockForwardIo(__int64 a1, int a2)
{
  __int64 v2; // rbx
  KIRQL v5; // bp
  int v6; // esi
  int v7; // esi
  int v8; // esi
  __int64 v9; // rcx
  int v10; // eax
  _DWORD *v11; // rcx

  v2 = 0LL;
  if ( *(_QWORD *)(a1 + 32) && RaidIsUnitControlSupported(a1, 31) )
  {
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)(a1 + 32) + 24LL));
    if ( a2 )
    {
      v6 = a2 - 1;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( v8 )
          {
            if ( v8 == 1 )
              ++*(_DWORD *)(*(_QWORD *)(a1 + 32) + 84LL);
          }
          else
          {
            *(_DWORD *)(*(_QWORD *)(a1 + 32) + 80LL) |= 0x80u;
          }
        }
        else
        {
          *(_DWORD *)(*(_QWORD *)(a1 + 32) + 80LL) |= 0x40u;
        }
      }
      else
      {
        *(_DWORD *)(*(_QWORD *)(a1 + 32) + 80LL) |= 0x20u;
      }
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 32) + 80LL) |= 0x100u;
      v9 = *(_QWORD *)(a1 + 32);
      v10 = *(_DWORD *)(v9 + 80);
      if ( (v10 & 1) != 0 && (v10 & 0x200) == 0 )
      {
        *(_DWORD *)(v9 + 80) = v10 | 0x200;
        KeSetCoalescableTimer(
          (PKTIMER)(*(_QWORD *)(a1 + 32) + 88LL),
          (LARGE_INTEGER)-20000000LL,
          0,
          0x12Cu,
          (PKDPC)(*(_QWORD *)(a1 + 32) + 152LL));
      }
    }
    v11 = *(_DWORD **)(a1 + 24);
    if ( *v11 == 1094997074 )
    {
      v2 = (__int64)(v11 + 94);
    }
    else if ( *v11 == 1314275652 )
    {
      v2 = (__int64)(v11 + 42);
    }
    RaCallMiniportUnitControl(v2);
    KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 32) + 24LL), v5);
  }
}
