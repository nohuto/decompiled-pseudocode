/*
 * XREFs of RtlpHpLargeFree @ 0x140458F38
 * Callers:
 *     ExFreeHeapPool @ 0x140359950 (ExFreeHeapPool.c)
 *     RtlpHpFreeHeap @ 0x14035B220 (RtlpHpFreeHeap.c)
 *     RtlpHpMetadataFree @ 0x140459100 (RtlpHpMetadataFree.c)
 *     RtlpHpAllocateHeapSlow @ 0x1404D2B7C (RtlpHpAllocateHeapSlow.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x14035B9C4 (RtlpLogHeapFailure.c)
 *     RtlRbRemoveNode @ 0x140365870 (RtlRbRemoveNode.c)
 *     RtlpHpLargeAllocGetMetadata @ 0x140459080 (RtlpHpLargeAllocGetMetadata.c)
 *     RtlpHpLargeLockAcquire @ 0x1404590DC (RtlpHpLargeLockAcquire.c)
 *     RtlpHpMetadataFree @ 0x140459100 (RtlpHpMetadataFree.c)
 *     RtlpHpLargeLockRelease @ 0x140459268 (RtlpHpLargeLockRelease.c)
 *     RtlpHpVaMgrCtxFree @ 0x14045930C (RtlpHpVaMgrCtxFree.c)
 */

ULONG_PTR __fastcall RtlpHpLargeFree(ULONG_PTR a1, ULONG_PTR a2)
{
  char v4; // r14
  _RTL_BALANCED_NODE *Metadata; // rax
  __int64 v6; // rdx
  __int64 v7; // rdi
  _RTL_BALANCED_NODE *v8; // rsi
  __int64 v10; // rdx
  _RTL_BALANCED_NODE *v11; // r8
  char v12; // cl
  __int64 v13; // r8
  __int128 v14; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 v15; // [rsp+68h] [rbp+10h] BYREF
  ULONG_PTR v16; // [rsp+78h] [rbp+20h] BYREF

  v4 = RtlpHpLargeLockAcquire(a1);
  Metadata = (_RTL_BALANCED_NODE *)RtlpHpLargeAllocGetMetadata(a1, a2);
  v7 = 0LL;
  v8 = Metadata;
  if ( Metadata )
  {
    RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 72), Metadata);
    LOBYTE(v10) = v4;
    RtlpHpLargeLockRelease(a1, v10);
    v11 = v8[1].Children[1];
    v12 = (unsigned __int8)v11 >> 2;
    v13 = (((unsigned __int64)v11 >> 12) + (((unsigned __int64)v11 >> 1) & 1)) << 12;
    v15 = (a2 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
    v16 = a2 + v13 + (1LL << v12) - (((1LL << v12) - 1) & ((1LL << v12) + v13 - 1)) - 1 - v15;
    if ( v16 )
      RtlpHpVaMgrCtxFree(&unk_140E68558, &v15, &v16);
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 96), -((unsigned __int64)v8[1].Children[1] >> 12));
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 88), -(__int64)(v16 >> 12));
    v14 = *(_OWORD *)a1;
    RtlpHpMetadataFree(v8, &v14);
    return v16;
  }
  else
  {
    LOBYTE(v6) = v4;
    RtlpHpLargeLockRelease(a1, v6);
    RtlpLogHeapFailure(8, a1, a2, 0LL, 0LL, 0LL);
  }
  return v7;
}
