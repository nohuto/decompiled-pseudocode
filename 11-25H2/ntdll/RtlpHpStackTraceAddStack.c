/*
 * XREFs of RtlpHpStackTraceAddStack @ 0x1800DCD90
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x180029FF0 (RtlpReAllocateHeapInternal.c)
 *     RtlpHpAllocateHeapSlow @ 0x18002F040 (RtlpHpAllocateHeapSlow.c)
 *     RtlpAllocateNTHeapInternal @ 0x180050E70 (RtlpAllocateNTHeapInternal.c)
 *     RtlpHpReAllocateHeapSlow @ 0x18011E180 (RtlpHpReAllocateHeapSlow.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x180003870 (RtlRunOnceExecuteOnce.c)
 *     RtlpHpMetadataFree @ 0x18000AB68 (RtlpHpMetadataFree.c)
 *     RtlReleaseSRWLockShared @ 0x18004F120 (RtlReleaseSRWLockShared.c)
 *     RtlpHpMetadataAlloc @ 0x18004F990 (RtlpHpMetadataAlloc.c)
 *     RtlpAcquireSRWLockSharedContended @ 0x18007A040 (RtlpAcquireSRWLockSharedContended.c)
 *     RtlCaptureStackBackTrace @ 0x1800900F0 (RtlCaptureStackBackTrace.c)
 *     RtlpHpStackTraceAllocAdd @ 0x1800DCF34 (RtlpHpStackTraceAllocAdd.c)
 *     RtlStackDbStackAdd @ 0x18011F658 (RtlStackDbStackAdd.c)
 *     RtlStackDbStackRemove @ 0x18011FEA8 (RtlStackDbStackRemove.c)
 */

unsigned __int64 __fastcall RtlpHpStackTraceAddStack(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  char *SchedulerSharedDataSlot; // r9
  unsigned int i; // r8d
  char *v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 result; // rax
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
  if ( (dword_1801D0918 & 1) != 0 && (dword_1801D0918 & 2) != 0 )
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
      v2 = (unsigned __int64)v10;
      if ( v10 )
      {
        if ( RtlCaptureStackBackTrace(1u, 0xC0u, v10, 0LL) )
        {
          v11 = RtlStackDbStackAdd(&qword_1801D0920, v2);
          v12 = v11;
          if ( v11 )
          {
            if ( !(unsigned int)RtlpHpStackTraceAllocAdd(v16, a2, v11) )
              RtlStackDbStackRemove(&qword_1801D0920, v12);
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
