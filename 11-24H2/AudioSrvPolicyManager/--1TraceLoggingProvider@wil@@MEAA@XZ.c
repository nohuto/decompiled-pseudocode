/*
 * XREFs of ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x1800287AC
 * Callers:
 *     ??_GAudioSrvPolicyManagerTelemetryProvider@@UEAAPEAXI@Z @ 0x180028900 (--_GAudioSrvPolicyManagerTelemetryProvider@@UEAAPEAXI@Z.c)
 *     ??_ETraceLoggingProvider@wil@@MEAAPEAXI@Z @ 0x180028A40 (--_ETraceLoggingProvider@wil@@MEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::TraceLoggingProvider::~TraceLoggingProvider(wil::TraceLoggingProvider *this)
{
  __int64 v1; // rax
  REGHANDLE v2; // rcx

  *(_QWORD *)this = &wil::TraceLoggingProvider::`vftable';
  if ( *((_BYTE *)this + 16) )
  {
    v1 = *((_QWORD *)this + 1);
    v2 = *(_QWORD *)(v1 + 32);
    *(_QWORD *)(v1 + 32) = 0LL;
    *(_DWORD *)v1 = 0;
    EventUnregister(v2);
  }
}
