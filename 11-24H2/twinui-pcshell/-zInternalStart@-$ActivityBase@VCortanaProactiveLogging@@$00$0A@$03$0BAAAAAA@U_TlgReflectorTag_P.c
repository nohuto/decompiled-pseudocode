/*
 * XREFs of ?zInternalStart@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180380FBC
 * Callers:
 *     ?StartActivity@CortanaExperienceManager_GetCortanaEntryPointAndArgs@CortanaProactiveTelemetry@@QEAAXXZ @ 0x18037D6D0 (-StartActivity@CortanaExperienceManager_GetCortanaEntryPointAndArgs@CortanaProactiveTelemetry@@Q.c)
 *     ?StartActivity@CortanaExperienceManager_OnViewPropertiesChanging@CortanaProactiveTelemetry@@QEAAXXZ @ 0x18037D7F4 (-StartActivity@CortanaExperienceManager_OnViewPropertiesChanging@CortanaProactiveTelemetry@@QEAA.c)
 *     ?StartActivity@CortanaExperienceManager_ShowWithStart@CortanaProactiveTelemetry@@QEAAXXZ @ 0x1803D38DC (-StartActivity@CortanaExperienceManager_ShowWithStart@CortanaProactiveTelemetry@@QEAAXXZ.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800B4480 (-LockExclusive@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?Provider@CortanaProactiveLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800F2B3C (-Provider@CortanaProactiveLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(
        __int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  RTL_SRWLOCK *v4; // [rsp+30h] [rbp+8h] BYREF

  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &v4);
  v2 = *(_QWORD *)(a1 + 272);
  if ( *(_DWORD *)CortanaProactiveLogging::Provider(v3) <= 4u )
    *(_OWORD *)(v2 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v2 + 8));
  *(_DWORD *)v2 = 1;
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v4);
}
