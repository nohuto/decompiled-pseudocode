/*
 * XREFs of PopPowerRequestTableFree @ 0x140A69A70
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PopPowerRequestTableFree(__int64 a1, void *a2)
{
  ExFreePoolWithTag(a2, 0x54515750u);
}
