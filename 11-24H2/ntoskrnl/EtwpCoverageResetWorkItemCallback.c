/*
 * XREFs of EtwpCoverageResetWorkItemCallback @ 0x1407AB320
 * Callers:
 *     <none>
 * Callees:
 *     EtwpCoverageReset @ 0x1407AAE1C (EtwpCoverageReset.c)
 */

void __fastcall EtwpCoverageResetWorkItemCallback(__int64 a1)
{
  *(_DWORD *)(EtwpCoverageNonPagedContext + 8) = 0;
  EtwpCoverageReset(a1, 2);
}
