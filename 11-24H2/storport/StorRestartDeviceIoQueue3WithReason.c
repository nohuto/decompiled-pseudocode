/*
 * XREFs of StorRestartDeviceIoQueue3WithReason @ 0x140127F18
 * Callers:
 *     NvmeNamespaceActiveConditionStep2 @ 0x140132D40 (NvmeNamespaceActiveConditionStep2.c)
 *     NvmeNamespaceProcessSetDevicePowerIrpComplete @ 0x1401347A8 (NvmeNamespaceProcessSetDevicePowerIrpComplete.c)
 * Callees:
 *     NvmeProcessPendingIo @ 0x14011E5A0 (NvmeProcessPendingIo.c)
 *     StorRestartDeviceLowPriorityIoQueue @ 0x140127F9C (StorRestartDeviceLowPriorityIoQueue.c)
 */

__int64 __fastcall StorRestartDeviceIoQueue3WithReason(__int64 a1, int a2)
{
  __int64 result; // rax
  unsigned int v3; // ebx
  _DWORD *v4; // rsi
  __int64 v5; // rdi

  result = *(_QWORD *)(a1 + 256);
  v3 = 0;
  v4 = g_CpuInfo;
  if ( !*(_DWORD *)result && !*(_BYTE *)(result + 20) )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(result + 64) + 24LL);
    if ( a2 == 1 )
    {
      NvmeProcessPendingIo(*(_QWORD *)(v5 + 16), 0LL, 0);
    }
    else if ( *((_DWORD *)g_CpuInfo + 3) )
    {
      do
        NvmeProcessPendingIo(*(_QWORD *)(v5 + 16), 0LL, v3++);
      while ( v3 < v4[3] );
    }
    return StorRestartDeviceLowPriorityIoQueue(*(_QWORD *)(v5 + 264));
  }
  return result;
}
