/*
 * XREFs of wil::details::lambda_call__lambda_b85fb279a8c971c66e1debadd2dc476f___::_lambda_call__lambda_b85fb279a8c971c66e1debadd2dc476f___ @ 0x180070E08
 * Callers:
 *     _s_adPublishApoTelemetry_::_1_::dtor$1 @ 0x180169E5E (_s_adPublishApoTelemetry_--_1_--dtor$1.c)
 *     _AudioServerInitialize_Internal_::_1_::dtor$5 @ 0x18016BEA8 (_AudioServerInitialize_Internal_--_1_--dtor$5.c)
 * Callees:
 *     ?StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ @ 0x180021D9C (-StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::lambda_call__lambda_b85fb279a8c971c66e1debadd2dc476f___::_lambda_call__lambda_b85fb279a8c971c66e1debadd2dc476f___(
        __int64 a1)
{
  LPCRITICAL_SECTION v1; // rbx

  if ( *(_BYTE *)(a1 + 1) )
  {
    *(_BYTE *)(a1 + 1) = 0;
    v1 = g_ADGProcess;
    EnterCriticalSection(g_ADGProcess);
    if ( LODWORD(v1[1].DebugInfo)-- == 1 )
      CAudioDGProcess::StartADGTerminationTimer((CAudioDGProcess *)v1);
    LeaveCriticalSection(v1);
  }
}
