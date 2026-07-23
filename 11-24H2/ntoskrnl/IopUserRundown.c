/*
 * XREFs of IopUserRundown @ 0x140A1EB00
 * Callers:
 *     <none>
 * Callees:
 *     IoFreeIrp @ 0x1402C30B0 (IoFreeIrp.c)
 */

void __fastcall IopUserRundown(__int64 a1)
{
  IoFreeIrp((PIRP)(a1 - 120));
}
