/*
 * XREFs of ExInterlockedInsertHeadList @ 0x14042EB80
 * Callers:
 *     CcCanIWrite @ 0x1404DBAA0 (CcCanIWrite.c)
 *     CcDeferWrite @ 0x14057B140 (CcDeferWrite.c)
 *     ViAllocateMapRegisterFile @ 0x140B87EAC (ViAllocateMapRegisterFile.c)
 *     ViHookDmaAdapter @ 0x140B893E8 (ViHookDmaAdapter.c)
 *     ViScatterGatherCallback @ 0x140B89B30 (ViScatterGatherCallback.c)
 *     ViSpecialAllocateCommonBuffer @ 0x140B89BC0 (ViSpecialAllocateCommonBuffer.c)
 * Callees:
 *     ExpAcquireSpinLockDisabled @ 0x14042ED58 (ExpAcquireSpinLockDisabled.c)
 *     ExpReleaseSpinLockDisabled @ 0x14042EE08 (ExpReleaseSpinLockDisabled.c)
 */

PLIST_ENTRY __stdcall ExInterlockedInsertHeadList(PLIST_ENTRY ListHead, PLIST_ENTRY ListEntry, PKSPIN_LOCK Lock)
{
  char v6; // al
  __int64 v7; // rdx
  struct _LIST_ENTRY *Flink; // rbx

  v6 = ExpAcquireSpinLockDisabled(Lock);
  Flink = ListHead->Flink;
  if ( ListHead->Flink->Blink != ListHead )
    __fastfail(3u);
  ListEntry->Flink = Flink;
  LOBYTE(v7) = v6;
  ListEntry->Blink = ListHead;
  Flink->Blink = ListEntry;
  ListHead->Flink = ListEntry;
  ExpReleaseSpinLockDisabled(Lock, v7);
  if ( Flink == ListHead )
    return 0LL;
  return Flink;
}
