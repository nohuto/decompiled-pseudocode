/*
 * XREFs of HalpRegisterProcessorTraceInterruptHandler @ 0x14055FFE0
 * Callers:
 *     HalpSetSystemInformation @ 0x140A94780 (HalpSetSystemInformation.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 */

__int64 __fastcall HalpRegisterProcessorTraceInterruptHandler(__int64 a1)
{
  unsigned int v2; // ebx
  KIRQL v3; // dl

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&HalpPerfInterruptHandlerRegistrationLock);
  if ( qword_140E113F8 )
  {
    if ( qword_140E113F8 == KeGetCurrentThread()[1].CycleTime )
    {
      HalpProcessorTraceInterruptHandler = a1;
      if ( !a1 )
        qword_140E113F8 = 0LL;
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
      qword_140E113F8 = KeGetCurrentThread()[1].CycleTime;
  }
  KeReleaseSpinLock(&HalpPerfInterruptHandlerRegistrationLock, v3);
  return v2;
}
