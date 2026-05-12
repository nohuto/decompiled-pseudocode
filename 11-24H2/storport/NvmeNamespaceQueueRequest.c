/*
 * XREFs of NvmeNamespaceQueueRequest @ 0x14010AF34
 * Callers:
 *     NvmeNamespaceCompleteNvmRequest @ 0x1400FC810 (NvmeNamespaceCompleteNvmRequest.c)
 *     NvmeNamespaceExecuteScsiSrb @ 0x140100028 (NvmeNamespaceExecuteScsiSrb.c)
 *     NvmeNamespaceProcessRequest @ 0x140107538 (NvmeNamespaceProcessRequest.c)
 * Callees:
 *     NvmeNamespaceQueueIo @ 0x14011D6B0 (NvmeNamespaceQueueIo.c)
 */

__int64 __fastcall NvmeNamespaceQueueRequest(__int64 a1, __int64 a2, __int64 a3)
{
  *(_BYTE *)(a2 + 141) = -87;
  return NvmeNamespaceQueueIo(a1, a2, a3);
}
