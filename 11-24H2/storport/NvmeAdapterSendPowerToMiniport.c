/*
 * XREFs of NvmeAdapterSendPowerToMiniport @ 0x14013120C
 * Callers:
 *     NvmeAdapterPowerDownDeviceNextStepWorkItemRoutine @ 0x14012F500 (NvmeAdapterPowerDownDeviceNextStepWorkItemRoutine.c)
 *     NvmeAdapterPowerUpDeviceLastStepWorkItemRoutine @ 0x140130440 (NvmeAdapterPowerUpDeviceLastStepWorkItemRoutine.c)
 * Callees:
 *     NvmeCallMiniportAdapterControl @ 0x140071694 (NvmeCallMiniportAdapterControl.c)
 *     NvmeIsAdapterControlSupported @ 0x140071734 (NvmeIsAdapterControlSupported.c)
 */

__int64 __fastcall NvmeAdapterSendPowerToMiniport(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // ebx

  v1 = a1 + 168;
  v2 = -1073741637;
  if ( NvmeIsAdapterControlSupported(a1 + 168, 6) )
    return (unsigned int)NvmeCallMiniportAdapterControl(v1);
  return v2;
}
