/*
 * XREFs of RtlpHpLargeFree @ 0x180009DDC
 * Callers:
 *     RtlpHpMetadataFree @ 0x18000AB68 (RtlpHpMetadataFree.c)
 *     RtlpHpReallocMove @ 0x18002C3C0 (RtlpHpReallocMove.c)
 *     RtlpHpAllocateHeapSlow @ 0x18002F040 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpFreeHeap @ 0x180053AF0 (RtlpHpFreeHeap.c)
 *     RtlpHpFreeHeapSlow @ 0x180054194 (RtlpHpFreeHeapSlow.c)
 *     RtlpHpTagFreeHeap @ 0x1800818A0 (RtlpHpTagFreeHeap.c)
 * Callees:
 *     RtlpHpMetadataFree @ 0x18000AB68 (RtlpHpMetadataFree.c)
 *     RtlRbRemoveNode @ 0x18000D9E0 (RtlRbRemoveNode.c)
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHeapLogRangeRelease @ 0x180011684 (RtlpHeapLogRangeRelease.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpLogHeapFailure @ 0x180052E50 (RtlpLogHeapFailure.c)
 *     RtlpHpLargeAllocGetMetadata @ 0x18009B4A0 (RtlpHpLargeAllocGetMetadata.c)
 *     RtlpHpVaMgrCtxFree @ 0x1800BBA80 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpTlLogVAChange @ 0x1800BBF10 (RtlpHpTlLogVAChange.c)
 *     RtlpHpLargeLockAcquire @ 0x1800BD0C8 (RtlpHpLargeLockAcquire.c)
 */

unsigned __int64 __fastcall RtlpHpLargeFree(volatile signed __int64 *a1, unsigned __int64 a2)
{
  __int64 Metadata; // rax
  __int64 v4; // rdi
  unsigned __int64 v5; // r8
  char v6; // cl
  __int64 v7; // r8
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int128 v17; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 v18; // [rsp+68h] [rbp+28h] BYREF
  unsigned __int64 v19; // [rsp+78h] [rbp+38h] BYREF

  v18 = a2;
  RtlpHpLargeLockAcquire();
  Metadata = RtlpHpLargeAllocGetMetadata(a1, v18);
  v4 = Metadata;
  if ( Metadata )
  {
    RtlRbRemoveNode(a1 + 9, Metadata);
    RtlReleaseSRWLockExclusive(a1 + 8);
    v5 = *(_QWORD *)(v4 + 32);
    v6 = (unsigned __int8)v5 >> 2;
    v7 = ((v5 >> 12) + ((v5 >> 1) & 1)) << 12;
    v8 = v7
       + (1LL << v6)
       - (((1LL << v6) - 1) & ((1LL << v6) + v7 - 1))
       + v18
       - 1
       - ((v18 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL);
    v18 = (v18 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
    v19 = v8;
    if ( v8 )
    {
      RtlpHpVaMgrCtxFree(&unk_1801D09C8, &v18, &v19);
      if ( (RtlpHpHeapFeatures & 8) != 0 )
        RtlpHpTlLogVAChange(0x8000LL, v19, v18, 0LL);
    }
    _InterlockedAdd64(a1 + 12, -(*(_QWORD *)(v4 + 32) >> 12));
    _InterlockedAdd64(a1 + 11, -(__int64)(v19 >> 12));
    v17 = *(_OWORD *)a1;
    RtlpHpMetadataFree(v4, &v17);
    v9 = v19;
    v10 = v19;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v12, v11, v13, v14) )
    {
      v9 = v19;
      v15 = (__int64)NtCurrentPeb()->SharedData + 558;
    }
    else
    {
      v15 = 2147353480LL;
    }
    if ( *(_BYTE *)v15 )
      RtlpHeapLogRangeRelease(a1, v18, v9);
  }
  else
  {
    RtlReleaseSRWLockExclusive(a1 + 8);
    RtlpLogHeapFailure(8, (_DWORD)a1, v18, 0, 0LL, 0LL);
    return 0LL;
  }
  return v10;
}
