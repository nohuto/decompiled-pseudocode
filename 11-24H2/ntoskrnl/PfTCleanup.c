/*
 * XREFs of PfTCleanup @ 0x140746568
 * Callers:
 *     PfTStart @ 0x140746B0C (PfTStart.c)
 *     PfpPartitionCleanup @ 0x1407473B0 (PfpPartitionCleanup.c)
 *     PfSetSuperfetchInformation @ 0x140932C24 (PfSetSuperfetchInformation.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExAcquireFastMutex @ 0x14033E850 (ExAcquireFastMutex.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     _tlgKeywordOn @ 0x140426AF0 (_tlgKeywordOn.c)
 *     PfFbBufferListInsertInFree @ 0x140477680 (PfFbBufferListInsertInFree.c)
 *     PfpTraceLogPfPartitionId @ 0x1405CCB4C (PfpTraceLogPfPartitionId.c)
 *     PfFbBufferListShutdown @ 0x1405CCC4C (PfFbBufferListShutdown.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     RtlpInterlockedFlushSList @ 0x1406B3910 (RtlpInterlockedFlushSList.c)
 *     PfTCleanupBuffers @ 0x140746824 (PfTCleanupBuffers.c)
 *     PfTTraceListTrim @ 0x140746F14 (PfTTraceListTrim.c)
 *     PfFbBufferListCleanup @ 0x1407489E0 (PfFbBufferListCleanup.c)
 *     PfTTraceListFree @ 0x140950884 (PfTTraceListFree.c)
 *     PfTAccessTracingCleanup @ 0x140B5B46C (PfTAccessTracingCleanup.c)
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
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E074B8, (unsigned __int8 *)&word_140048076, 0LL, 0LL, 3u, v12);
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
               (unsigned __int8 *)byte_140048013,
               0LL,
               0LL,
               3u,
               v12);
    }
  }
  return result;
}
