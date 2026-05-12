/*
 * XREFs of StorRestartDeviceCommandQueue @ 0x140127DE8
 * Callers:
 *     NvmeControllerRestart @ 0x1400F4DB4 (NvmeControllerRestart.c)
 *     NvmeAdapterActiveCondition @ 0x14012DB70 (NvmeAdapterActiveCondition.c)
 * Callees:
 *     NvmeControllerProcessPendingCommand @ 0x1401297E0 (NvmeControllerProcessPendingCommand.c)
 */

__int64 __fastcall StorRestartDeviceCommandQueue(__int64 a1)
{
  _DWORD *v1; // rdi
  __int64 result; // rax
  unsigned int v3; // ebx
  __int64 v4; // rsi

  v1 = g_CpuInfo;
  if ( !*(_DWORD *)a1 && *(_BYTE *)(a1 + 20) == 1 )
  {
    result = *(_QWORD *)(a1 + 64);
    v3 = 0;
    v4 = *(_QWORD *)(result + 24);
    if ( *((_DWORD *)g_CpuInfo + 3) )
    {
      do
        result = NvmeControllerProcessPendingCommand(v4, v3++, 0, 0, 0);
      while ( v3 < v1[3] );
    }
  }
  return result;
}
