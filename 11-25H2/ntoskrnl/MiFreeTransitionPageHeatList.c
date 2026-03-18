/*
 * XREFs of MiFreeTransitionPageHeatList @ 0x1404D94B8
 * Callers:
 *     MmCopyToCachedPage @ 0x140223414 (MmCopyToCachedPage.c)
 *     MmCheckCachedPageStates @ 0x14025B020 (MmCheckCachedPageStates.c)
 *     MmAccessFault @ 0x1402B5880 (MmAccessFault.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeTransitionPageHeatList(PSLIST_ENTRY ListEntry)
{
  if ( LOWORD(stru_140E35A00.Alignment) >= 0x40u )
    ExFreePoolWithTag(ListEntry, 0);
  else
    RtlpInterlockedPushEntrySList(&stru_140E35A00, ListEntry);
}
