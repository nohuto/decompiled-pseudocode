/*
 * XREFs of ExInterlockedInsertHeadList @ 0x1403545B0
 * Callers:
 *     CcCanIWrite @ 0x1404DC3B0 (CcCanIWrite.c)
 *     CcDeferWrite @ 0x140577E30 (CcDeferWrite.c)
 *     ViAllocateMapRegisterFile @ 0x140B77ECC (ViAllocateMapRegisterFile.c)
 *     ViHookDmaAdapter @ 0x140B79408 (ViHookDmaAdapter.c)
 *     ViScatterGatherCallback @ 0x140B79B50 (ViScatterGatherCallback.c)
 *     ViSpecialAllocateCommonBuffer @ 0x140B79BE0 (ViSpecialAllocateCommonBuffer.c)
 * Callees:
 *     ExpAcquireSpinLockDisabled @ 0x140354784 (ExpAcquireSpinLockDisabled.c)
 *     ExpReleaseSpinLockDisabled @ 0x140354834 (ExpReleaseSpinLockDisabled.c)
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
