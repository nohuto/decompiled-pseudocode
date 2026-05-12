/*
 * XREFs of StorRestartDeviceLowPriorityIoQueue @ 0x140127F9C
 * Callers:
 *     StorRestartDeviceIoQueue2 @ 0x140127EA8 (StorRestartDeviceIoQueue2.c)
 *     StorRestartDeviceIoQueue3WithReason @ 0x140127F18 (StorRestartDeviceIoQueue3WithReason.c)
 * Callees:
 *     NvmeProcessPendingLowPriorityIo @ 0x140123160 (NvmeProcessPendingLowPriorityIo.c)
 */

char __fastcall StorRestartDeviceLowPriorityIoQueue(__int64 a1)
{
  if ( *(_DWORD *)a1 || *(_BYTE *)(a1 + 20) || (*(_BYTE *)(a1 + 21) & 1) == 0 )
    return 0;
  else
    return NvmeProcessPendingLowPriorityIo(
             *(_QWORD **)(*(_QWORD *)(a1 + 64) + 24LL),
             (unsigned int)_InterlockedExchange(
                             (volatile __int32 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 24LL) + 264LL) + 40LL),
                             0),
             0);
}
