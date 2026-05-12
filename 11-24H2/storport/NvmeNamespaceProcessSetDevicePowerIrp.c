/*
 * XREFs of NvmeNamespaceProcessSetDevicePowerIrp @ 0x14013476C
 * Callers:
 *     NvmeAdapterPowerUpDeviceCompletionLastStep @ 0x14012FE8C (NvmeAdapterPowerUpDeviceCompletionLastStep.c)
 *     NvmeNamespaceSetPowerIrp @ 0x1401354D8 (NvmeNamespaceSetPowerIrp.c)
 * Callees:
 *     NvmeNamespaceLockIoQueue @ 0x140105324 (NvmeNamespaceLockIoQueue.c)
 *     NvmeNamespaceProcessSetDevicePowerIrpComplete @ 0x1401347A8 (NvmeNamespaceProcessSetDevicePowerIrpComplete.c)
 */

__int64 __fastcall NvmeNamespaceProcessSetDevicePowerIrp(__int64 a1, __int64 a2, char a3)
{
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 24LL) == 4 )
    *(_DWORD *)(*(_QWORD *)(a1 + 128) + 64LL) = 0;
  if ( !a3 )
    NvmeNamespaceLockIoQueue(a1);
  NvmeNamespaceProcessSetDevicePowerIrpComplete();
  return 0LL;
}
