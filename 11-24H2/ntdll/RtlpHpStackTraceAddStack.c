/*
 * XREFs of RtlpHpStackTraceAddStack @ 0x1800DA400
 * Callers:
 *     RtlpAllocateNTHeapInternal @ 0x180054DA0 (RtlpAllocateNTHeapInternal.c)
 *     RtlpReAllocateHeapInternal @ 0x18005AF10 (RtlpReAllocateHeapInternal.c)
 *     RtlpHpAllocateHeapSlow @ 0x18009FA50 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpReAllocateHeapSlow @ 0x18011AB20 (RtlpHpReAllocateHeapSlow.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x18001C980 (RtlCaptureStackBackTrace.c)
 *     RtlRunOnceExecuteOnce @ 0x18002D050 (RtlRunOnceExecuteOnce.c)
 *     RtlReleaseSRWLockShared @ 0x18003CC80 (RtlReleaseSRWLockShared.c)
 *     RtlpHpMetadataAlloc @ 0x18003D230 (RtlpHpMetadataAlloc.c)
 *     RtlpAcquireSRWLockSharedContended @ 0x180044840 (RtlpAcquireSRWLockSharedContended.c)
 *     RtlpHpMetadataFree @ 0x180064B08 (RtlpHpMetadataFree.c)
 *     RtlpHpStackTraceAllocAdd @ 0x1800DA5A4 (RtlpHpStackTraceAllocAdd.c)
 *     RtlStackDbStackAdd @ 0x18011BFB8 (RtlStackDbStackAdd.c)
 *     RtlStackDbStackRemove @ 0x18011C808 (RtlStackDbStackRemove.c)
 */

void __fastcall RtlpHpStackTraceAddStack(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  char *SchedulerSharedDataSlot; // r9
  unsigned int i; // r8d
  char *v7; // rax
  char *v8; // rax
  PVOID *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdi
  bool v12; // zf
  __int64 v13; // rcx
  __int128 v14; // [rsp+20h] [rbp-18h] BYREF
  PVOID Context; // [rsp+50h] [rbp+18h] BYREF

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
  v8 = (char *)_InterlockedCompareExchange64((volatile signed __int64 *)&RtlpHpStackTrackingContext, 17LL, 0LL);
  if ( v8 )
    RtlpAcquireSRWLockSharedContended((unsigned __int64)&RtlpHpStackTrackingContext, a2, v8, SchedulerSharedDataSlot);
  if ( (dword_1801CD8B8 & 1) != 0 && (dword_1801CD8B8 & 2) != 0 )
  {
    v12 = *(_DWORD *)(a1 + 16) == -571548178;
    Context = 0LL;
    v13 = 112LL;
    if ( !v12 )
      v13 = 368LL;
    if ( RtlRunOnceExecuteOnce((PRTL_RUN_ONCE)(a1 + v13), RtlpHpPerHeapStackTraceInitialize, 0LL, &Context) >= 0 )
    {
      v14 = RtlpHpEnvHandle;
      v9 = (PVOID *)RtlpHpMetadataAlloc(0x600uLL, 0x600uLL, 0, &v14);
      v2 = (__int64)v9;
      if ( v9 )
      {
        if ( RtlCaptureStackBackTrace(1u, 0xC0u, v9, 0LL) )
        {
          v10 = RtlStackDbStackAdd(&qword_1801CD8C0, v2);
          v11 = v10;
          if ( v10 )
          {
            if ( !(unsigned int)RtlpHpStackTraceAllocAdd(Context, a2, v10) )
              RtlStackDbStackRemove(&qword_1801CD8C0, v11);
            RtlReleaseSRWLockShared(&RtlpHpStackTrackingContext);
            goto LABEL_19;
          }
        }
      }
    }
  }
  RtlReleaseSRWLockShared(&RtlpHpStackTrackingContext);
  if ( v2 )
  {
LABEL_19:
    v14 = RtlpHpEnvHandle;
    RtlpHpMetadataFree(v2, &v14);
  }
}
