/*
 * XREFs of RtlpHpLargeFree @ 0x1403CB4FC
 * Callers:
 *     ExAllocateHeapPool @ 0x1402DAB20 (ExAllocateHeapPool.c)
 *     RtlpHpFreeHeap @ 0x1402DE7F0 (RtlpHpFreeHeap.c)
 *     ExFreeHeapPool @ 0x1402DECE0 (ExFreeHeapPool.c)
 *     RtlpHpAllocateHeapSlow @ 0x1403C9AF8 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpMetadataFree @ 0x1403CB6C4 (RtlpHpMetadataFree.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x1402DA9BC (RtlpLogHeapFailure.c)
 *     RtlRbRemoveNode @ 0x1402E2A20 (RtlRbRemoveNode.c)
 *     RtlpHpLargeAllocGetMetadata @ 0x1403CB644 (RtlpHpLargeAllocGetMetadata.c)
 *     RtlpHpLargeLockAcquire @ 0x1403CB6A0 (RtlpHpLargeLockAcquire.c)
 *     RtlpHpMetadataFree @ 0x1403CB6C4 (RtlpHpMetadataFree.c)
 *     RtlpHpLargeLockRelease @ 0x1403CBC24 (RtlpHpLargeLockRelease.c)
 *     RtlpHpVaMgrCtxFree @ 0x1403CC28C (RtlpHpVaMgrCtxFree.c)
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
      RtlpHpVaMgrCtxFree(&unk_140E68098, &v15, &v16);
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
