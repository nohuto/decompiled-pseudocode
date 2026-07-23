/*
 * XREFs of MiDeleteCloneDescriptor @ 0x1404F6498
 * Callers:
 *     MiDecrementCloneBlockReference @ 0x140294D58 (MiDecrementCloneBlockReference.c)
 *     MiDeleteInsertedCloneVads @ 0x1408009A4 (MiDeleteInsertedCloneVads.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x14040EEF0 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiDecrementCloneHeaderCount @ 0x1404F2BD0 (MiDecrementCloneHeaderCount.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

PSLIST_ENTRY __fastcall MiDeleteCloneDescriptor(ULONG_PTR BugCheckParameter1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v5; // rbx
  unsigned __int64 v6; // r8
  __int64 v7; // rdx

  v2 = *(_QWORD *)(a2 + 56);
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 8), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v5 = *(_QWORD *)(v2 + 24);
    v6 = *(_QWORD *)(a2 + 32) - *(_QWORD *)(a2 + 24) + 32LL;
    v7 = *(_QWORD *)(v2 + 16);
    *(_QWORD *)(v7 + 24) = (unsigned int)(v6 >> 12) + ((v6 & 0xFFF) != 0);
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)(v5 + 2384), (PSLIST_ENTRY)v7);
    KeSetEvent((PRKEVENT)(v5 + 2352), 0, 0);
    MiDecrementCloneHeaderCount(v5);
    ExFreePoolWithTag((PVOID)v2, 0);
  }
  PsReturnProcessNonPagedPoolQuota(BugCheckParameter1, *(_QWORD *)(a2 + 64));
  return RtlpInterlockedPushEntrySList(
           (PSLIST_HEADER)(*(_QWORD *)(BugCheckParameter1 + 1040) + 1072LL),
           (PSLIST_ENTRY)(a2 + 80));
}
