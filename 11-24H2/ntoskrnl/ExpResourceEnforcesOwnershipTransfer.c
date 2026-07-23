/*
 * XREFs of ExpResourceEnforcesOwnershipTransfer @ 0x1403FECB0
 * Callers:
 *     ExDeleteResourceLite @ 0x1402E55A0 (ExDeleteResourceLite.c)
 *     ExReinitializeResourceLite @ 0x1402E5910 (ExReinitializeResourceLite.c)
 *     ExpSetResourceOwnerPointerEx @ 0x1403FE770 (ExpSetResourceOwnerPointerEx.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpResourceEnforcesOwnershipTransfer(__int64 a1)
{
  return (*(_BYTE *)(a1 + 26) & 1) != 0 || ExpResourceEnforceOwnerTransfer != 0;
}
