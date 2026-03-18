/*
 * XREFs of ?DeactivateInputProcessing@CInputThreadBase@@UEAA_NXZ @ 0x1C00848F0
 * Callers:
 *     ?DeactivateInputProcessing@CKernelSensorThread@@UEAA_NXZ @ 0x1C0083C80 (-DeactivateInputProcessing@CKernelSensorThread@@UEAA_NXZ.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0055140 (RIMLockExclusive.c)
 *     ?_CalledOnInputThread@CInputThreadBase@@IEBA_NXZ @ 0x1C0057F3C (-_CalledOnInputThread@CInputThreadBase@@IEBA_NXZ.c)
 *     ?IsEmpty@InputThreadState@CInputThreadBase@@QEBA_NXZ @ 0x1C0084AD0 (-IsEmpty@InputThreadState@CInputThreadBase@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall CInputThreadBase::DeactivateInputProcessing(CInputThreadBase *this)
{
  char v2; // di

  RIMLockExclusive((__int64)this + 8);
  if ( !CInputThreadBase::_CalledOnInputThread(this) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 154LL);
  v2 = 1;
  if ( (unsigned int)(*((_DWORD *)this + 6) - 1) > 1 )
  {
    v2 = 0;
  }
  else
  {
    if ( CInputThreadBase::InputThreadState::IsEmpty((CInputThreadBase *)((char *)this + 24)) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 160LL);
    *((_DWORD *)this + 6) = 3;
  }
  *((_QWORD *)this + 2) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 8, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
