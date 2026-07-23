/*
 * XREFs of KeSetProfileIrql @ 0x140C28BB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall KeSetProfileIrql(char a1)
{
  KiProfileIrql = a1;
}
