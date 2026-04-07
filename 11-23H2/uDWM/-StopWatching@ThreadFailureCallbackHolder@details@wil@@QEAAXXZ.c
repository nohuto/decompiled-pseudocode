/*
 * XREFs of ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002E2FC
 * Callers:
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_NPEAPEAV1@@Z @ 0x18000F370 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_NPEAPEAV1@@Z.c)
 *     ??1?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180010BD4 (--1-$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ?StopActivity@CloneWindow@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x180010E70 (-StopActivity@CloneWindow@WindowFrameLoggingTelemetry@@MEAAXXZ.c)
 *     ?IgnoreCurrentThread@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180011714 (-IgnoreCurrentThread@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflector.c)
 *     ??1?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800117F4 (--1-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Cancel@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18002FC0C (-Cancel@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@.c)
 *     ??1?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800CF8A4 (--1-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??1?$test_watcher@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@tip@@QEAA@XZ @ 0x1800F472C (--1-$test_watcher@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@tip.c)
 *     ?PreTransition@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXW4ShellTransition@456@AEBUTransitionState@456@@Z @ 0x1800F5730 (-PreTransition@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm.c)
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800A9968 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

void __fastcall wil::details::ThreadFailureCallbackHolder::StopWatching(
        wil::details::ThreadFailureCallbackHolder *this)
{
  void *v2; // rdx
  unsigned int v3; // r8d
  wil::details::ThreadFailureCallbackHolder **v4; // rcx
  wil::details::ThreadFailureCallbackHolder *v5; // rax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 6) != GetCurrentThreadId() )
    wil::details::in1diag3::Log_Hr(retaddr, v2, v3, (const char *)0x8007029CLL, v6);
  *((_DWORD *)this + 6) = 0;
  v4 = *(wil::details::ThreadFailureCallbackHolder ***)this;
  while ( 1 )
  {
    v5 = *v4;
    if ( !*v4 )
      break;
    if ( v5 == this )
    {
      *v4 = (wil::details::ThreadFailureCallbackHolder *)*((_QWORD *)this + 2);
      break;
    }
    v4 = (wil::details::ThreadFailureCallbackHolder **)((char *)v5 + 16);
    *(_QWORD *)this = (char *)v5 + 16;
  }
  *(_QWORD *)this = 0LL;
}
