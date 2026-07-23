/*
 * XREFs of HalpRegisterTimerInterruptHandler @ 0x140560650
 * Callers:
 *     HalpSetSystemInformation @ 0x140A95A10 (HalpSetSystemInformation.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall HalpRegisterTimerInterruptHandler(__int64 a1)
{
  unsigned int v2; // ebx
  KIRQL v3; // dl

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&HalpPerfInterruptHandlerRegistrationLock);
  if ( qword_140E117D8 )
  {
    if ( qword_140E117D8 == KeGetCurrentThread()[1].CycleTime )
    {
      HalpTimerProfilingCallback = a1;
      if ( !a1 )
        qword_140E117D8 = 0LL;
    }
    else
    {
      v2 = -1073741823;
    }
  }
  else
  {
    HalpTimerProfilingCallback = a1;
    if ( a1 )
      qword_140E117D8 = KeGetCurrentThread()[1].CycleTime;
  }
  KeReleaseSpinLock(&HalpPerfInterruptHandlerRegistrationLock, v3);
  return v2;
}
