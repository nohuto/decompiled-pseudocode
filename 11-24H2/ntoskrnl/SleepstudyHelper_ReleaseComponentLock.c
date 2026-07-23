/*
 * XREFs of SleepstudyHelper_ReleaseComponentLock @ 0x1405E1BF0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall SleepstudyHelper_ReleaseComponentLock(KSPIN_LOCK *a1, unsigned __int8 a2)
{
  unsigned int v2; // ebx
  unsigned __int64 v3; // rdi

  v2 = 0;
  v3 = a2;
  if ( a1 )
  {
    if ( a1 == (KSPIN_LOCK *)&SleepstudyHelperUnsupportedHandle )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a2);
      __writecr8(v3);
    }
    else
    {
      KeReleaseSpinLock(a1, a2);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
