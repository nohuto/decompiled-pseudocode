/*
 * XREFs of HalpRestoreDmaControllerState @ 0x140B4E0F0
 * Callers:
 *     HalpAcpiPostSleep @ 0x140B6BE80 (HalpAcpiPostSleep.c)
 * Callees:
 *     HalpMiscIsLegacyPcType @ 0x14054816C (HalpMiscIsLegacyPcType.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     HalpRestoreLegacyDmaControllerState @ 0x140B508A8 (HalpRestoreLegacyDmaControllerState.c)
 */

char __fastcall HalpRestoreDmaControllerState(__int64 a1, __int64 a2)
{
  __int64 i; // rbx
  __int64 v3; // rcx
  char result; // al

  for ( i = HalpDmaControllers; (__int64 *)i != &HalpDmaControllers; i = *(_QWORD *)i )
  {
    v3 = *(_QWORD *)(i + 64);
    *(_BYTE *)(i + 216) = 1;
    guard_dispatch_icall_no_overrides(v3, a2);
  }
  result = HalpMiscIsLegacyPcType();
  if ( result )
    return HalpRestoreLegacyDmaControllerState();
  return result;
}
