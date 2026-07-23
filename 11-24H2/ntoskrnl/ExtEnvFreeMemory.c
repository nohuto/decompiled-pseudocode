/*
 * XREFs of ExtEnvFreeMemory @ 0x14055D8D0
 * Callers:
 *     IvtFreeScalableModePasidTables @ 0x14056BA90 (IvtFreeScalableModePasidTables.c)
 *     HsaAllocateRemappingTableEntry @ 0x14056F930 (HsaAllocateRemappingTableEntry.c)
 *     HsaCreateDevice @ 0x14056FC60 (HsaCreateDevice.c)
 *     HsaDeleteDevice @ 0x14056FD80 (HsaDeleteDevice.c)
 *     HsaFreePasidTables @ 0x14057012C (HsaFreePasidTables.c)
 *     HsaFreeRemappingTableEntry @ 0x140570250 (HsaFreeRemappingTableEntry.c)
 *     HalpIvtLegacyProcessDrhdEntry @ 0x140574DF8 (HalpIvtLegacyProcessDrhdEntry.c)
 *     HalpIvtProcessDrhdEntry @ 0x140575658 (HalpIvtProcessDrhdEntry.c)
 *     IvtAllocateDevice @ 0x140575EC8 (IvtAllocateDevice.c)
 *     IvtCreateDevice @ 0x140575F80 (IvtCreateDevice.c)
 *     IvtDeleteDevice @ 0x140576070 (IvtDeleteDevice.c)
 *     HalpIvtCreateReservedDevice @ 0x1405761C4 (HalpIvtCreateReservedDevice.c)
 *     DmrFreeRmrrTree @ 0x140576EB8 (DmrFreeRmrrTree.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x1402EA1C8 (HalpMmAllocCtxFree.c)
 *     HalpMmIsInsideHalVa @ 0x140540870 (HalpMmIsInsideHalVa.c)
 */

void __fastcall ExtEnvFreeMemory(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // r10
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a1;
  LOBYTE(v4) = 0;
  if ( (int)HalpMmIsInsideHalVa(a2, (bool *)&v4) >= 0 && !(_BYTE)v4 )
    HalpMmAllocCtxFree(v2, v3);
}
