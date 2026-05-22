/*
 * XREFs of ??1?$unique_ptr@U_EVENT_TRACE_PROPERTIES@@U?$default_delete@U_EVENT_TRACE_PROPERTIES@@@std@@@std@@QEAA@XZ @ 0x1800D2184
 * Callers:
 *     ?StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z @ 0x1800D5974 (-StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z.c)
 *     _TracingSessionHelper::StartOrStop_::_1_::dtor$1 @ 0x1801CE364 (_TracingSessionHelper--StartOrStop_--_1_--dtor$1.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::unique_ptr<_EVENT_TRACE_PROPERTIES>::~unique_ptr<_EVENT_TRACE_PROPERTIES>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1, (const struct std::nothrow_t *)0x78);
}
