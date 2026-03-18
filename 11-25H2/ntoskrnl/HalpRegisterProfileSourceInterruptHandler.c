/*
 * XREFs of HalpRegisterProfileSourceInterruptHandler @ 0x140560080
 * Callers:
 *     HalpSetSystemInformation @ 0x140A94780 (HalpSetSystemInformation.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 */

__int64 __fastcall HalpRegisterProfileSourceInterruptHandler(__int64 a1)
{
  unsigned int v2; // ebx
  KIRQL v3; // dl

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&HalpPerfInterruptHandlerRegistrationLock);
  if ( qword_140E11400 )
  {
    if ( qword_140E11400 == KeGetCurrentThread()[1].CycleTime )
    {
      HalpPerfInterruptHandler = a1;
      if ( !a1 )
        qword_140E11400 = 0LL;
    }
    else
    {
      v2 = -1073741823;
    }
  }
  else
  {
    HalpPerfInterruptHandler = a1;
    if ( a1 )
      qword_140E11400 = KeGetCurrentThread()[1].CycleTime;
  }
  KeReleaseSpinLock(&HalpPerfInterruptHandlerRegistrationLock, v3);
  return v2;
}
