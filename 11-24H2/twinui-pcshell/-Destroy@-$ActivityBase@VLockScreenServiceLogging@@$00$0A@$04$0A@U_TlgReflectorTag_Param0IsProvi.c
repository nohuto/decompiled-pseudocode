/*
 * XREFs of ?Destroy@?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800EA458
 * Callers:
 *     ??1LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity@LockScreenServiceTelemetry@@QEAA@XZ @ 0x1800E94DC (--1LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity@LockScreenServiceTelemetry.c)
 *     ?EnsureChildServices@LockScreenDirectorServiceProviderImpl@@AEAAJPEAPEAUILockScreenDirector@@@Z @ 0x1800E9CE4 (-EnsureChildServices@LockScreenDirectorServiceProviderImpl@@AEAAJPEAPEAUILockScreenDirector@@@Z.c)
 *     ?GetLockScreenDirector@LockScreenDirectorServiceProviderImpl@@AEAAJPEAPEAUILockScreenDirector@@@Z @ 0x1800E9FC0 (-GetLockScreenDirector@LockScreenDirectorServiceProviderImpl@@AEAAJPEAPEAUILockScreenDirector@@@.c)
 *     ?StartDirectorThread@LockScreenDirectorServiceProviderImpl@@AEAAJXZ @ 0x1800EAAEC (-StartDirectorThread@LockScreenDirectorServiceProviderImpl@@AEAAJXZ.c)
 *     ??1LockScreenDirectorServiceProviderImpl_StartDirectorThread_Activity@LockScreenServiceTelemetry@@QEAA@XZ @ 0x180236534 (--1LockScreenDirectorServiceProviderImpl_StartDirectorThread_Activity@LockScreenServiceTelemetry.c)
 *     ??1LockScreenDirectorServiceProviderImpl_PerformDelayedInitialization_Activity@LockScreenServiceTelemetry@@QEAA@XZ @ 0x1802CC828 (--1LockScreenDirectorServiceProviderImpl_PerformDelayedInitialization_Activity@LockScreenService.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800B4480 (-LockExclusive@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 *     ?reset@?$shared_object@V?$ActivityData@VLockScreenServiceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1800EA4FC (-reset@-$shared_object@V-$ActivityData@VLockScreenServiceLogging@@U_TlgReflectorTag_Param0IsProv.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?ReportStopActivity@?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x1800EA7F4 (-ReportStopActivity@-$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ?SetStopResult@?$ActivityData@VHolographicPositionerProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x1801D4750 (-SetStopResult@-$ActivityData@VHolographicPositionerProvider@@U_TlgReflectorTag_Param0IsProvider.c)
 */

void __fastcall wil::ActivityBase<LockScreenServiceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(
        __int64 a1)
{
  _QWORD *v1; // rdi
  char v3; // si
  _DWORD *v4; // rcx
  __int64 v5; // rdx
  RTL_SRWLOCK *v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = (_QWORD *)(a1 + 280);
  v3 = 1;
  if ( !*(_QWORD *)(a1 + 280) )
    goto LABEL_2;
  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &v6);
  if ( !*v1 || *(_DWORD *)*v1 != 1 )
  {
    v3 = 0;
    wil::details::shared_object<wil::ActivityBase<LockScreenServiceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<LockScreenServiceLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v1);
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((CAutoSRWExclusiveLock *)&v6);
  if ( v3 )
  {
LABEL_2:
    v4 = *(_DWORD **)(a1 + 272);
    if ( *v4 == 1 )
    {
      LODWORD(v6) = v4[22];
      v5 = 2147942974LL;
      if ( (int)v6 < 0 )
        v5 = (unsigned int)v6;
      wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<HolographicPositionerProvider,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        v4,
        v5,
        &v6);
      wil::ActivityBase<LockScreenServiceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
        a1,
        (unsigned int)v6);
    }
  }
}
