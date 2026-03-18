/*
 * XREFs of SleepstudyHelper_ComponentActive @ 0x1404EE600
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     SleepstudyHelper_ComponentActiveLocked @ 0x1404EE670 (SleepstudyHelper_ComponentActiveLocked.c)
 *     Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline @ 0x1405E45D8 (Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline.c)
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
