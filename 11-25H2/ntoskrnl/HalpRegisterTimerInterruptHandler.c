/*
 * XREFs of HalpRegisterTimerInterruptHandler @ 0x140560120
 * Callers:
 *     HalpSetSystemInformation @ 0x140A94780 (HalpSetSystemInformation.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 */

__int64 __fastcall HalpRegisterTimerInterruptHandler(__int64 a1)
{
  unsigned int v2; // ebx
  KIRQL v3; // dl

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&HalpPerfInterruptHandlerRegistrationLock);
  if ( qword_140E113F0 )
  {
    if ( qword_140E113F0 == KeGetCurrentThread()[1].CycleTime )
    {
      HalpTimerProfilingCallback = a1;
      if ( !a1 )
        qword_140E113F0 = 0LL;
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
      qword_140E113F0 = KeGetCurrentThread()[1].CycleTime;
  }
  KeReleaseSpinLock(&HalpPerfInterruptHandlerRegistrationLock, v3);
  return v2;
}
