/*
 * XREFs of RtlpHpLargeFree @ 0x140420C64
 * Callers:
 *     ExAllocateHeapPool @ 0x1402ACDB0 (ExAllocateHeapPool.c)
 *     ExFreeHeapPool @ 0x1402B0E50 (ExFreeHeapPool.c)
 *     RtlpHpFreeHeap @ 0x1402B2660 (RtlpHpFreeHeap.c)
 *     RtlpHpAllocateHeapSlow @ 0x1402B819C (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpMetadataFree @ 0x140420E2C (RtlpHpMetadataFree.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x1402B2E04 (RtlpLogHeapFailure.c)
 *     RtlRbRemoveNode @ 0x1402BE130 (RtlRbRemoveNode.c)
 *     RtlpHpLargeAllocGetMetadata @ 0x140420DAC (RtlpHpLargeAllocGetMetadata.c)
 *     RtlpHpLargeLockAcquire @ 0x140420E08 (RtlpHpLargeLockAcquire.c)
 *     RtlpHpMetadataFree @ 0x140420E2C (RtlpHpMetadataFree.c)
 *     RtlpHpLargeLockRelease @ 0x140420F94 (RtlpHpLargeLockRelease.c)
 *     RtlpHpVaMgrCtxFree @ 0x140421038 (RtlpHpVaMgrCtxFree.c)
 */

ULONG_PTR __fastcall RtlpHpLargeFree(ULONG_PTR a1, ULONG_PTR a2)
{
  char v4; // r14
  unsigned __int64 *Metadata; // rax
  __int64 v6; // rdx
  __int64 v7; // rdi
  unsigned __int64 *v8; // rsi
  __int64 v10; // rdx
  unsigned __int64 v11; // r8
  char v12; // cl
  __int64 v13; // r8
  __int128 v14; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 v15; // [rsp+68h] [rbp+10h] BYREF
  ULONG_PTR v16; // [rsp+78h] [rbp+20h] BYREF

  v4 = RtlpHpLargeLockAcquire(a1);
  Metadata = (unsigned __int64 *)RtlpHpLargeAllocGetMetadata(a1, a2);
  v7 = 0LL;
  v8 = Metadata;
  if ( Metadata )
  {
    RtlRbRemoveNode((unsigned __int64 *)(a1 + 72), Metadata);
    LOBYTE(v10) = v4;
    RtlpHpLargeLockRelease(a1, v10);
    v11 = v8[4];
    v12 = (unsigned __int8)v11 >> 2;
    v13 = ((v11 >> 12) + ((v11 >> 1) & 1)) << 12;
    v15 = (a2 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
    v16 = a2 + v13 + (1LL << v12) - (((1LL << v12) - 1) & ((1LL << v12) + v13 - 1)) - 1 - v15;
    if ( v16 )
      RtlpHpVaMgrCtxFree(&unk_140E68358, &v15, &v16);
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 96), -(__int64)(v8[4] >> 12));
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
