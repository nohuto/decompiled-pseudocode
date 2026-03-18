/*
 * XREFs of HalpDmaExtractFromVerifierShadowAdapter @ 0x1404ADBA4
 * Callers:
 *     HalDmaFreeCrashDumpRegistersEx @ 0x1404ADAE0 (HalDmaFreeCrashDumpRegistersEx.c)
 *     HalAllocateAdapterChannel @ 0x14053AEC0 (HalAllocateAdapterChannel.c)
 *     HalAllocateCrashDumpRegisters @ 0x14053B180 (HalAllocateCrashDumpRegisters.c)
 *     HalDmaAllocateCrashDumpRegistersEx @ 0x14053B280 (HalDmaAllocateCrashDumpRegistersEx.c)
 *     HalpAllocateMapRegisters @ 0x1406F1E70 (HalpAllocateMapRegisters.c)
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
