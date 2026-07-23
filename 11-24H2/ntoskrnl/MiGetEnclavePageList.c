/*
 * XREFs of MiGetEnclavePageList @ 0x14049FC58
 * Callers:
 *     MiInsertPageInList @ 0x140300420 (MiInsertPageInList.c)
 *     MxInsertEnclaveBootPages @ 0x140C5A354 (MxInsertEnclaveBootPages.c)
 * Callees:
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 */

__int64 __fastcall MiGetEnclavePageList(__int64 a1, ULONG_PTR a2)
{
  return 57216LL * (unsigned int)MiPageToNode(a2) + *(_QWORD *)(a1 + 16) + 57024LL;
}
