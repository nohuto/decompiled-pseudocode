/*
 * XREFs of SleepstudyHelper_ReleaseComponentLock @ 0x1405D8760
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline @ 0x1405D8688 (Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall SleepstudyHelper_ReleaseComponentLock(PKSPIN_LOCK SpinLock, unsigned __int8 a2)
{
  unsigned int v2; // ebx
  unsigned __int64 v3; // rdi

  v2 = 0;
  v3 = a2;
  if ( SpinLock )
  {
    if ( (unsigned int)Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline()
      && SpinLock == (PKSPIN_LOCK)&SleepstudyHelperUnsupportedHandle )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v3);
      __writecr8(v3);
    }
    else
    {
      KeReleaseSpinLock(SpinLock, v3);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
