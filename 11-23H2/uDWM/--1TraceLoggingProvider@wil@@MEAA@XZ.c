/*
 * XREFs of ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x18009A93C
 * Callers:
 *     ??_ETraceLoggingProvider@wil@@MEAAPEAXI@Z @ 0x18009AA50 (--_ETraceLoggingProvider@wil@@MEAAPEAXI@Z.c)
 *     ??_GCScalingCompatTelemetry@ScalingCompatTelemetry@@UEAAPEAXI@Z @ 0x1801101A0 (--_GCScalingCompatTelemetry@ScalingCompatTelemetry@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::TraceLoggingProvider::~TraceLoggingProvider(
        wil::TraceLoggingProvider *this,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  *(_QWORD *)this = &wil::TraceLoggingProvider::`vftable';
  if ( *((_BYTE *)this + 16) )
  {
    v3 = *((_QWORD *)this + 1);
    v4 = *(_QWORD *)(v3 + 32);
    *(_QWORD *)(v3 + 32) = 0LL;
    *(_DWORD *)v3 = 0;
    EtwEventUnregister(v4, 0LL, a3);
  }
}
