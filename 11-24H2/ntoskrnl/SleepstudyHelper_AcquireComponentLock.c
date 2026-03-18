/*
 * XREFs of SleepstudyHelper_AcquireComponentLock @ 0x1405E4630
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline @ 0x1405E45D8 (Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall SleepstudyHelper_AcquireComponentLock(PKSPIN_LOCK SpinLock, unsigned __int8 *a2)
{
  unsigned int v2; // ebx
  unsigned __int8 CurrentIrql; // si

  v2 = 0;
  if ( SpinLock && a2 )
  {
    if ( (unsigned int)Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline()
      && SpinLock == (PKSPIN_LOCK)&SleepstudyHelperUnsupportedHandle )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
      *a2 = CurrentIrql;
    }
    else
    {
      *a2 = KeAcquireSpinLockRaiseToDpc(SpinLock);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
