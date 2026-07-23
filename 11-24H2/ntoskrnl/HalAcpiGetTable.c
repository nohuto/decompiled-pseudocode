/*
 * XREFs of HalAcpiGetTable @ 0x14053A6E0
 * Callers:
 *     HalpAddDevice @ 0x1406FC520 (HalpAddDevice.c)
 *     HalpDbgInitSystem @ 0x140B4F4D0 (HalpDbgInitSystem.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x14045F918 (HalpAcpiGetTable.c)
 */

__int64 __fastcall HalAcpiGetTable(__int64 a1, int a2)
{
  return HalpAcpiGetTable(a1, a2, 0, 0);
}
