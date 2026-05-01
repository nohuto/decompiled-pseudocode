/*
 * XREFs of _lambda_09002843fc292861b66de9ebeae70798_::operator() @ 0x18010F708
 * Callers:
 *     ?ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x18010F32C (-ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     wil::details::lambda_call__lambda_0fafcfc299c6366f509b7653c8ee9176___::_lambda_call__lambda_0fafcfc299c6366f509b7653c8ee9176___ @ 0x18049B938 (wil--details--lambda_call__lambda_0fafcfc299c6366f509b7653c8ee9176___--_lambda_call__lambda_0faf.c)
 *     wil::details::lambda_call__lambda_c1de3f7a931caf2cc34cf1f98ddf5cb0___::_lambda_call__lambda_c1de3f7a931caf2cc34cf1f98ddf5cb0___ @ 0x18049B960 (wil--details--lambda_call__lambda_c1de3f7a931caf2cc34cf1f98ddf5cb0___--_lambda_call__lambda_c1de.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?get@?$static_lazy@VTaskFlowDataEngineTelemetry@@@details@wil@@QEAAPEAVTaskFlowDataEngineTelemetry@@P6AXXZ@Z @ 0x18010F82C (-get@-$static_lazy@VTaskFlowDataEngineTelemetry@@@details@wil@@QEAAPEAVTaskFlowDataEngineTelemet.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801CF0C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

int *__fastcall lambda_09002843fc292861b66de9ebeae70798_::operator()(
        int **a1,
        unsigned __int16 a2,
        __int64 a3,
        const char *a4)
{
  DWORD v5; // edi
  int *v6; // r14
  __int64 v7; // rcx
  int *v8; // r15
  unsigned __int64 v9; // rsi
  int v10; // ebp
  _DWORD *v11; // rcx
  int *result; // rax
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+38h] [rbp-50h] BYREF
  LARGE_INTEGER *p_PerformanceCount; // [rsp+58h] [rbp-30h]
  int v16; // [rsp+60h] [rbp-28h]
  int v17; // [rsp+64h] [rbp-24h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v5 = a2;
  v6 = *a1;
  v7 = *(unsigned __int16 *)a1[1];
  if ( *v6 >= (int)v7 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x74,
      (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      a4);
  if ( a2 >= (unsigned __int16)v7 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x75,
      (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      a4);
  v8 = a1[2];
  v9 = (unsigned __int64)a2 >> 5;
  v10 = 1 << (a2 & 0x1F);
  if ( (v10 & v8[v9]) != 0 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x76,
      (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      a4);
  LOBYTE(v7) = a2 & 0x1F;
  v11 = *(_DWORD **)(wil::details::static_lazy<TaskFlowDataEngineTelemetry>::get(
                       v7,
                       _lambda_fac79a549a8b210f59d21e9b666a8346_::_lambda_invoker_cdecl_)
                   + 8);
  if ( *v11 > 5u )
  {
    v17 = 0;
    p_PerformanceCount = &PerformanceCount;
    PerformanceCount.LowPart = v5;
    v16 = 4;
    tlgWriteTransfer_EventWriteTransfer((__int64)v11, (unsigned __int8 *)dword_1808573B1, 0LL, 0LL, 3u, &v14);
  }
  QueryPerformanceCounter(&PerformanceCount);
  *(LARGE_INTEGER *)&a1[3][2 * *v6 + 2] = PerformanceCount;
  *((_WORD *)a1[4] + *v6) = v5;
  v8[v9] |= v10;
  result = *a1;
  ++**a1;
  return result;
}
