/*
 * XREFs of KeIsEmptyGroupMask @ 0x140304FE8
 * Callers:
 *     PoCopyDeepIdleMask @ 0x14026728C (PoCopyDeepIdleMask.c)
 *     ExpWorkerThread @ 0x1403047F0 (ExpWorkerThread.c)
 *     PpmEventTraceHeteroSets @ 0x140427BB0 (PpmEventTraceHeteroSets.c)
 *     PpmGetIdleConstrainedMask @ 0x1404B1924 (PpmGetIdleConstrainedMask.c)
 *     PspBuildCreateProcessContext @ 0x1408F0220 (PspBuildCreateProcessContext.c)
 *     PspReadIFEONodeOptions @ 0x1409C1F1C (PspReadIFEONodeOptions.c)
 *     PspSelectNodeForProcess @ 0x140A743A0 (PspSelectNodeForProcess.c)
 *     KiConfigureProcessorBlock @ 0x140B46004 (KiConfigureProcessorBlock.c)
 *     KiComputeNumaCosts @ 0x140C1681C (KiComputeNumaCosts.c)
 * Callees:
 *     RtlNumberOfSetBitsEx @ 0x140305240 (RtlNumberOfSetBitsEx.c)
 */

_BOOL8 __fastcall KeIsEmptyGroupMask(__int64 a1)
{
  _QWORD v2[3]; // [rsp+20h] [rbp-18h] BYREF

  v2[1] = a1;
  v2[0] = 32LL;
  return RtlNumberOfSetBitsEx(v2) == 0;
}
