/*
 * XREFs of IopApcHardError @ 0x140A4DFE0
 * Callers:
 *     <none>
 * Callees:
 *     IopRaiseHardError @ 0x140A4E020 (IopRaiseHardError.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall IopApcHardError(PIRP *P)
{
  IopRaiseHardError(P[4]);
  ExFreePoolWithTag(P, 0);
}
