/*
 * XREFs of PopPowerRequestTableFree @ 0x140A6E400
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PopPowerRequestTableFree(__int64 a1, void *a2)
{
  ExFreePoolWithTag(a2, 0x54515750u);
}
