/*
 * XREFs of IopLiveDumpTraceRemovePagesCallbackFailure @ 0x14059B16C
 * Callers:
 *     IopLiveDumpCallRemovePagesCallbacks @ 0x140596AE8 (IopLiveDumpCallRemovePagesCallbacks.c)
 * Callees:
 *     IopLiveDumpIsTracingEnabled @ 0x1404F8284 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpTrace @ 0x14059FFB0 (IopLiveDumpTrace.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall IopLiveDumpTraceRemovePagesCallbackFailure(__int64 a1, __int64 a2, int a3)
{
  char result; // al
  int v4; // edx
  __int64 v5; // rcx
  __int64 v6; // [rsp+20h] [rbp-38h] BYREF
  int v7; // [rsp+28h] [rbp-30h]
  int v8; // [rsp+2Ch] [rbp-2Ch]
  int *v9; // [rsp+30h] [rbp-28h]
  int v10; // [rsp+38h] [rbp-20h]
  int v11; // [rsp+3Ch] [rbp-1Ch]
  int v12; // [rsp+70h] [rbp+18h] BYREF

  v12 = a3;
  result = IopLiveDumpIsTracingEnabled();
  if ( result )
  {
    v8 = 0;
    v11 = 0;
    v6 = v5;
    v7 = v4;
    v9 = &v12;
    v10 = 4;
    return IopLiveDumpTrace(LIVEDUMP_EVENT_SIZING_WORKFLOW_REMOVEPAGES_CALLBACK_FAILURE, 2LL, &v6);
  }
  return result;
}
