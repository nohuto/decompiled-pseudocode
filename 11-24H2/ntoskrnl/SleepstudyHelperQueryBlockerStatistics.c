/*
 * XREFs of SleepstudyHelperQueryBlockerStatistics @ 0x1405E1AD0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall SleepstudyHelperQueryBlockerStatistics(PKSPIN_LOCK SpinLock, char *a2, KSPIN_LOCK *a3)
{
  unsigned int v3; // ebx
  KIRQL v7; // dl
  char v8; // bp
  KSPIN_LOCK v9; // rsi

  v3 = 0;
  if ( SpinLock )
  {
    v7 = KeAcquireSpinLockRaiseToDpc(SpinLock);
    if ( (SpinLock[1] & 3) == 3 )
    {
      v8 = 1;
      v9 = MEMORY[0xFFFFF78000000008] - SpinLock[4];
    }
    else
    {
      v8 = 0;
      v9 = 0LL;
    }
    KeReleaseSpinLock(SpinLock, v7);
    if ( a2 )
      *a2 = v8;
    if ( a3 )
      *a3 = v9;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
