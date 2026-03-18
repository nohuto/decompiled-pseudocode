/*
 * XREFs of SleepstudyHelper_ComponentActive @ 0x1404EB6A0
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     SleepstudyHelper_ComponentActiveLocked @ 0x1404EB710 (SleepstudyHelper_ComponentActiveLocked.c)
 *     Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline @ 0x1405D8688 (Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall SleepstudyHelper_ComponentActive(PKSPIN_LOCK SpinLock)
{
  unsigned int active; // edi
  KIRQL v3; // bl

  active = 0;
  if ( SpinLock )
  {
    if ( !(unsigned int)Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline()
      || SpinLock != (PKSPIN_LOCK)&SleepstudyHelperUnsupportedHandle )
    {
      v3 = KeAcquireSpinLockRaiseToDpc(SpinLock);
      active = SleepstudyHelper_ComponentActiveLocked(SpinLock);
      KeReleaseSpinLock(SpinLock, v3);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return active;
}
