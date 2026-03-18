/*
 * XREFs of MiSetPfnOldestWsleLeafAge @ 0x140385A24
 * Callers:
 *     MiSetVaAgeList @ 0x140249BE0 (MiSetVaAgeList.c)
 *     MiAddWorkingSetEntries @ 0x1402BA2B0 (MiAddWorkingSetEntries.c)
 *     MiRebuildPageTableAges @ 0x140385AC4 (MiRebuildPageTableAges.c)
 *     MiFastTrimWorkingSet @ 0x1403C4B40 (MiFastTrimWorkingSet.c)
 * Callees:
 *     MiInsertActivePageTableLinksTail @ 0x14038556C (MiInsertActivePageTableLinksTail.c)
 *     MiRemoveActivePageTableLinks @ 0x14038573C (MiRemoveActivePageTableLinks.c)
 */

void __fastcall MiSetPfnOldestWsleLeafAge(__int64 a1, __int64 a2, unsigned __int8 a3, __int16 a4, int a5)
{
  __int64 v5; // rbx

  v5 = *(_QWORD *)a2;
  if ( (*(_DWORD *)(a2 + 36) & 0x4000000) != 0 )
    MiRemoveActivePageTableLinks(a1, a2, a5);
  *(_QWORD *)a2 = v5 & 0xFC001FFFFFFFFFFFuLL | ((a4 & 0x3FF | ((unsigned __int64)(a3 & 7) << 10)) << 45);
  MiInsertActivePageTableLinksTail(a1, a2, a3, a5);
}
