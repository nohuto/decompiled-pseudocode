/*
 * XREFs of DECREMENT_SCATTER_GATHER_LISTS @ 0x140B84C54
 * Callers:
 *     VfBuildScatterGatherList @ 0x140B85AB0 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140B85DB0 (VfBuildScatterGatherListEx.c)
 *     VfGetScatterGatherList @ 0x140B86BE0 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x140B86F30 (VfGetScatterGatherListEx.c)
 *     VfPutScatterGatherList @ 0x140B87980 (VfPutScatterGatherList.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x140612434 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x140B8921C (ViHalPreprocessOptions.c)
 */

void __fastcall DECREMENT_SCATTER_GATHER_LISTS(__int64 a1)
{
  int v2; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 200));
  if ( v2 < 0 )
  {
    ViHalPreprocessOptions(
      byte_140E0E92C,
      "Driver has freed too many scatter gather lists %x allocated, %x freed.",
      6,
      *(_DWORD *)(a1 + 196));
    VfReportIssueWithOptions(
      0xE6u,
      6uLL,
      *(unsigned int *)(a1 + 196),
      (unsigned int)(*(_DWORD *)(a1 + 196) - v2),
      0LL,
      byte_140E0E92C);
  }
}
