/*
 * XREFs of HalAcpiGetTable @ 0x14053A5B0
 * Callers:
 *     HalpAddDevice @ 0x1406F2AF0 (HalpAddDevice.c)
 *     HalpDbgInitSystem @ 0x140B3D480 (HalpDbgInitSystem.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x1404130F8 (HalpAcpiGetTable.c)
 */

__int64 __fastcall HalAcpiGetTable(__int64 a1, int a2)
{
  return HalpAcpiGetTable(a1, a2, 0, 0);
}
