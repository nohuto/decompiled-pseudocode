/*
 * XREFs of RtlpHpLargeFree @ 0x1800938E4
 * Callers:
 *     RtlpHpTagFreeHeap @ 0x1800274C0 (RtlpHpTagFreeHeap.c)
 *     RtlpHpFreeHeap @ 0x18002B020 (RtlpHpFreeHeap.c)
 *     RtlpHpFreeHeapSlow @ 0x18002B6C4 (RtlpHpFreeHeapSlow.c)
 *     RtlpHpMetadataFree @ 0x18004EF28 (RtlpHpMetadataFree.c)
 *     RtlpHpReallocMove @ 0x180094540 (RtlpHpReallocMove.c)
 *     RtlpHpSegReAlloc @ 0x1800A3160 (RtlpHpSegReAlloc.c)
 *     RtlpHpAllocateHeapSlow @ 0x1800ACEF0 (RtlpHpAllocateHeapSlow.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x18002A380 (RtlpLogHeapFailure.c)
 *     RtlpHpLargeAllocGetMetadata @ 0x1800477C0 (RtlpHpLargeAllocGetMetadata.c)
 *     RtlpHpMetadataFree @ 0x18004EF28 (RtlpHpMetadataFree.c)
 *     RtlRbRemoveNode @ 0x180051DA0 (RtlRbRemoveNode.c)
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHeapLogRangeRelease @ 0x180055A44 (RtlpHeapLogRangeRelease.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpVaMgrCtxFree @ 0x180092700 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpTlLogVAChange @ 0x180092B90 (RtlpHpTlLogVAChange.c)
 *     RtlpHpLargeLockAcquire @ 0x180093A88 (RtlpHpLargeLockAcquire.c)
 */

unsigned __int64 __fastcall RtlpHpLargeFree(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 *Metadata; // rax
  __int64 v4; // rdi
  unsigned __int64 v5; // r8
  char v6; // cl
  __int64 v7; // r8
  unsigned __int64 v8; // rcx
  __int64 v9; // rdi
  unsigned __int64 v10; // rsi
  __int64 v11; // rcx
  __int128 v13; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 v14; // [rsp+68h] [rbp+28h] BYREF
  unsigned __int64 v15; // [rsp+78h] [rbp+38h] BYREF

  v14 = a2;
  RtlpHpLargeLockAcquire();
  Metadata = (unsigned __int64 *)RtlpHpLargeAllocGetMetadata(a1, v14);
  v4 = (__int64)Metadata;
  if ( Metadata )
  {
    RtlRbRemoveNode(a1 + 72, Metadata);
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 64));
    v5 = *(_QWORD *)(v4 + 32);
    v6 = (unsigned __int8)v5 >> 2;
    v7 = ((v5 >> 12) + ((v5 >> 1) & 1)) << 12;
    v8 = v7
       + (1LL << v6)
       - (((1LL << v6) - 1) & ((1LL << v6) + v7 - 1))
       + v14
       - 1
       - ((v14 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL);
    v14 = (v14 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
    v15 = v8;
    if ( v8 )
    {
      RtlpHpVaMgrCtxFree((__int64)&unk_1801CE978, &v14, (__int64 *)&v15);
      if ( (RtlpHpHeapFeatures & 8) != 0 )
        RtlpHpTlLogVAChange(0x8000, v15, v14, 0LL);
    }
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 96), -(*(_QWORD *)(v4 + 32) >> 12));
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 88), -(__int64)(v15 >> 12));
    v13 = *(_OWORD *)a1;
    RtlpHpMetadataFree(v4, &v13);
    v9 = v15;
    v10 = v15;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    {
      v9 = v15;
      v11 = (__int64)NtCurrentPeb()->SharedData + 558;
    }
    else
    {
      v11 = 2147353480LL;
    }
    if ( *(_BYTE *)v11 )
      RtlpHeapLogRangeRelease(a1, v14, v9);
  }
  else
  {
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 64));
    RtlpLogHeapFailure(8, a1, v14, 0LL, 0LL, 0LL);
    return 0LL;
  }
  return v10;
}
