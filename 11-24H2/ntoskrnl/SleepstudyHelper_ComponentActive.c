/*
 * XREFs of SleepstudyHelper_ComponentActive @ 0x1404E5D90
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     SleepstudyHelper_ComponentActiveLocked @ 0x1404E5DF0 (SleepstudyHelper_ComponentActiveLocked.c)
 */

__int64 __fastcall SleepstudyHelper_ComponentActive(PKSPIN_LOCK SpinLock)
{
  unsigned int active; // edi
  KIRQL v3; // bl

  active = 0;
  if ( SpinLock )
  {
    if ( SpinLock != (PKSPIN_LOCK)&SleepstudyHelperUnsupportedHandle )
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
