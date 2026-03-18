/*
 * XREFs of HalpRegisterProcessorTraceInterruptHandler @ 0x1405628E0
 * Callers:
 *     HalpSetSystemInformation @ 0x140A9A4A0 (HalpSetSystemInformation.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall HalpRegisterProcessorTraceInterruptHandler(__int64 a1)
{
  unsigned int v2; // ebx
  KIRQL v3; // dl

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&HalpPerfInterruptHandlerRegistrationLock);
  if ( qword_140E11648 )
  {
    if ( qword_140E11648 == KeGetCurrentThread()[1].CycleTime )
    {
      HalpProcessorTraceInterruptHandler = a1;
      if ( !a1 )
        qword_140E11648 = 0LL;
    }
    else
    {
      v2 = -1073741823;
    }
  }
  else
  {
    HalpProcessorTraceInterruptHandler = a1;
    if ( a1 )
      qword_140E11648 = KeGetCurrentThread()[1].CycleTime;
  }
  KeReleaseSpinLock(&HalpPerfInterruptHandlerRegistrationLock, v3);
  return v2;
}
