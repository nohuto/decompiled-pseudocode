/*
 * XREFs of RiDisableDeviceQueueFastPath @ 0x140026CB0
 * Callers:
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x140007CC8 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaidStallDeviceQueue @ 0x1400131FC (RaidStallDeviceQueue.c)
 *     RaidCreateUnit @ 0x140026194 (RaidCreateUnit.c)
 *     RaidLunQueueWaitForQuiescence @ 0x140026A9C (RaidLunQueueWaitForQuiescence.c)
 *     RaidDeleteDeviceQueueEntry @ 0x140026BC8 (RaidDeleteDeviceQueueEntry.c)
 *     RaidRemovePendingDeviceQueue @ 0x140053084 (RaidRemovePendingDeviceQueue.c)
 *     RaidAdapterDeviceBusy @ 0x140059C04 (RaidAdapterDeviceBusy.c)
 *     RaidLunQueueCheckWaitTimeout @ 0x14006D2DC (RaidLunQueueCheckWaitTimeout.c)
 *     RaidFreezeUnitQueue @ 0x14009D878 (RaidFreezeUnitQueue.c)
 *     RaidUnitTestDeviceQueue @ 0x1400A0F68 (RaidUnitTestDeviceQueue.c)
 * Callees:
 *     <none>
 */

void __fastcall RiDisableDeviceQueueFastPath(struct _EX_RUNDOWN_REF *a1, char a2)
{
  signed __int64 Count; // rbx
  bool v4; // zf
  signed __int64 v5; // rax
  signed __int64 v6; // rax

  Count = a1[11].Count;
  if ( a2 )
  {
    if ( (Count & 1) == 0 )
    {
      ExWaitForRundownProtectionRelease(a1 + 10);
      ExRundownCompleted(a1 + 10);
      do
      {
        v5 = _InterlockedCompareExchange64((volatile signed __int64 *)&a1[11], Count | 1, Count);
        v4 = Count == v5;
        Count = v5;
      }
      while ( !v4 && (v5 & 1) == 0 );
    }
  }
  else if ( (Count & 3) == 0 )
  {
    do
    {
      v6 = _InterlockedCompareExchange64((volatile signed __int64 *)&a1[11], Count | 2, Count);
      v4 = Count == v6;
      Count = v6;
    }
    while ( !v4 && (v6 & 3) == 0 );
  }
}
