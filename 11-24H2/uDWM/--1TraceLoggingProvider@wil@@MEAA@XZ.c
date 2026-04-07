/*
 * XREFs of ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x18009E0AC
 * Callers:
 *     ??_ETraceLoggingProvider@wil@@MEAAPEAXI@Z @ 0x18009E170 (--_ETraceLoggingProvider@wil@@MEAAPEAXI@Z.c)
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

  *(_QWORD *)this = &WindowFrameLogging::`vftable';
  if ( *((_BYTE *)this + 16) )
  {
    v3 = *((_QWORD *)this + 1);
    v4 = *(_QWORD *)(v3 + 32);
    *(_QWORD *)(v3 + 32) = 0LL;
    *(_DWORD *)v3 = 0;
    EtwEventUnregister(v4, 0LL, a3);
  }
}
