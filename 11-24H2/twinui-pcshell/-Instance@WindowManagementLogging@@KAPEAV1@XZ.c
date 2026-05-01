/*
 * XREFs of ?Instance@WindowManagementLogging@@KAPEAV1@XZ @ 0x1800CBB30
 * Callers:
 *     ?PositionViewForActivation_@ShellPositionerTelemetry@@QEBAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x1800CB9C4 (-PositionViewForActivation_@ShellPositionerTelemetry@@QEBAXPEAUIApplicationView@@W4SHELL_POSITIO.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180083248 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x1802D1A98 (atexit.c)
 */

struct WindowManagementLogging *WindowManagementLogging::Instance(void)
{
  void (*v1)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL v2; // [rsp+30h] [rbp+8h] BYREF
  LPVOID v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  v2 = 0;
  if ( __std_init_once_begin_initialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &v2, &v3) && v2 )
  {
    qword_1808CA2C8 = 0LL;
    dword_1808CA2D4 = 0;
    v3 = &qword_1808CA2C0;
    qword_1808CA2C0 = &ImmersiveIconsLogging::`vftable';
    byte_1808CA2D0 = 0;
    qword_1808CA2D8 = (struct _tlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1808CA2C0, qword_1808CA2D8, v1);
    InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &qword_1808CA2C0);
  }
  return (struct WindowManagementLogging *)v3;
}
