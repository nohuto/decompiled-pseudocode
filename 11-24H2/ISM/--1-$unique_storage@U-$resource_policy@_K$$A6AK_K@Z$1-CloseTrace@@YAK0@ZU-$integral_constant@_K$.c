/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@_K$$A6AK_K@Z$1?CloseTrace@@YAK0@ZU?$integral_constant@_K$0A@@wistd@@_K_K$0?0$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800D53DC
 * Callers:
 *     ?StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z @ 0x1800D8B64 (-StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z.c)
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=1
ULONG __fastcall wil::details::unique_storage<wil::details::resource_policy<unsigned __int64,unsigned long (unsigned __int64),&unsigned long CloseTrace(unsigned __int64),wistd::integral_constant<unsigned __int64,0>,unsigned __int64,unsigned __int64,-1,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned __int64,unsigned long (unsigned __int64),&unsigned long CloseTrace(unsigned __int64),wistd::integral_constant<unsigned __int64,0>,unsigned __int64,unsigned __int64,-1,std::nullptr_t>>(
        TRACEHANDLE *a1)
{
  ULONG result; // eax

  if ( *a1 != -1LL )
    return CloseTrace(*a1);
  return result;
}
