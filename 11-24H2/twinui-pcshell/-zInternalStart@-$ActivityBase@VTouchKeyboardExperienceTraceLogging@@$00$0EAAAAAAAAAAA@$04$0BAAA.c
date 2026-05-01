/*
 * XREFs of ?zInternalStart@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800E1030
 * Callers:
 *     ?StartActivity@OnInputAppRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXII@Z @ 0x1800E021C (-StartActivity@OnInputAppRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXII@Z.c)
 *     ?StartActivity@InputAppActivationRequested@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z @ 0x1800E0AA8 (-StartActivity@InputAppActivationRequested@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z.c)
 *     ?StartActivity@OnInputAppRequestedHideActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXII@Z @ 0x1800E0DF0 (-StartActivity@OnInputAppRequestedHideActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXII@Z.c)
 *     ?StartActivity@InputAppResumed@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x1800E0F8C (-StartActivity@InputAppResumed@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 *     ?StartActivity@InputAppActivated@TouchKeyboardExperienceTelemetryLogger@@QEAAXK@Z @ 0x1802947F4 (-StartActivity@InputAppActivated@TouchKeyboardExperienceTelemetryLogger@@QEAAXK@Z.c)
 *     ?StartActivity@InputAppActivation@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBGHI@Z @ 0x1802A25EC (-StartActivity@InputAppActivation@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBGHI@Z.c)
 *     ?StartActivity@InputAppTerminated@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x1802AD1F4 (-StartActivity@InputAppTerminated@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 *     ?StartActivity@OnInputAppRequestedResizeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXII@Z @ 0x180480E94 (-StartActivity@OnInputAppRequestedResizeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXII.c)
 *     ?StartActivity@OnShellRequestedHideActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x180480F64 (-StartActivity@OnShellRequestedHideActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 *     ?StartActivity@OnShellRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x180481008 (-StartActivity@OnShellRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 *     ?StartActivity@OnShellRequestedStateChangeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@IPEBG_N22@Z @ 0x1804810AC (-StartActivity@OnShellRequestedStateChangeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAX.c)
 *     ?StartActivity@FocusedElementViewRectCalculation@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x1804889BC (-StartActivity@FocusedElementViewRectCalculation@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 * Callees:
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18008317C (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?LockExclusive@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800B4480 (-LockExclusive@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 */

void __fastcall wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(
        __int64 a1)
{
  __int64 v2; // rbx
  const struct _tlgProvider_t *v3; // rax
  RTL_SRWLOCK *v4; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v2 = *(_QWORD *)(a1 + 272);
  v3 = TouchKeyboardExperienceTraceLogging::Provider();
  if ( *(_DWORD *)v3 > 5u
    && (*((_QWORD *)v3 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)v3 + 3) & 0x400000000000LL) == *((_QWORD *)v3 + 3) )
  {
    EventActivityIdControl(3u, (LPGUID)(v2 + 8));
  }
  else
  {
    *(_OWORD *)(v2 + 8) = 0LL;
  }
  v4 = SRWLock;
  *(_DWORD *)v2 = 1;
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
}
