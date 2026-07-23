/*
 * XREFs of InterlockedPushListSList @ 0x1406B48E0
 * Callers:
 *     ExAllocateHeapPool @ 0x140277790 (ExAllocateHeapPool.c)
 *     EtwpCovSampCaptureQueueDpc @ 0x14044E5D0 (EtwpCovSampCaptureQueueDpc.c)
 *     EtwpCovSampPushListSList @ 0x140451AC4 (EtwpCovSampPushListSList.c)
 *     MiReplenishPageSlist @ 0x1404F1A70 (MiReplenishPageSlist.c)
 *     HvlpSetupCachedHypercallPages @ 0x140582884 (HvlpSetupCachedHypercallPages.c)
 *     SmHwAcceleratorParitionCtxCreate @ 0x14079C9E8 (SmHwAcceleratorParitionCtxCreate.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __stdcall InterlockedPushListSList(
        PSLIST_HEADER ListHead,
        PSLIST_ENTRY List,
        PSLIST_ENTRY ListEnd,
        ULONG Count)
{
  __int128 v6; // rax
  _SLIST_ENTRY *v7; // r10
  signed __int64 v8; // rbx
  __int128 v9; // rt0
  unsigned __int8 v10; // tt

  _m_prefetchw(ListHead);
  *(_QWORD *)&v6 = ListHead->Alignment;
  *((_QWORD *)&v6 + 1) = ListHead->Region;
  do
  {
    v7 = (_SLIST_ENTRY *)*((_QWORD *)&v6 + 1);
    LOBYTE(v7) = BYTE8(v6) & 0xF0;
    ListEnd->Next = v7;
    v8 = v6 + 0x20000;
    LOWORD(v8) = v6 + Count;
    v9 = v6;
    v10 = _InterlockedCompareExchange128(
            (volatile signed __int64 *)ListHead,
            (signed __int64)List,
            v8,
            (signed __int64 *)&v9);
    v6 = v9;
  }
  while ( !v10 );
  return v7;
}
