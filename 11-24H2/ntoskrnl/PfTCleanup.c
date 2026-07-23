/*
 * XREFs of PfTCleanup @ 0x140744858
 * Callers:
 *     PfTStart @ 0x140744DFC (PfTStart.c)
 *     PfpPartitionCleanup @ 0x1407456A0 (PfpPartitionCleanup.c)
 *     PfSetSuperfetchInformation @ 0x1408F573C (PfSetSuperfetchInformation.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     PfFbBufferListInsertInFree @ 0x140473C20 (PfFbBufferListInsertInFree.c)
 *     PfpTraceLogPfPartitionId @ 0x1405CA2BC (PfpTraceLogPfPartitionId.c)
 *     PfFbBufferListShutdown @ 0x1405CA3BC (PfFbBufferListShutdown.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlpInterlockedFlushSList @ 0x1406B48B0 (RtlpInterlockedFlushSList.c)
 *     PfTCleanupBuffers @ 0x140744B14 (PfTCleanupBuffers.c)
 *     PfTTraceListTrim @ 0x140745204 (PfTTraceListTrim.c)
 *     PfFbBufferListCleanup @ 0x140746CD0 (PfFbBufferListCleanup.c)
 *     PfTTraceListFree @ 0x140972BA4 (PfTTraceListFree.c)
 *     PfTAccessTracingCleanup @ 0x140B5D4DC (PfTAccessTracingCleanup.c)
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
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E074B8, (unsigned __int8 *)&word_140048476, 0LL, 0LL, 3u, v12);
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
               (unsigned __int8 *)&word_14004844E,
               0LL,
               0LL,
               3u,
               v12);
    }
  }
  return result;
}
