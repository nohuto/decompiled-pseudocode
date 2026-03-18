/*
 * XREFs of IopUserRundown @ 0x140A2B860
 * Callers:
 *     <none>
 * Callees:
 *     IoFreeIrp @ 0x14031A520 (IoFreeIrp.c)
 */

void __fastcall IopUserRundown(__int64 a1)
{
  IoFreeIrp((PIRP)(a1 - 120));
}
