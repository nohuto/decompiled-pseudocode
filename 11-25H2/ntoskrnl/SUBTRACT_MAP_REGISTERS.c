/*
 * XREFs of SUBTRACT_MAP_REGISTERS @ 0x140B74E40
 * Callers:
 *     ViFlushZeroMapRegisterBaseWcbs @ 0x140604D5C (ViFlushZeroMapRegisterBaseWcbs.c)
 *     VfAllocateAdapterChannel @ 0x140B751B0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140B75390 (VfAllocateAdapterChannelEx.c)
 *     VfCancelAdapterChannel @ 0x140B76000 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x140B764B0 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x140B76560 (VfFreeAdapterObject.c)
 *     VfFreeMapRegisters @ 0x140B76800 (VfFreeMapRegisters.c)
 *     VfPutScatterGatherList @ 0x140B779A0 (VfPutScatterGatherList.c)
 *     ViAdapterCallback @ 0x140B77B70 (ViAdapterCallback.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x140606474 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x140B7923C (ViHalPreprocessOptions.c)
 */

void __fastcall SUBTRACT_MAP_REGISTERS(__int64 a1, int a2)
{
  int v3; // eax
  ULONG_PTR v4; // rbx

  v3 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 192), -a2) - a2;
  if ( v3 < 0 )
  {
    v4 = -v3;
    ViHalPreprocessOptions(byte_140E0E748, "Freed too many map registers: -%x.", 5);
    VfReportIssueWithOptions(0xE6u, 5uLL, v4, 0LL, 0LL, byte_140E0E748);
  }
  _InterlockedExchange((volatile __int32 *)(a1 + 220), 0);
}
