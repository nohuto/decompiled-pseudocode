/*
 * XREFs of MiInsertInPageBlock @ 0x14023B570
 * Callers:
 *     MiFreeInPageSupportBlock @ 0x14023B4B0 (MiFreeInPageSupportBlock.c)
 *     MiInitializePageFaultResources @ 0x14066CCBC (MiInitializePageFaultResources.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall MiInsertInPageBlock(PSLIST_ENTRY ListEntry)
{
  __int64 v2; // rcx
  _SLIST_HEADER *v3; // rcx

  v2 = ((unsigned int)~LODWORD(ListEntry[12].Next) >> 8) & 1;
  if ( (unsigned __int64)ListEntry >= *((_QWORD *)&MiState + v2 + 5397)
    && (unsigned __int64)ListEntry < *((_QWORD *)&MiState + v2 + 5399) )
  {
    v3 = (_SLIST_HEADER *)((char *)&unk_140E37080 + 16 * v2);
LABEL_6:
    RtlpInterlockedPushEntrySList(v3, ListEntry);
    return 1LL;
  }
  if ( (unsigned int)*((_WORD *)&MiState + 8 * v2 + 21552) < *((unsigned __int8 *)&MiState + v2 + 43168) )
  {
    v3 = (_SLIST_HEADER *)(&MiState + 4 * v2 + 10776);
    goto LABEL_6;
  }
  return 0LL;
}
