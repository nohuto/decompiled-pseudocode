/*
 * XREFs of RtlpHpStackTraceAddStack @ 0x1800DF290
 * Callers:
 *     RtlpAllocateNTHeapInternal @ 0x1800283A0 (RtlpAllocateNTHeapInternal.c)
 *     RtlpReAllocateHeapInternal @ 0x1800A1040 (RtlpReAllocateHeapInternal.c)
 *     RtlpHpAllocateHeapSlow @ 0x1800ACEF0 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpReAllocateHeapSlow @ 0x18011C8F0 (RtlpHpReAllocateHeapSlow.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180010280 (RtlReleaseSRWLockShared.c)
 *     RtlpHpMetadataAlloc @ 0x180010830 (RtlpHpMetadataAlloc.c)
 *     RtlpAcquireSRWLockSharedContended @ 0x180017E40 (RtlpAcquireSRWLockSharedContended.c)
 *     RtlCaptureStackBackTrace @ 0x18003C700 (RtlCaptureStackBackTrace.c)
 *     RtlpHpMetadataFree @ 0x18004EF28 (RtlpHpMetadataFree.c)
 *     RtlRunOnceExecuteOnce @ 0x180098200 (RtlRunOnceExecuteOnce.c)
 *     RtlpHpStackTraceAllocAdd @ 0x1800DF434 (RtlpHpStackTraceAllocAdd.c)
 *     RtlStackDbStackAdd @ 0x18011DD88 (RtlStackDbStackAdd.c)
 *     RtlStackDbStackRemove @ 0x18011E5D8 (RtlStackDbStackRemove.c)
 */

__int64 __fastcall RtlpHpStackTraceAddStack(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  char *SchedulerSharedDataSlot; // r9
  unsigned int i; // r8d
  char *v7; // rax
  unsigned __int64 v8; // rax
  __int64 result; // rax
  PVOID *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdi
  bool v13; // zf
  __int64 v14; // rcx
  __int128 v15; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v16; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0LL;
  SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    for ( i = 0; i < 8; ++i )
    {
      v7 = &SchedulerSharedDataSlot[8 * i];
      if ( !*(_QWORD *)v7 )
      {
        if ( v7 )
          *(_QWORD *)v7 = &RtlpHpStackTrackingContext;
        break;
      }
    }
  }
  v8 = _InterlockedCompareExchange64(&RtlpHpStackTrackingContext, 17LL, 0LL);
  if ( v8 )
    RtlpAcquireSRWLockSharedContended(
      (unsigned __int64)&RtlpHpStackTrackingContext,
      a2,
      v8,
      (unsigned __int64)SchedulerSharedDataSlot);
  if ( (dword_1801CE8C8 & 1) != 0 && (dword_1801CE8C8 & 2) != 0 )
  {
    v13 = *(_DWORD *)(a1 + 16) == -571548178;
    v16 = 0LL;
    v14 = 112LL;
    if ( !v13 )
      v14 = 368LL;
    if ( (int)RtlRunOnceExecuteOnce(
                (volatile signed __int64 *)(a1 + v14),
                (unsigned int (__fastcall *)(volatile signed __int64 *, __int64, unsigned __int64 *))RtlpHpPerHeapStackTraceInitialize,
                0LL,
                &v16) >= 0 )
    {
      v15 = RtlpHpEnvHandle;
      v10 = (PVOID *)RtlpHpMetadataAlloc(0x600uLL, 0x600uLL, 0, &v15);
      v2 = (__int64)v10;
      if ( v10 )
      {
        if ( RtlCaptureStackBackTrace(1u, 0xC0u, v10, 0LL) )
        {
          v11 = RtlStackDbStackAdd(&qword_1801CE8D0, v2);
          v12 = v11;
          if ( v11 )
          {
            if ( !(unsigned int)RtlpHpStackTraceAllocAdd(v16, a2, v11) )
              RtlStackDbStackRemove(&qword_1801CE8D0, v12);
            RtlReleaseSRWLockShared(&RtlpHpStackTrackingContext);
            goto LABEL_19;
          }
        }
      }
    }
  }
  result = RtlReleaseSRWLockShared(&RtlpHpStackTrackingContext);
  if ( v2 )
  {
LABEL_19:
    v15 = RtlpHpEnvHandle;
    return RtlpHpMetadataFree(v2, &v15);
  }
  return result;
}
