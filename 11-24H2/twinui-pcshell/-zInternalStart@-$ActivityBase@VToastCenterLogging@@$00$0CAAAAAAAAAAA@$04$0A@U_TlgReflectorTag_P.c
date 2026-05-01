/*
 * XREFs of ?zInternalStart@?$ActivityBase@VToastCenterLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1803873A0
 * Callers:
 *     ?StartActivity@EM_HideInHolographic@ToastCenterTelemetry@@QEAAXXZ @ 0x1803857E0 (-StartActivity@EM_HideInHolographic@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@EM_RegisterHolographicExecutor@ToastCenterTelemetry@@QEAAXXZ @ 0x180385880 (-StartActivity@EM_RegisterHolographicExecutor@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@EM_ShowInHolographic@ToastCenterTelemetry@@QEAAXXZ @ 0x180385920 (-StartActivity@EM_ShowInHolographic@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@EM_UnregisterHolographicExecutor@ToastCenterTelemetry@@QEAAXXZ @ 0x1803859C0 (-StartActivity@EM_UnregisterHolographicExecutor@ToastCenterTelemetry@@QEAAXXZ.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800B4480 (-LockExclusive@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 *     ?Provider@ToastCenterLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800B5C88 (-Provider@ToastCenterLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x1800CBCCC (_tlgKeywordOn.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 */

void __fastcall wil::ActivityBase<ToastCenterLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(
        __int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  const struct _tlgProvider_t *v4; // rax
  RTL_SRWLOCK *v5; // [rsp+30h] [rbp+8h] BYREF

  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &v5);
  v2 = *(_QWORD *)(a1 + 272);
  v4 = ToastCenterLogging::Provider(v3);
  if ( *(_DWORD *)v4 > 5u && tlgKeywordOn((__int64)v4, 0x200000000000LL) )
    EventActivityIdControl(3u, (LPGUID)(v2 + 8));
  else
    *(_OWORD *)(v2 + 8) = 0LL;
  *(_DWORD *)v2 = 1;
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v5);
}
