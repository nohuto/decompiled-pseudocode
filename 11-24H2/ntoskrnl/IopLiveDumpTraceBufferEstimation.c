/*
 * XREFs of IopLiveDumpTraceBufferEstimation @ 0x14059A25C
 * Callers:
 *     IopLiveDumpEstimateMemoryPages @ 0x140597940 (IopLiveDumpEstimateMemoryPages.c)
 * Callees:
 *     IopLiveDumpIsTracingEnabled @ 0x1404F8284 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpTrace @ 0x14059FFB0 (IopLiveDumpTrace.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char IopLiveDumpTraceBufferEstimation()
{
  char result; // al
  _QWORD *v1; // rcx
  __int64 v2; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v3; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v4; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v5; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v6; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v7[22]; // [rsp+50h] [rbp-B0h] BYREF

  result = IopLiveDumpIsTracingEnabled();
  if ( result )
  {
    v2 = v1[13] << 12;
    v3 = v1[12] << 12;
    v4 = v1[15] << 12;
    v6 = v1[16] << 12;
    v5 = v1[17] << 12;
    v7[0] = &v2;
    v7[2] = &v3;
    v7[4] = &v4;
    v7[6] = &v5;
    v7[8] = &v6;
    v7[10] = v1 + 55;
    v7[12] = v1 + 56;
    v7[14] = v1 + 57;
    v7[16] = v1 + 58;
    v7[18] = v1 + 59;
    v7[20] = v1 + 36;
    v7[1] = 8LL;
    v7[3] = 8LL;
    v7[5] = 8LL;
    v7[7] = 8LL;
    v7[9] = 8LL;
    v7[11] = 8LL;
    v7[13] = 8LL;
    v7[15] = 8LL;
    v7[17] = 8LL;
    v7[19] = 8LL;
    v7[21] = 8LL;
    return IopLiveDumpTrace(LIVEDUMP_EVENT_SIZING_WORKFLOW_BUFFER_ESTIMATION, 11LL, v7);
  }
  return result;
}
