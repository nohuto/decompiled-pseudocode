/*
 * XREFs of ?StartTracingSession@SpatialRimDeviceCollection@@UEAAXXZ @ 0x1800D8E80
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ??1TraceSessionConfig@@QEAA@XZ @ 0x1800D56C0 (--1TraceSessionConfig@@QEAA@XZ.c)
 *     GetHolographicInputSession @ 0x1800D64F0 (GetHolographicInputSession.c)
 *     ?StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z @ 0x1800D8B64 (-StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z.c)
 */

void __fastcall SpatialRimDeviceCollection::StartTracingSession(SpatialRimDeviceCollection *this)
{
  const struct TraceSessionConfig *HolographicInputSession; // rax
  __int64 v2; // r8
  __int64 v3; // r9
  _BYTE v4[128]; // [rsp+20h] [rbp-98h] BYREF

  HolographicInputSession = (const struct TraceSessionConfig *)GetHolographicInputSession((__int64)v4);
  TracingSessionHelper::StartOrStop(HolographicInputSession, 1, v2, v3);
  TraceSessionConfig::~TraceSessionConfig((TraceSessionConfig *)v4);
}
