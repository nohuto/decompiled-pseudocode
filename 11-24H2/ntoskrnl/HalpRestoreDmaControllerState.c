/*
 * XREFs of HalpRestoreDmaControllerState @ 0x140B4C0AC
 * Callers:
 *     HalpAcpiPostSleep @ 0x140B6A5BC (HalpAcpiPostSleep.c)
 * Callees:
 *     HalpMiscIsLegacyPcType @ 0x14054A8AC (HalpMiscIsLegacyPcType.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     HalpRestoreLegacyDmaControllerState @ 0x140B4E858 (HalpRestoreLegacyDmaControllerState.c)
 */

char __fastcall HalpRestoreDmaControllerState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 i; // rbx
  __int64 v5; // rcx
  char result; // al

  for ( i = HalpDmaControllers; (__int64 *)i != &HalpDmaControllers; i = *(_QWORD *)i )
  {
    v5 = *(_QWORD *)(i + 64);
    *(_BYTE *)(i + 216) = 1;
    guard_dispatch_icall_no_overrides(v5, a2, a3, a4);
  }
  result = HalpMiscIsLegacyPcType();
  if ( result )
    return HalpRestoreLegacyDmaControllerState();
  return result;
}
