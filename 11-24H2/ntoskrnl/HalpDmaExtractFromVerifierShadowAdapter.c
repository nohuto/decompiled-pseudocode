/*
 * XREFs of HalpDmaExtractFromVerifierShadowAdapter @ 0x1404A93D4
 * Callers:
 *     HalDmaFreeCrashDumpRegistersEx @ 0x1404A9310 (HalDmaFreeCrashDumpRegistersEx.c)
 *     HalAllocateAdapterChannel @ 0x14053AFF0 (HalAllocateAdapterChannel.c)
 *     HalAllocateCrashDumpRegisters @ 0x14053B2B0 (HalAllocateCrashDumpRegisters.c)
 *     HalDmaAllocateCrashDumpRegistersEx @ 0x14053B3B0 (HalDmaAllocateCrashDumpRegistersEx.c)
 *     HalpAllocateMapRegisters @ 0x1406FB8A0 (HalpAllocateMapRegisters.c)
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
