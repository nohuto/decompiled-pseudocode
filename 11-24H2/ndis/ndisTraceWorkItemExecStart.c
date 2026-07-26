/*
 * XREFs of ndisTraceWorkItemExecStart @ 0x1400473B0
 * Callers:
 *     ndisReceiveWorkerThread @ 0x1400470F0 (ndisReceiveWorkerThread.c)
 *     ndisPeriodicReceivesTimer @ 0x14004E360 (ndisPeriodicReceivesTimer.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall ndisTraceWorkItemExecStart(__int8 a1)
{
  __int16 WnodeEventItem; // [rsp+20h] [rbp-48h] BYREF
  __int128 v3; // [rsp+22h] [rbp-46h]
  __m256i v4; // [rsp+32h] [rbp-36h]
  int v5; // [rsp+52h] [rbp-16h]
  __int16 v6; // [rsp+56h] [rbp-12h]

  *(_OWORD *)&v4.m256i_u64[2] = 0LL;
  v5 = 0;
  v3 = 0LL;
  v6 = 0;
  v4.m256i_i64[0] = 0LL;
  WnodeEventItem = 56;
  v4.m256i_i8[30] = a1;
  *(_QWORD *)((char *)&v3 + 6) = qword_14011D058;
  *(__int32 *)((char *)&v4.m256i_i32[6] + 2) = 0x20000;
  *(GUID *)&v4.m256i_u16[3] = EtwGuidNdisReceive;
  BYTE2(v3) = 22;
  return IoWMIWriteEvent(&WnodeEventItem);
}
