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

unsigned __int64 __fastcall RtlpHpLargeFree(__int128 *a1, unsigned __int64 a2)
{
  _RTL_BALANCED_NODE *Metadata; // rax
  _RTL_BALANCED_NODE *v4; // rdi
  _RTL_BALANCED_NODE *v5; // r8
  char v6; // cl
  __int64 v7; // r8
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rsi
  __int64 v11; // rcx
  __int128 v13; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 v14; // [rsp+68h] [rbp+28h] BYREF
  unsigned __int64 v15; // [rsp+78h] [rbp+38h] BYREF

  v14 = a2;
  RtlpHpLargeLockAcquire();
  Metadata = (_RTL_BALANCED_NODE *)RtlpHpLargeAllocGetMetadata(a1, v14);
  v4 = Metadata;
  if ( Metadata )
  {
    RtlRbRemoveNode((PRTL_RB_TREE)((char *)a1 + 72), Metadata);
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)a1 + 8);
    v5 = v4[1].Children[1];
    v6 = (unsigned __int8)v5 >> 2;
    v7 = (((unsigned __int64)v5 >> 12) + (((unsigned __int64)v5 >> 1) & 1)) << 12;
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
      RtlpHpVaMgrCtxFree(&unk_1801D09C8, &v14, &v15);
      if ( (RtlpHpHeapFeatures & 8) != 0 )
        RtlpHpTlLogVAChange(0x8000LL, v15, v14, 0LL);
    }
    _InterlockedAdd64((volatile signed __int64 *)a1 + 12, -((unsigned __int64)v4[1].Children[1] >> 12));
    _InterlockedAdd64((volatile signed __int64 *)a1 + 11, -(__int64)(v15 >> 12));
    v13 = *a1;
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
      RtlpHeapLogRangeRelease(a1, v14, v9);
  }
  else
  {
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)a1 + 8);
    RtlpLogHeapFailure(8, (_DWORD)a1, v14, 0, 0LL, 0LL);
    return 0LL;
  }
  return v10;
}
