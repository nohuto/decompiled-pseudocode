/*
 * XREFs of NvmeAdapterDeferredRoutine @ 0x1400CE380
 * Callers:
 *     <none>
 * Callees:
 *     RaidFreeDeferredItem @ 0x14003D314 (RaidFreeDeferredItem.c)
 */

PSLIST_ENTRY __fastcall NvmeAdapterDeferredRoutine(__int64 a1, LARGE_INTEGER *a2)
{
  __int64 v2; // rbx

  v2 = *(_QWORD *)(a1 + 64);
  _InterlockedIncrement((volatile signed __int32 *)(v2 + 1088));
  if ( a2[4].LowPart == 1 )
    KeSetCoalescableTimer((PKTIMER)(a2[5].QuadPart + 8), a2[6], 0, a2[7].LowPart, (PKDPC)(a2[5].QuadPart + 72));
  _InterlockedDecrement((volatile signed __int32 *)(v2 + 1088));
  return RaidFreeDeferredItem((union _SLIST_HEADER *)(v2 + 608), (__int64)a2);
}
