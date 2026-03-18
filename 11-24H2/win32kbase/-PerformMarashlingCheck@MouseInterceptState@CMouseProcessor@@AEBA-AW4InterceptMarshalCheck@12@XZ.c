/*
 * XREFs of ?PerformMarashlingCheck@MouseInterceptState@CMouseProcessor@@AEBA?AW4InterceptMarshalCheck@12@XZ @ 0x14021DBF8
 * Callers:
 *     ?CallInterceptor@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x14021BF64 (-CallInterceptor@MouseInterceptState@CMouseProcessor@@QEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_M.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::MouseInterceptState::PerformMarashlingCheck(__int64 a1)
{
  unsigned int CurrentThreadId; // eax
  unsigned int v3; // edi
  int v4; // eax
  int v6; // ecx

  if ( !*(_DWORD *)(a1 + 24) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8586);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v3 = CurrentThreadId;
  if ( CurrentThreadId != *(_DWORD *)(a1 + 28) && CurrentThreadId != *(_DWORD *)(a1 + 24) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8596);
  v4 = *(_DWORD *)(a1 + 24);
  if ( v3 == v4 )
    return 1LL;
  v6 = *(_DWORD *)(a1 + 28);
  if ( v3 != v6 )
    return 2LL;
  if ( v4 == v6 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8616);
  return 0LL;
}
