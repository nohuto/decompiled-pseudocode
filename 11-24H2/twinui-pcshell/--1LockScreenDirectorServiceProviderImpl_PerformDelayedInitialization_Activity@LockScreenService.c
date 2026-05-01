/*
 * XREFs of ??1LockScreenDirectorServiceProviderImpl_PerformDelayedInitialization_Activity@LockScreenServiceTelemetry@@QEAA@XZ @ 0x1802CC828
 * Callers:
 *     ?PerformDelayedInitialization@LockScreenDirectorServiceProviderImpl@@UEAAJXZ @ 0x180248EC0 (-PerformDelayedInitialization@LockScreenDirectorServiceProviderImpl@@UEAAJXZ.c)
 *     _LockScreenDirectorServiceProviderImpl::PerformDelayedInitialization_::_1_::dtor$0 @ 0x1806E730F (_LockScreenDirectorServiceProviderImpl--PerformDelayedInitialization_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800EA458 (-Destroy@-$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 */

void __fastcall LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_PerformDelayedInitialization_Activity::~LockScreenDirectorServiceProviderImpl_PerformDelayedInitialization_Activity(
        LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_PerformDelayedInitialization_Activity *this)
{
  *(_QWORD *)this = &LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_PerformDelayedInitialization_Activity::`vftable';
  wil::ActivityBase<LockScreenServiceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)this);
  wil::ActivityBase<LockScreenServiceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<LockScreenServiceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
