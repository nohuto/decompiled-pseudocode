/*
 * XREFs of MiGetEnclavePageList @ 0x1404A4998
 * Callers:
 *     MiInsertPageInList @ 0x14021AFB0 (MiInsertPageInList.c)
 *     MxInsertEnclaveBootPages @ 0x140C46EE4 (MxInsertEnclaveBootPages.c)
 * Callees:
 *     MiPageToNode @ 0x140346EA0 (MiPageToNode.c)
 */

__int64 __fastcall MiGetEnclavePageList(__int64 a1, ULONG_PTR a2)
{
  return 57216LL * (unsigned int)MiPageToNode(a2) + *(_QWORD *)(a1 + 16) + 57024LL;
}
