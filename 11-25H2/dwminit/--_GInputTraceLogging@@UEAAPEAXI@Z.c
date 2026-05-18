/*
 * XREFs of ??_GInputTraceLogging@@UEAAPEAXI@Z @ 0x18000FA10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180002594 (--3@YAXPEAX_K@Z.c)
 */

InputTraceLogging *__fastcall InputTraceLogging::`scalar deleting destructor'(InputTraceLogging *this, char a2)
{
  __int64 v4; // rax
  REGHANDLE v5; // rcx

  *(_QWORD *)this = &wil::TraceLoggingProvider::`vftable';
  if ( *((_BYTE *)this + 16) )
  {
    v4 = *((_QWORD *)this + 1);
    v5 = *(_QWORD *)(v4 + 32);
    *(_QWORD *)(v4 + 32) = 0LL;
    *(_DWORD *)v4 = 0;
    EventUnregister(v5);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
