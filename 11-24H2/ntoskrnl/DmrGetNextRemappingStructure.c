/*
 * XREFs of DmrGetNextRemappingStructure @ 0x140576C18
 * Callers:
 *     HalpIvtProcessDmarTable @ 0x14057558C (HalpIvtProcessDmarTable.c)
 *     DmrFindDrhdForDeviceScope @ 0x140576840 (DmrFindDrhdForDeviceScope.c)
 *     DmrEnumerateSatcDevices @ 0x140576A70 (DmrEnumerateSatcDevices.c)
 *     DmrValidateDeviceScope @ 0x140576C6C (DmrValidateDeviceScope.c)
 *     DmrEnumerateRmrrDomains @ 0x140576D60 (DmrEnumerateRmrrDomains.c)
 *     IvtCheckForReservedRegion @ 0x140702270 (IvtCheckForReservedRegion.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall DmrGetNextRemappingStructure(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned __int64 v3; // r9
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx

  v2 = 0LL;
  v3 = a1 + *(unsigned int *)(a1 + 4);
  if ( v3 <= a1 )
    return 0LL;
  if ( a2 )
    v5 = a2 + *(unsigned __int16 *)(a2 + 2);
  else
    v5 = a1 + 48;
  if ( v5 + 4 >= v5 && v5 + 4 <= v3 )
  {
    v6 = v5 + *(unsigned __int16 *)(v5 + 2);
    if ( v6 > v5 && v6 <= v3 )
      return v5;
  }
  return v2;
}
