/*
 * XREFs of ExpResourceEnforcesOwnershipTransfer @ 0x140405370
 * Callers:
 *     ExpSetResourceOwnerPointerEx @ 0x140303210 (ExpSetResourceOwnerPointerEx.c)
 *     ExDeleteResourceLite @ 0x1403A42F0 (ExDeleteResourceLite.c)
 *     ExReinitializeResourceLite @ 0x1403A4670 (ExReinitializeResourceLite.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpResourceEnforcesOwnershipTransfer(__int64 a1)
{
  return (*(_BYTE *)(a1 + 26) & 1) != 0 || ExpResourceEnforceOwnerTransfer != 0;
}
