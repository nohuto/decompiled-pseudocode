/*
 * XREFs of ?IsEmpty@InputThreadState@CInputThreadBase@@QEBA_NXZ @ 0x1400C2150
 * Callers:
 *     ?IsUMObserverRegistered@CBaseProcessor@@QEBA_NXZ @ 0x1400C1FE4 (-IsUMObserverRegistered@CBaseProcessor@@QEBA_NXZ.c)
 *     ?IsInputThreadDesktopActive@CMasterInputThread@@QEBA_NXZ @ 0x1400C20B4 (-IsInputThreadDesktopActive@CMasterInputThread@@QEBA_NXZ.c)
 *     ?DeclareThreadAsInput@CInputThreadBase@@QEAA_NXZ @ 0x14019C7D0 (-DeclareThreadAsInput@CInputThreadBase@@QEAA_NXZ.c)
 *     ?ActivateInputProcessing@CInputThreadBase@@QEAA_NXZ @ 0x14019D19C (-ActivateInputProcessing@CInputThreadBase@@QEAA_NXZ.c)
 *     ?DeactivateInputProcessing@CInputThreadBase@@UEAA_NXZ @ 0x14021FB40 (-DeactivateInputProcessing@CInputThreadBase@@UEAA_NXZ.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

bool __fastcall CInputThreadBase::InputThreadState::IsEmpty(CInputThreadBase::InputThreadState *this)
{
  if ( ((*((_QWORD *)this + 1) == 0LL) ^ (*((_QWORD *)this + 2) == 0LL) ^ (*((_DWORD *)this + 6) == 0)) != (*(_DWORD *)this == 0) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 213LL);
  return *((_QWORD *)this + 1) == 0LL;
}
