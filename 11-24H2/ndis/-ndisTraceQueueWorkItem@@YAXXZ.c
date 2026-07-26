/*
 * XREFs of ?ndisTraceQueueWorkItem@@YAXXZ @ 0x1400C53A8
 * Callers:
 *     ndisInterruptDpc @ 0x14000BD40 (ndisInterruptDpc.c)
 *     ndisQueuedMiniportDpcWorkItem @ 0x140014590 (ndisQueuedMiniportDpcWorkItem.c)
 *     ndisQueuePeriodicReceivesWorkItem @ 0x140040B20 (ndisQueuePeriodicReceivesWorkItem.c)
 *     ndisQueueDpcWorkItem @ 0x140046A50 (ndisQueueDpcWorkItem.c)
 * Callees:
 *     <none>
 */

void ndisTraceQueueWorkItem(void)
{
  __int16 WnodeEventItem; // [rsp+20h] [rbp-38h] BYREF
  __int128 v1; // [rsp+22h] [rbp-36h]
  _BYTE v2[22]; // [rsp+32h] [rbp-26h]
  __int16 v3; // [rsp+48h] [rbp-10h]
  _WORD v4[7]; // [rsp+4Ah] [rbp-Eh]

  v3 = 0;
  v4[0] = 0;
  v1 = 0LL;
  WnodeEventItem = 48;
  *(_QWORD *)v2 = 0LL;
  *(_QWORD *)((char *)&v1 + 6) = qword_14011D058;
  *(_DWORD *)&v4[1] = 0x20000;
  BYTE2(v1) = 24;
  *(GUID *)&v2[6] = EtwGuidNdisReceive;
  IoWMIWriteEvent(&WnodeEventItem);
}
