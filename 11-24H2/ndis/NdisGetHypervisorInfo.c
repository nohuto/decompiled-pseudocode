/*
 * XREFs of NdisGetHypervisorInfo @ 0x1400D4480
 * Callers:
 *     <none>
 * Callees:
 *     ndisInitHypervisorInfo @ 0x1400D43C0 (ndisInitHypervisorInfo.c)
 */

NDIS_STATUS __stdcall NdisGetHypervisorInfo(PNDIS_HYPERVISOR_INFO HypervisorInfo)
{
  NDIS_STATUS v1; // r10d

  if ( HypervisorInfo->Header.Size < 0xCu )
    return -1073676266;
  ndisInitHypervisorInfo(HypervisorInfo);
  return v1;
}
