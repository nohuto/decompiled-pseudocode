/*
 * XREFs of MiGetEnclavePageList @ 0x1404A4EC8
 * Callers:
 *     MiInsertPageInList @ 0x14022CB10 (MiInsertPageInList.c)
 *     MxInsertEnclaveBootPages @ 0x140C581C4 (MxInsertEnclaveBootPages.c)
 * Callees:
 *     MiPageToNode @ 0x14026C1E0 (MiPageToNode.c)
 */

__int64 __fastcall MiGetEnclavePageList(__int64 a1, ULONG_PTR a2)
{
  return 57216LL * (unsigned int)MiPageToNode(a2) + *(_QWORD *)(a1 + 16) + 57024LL;
}
