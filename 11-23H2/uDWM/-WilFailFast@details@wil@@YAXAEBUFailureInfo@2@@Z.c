/*
 * XREFs of ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x18009DAF8
 * Callers:
 *     ?SetStopResult@?$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x1800110FC (-SetStopResult@-$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Ac.c)
 *     ?SetResultTelemetryFallback@wil@@YAXP6AX_NAEBUFailureInfo@1@@_E@Z @ 0x180021F84 (-SetResultTelemetryFallback@wil@@YAXP6AX_NAEBUFailureInfo@1@@_E@Z.c)
 *     ?SetResultLoggingCallback@wil@@YAXP6AXAEBUFailureInfo@1@@_E@Z @ 0x180021FB8 (-SetResultLoggingCallback@wil@@YAXP6AXAEBUFailureInfo@1@@_E@Z.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002E164 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??$ReportFailure_NoReturn@$02@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x1800990FC (--$ReportFailure_NoReturn@$02@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ??$ReportFailure_Return@$00@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x1800993E4 (--$ReportFailure_Return@$00@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureO.c)
 *     ??$ReportFailure_Return@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x1800996F4 (--$ReportFailure_Return@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureO.c)
 *     ?SetStopResult@?$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x1800D0C7C (-SetStopResult@-$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProvid_ea_1800D0C7C.c)
 *     ??$ReportFailure_NoReturn@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x1800EC7CC (--$ReportFailure_NoReturn@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailu.c)
 * Callees:
 *     memset_0 @ 0x18005D520 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?WilRaiseFailFastException@details@wil@@YAXPEAU_EXCEPTION_RECORD@@PEAU_CONTEXT@@K@Z @ 0x18009DBBC (-WilRaiseFailFastException@details@wil@@YAXPEAU_EXCEPTION_RECORD@@PEAU_CONTEXT@@K@Z.c)
 */

void __fastcall __noreturn wil::details::WilFailFast(wil::details *this, const struct wil::FailureInfo *a2)
{
  struct _EXCEPTION_RECORD *v3; // rdx
  unsigned int v4; // r9d
  __int64 v5; // rcx
  __int64 v6; // rax
  _DWORD v7[4]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v8; // [rsp+30h] [rbp-98h]
  int v9; // [rsp+38h] [rbp-90h]
  __int64 v10; // [rsp+40h] [rbp-88h]
  __int64 v11; // [rsp+48h] [rbp-80h]
  __int64 v12; // [rsp+50h] [rbp-78h]

  if ( wil::g_pfnWilFailFast )
    wil::g_pfnWilFailFast(this, a2);
  if ( wil::details::g_pfnFailfastWithContextCallback )
    wil::details::g_pfnFailfastWithContextCallback(this, a2);
  memset_0(v7, 0, 0x98uLL);
  v5 = *((_QWORD *)this + 17);
  v9 = 1;
  v7[0] = -1073740791;
  v7[1] = 1;
  v10 = 7LL;
  if ( !v5 )
    wil::details::WilRaiseFailFastException((wil::details *)v7, v3, (struct _CONTEXT *)1, v4);
  v11 = *((int *)this + 2);
  v6 = *((unsigned int *)this + 16);
  v8 = v5;
  v12 = v6;
  v9 = 3;
  wil::details::WilRaiseFailFastException((wil::details *)v7, v3, 0LL, v4);
}
