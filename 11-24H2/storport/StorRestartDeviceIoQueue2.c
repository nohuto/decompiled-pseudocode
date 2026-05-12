/*
 * XREFs of StorRestartDeviceIoQueue2 @ 0x140127EA8
 * Callers:
 *     NvmeControllerRestart @ 0x1400F4DB4 (NvmeControllerRestart.c)
 *     NvmeNamespaceActiveConditionStep2 @ 0x140132D40 (NvmeNamespaceActiveConditionStep2.c)
 *     NvmeNamespaceProcessSetDevicePowerIrpComplete @ 0x1401347A8 (NvmeNamespaceProcessSetDevicePowerIrpComplete.c)
 * Callees:
 *     NvmeProcessPendingIo @ 0x14011E5A0 (NvmeProcessPendingIo.c)
 *     StorRestartDeviceLowPriorityIoQueue @ 0x140127F9C (StorRestartDeviceLowPriorityIoQueue.c)
 */

__int64 __fastcall StorRestartDeviceIoQueue2(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // ebx
  _DWORD *v3; // rsi
  __int64 v4; // rdi

  result = *(_QWORD *)(a1 + 256);
  v2 = 0;
  v3 = g_CpuInfo;
  if ( !*(_DWORD *)result && !*(_BYTE *)(result + 20) )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(result + 64) + 24LL);
    if ( *((_DWORD *)g_CpuInfo + 3) )
    {
      do
        NvmeProcessPendingIo(*(_QWORD *)(v4 + 16), 0LL, v2++);
      while ( v2 < v3[3] );
    }
    return StorRestartDeviceLowPriorityIoQueue(*(_QWORD *)(v4 + 264));
  }
  return result;
}
