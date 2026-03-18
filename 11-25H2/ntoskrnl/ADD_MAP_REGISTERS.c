/*
 * XREFs of ADD_MAP_REGISTERS @ 0x140B74A38
 * Callers:
 *     VfAllocateAdapterChannel @ 0x140B751B0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140B75390 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCrashDumpRegisters @ 0x140B75890 (VfAllocateCrashDumpRegisters.c)
 *     VfHalAllocateMapRegisters @ 0x140B770E0 (VfHalAllocateMapRegisters.c)
 *     ViScatterGatherCallback @ 0x140B79B50 (ViScatterGatherCallback.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x140606474 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x140B7923C (ViHalPreprocessOptions.c)
 */

void __fastcall ADD_MAP_REGISTERS(__int64 a1, unsigned int a2, char a3)
{
  unsigned __int32 v5; // esi

  v5 = a2 + _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 192), a2);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 188), a2);
  if ( a2 > *(_DWORD *)(a1 + 184) )
  {
    ViHalPreprocessOptions(Response, "Allocating too many map registers at a time: %x (max %x).", 12, a2);
    VfReportIssueWithOptions(0xE6u, 0xCuLL, a2, *(unsigned int *)(a1 + 184), 0LL, Response);
  }
  if ( !a3 && v5 > *(_DWORD *)(a1 + 184) )
  {
    ViHalPreprocessOptions(byte_140E0E750, "Allocated too many map registers : %x (max %x).", 21, v5);
    VfReportIssueWithOptions(0xE6u, 0x15uLL, v5, *(unsigned int *)(a1 + 184), 0LL, byte_140E0E750);
  }
}
