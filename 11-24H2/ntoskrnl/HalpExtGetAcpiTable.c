/*
 * XREFs of HalpExtGetAcpiTable @ 0x14054CE70
 * Callers:
 *     <none>
 * Callees:
 *     HalpAcpiGetTable @ 0x140478488 (HalpAcpiGetTable.c)
 */

__int64 __fastcall HalpExtGetAcpiTable(__int64 a1, int a2, char *a3, char *a4)
{
  return HalpAcpiGetTable(HalpExtLoaderBlock, a2, a3, a4);
}
