/*
 * XREFs of ndisTraceWorkItemExecEnd @ 0x140047430
 * Callers:
 *     ndisReceiveWorkerThread @ 0x1400470F0 (ndisReceiveWorkerThread.c)
 *     ndisPeriodicReceivesTimer @ 0x14004E360 (ndisPeriodicReceivesTimer.c)
 * Callees:
 *     <none>
 */

NTSTATUS ndisTraceWorkItemExecEnd()
{
  __int16 WnodeEventItem; // [rsp+20h] [rbp-38h] BYREF
  __int128 v2; // [rsp+22h] [rbp-36h]
  _BYTE v3[22]; // [rsp+32h] [rbp-26h]
  __int16 v4; // [rsp+48h] [rbp-10h]
  _WORD v5[7]; // [rsp+4Ah] [rbp-Eh]

  v4 = 0;
  v5[0] = 0;
  v2 = 0LL;
  WnodeEventItem = 48;
  *(_QWORD *)v3 = 0LL;
  *(_QWORD *)((char *)&v2 + 6) = qword_14011D058;
  *(_DWORD *)&v5[1] = 0x20000;
  BYTE2(v2) = 23;
  *(GUID *)&v3[6] = EtwGuidNdisReceive;
  return IoWMIWriteEvent(&WnodeEventItem);
}
