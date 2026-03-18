/*
 * XREFs of HalAcpiGetTable @ 0x14053CDE0
 * Callers:
 *     HalpAddDevice @ 0x1406FE8E0 (HalpAddDevice.c)
 *     HalpDbgInitSystem @ 0x140B4D480 (HalpDbgInitSystem.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x140478488 (HalpAcpiGetTable.c)
 */

__int64 __fastcall HalAcpiGetTable(__int64 a1, int a2)
{
  return HalpAcpiGetTable(a1, a2, 0LL, 0LL);
}
