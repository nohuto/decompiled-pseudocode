/*
 * XREFs of IopApcHardError @ 0x140A4B970
 * Callers:
 *     <none>
 * Callees:
 *     IopRaiseHardError @ 0x140A4B9B0 (IopRaiseHardError.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall IopApcHardError(PIRP *P)
{
  IopRaiseHardError(P[4]);
  ExFreePoolWithTag(P, 0);
}
