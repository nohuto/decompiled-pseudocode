/*
 * XREFs of _lambda_c6edb9ea9ae2a095d75d0a6fb7353035_::operator() @ 0x18010E92C
 * Callers:
 *     ?ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x18010F32C (-ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     wil::details::lambda_call__lambda_c6edb9ea9ae2a095d75d0a6fb7353035___::_lambda_call__lambda_c6edb9ea9ae2a095d75d0a6fb7353035___ @ 0x18049B988 (wil--details--lambda_call__lambda_c6edb9ea9ae2a095d75d0a6fb7353035___--_lambda_call__lambda_c6ed.c)
 * Callees:
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x1800C3614 (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     ?TaskflowImmersiveShellBroker_StartupPerf_@TaskFlowDataEngineTelemetry@@QEAAX_JG_KPEB_J_N@Z @ 0x18010F24C (-TaskflowImmersiveShellBroker_StartupPerf_@TaskFlowDataEngineTelemetry@@QEAAX_JG_KPEB_J_N@Z.c)
 *     ?get@?$static_lazy@VTaskFlowDataEngineTelemetry@@@details@wil@@QEAAPEAVTaskFlowDataEngineTelemetry@@P6AXXZ@Z @ 0x18010F82C (-get@-$static_lazy@VTaskFlowDataEngineTelemetry@@@details@wil@@QEAAPEAVTaskFlowDataEngineTelemet.c)
 */

void __fastcall lambda_c6edb9ea9ae2a095d75d0a6fb7353035_::operator()(int **a1)
{
  __int64 v2; // rcx
  int *v3; // r11
  LARGE_INTEGER v4; // r8
  __int64 v5; // rsi
  __int64 v6; // rbp
  int *v7; // r14
  __int64 v8; // r10
  int *v9; // rdi
  __int64 v10; // rax
  int *v11; // rax
  const __int64 *v12; // rdi
  unsigned __int16 *v13; // rbx
  unsigned int v14; // esi
  wil::TraceLoggingProvider *v15; // rax
  __int64 v16; // rcx
  TaskFlowDataEngineTelemetry *v17; // rcx
  LARGE_INTEGER Frequency; // [rsp+50h] [rbp+8h] BYREF

  QueryPerformanceFrequency(&Frequency);
  v3 = a1[1];
  v4 = Frequency;
  v5 = **a1;
  v6 = 1000000LL * (*(_QWORD *)&v3[2 * v5] - *(_QWORD *)v3) / Frequency.QuadPart;
  if ( v5 > 0 )
  {
    v7 = a1[2];
    v8 = 0LL;
    v9 = a1[3];
    while ( 1 )
    {
      v10 = *(_QWORD *)&v3[2 * v8 + 2] - *(_QWORD *)&v3[2 * v8];
      ++v8;
      v2 = *(unsigned __int16 *)v9;
      v9 = (int *)((char *)v9 + 2);
      *(_QWORD *)&v7[2 * v2] = 1000000 * v10 / v4.QuadPart;
      if ( v8 >= v5 )
        break;
      v4 = Frequency;
    }
  }
  v11 = a1[5];
  v12 = (const __int64 *)a1[2];
  v13 = (unsigned __int16 *)a1[4];
  v14 = *v11;
  v15 = (wil::TraceLoggingProvider *)wil::details::static_lazy<TaskFlowDataEngineTelemetry>::get(
                                       v2,
                                       _lambda_fac79a549a8b210f59d21e9b666a8346_::_lambda_invoker_cdecl_);
  if ( wil::TraceLoggingProvider::IsEnabled_(v15, 0) )
  {
    wil::details::static_lazy<TaskFlowDataEngineTelemetry>::get(
      v16,
      _lambda_fac79a549a8b210f59d21e9b666a8346_::_lambda_invoker_cdecl_);
    TaskFlowDataEngineTelemetry::TaskflowImmersiveShellBroker_StartupPerf_(v17, v6, *v13, v14, v12, 0);
  }
}
