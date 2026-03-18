/*
 * XREFs of SleepstudyHelper_ResetComponentsStartTime @ 0x1405D87E0
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline @ 0x1405D8688 (Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall SleepstudyHelper_ResetComponentsStartTime(PKSPIN_LOCK SpinLock)
{
  unsigned int v1; // ebx
  KIRQL v3; // dl

  v1 = 0;
  if ( SpinLock )
  {
    if ( !(unsigned int)Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline()
      || SpinLock != (PKSPIN_LOCK)&SleepstudyHelperUnsupportedHandle )
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
