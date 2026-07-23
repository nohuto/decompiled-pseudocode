/*
 * XREFs of SUBTRACT_MAP_REGISTERS @ 0x140B86E20
 * Callers:
 *     ViFlushZeroMapRegisterBaseWcbs @ 0x14060F2DC (ViFlushZeroMapRegisterBaseWcbs.c)
 *     VfAllocateAdapterChannel @ 0x140B87190 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140B87370 (VfAllocateAdapterChannelEx.c)
 *     VfCancelAdapterChannel @ 0x140B87FE0 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x140B88490 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x140B88540 (VfFreeAdapterObject.c)
 *     VfFreeMapRegisters @ 0x140B887E0 (VfFreeMapRegisters.c)
 *     VfPutScatterGatherList @ 0x140B89980 (VfPutScatterGatherList.c)
 *     ViAdapterCallback @ 0x140B89B50 (ViAdapterCallback.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1406109F4 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x140B8B21C (ViHalPreprocessOptions.c)
 */

void __fastcall SUBTRACT_MAP_REGISTERS(__int64 a1, int a2)
{
  int v3; // eax
  ULONG_PTR v4; // rbx

  v3 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 192), -a2) - a2;
  if ( v3 < 0 )
  {
    v4 = -v3;
    ViHalPreprocessOptions(byte_140E0E9C8, "Freed too many map registers: -%x.", 5);
    VfReportIssueWithOptions(0xE6u, 5uLL, v4, 0LL, 0LL, byte_140E0E9C8);
  }
  _InterlockedExchange((volatile __int32 *)(a1 + 220), 0);
}
