/*
 * XREFs of ?Instance@InputETW@@KAPEAV1@XZ @ 0x180036600
 * Callers:
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x1800365C0 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800367A8 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18009CF54 (atexit.c)
 */

struct InputETW *InputETW::Instance(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  Context = 0LL;
  fPending = 0;
  if ( __std_init_once_begin_initialize(&`InputETW::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    qword_180251768 = 0LL;
    Context = &qword_180251760;
    qword_180251760 = &RawInputProvidersContinuousTracing::`vftable';
    byte_180251770 = 0;
    dword_180251774 = 0;
    qword_180251778 = (struct _tlgProvider_t *)&`InputETW::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180251760, qword_180251778, 0LL);
    InitOnceComplete(&`InputETW::Instance'::`2'::wrapper, 0, &qword_180251760);
  }
  return (struct InputETW *)Context;
}
