/*
 * XREFs of ExtEnvFreeMemory @ 0x14055D3A0
 * Callers:
 *     IvtFreeScalableModePasidTables @ 0x14056B300 (IvtFreeScalableModePasidTables.c)
 *     HsaAllocateRemappingTableEntry @ 0x14056F1A0 (HsaAllocateRemappingTableEntry.c)
 *     HsaCreateDevice @ 0x14056F4D0 (HsaCreateDevice.c)
 *     HsaDeleteDevice @ 0x14056F5F0 (HsaDeleteDevice.c)
 *     HsaFreePasidTables @ 0x14056F99C (HsaFreePasidTables.c)
 *     HsaFreeRemappingTableEntry @ 0x14056FAC0 (HsaFreeRemappingTableEntry.c)
 *     HalpIvtLegacyProcessDrhdEntry @ 0x140574668 (HalpIvtLegacyProcessDrhdEntry.c)
 *     HalpIvtProcessDrhdEntry @ 0x140574EC8 (HalpIvtProcessDrhdEntry.c)
 *     IvtAllocateDevice @ 0x140575738 (IvtAllocateDevice.c)
 *     IvtCreateDevice @ 0x1405757F0 (IvtCreateDevice.c)
 *     IvtDeleteDevice @ 0x1405758E0 (IvtDeleteDevice.c)
 *     HalpIvtCreateReservedDevice @ 0x140575A34 (HalpIvtCreateReservedDevice.c)
 *     DmrFreeRmrrTree @ 0x140576728 (DmrFreeRmrrTree.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x140337DCC (HalpMmAllocCtxFree.c)
 *     HalpMmIsInsideHalVa @ 0x1405406F0 (HalpMmIsInsideHalVa.c)
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
