/*
 * XREFs of HalpRestoreDmaControllerState @ 0x140B3C0AC
 * Callers:
 *     HalpAcpiPostSleep @ 0x140B5AABC (HalpAcpiPostSleep.c)
 * Callees:
 *     HalpMiscIsLegacyPcType @ 0x140547FBC (HalpMiscIsLegacyPcType.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     HalpRestoreLegacyDmaControllerState @ 0x140B3E858 (HalpRestoreLegacyDmaControllerState.c)
 */

char HalpRestoreDmaControllerState()
{
  __int64 i; // rbx
  __int64 v1; // rcx
  char result; // al

  for ( i = HalpDmaControllers; (__int64 *)i != &HalpDmaControllers; i = *(_QWORD *)i )
  {
    v1 = *(_QWORD *)(i + 64);
    *(_BYTE *)(i + 216) = 1;
    guard_dispatch_icall_no_overrides(v1);
  }
  result = HalpMiscIsLegacyPcType();
  if ( result )
    return HalpRestoreLegacyDmaControllerState();
  return result;
}
