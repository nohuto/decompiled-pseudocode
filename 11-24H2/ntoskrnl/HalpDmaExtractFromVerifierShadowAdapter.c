/*
 * XREFs of HalpDmaExtractFromVerifierShadowAdapter @ 0x1404AEAC4
 * Callers:
 *     HalDmaFreeCrashDumpRegistersEx @ 0x1404AEA00 (HalDmaFreeCrashDumpRegistersEx.c)
 *     HalAllocateAdapterChannel @ 0x14053D6F0 (HalAllocateAdapterChannel.c)
 *     HalAllocateCrashDumpRegisters @ 0x14053D9B0 (HalAllocateCrashDumpRegisters.c)
 *     HalDmaAllocateCrashDumpRegistersEx @ 0x14053DAB0 (HalDmaAllocateCrashDumpRegistersEx.c)
 *     HalpAllocateMapRegisters @ 0x1406FDC60 (HalpAllocateMapRegisters.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpDmaExtractFromVerifierShadowAdapter(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 16) == 1634550870 )
    return *(_QWORD *)(a1 + 24);
  else
    return a1;
}
