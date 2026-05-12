/*
 * XREFs of StorRestartDeviceIoQueue @ 0x140127E4C
 * Callers:
 *     NvmeControllerRestart @ 0x1400F4DB4 (NvmeControllerRestart.c)
 *     NvmeNamespaceActiveConditionStep2 @ 0x140132D40 (NvmeNamespaceActiveConditionStep2.c)
 *     NvmeNamespaceProcessSetDevicePowerIrpComplete @ 0x1401347A8 (NvmeNamespaceProcessSetDevicePowerIrpComplete.c)
 * Callees:
 *     NvmeProcessPendingIo @ 0x14011E5A0 (NvmeProcessPendingIo.c)
 */

char __fastcall StorRestartDeviceIoQueue(__int64 a1)
{
  _DWORD *v1; // rdi
  unsigned int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // rsi

  v1 = g_CpuInfo;
  v2 = 0;
  if ( !*(_DWORD *)a1 && !*(_BYTE *)(a1 + 20) )
  {
    v3 = *(_QWORD *)(a1 + 64);
    v4 = *(_QWORD *)(v3 + 24);
    if ( *((_DWORD *)g_CpuInfo + 3) )
    {
      do
        LOBYTE(v3) = NvmeProcessPendingIo(*(_QWORD *)(v4 + 16), 0LL, v2++);
      while ( v2 < v1[3] );
    }
  }
  return v3;
}
