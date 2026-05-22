/*
 * XREFs of ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800367A8
 * Callers:
 *     ?Provider@InputETW@@SAPEBU_tlgProvider_t@@XZ @ 0x180017640 (-Provider@InputETW@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?OnHitTest@ContextualProcessing@InputETW@@SAXPEBG@Z @ 0x18001ADF0 (-OnHitTest@ContextualProcessing@InputETW@@SAXPEBG@Z.c)
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18001AFF0 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?OnInputReport@InputStateManager@InputETW@@SAXPEAUInputInfo@@@Z @ 0x18001CA58 (-OnInputReport@InputStateManager@InputETW@@SAXPEAUInputInfo@@@Z.c)
 *     ?OnInput@ContextualProcessing@InputETW@@SAXPEBGPEAUIInputTarget@@J@Z @ 0x18001E9EC (-OnInput@ContextualProcessing@InputETW@@SAXPEBGPEAUIInputTarget@@J@Z.c)
 *     ?IsVerboseEnabled@InputETW@@SA_N_K@Z @ 0x1800316D8 (-IsVerboseEnabled@InputETW@@SA_N_K@Z.c)
 *     ?Instance@InputETW@@KAPEAV1@XZ @ 0x180036600 (-Instance@InputETW@@KAPEAV1@XZ.c)
 *     ?Instance@InputTraceLogging@@KAPEAV1@XZ @ 0x1800366D0 (-Instance@InputTraceLogging@@KAPEAV1@XZ.c)
 *     ?get@?$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAAPEAVFeatureLogging@23@P6AXXZ@Z @ 0x180083870 (-get@-$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAAPEAVFeatureLogging@23@P6AXXZ@Z.c)
 *     ??1Completer@?$static_lazy@VRawInputProvidersContinuousTracing@@@details@wil@@QEAA@XZ @ 0x180098ECC (--1Completer@-$static_lazy@VRawInputProvidersContinuousTracing@@@details@wil@@QEAA@XZ.c)
 * Callees:
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x1800796E0 (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 */

void __fastcall wil::TraceLoggingProvider::Register(
        wil::TraceLoggingProvider *this,
        const struct _tlgProvider_t *const a2,
        void (*a3)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))
{
  __int64 v4; // rax

  *((_QWORD *)this + 1) = a2;
  *((_BYTE *)this + 16) = 1;
  TraceLoggingRegisterEx_EventRegister_EventSetInformation(a2);
  v4 = *(_QWORD *)this;
  *((_DWORD *)this + 5) = 1;
  (*(void (__fastcall **)(wil::TraceLoggingProvider *))(v4 + 8))(this);
}
