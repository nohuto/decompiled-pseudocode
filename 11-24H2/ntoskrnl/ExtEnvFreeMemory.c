/*
 * XREFs of ExtEnvFreeMemory @ 0x14055FCA0
 * Callers:
 *     IvtFreeScalableModePasidTables @ 0x14056E600 (IvtFreeScalableModePasidTables.c)
 *     HsaAllocateRemappingTableEntry @ 0x1405724A0 (HsaAllocateRemappingTableEntry.c)
 *     HsaCreateDevice @ 0x1405727D0 (HsaCreateDevice.c)
 *     HsaDeleteDevice @ 0x1405728F0 (HsaDeleteDevice.c)
 *     HsaFreePasidTables @ 0x140572C9C (HsaFreePasidTables.c)
 *     HsaFreeRemappingTableEntry @ 0x140572DC0 (HsaFreeRemappingTableEntry.c)
 *     HalpIvtLegacyProcessDrhdEntry @ 0x140577968 (HalpIvtLegacyProcessDrhdEntry.c)
 *     HalpIvtProcessDrhdEntry @ 0x1405781C8 (HalpIvtProcessDrhdEntry.c)
 *     IvtAllocateDevice @ 0x140578A38 (IvtAllocateDevice.c)
 *     IvtCreateDevice @ 0x140578AF0 (IvtCreateDevice.c)
 *     IvtDeleteDevice @ 0x140578BE0 (IvtDeleteDevice.c)
 *     HalpIvtCreateReservedDevice @ 0x140578D34 (HalpIvtCreateReservedDevice.c)
 *     DmrFreeRmrrTree @ 0x140579A28 (DmrFreeRmrrTree.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x14037CBAC (HalpMmAllocCtxFree.c)
 *     HalpMmIsInsideHalVa @ 0x140542F20 (HalpMmIsInsideHalVa.c)
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
