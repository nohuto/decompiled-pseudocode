/*
 * XREFs of RtlpHpLargeFree @ 0x18009E878
 * Callers:
 *     RtlpHpTagFreeHeap @ 0x180053EC0 (RtlpHpTagFreeHeap.c)
 *     RtlpHpFreeHeap @ 0x180057A20 (RtlpHpFreeHeap.c)
 *     RtlpHpFreeHeapSlow @ 0x1800580C4 (RtlpHpFreeHeapSlow.c)
 *     RtlpHpSegReAlloc @ 0x18005CF10 (RtlpHpSegReAlloc.c)
 *     RtlpHpMetadataFree @ 0x180064B08 (RtlpHpMetadataFree.c)
 *     RtlpHpReallocMove @ 0x18009EFF0 (RtlpHpReallocMove.c)
 *     RtlpHpAllocateHeapSlow @ 0x18009FA50 (RtlpHpAllocateHeapSlow.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x180056D80 (RtlpLogHeapFailure.c)
 *     RtlpHpMetadataFree @ 0x180064B08 (RtlpHpMetadataFree.c)
 *     RtlRbRemoveNode @ 0x180067980 (RtlRbRemoveNode.c)
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHeapLogRangeRelease @ 0x18006B624 (RtlpHeapLogRangeRelease.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpVaMgrCtxFree @ 0x18009D290 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpTlLogVAChange @ 0x18009D720 (RtlpHpTlLogVAChange.c)
 *     RtlpHpLargeAllocGetMetadata @ 0x18009EE8C (RtlpHpLargeAllocGetMetadata.c)
 *     RtlpHpLargeLockAcquire @ 0x18009EEEC (RtlpHpLargeLockAcquire.c)
 */

ULONG_PTR __fastcall RtlpHpLargeFree(__int64 a1, char *a2)
{
  _RTL_BALANCED_NODE *Metadata; // rax
  __int64 v4; // rdi
  unsigned __int64 v5; // r8
  char v6; // cl
  __int64 v7; // r8
  char *v8; // rcx
  __int64 v9; // rdi
  ULONG_PTR v10; // rsi
  __int64 v11; // rcx
  __int128 v13; // [rsp+30h] [rbp-10h] BYREF
  char *v14; // [rsp+68h] [rbp+28h] BYREF
  ULONG_PTR v15; // [rsp+78h] [rbp+38h] BYREF

  v14 = a2;
  RtlpHpLargeLockAcquire(a1);
  Metadata = (_RTL_BALANCED_NODE *)RtlpHpLargeAllocGetMetadata(a1, v14);
  v4 = (__int64)Metadata;
  if ( Metadata )
  {
    RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 72), Metadata);
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
    v5 = *(_QWORD *)(v4 + 32);
    v6 = (unsigned __int8)v5 >> 2;
    v7 = ((v5 >> 12) + ((v5 >> 1) & 1)) << 12;
    v8 = &v14[v7
            - 1
            + (1LL << v6)
            - (((1LL << v6) - 1) & ((1LL << v6) + v7 - 1))
            - ((unsigned __int64)(v14 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL)];
    v14 = (char *)((unsigned __int64)(v14 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL);
    v15 = (ULONG_PTR)v8;
    if ( v8 )
    {
      RtlpHpVaMgrCtxFree((__int64)&unk_1801CD968, (PVOID *)&v14, &v15);
      if ( (RtlpHpHeapFeatures & 8) != 0 )
        RtlpHpTlLogVAChange(0x8000, v15, (__int64)v14, 0LL);
    }
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 96), -(*(_QWORD *)(v4 + 32) >> 12));
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 88), -(__int64)(v15 >> 12));
    v13 = *(_OWORD *)a1;
    RtlpHpMetadataFree(v4, &v13);
    v9 = v15;
    v10 = v15;
    if ( RtlGetCurrentServiceSessionId() )
    {
      v9 = v15;
      v11 = (__int64)NtCurrentPeb()->SharedData + 558;
    }
    else
    {
      v11 = 2147353480LL;
    }
    if ( *(_BYTE *)v11 )
      RtlpHeapLogRangeRelease(a1, (__int64)v14, v9);
  }
  else
  {
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
    RtlpLogHeapFailure(8, a1, (__int64)v14, 0LL, 0LL, 0LL);
    return 0LL;
  }
  return v10;
}
