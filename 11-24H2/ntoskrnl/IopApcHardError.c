/*
 * XREFs of IopApcHardError @ 0x140A44C60
 * Callers:
 *     <none>
 * Callees:
 *     IopRaiseHardError @ 0x140A44CA0 (IopRaiseHardError.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall IopApcHardError(PIRP *P)
{
  IopRaiseHardError(P[4]);
  ExFreePoolWithTag(P, 0);
}
