/*
 * XREFs of SleepstudyHelper_ResetComponentsStartTime @ 0x1405E1C50
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall SleepstudyHelper_ResetComponentsStartTime(PKSPIN_LOCK SpinLock)
{
  unsigned int v1; // edi
  KIRQL v3; // dl

  v1 = 0;
  if ( SpinLock )
  {
    if ( SpinLock != (PKSPIN_LOCK)&SleepstudyHelperUnsupportedHandle )
    {
      v3 = KeAcquireSpinLockRaiseToDpc(SpinLock);
      if ( (SpinLock[1] & 3) == 3 )
        SpinLock[4] = MEMORY[0xFFFFF78000000008];
      KeReleaseSpinLock(SpinLock, v3);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
