/*
 * XREFs of RaidResumeAndRestartAdapterQueues @ 0x1400664A8
 * Callers:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x140010664 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterResetBus @ 0x14002F998 (RaidAdapterResetBus.c)
 *     RaidUnitCompleteResetRequest @ 0x14003C670 (RaidUnitCompleteResetRequest.c)
 *     RaidAdapterDeviceReset @ 0x140059DAC (RaidAdapterDeviceReset.c)
 *     RaidAdapterResetBusNoLock @ 0x14005E034 (RaidAdapterResetBusNoLock.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x140060974 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidAdapterStartDevice @ 0x140061808 (RaidAdapterStartDevice.c)
 *     RaUnitStartResetIo @ 0x14009942C (RaUnitStartResetIo.c)
 *     RaidUnitTestDeviceQueue @ 0x1400A0F68 (RaidUnitTestDeviceQueue.c)
 *     StorSendMFNDCommand @ 0x140190F24 (StorSendMFNDCommand.c)
 * Callees:
 *     RaidAdapterRestartQueues @ 0x14000FD00 (RaidAdapterRestartQueues.c)
 *     DbgLogRequest @ 0x140015470 (DbgLogRequest.c)
 *     StorResumeIoGateway @ 0x140028340 (StorResumeIoGateway.c)
 */

__int64 __fastcall RaidResumeAndRestartAdapterQueues(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // edi
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v2 = StorResumeIoGateway(a1, 0, 0);
  v3 = v2;
  if ( (qword_140170460 & 0x200) != 0 )
    DbgLogRequest(a1, 7, retaddr, v2, a1, *(unsigned int *)(a1 + 56), 0LL);
  if ( !v3 )
    RaidAdapterRestartQueues(a1, 0);
  return v3;
}
