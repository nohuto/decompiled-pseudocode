/*
 * XREFs of ??1UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate@SearchAppExperienceManagerTelemetry@@QEAA@XZ @ 0x1803B5CC8
 * Callers:
 *     _lambda_d3a26e949cca22f756fde8979863d6a4_::__lambda_d3a26e949cca22f756fde8979863d6a4_ @ 0x1803B52F4 (_lambda_d3a26e949cca22f756fde8979863d6a4_--__lambda_d3a26e949cca22f756fde8979863d6a4_.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d3a26e949cca22f756fde8979863d6a4___::_CTaskWrapper__lambda_d3a26e949cca22f756fde8979863d6a4___ @ 0x1803B5484 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d3a26e949cca22f756fde8979863d6a4___--_CTask.c)
 *     _lambda_d3a26e949cca22f756fde8979863d6a4_::operator() @ 0x1803B6938 (_lambda_d3a26e949cca22f756fde8979863d6a4_--operator().c)
 *     ?TrySetWebSearchEnabledStateOnUpdate@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1803C0FF8 (-TrySetWebSearchEnabledStateOnUpdate@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     __lambda_d3a26e949cca22f756fde8979863d6a4_::operator()_::_1_::dtor$0 @ 0x1806E6378 (__lambda_d3a26e949cca22f756fde8979863d6a4_--operator()_--_1_--dtor$0.c)
 *     _UndockedSearchAppExperienceManager::TrySetWebSearchEnabledStateOnUpdate_::_1_::dtor$0 @ 0x1806E6BE4 (_UndockedSearchAppExperienceManager--TrySetWebSearchEnabledStateOnUpdate_--_1_--dtor$0.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?LockExclusive@?$ActivityBase@VGamingPostureUXTelemetryProvider@@$0A@$0A@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180331650 (-LockExclusive@-$ActivityBase@VGamingPostureUXTelemetryProvider@@$0A@$0A@$04$0DAAAAAA@U_TlgRefle.c)
 *     ?SetUnhandledException@?$ActivityData@VSearchAppLauncherLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSearchAppLauncherLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAJXZ @ 0x1803BFB44 (-SetUnhandledException@-$ActivityData@VSearchAppLauncherLogging@@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?reset@?$shared_object@V?$ActivityData@VSearchAppLauncherLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSearchAppLauncherLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1803C41E8 (-reset@-$shared_object@V-$ActivityData@VSearchAppLauncherLogging@@U_TlgReflectorTag_ea_1803C41E8.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall SearchAppExperienceManagerTelemetry::UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate::~UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate(
        SearchAppExperienceManagerTelemetry::UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate *this)
{
  _QWORD *v1; // rdi
  bool v3; // zf
  char v4; // si
  RTL_SRWLOCK *v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = (_QWORD *)((char *)this + 280);
  v3 = *((_QWORD *)this + 35) == 0LL;
  *(_QWORD *)this = &SearchAppExperienceManagerTelemetry::UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate::`vftable';
  v4 = 1;
  if ( v3 )
    goto LABEL_6;
  wil::ActivityBase<GamingPostureUXTelemetryProvider,0,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &v5);
  if ( !*v1 || *(_DWORD *)*v1 != 1 )
  {
    v4 = 0;
    wil::details::shared_object<wil::ActivityBase<SearchAppLauncherLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SearchAppLauncherLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v1);
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v5);
  if ( v4 )
  {
LABEL_6:
    if ( **((_DWORD **)this + 34) == 1 )
    {
      wil::ActivityBase<SearchAppLauncherLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SearchAppLauncherLogging,_TlgReflectorTag_Param0IsProviderType>::SetUnhandledException();
      (*(void (__fastcall **)(SearchAppExperienceManagerTelemetry::UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate *))(*(_QWORD *)this + 8LL))(this);
    }
  }
  wil::ActivityBase<SearchAppLauncherLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SearchAppLauncherLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
