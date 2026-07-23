/*
 * XREFs of EtwpCoverageResetWorkItemCallback @ 0x1407AB7F0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpCoverageReset @ 0x1407AB2EC (EtwpCoverageReset.c)
 */

void __fastcall EtwpCoverageResetWorkItemCallback(__int64 a1)
{
  *(_DWORD *)(EtwpCoverageNonPagedContext + 8) = 0;
  EtwpCoverageReset(a1, 2LL);
}
