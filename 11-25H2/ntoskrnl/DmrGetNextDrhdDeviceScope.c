/*
 * XREFs of DmrGetNextDrhdDeviceScope @ 0x140576150
 * Callers:
 *     HalpIvtLegacyProcessDrhdEntry @ 0x140574668 (HalpIvtLegacyProcessDrhdEntry.c)
 *     HalpIvtProcessDrhdEntry @ 0x140574EC8 (HalpIvtProcessDrhdEntry.c)
 *     DmrFindDrhdForDeviceScope @ 0x1405760B0 (DmrFindDrhdForDeviceScope.c)
 *     DmrValidateDeviceScope @ 0x1405764DC (DmrValidateDeviceScope.c)
 * Callees:
 *     DmrGetNextDeviceScope @ 0x140576440 (DmrGetNextDeviceScope.c)
 */

__int64 __fastcall DmrGetNextDrhdDeviceScope(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rdx

  v3 = a1 + *(unsigned __int16 *)(a1 + 2);
  if ( v3 > a1 )
    return DmrGetNextDeviceScope(a1 + 16, v3, a2);
  else
    return 0LL;
}
