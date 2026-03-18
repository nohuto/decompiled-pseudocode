/*
 * XREFs of HalpRegisterProfileSourceInterruptHandler @ 0x140562980
 * Callers:
 *     HalpSetSystemInformation @ 0x140A9A4A0 (HalpSetSystemInformation.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall HalpRegisterProfileSourceInterruptHandler(__int64 a1)
{
  unsigned int v2; // ebx
  KIRQL v3; // dl

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&HalpPerfInterruptHandlerRegistrationLock);
  if ( qword_140E11650 )
  {
    if ( qword_140E11650 == KeGetCurrentThread()[1].CycleTime )
    {
      HalpPerfInterruptHandler = a1;
      if ( !a1 )
        qword_140E11650 = 0LL;
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
      qword_140E11650 = KeGetCurrentThread()[1].CycleTime;
  }
  KeReleaseSpinLock(&HalpPerfInterruptHandlerRegistrationLock, v3);
  return v2;
}
