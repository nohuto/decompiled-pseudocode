/*
 * XREFs of PfTCleanup @ 0x14073A548
 * Callers:
 *     PfTStart @ 0x14073AAEC (PfTStart.c)
 *     PfpPartitionCleanup @ 0x14073B390 (PfpPartitionCleanup.c)
 *     PfSetSuperfetchInformation @ 0x1408E9C54 (PfSetSuperfetchInformation.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     PfFbBufferListInsertInFree @ 0x140477A20 (PfFbBufferListInsertInFree.c)
 *     PfpTraceLogPfPartitionId @ 0x1405C857C (PfpTraceLogPfPartitionId.c)
 *     PfFbBufferListShutdown @ 0x1405C867C (PfFbBufferListShutdown.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlpInterlockedFlushSList @ 0x1406A8640 (RtlpInterlockedFlushSList.c)
 *     PfTCleanupBuffers @ 0x14073A804 (PfTCleanupBuffers.c)
 *     PfTTraceListTrim @ 0x14073AEF4 (PfTTraceListTrim.c)
 *     PfFbBufferListCleanup @ 0x14073C9D0 (PfFbBufferListCleanup.c)
 *     PfTTraceListFree @ 0x140A49614 (PfTTraceListFree.c)
 *     PfTAccessTracingCleanup @ 0x140B4B4FC (PfTAccessTracingCleanup.c)
 */

char __fastcall PfTCleanup(__int64 a1, unsigned int a2)
{
  bool v4; // r14
  __int64 v5; // r8
  PSLIST_ENTRY v6; // rbx
  PSLIST_ENTRY v7; // rdx
  char result; // al
  void *v9; // rcx
  int v10; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v11[2]; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12[2]; // [rsp+48h] [rbp-38h] BYREF
  int *v13; // [rsp+68h] [rbp-18h]
  __int64 v14; // [rsp+70h] [rbp-10h]

  if ( (unsigned int)dword_140E074B8 > 4 && tlgKeywordOn((__int64)&dword_140E074B8, 2LL) )
  {
    v10 = PfpTraceLogPfPartitionId((__int64 *)a1);
    v14 = 4LL;
    v13 = &v10;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E074B8, (unsigned __int8 *)byte_140047B49, 0LL, 0LL, 3u, v12);
  }
  v11[1] = v11;
  v11[0] = v11;
  v4 = KeGetCurrentThread() == *(struct _KTHREAD **)(a1 + 168);
  PfTAccessTracingCleanup(a1, 1LL, a2);
  ExAcquireFastMutex((PKGUARDED_MUTEX)(a1 + 624));
  *(_DWORD *)(a1 + 604) = 0;
  *(_DWORD *)(a1 + 612) = 0;
  PfTTraceListTrim(a1, 0LL, 0LL, v11);
  PfTTraceListTrim(a1, (unsigned int)(v5 + 1), v5, v11);
  *(_DWORD *)(a1 + 616) = 0;
  PfTAccessTracingCleanup(a1, 2LL, a2);
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 624));
  PfTTraceListFree(a1, v11);
  *(_DWORD *)(a1 + 560) = 0;
  v6 = RtlpInterlockedFlushSList((PSLIST_HEADER)(a1 + 544));
  while ( v6 )
  {
    v7 = v6;
    v6 = v6->Next;
    PfFbBufferListInsertInFree(
      (_SLIST_ENTRY *)(a1 + 416),
      v7,
      LODWORD(v7[2].Next) - (_DWORD)v7,
      *((_DWORD *)&v7[2].Next + 3),
      1);
  }
  PfFbBufferListShutdown((struct _EX_RUNDOWN_REF *)(a1 + 288));
  PfFbBufferListShutdown((struct _EX_RUNDOWN_REF *)(a1 + 416));
  if ( !v4 && *(_QWORD *)(a1 + 168) )
  {
    KeSetEvent((PRKEVENT)(a1 + 264), 0, 0);
    KeWaitForSingleObject(*(PVOID *)(a1 + 168), Executive, 0, 0, 0LL);
    ObfDereferenceObject(*(PVOID *)(a1 + 168));
    *(_QWORD *)(a1 + 168) = 0LL;
  }
  PfTCleanupBuffers(a1 + 88);
  PfTCleanupBuffers(a1 + 128);
  PfFbBufferListCleanup(a1 + 288);
  result = PfFbBufferListCleanup(a1 + 416);
  v9 = *(void **)(a1 + 680);
  if ( v9 )
  {
    result = ObfDereferenceObject(v9);
    *(_QWORD *)(a1 + 680) = 0LL;
  }
  *(_DWORD *)(a1 + 72) = 0;
  if ( (unsigned int)dword_140E074B8 > 4 )
  {
    result = tlgKeywordOn((__int64)&dword_140E074B8, 2LL);
    if ( result )
    {
      v10 = PfpTraceLogPfPartitionId((__int64 *)a1);
      v14 = 4LL;
      v13 = &v10;
      return tlgWriteTransfer_EtwWriteTransfer(
               (__int64)&dword_140E074B8,
               (unsigned __int8 *)byte_140047A85,
               0LL,
               0LL,
               3u,
               v12);
    }
  }
  return result;
}
