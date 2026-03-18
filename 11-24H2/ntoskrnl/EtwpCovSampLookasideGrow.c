/*
 * XREFs of EtwpCovSampLookasideGrow @ 0x1404EF6CC
 * Callers:
 *     EtwpCovSampCaptureContextStart @ 0x1407B1F9C (EtwpCovSampCaptureContextStart.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x1407B24B0 (EtwpCovSampCaptureWorkerThread.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpCovSampLookasideGrow(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  unsigned int v7; // ebx
  struct _SLIST_ENTRY *v8; // rdi
  KIRQL v9; // r14
  _SLIST_ENTRY *v10; // rdx
  _SLIST_ENTRY *v11; // rcx

  v4 = *(_QWORD *)(a2 + 32);
  KeGetCurrentIrql();
  if ( *(_DWORD *)(a2 + 52) < *(_DWORD *)(a2 + 56) )
  {
    v8 = (struct _SLIST_ENTRY *)guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
    if ( v8 )
    {
      v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 632));
      if ( *(_DWORD *)(a2 + 40) && *(_DWORD *)(a2 + 52) < *(_DWORD *)(a2 + 56) )
      {
        _InterlockedIncrement((volatile signed __int32 *)(a2 + 52));
        ++*(_DWORD *)(v4 + 72);
        v10 = *(_SLIST_ENTRY **)(v4 + 40);
        v11 = (struct _SLIST_ENTRY *)((char *)v8 + 24);
        if ( v10->Next != (_SLIST_ENTRY *)(v4 + 32) )
          __fastfail(3u);
        v8[2].Next = v10;
        v11->Next = (_SLIST_ENTRY *)(v4 + 32);
        v10->Next = v11;
        *(_QWORD *)(v4 + 40) = v11;
        RtlpInterlockedPushEntrySList((PSLIST_HEADER)a2, v8);
        v8 = 0LL;
        v7 = 0;
      }
      else
      {
        v7 = 255;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 632), v9);
      if ( v8 )
        ExFreePoolWithTag(v8, 0x56777445u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return 255;
  }
  return v7;
}
