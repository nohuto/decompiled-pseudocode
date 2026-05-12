/*
 * XREFs of NvmeNamespaceIsDeallocateSupported @ 0x1401051A0
 * Callers:
 *     NvmeNamespaceDsmDeallocate @ 0x1400FE7D0 (NvmeNamespaceDsmDeallocate.c)
 *     NvmeNamespaceDsmDeallocate2 @ 0x1400FECF0 (NvmeNamespaceDsmDeallocate2.c)
 *     ScsiUnmapRequest @ 0x1401171E4 (ScsiUnmapRequest.c)
 *     NvmeNamespacePopulateInquiryBlockLimitsData @ 0x1401176B8 (NvmeNamespacePopulateInquiryBlockLimitsData.c)
 *     NvmeNamespacePopulateInquiryBlockProvisioningData @ 0x140117880 (NvmeNamespacePopulateInquiryBlockProvisioningData.c)
 *     NvmeNamespaceScsiUnmapRequest @ 0x140118CB8 (NvmeNamespaceScsiUnmapRequest.c)
 *     NvmeNamespaceStorageQueryDeviceTrimPropertyIoctl @ 0x1401AEFF4 (NvmeNamespaceStorageQueryDeviceTrimPropertyIoctl.c)
 * Callees:
 *     <none>
 */

bool __fastcall NvmeNamespaceIsDeallocateSupported(__int64 a1)
{
  _QWORD *v1; // rdx
  __int64 v2; // rax
  __int64 v4; // rax

  v1 = *(_QWORD **)(a1 + 16);
  v2 = v1[131];
  if ( v2 && (*(_DWORD *)(v2 + 24) & 1) != 0 )
    return 0;
  if ( (*(_BYTE *)(v1[74] + 520LL) & 4) != 0 )
    return 1;
  v4 = v1[75];
  if ( !v4 )
    return 0;
  return *(_BYTE *)(v4 + 3) != 0;
}
