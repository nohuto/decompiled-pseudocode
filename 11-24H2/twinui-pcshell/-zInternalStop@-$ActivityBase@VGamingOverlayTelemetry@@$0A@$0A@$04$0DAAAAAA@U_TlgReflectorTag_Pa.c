/*
 * XREFs of ?zInternalStop@?$ActivityBase@VGamingOverlayTelemetry@@$0A@$0A@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1803614E8
 * Callers:
 *     ?StopActivity@HotkeyEntryPointActivity@GamingPostureUXTelemetryProvider@@MEAAXXZ @ 0x18035BFE0 (-StopActivity@HotkeyEntryPointActivity@GamingPostureUXTelemetryProvider@@MEAAXXZ.c)
 *     ?StopActivity@LaunchForResultsAsyncActivity@GamingOverlayTelemetry@@MEAAXXZ @ 0x18035C220 (-StopActivity@LaunchForResultsAsyncActivity@GamingOverlayTelemetry@@MEAAXXZ.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?LockExclusive@?$ActivityBase@VGamingPostureUXTelemetryProvider@@$0A@$0A@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180331650 (-LockExclusive@-$ActivityBase@VGamingPostureUXTelemetryProvider@@$0A@$0A@$04$0DAAAAAA@U_TlgRefle.c)
 */

void __fastcall wil::ActivityBase<GamingOverlayTelemetry,0,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(
        __int64 a1)
{
  RTL_SRWLOCK *v2; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0LL;
  wil::ActivityBase<GamingPostureUXTelemetryProvider,0,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &v2);
  **(_DWORD **)(a1 + 272) = 2;
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v2);
}
