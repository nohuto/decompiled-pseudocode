/*
 * XREFs of HalpRegisterTimerInterruptHandler @ 0x140562A20
 * Callers:
 *     HalpSetSystemInformation @ 0x140A9A4A0 (HalpSetSystemInformation.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall HalpRegisterTimerInterruptHandler(__int64 a1)
{
  unsigned int v2; // ebx
  KIRQL v3; // dl

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&HalpPerfInterruptHandlerRegistrationLock);
  if ( qword_140E11640 )
  {
    if ( qword_140E11640 == KeGetCurrentThread()[1].CycleTime )
    {
      HalpTimerProfilingCallback = a1;
      if ( !a1 )
        qword_140E11640 = 0LL;
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
      qword_140E11640 = KeGetCurrentThread()[1].CycleTime;
  }
  KeReleaseSpinLock(&HalpPerfInterruptHandlerRegistrationLock, v3);
  return v2;
}
