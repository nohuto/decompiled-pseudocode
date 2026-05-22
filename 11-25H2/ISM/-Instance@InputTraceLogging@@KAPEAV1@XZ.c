/*
 * XREFs of ?Instance@InputTraceLogging@@KAPEAV1@XZ @ 0x180039C40
 * Callers:
 *     ?EvaluatePosture@Postures@InputTraceLogging@@SAXW4DevicePostureMode@Input@Internal@UI@Windows@@_NK111@Z @ 0x18011199C (-EvaluatePosture@Postures@InputTraceLogging@@SAXW4DevicePostureMode@Input@Internal@UI@Windows@@_.c)
 *     ?EvaluatePostureRemote@Postures@InputTraceLogging@@SAXW4DevicePostureMode@Input@Internal@UI@Windows@@_N1@Z @ 0x180111B30 (-EvaluatePostureRemote@Postures@InputTraceLogging@@SAXW4DevicePostureMode@Input@Internal@UI@Wind.c)
 *     ?Thresholds@ShellGestures@InputTraceLogging@@SAX_J00000@Z @ 0x180159B14 (-Thresholds@ShellGestures@InputTraceLogging@@SAX_J00000@Z.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180039D18 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18009CD84 (atexit.c)
 */

struct InputTraceLogging *InputTraceLogging::Instance(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  Context = 0LL;
  fPending = 0;
  if ( __std_init_once_begin_initialize(&`InputTraceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    qword_180247610 = 0LL;
    Context = &qword_180247608;
    qword_180247608 = &RawInputProvidersContinuousTracing::`vftable';
    byte_180247618 = 0;
    dword_18024761C = 0;
    qword_180247620 = (struct _tlgProvider_t *)&`InputTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register(
      (wil::TraceLoggingProvider *)&qword_180247608,
      qword_180247620,
      (void (*)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))InputTraceLogging::Callback);
    InputTraceLogging::s_registered = 1;
    InitOnceComplete(&`InputTraceLogging::Instance'::`2'::wrapper, 0, &qword_180247608);
  }
  return (struct InputTraceLogging *)Context;
}
