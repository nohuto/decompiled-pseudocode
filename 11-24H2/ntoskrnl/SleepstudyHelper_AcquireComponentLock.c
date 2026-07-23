/*
 * XREFs of SleepstudyHelper_AcquireComponentLock @ 0x1405E1B70
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall SleepstudyHelper_AcquireComponentLock(KSPIN_LOCK *a1, unsigned __int8 *a2)
{
  unsigned int v2; // ebx
  unsigned __int8 CurrentIrql; // si

  v2 = 0;
  if ( a1 && a2 )
  {
    if ( a1 == (KSPIN_LOCK *)&SleepstudyHelperUnsupportedHandle )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
      *a2 = CurrentIrql;
    }
    else
    {
      *a2 = KeAcquireSpinLockRaiseToDpc(a1);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
