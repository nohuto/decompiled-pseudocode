/*
 * XREFs of EtwpCoverageResetWorkItemCallback @ 0x14079BF50
 * Callers:
 *     <none>
 * Callees:
 *     EtwpCoverageReset @ 0x14079BA4C (EtwpCoverageReset.c)
 */

void __fastcall EtwpCoverageResetWorkItemCallback(__int64 a1)
{
  *(_DWORD *)(EtwpCoverageNonPagedContext + 8) = 0;
  EtwpCoverageReset(a1, 2);
}
