/*
 * XREFs of ExpResourceEnforcesOwnershipTransfer @ 0x1402CEBD0
 * Callers:
 *     ExDeleteResourceLite @ 0x1402CD920 (ExDeleteResourceLite.c)
 *     ExReinitializeResourceLite @ 0x1402CDC90 (ExReinitializeResourceLite.c)
 *     ExpSetResourceOwnerPointerEx @ 0x1402CEC30 (ExpSetResourceOwnerPointerEx.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpResourceEnforcesOwnershipTransfer(__int64 a1)
{
  return (*(_BYTE *)(a1 + 26) & 1) != 0 || ExpResourceEnforceOwnerTransfer != 0;
}
