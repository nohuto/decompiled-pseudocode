/*
 * XREFs of RtlpHpTagReAllocateHeap @ 0x18005ADE0
 * Callers:
 *     RtlReAllocateHeap @ 0x18007A7D0 (RtlReAllocateHeap.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18003CC20 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003CC80 (RtlReleaseSRWLockShared.c)
 *     RtlpHpSizeHeapInternal @ 0x180059880 (RtlpHpSizeHeapInternal.c)
 *     RtlpReAllocateHeapInternal @ 0x18005AF10 (RtlpReAllocateHeapInternal.c)
 */

__int64 __fastcall RtlpHpTagReAllocateHeap(_RTL_SRWLOCK *HeapHandle, unsigned __int64 a2, __int64 a3)
{
  unsigned __int16 v3; // bp
  __int64 v7; // r14
  __int64 result; // rax
  __int64 v9; // rdi
  int Ptr_high; // r12d
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int16 *v14; // rcx
  __int64 v15; // rbx
  int v16; // [rsp+70h] [rbp+8h] BYREF

  v3 = 0;
  v7 = 0LL;
  if ( HeapHandle[2].0 == -571548178
    && HeapHandle != (_RTL_SRWLOCK *)qword_1801D11A8[2 * (unsigned int)dword_18017E8C8[BYTE1(RtlpHpEnvHandle)]] )
  {
    Ptr_high = HIDWORD(HeapHandle[2].Ptr);
    v16 = 0;
    v11 = RtlpHpSizeHeapInternal(HeapHandle, a2, &v16);
    if ( v11 != -1 )
    {
      v7 = v11;
      if ( v16 )
      {
        v12 = a2 + v11;
        v13 = v12 + 16;
        if ( (Ptr_high & 0x2000) == 0 )
          v13 = v12;
        v14 = (unsigned __int16 *)((v13 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
        if ( v14 )
          v3 = *v14;
      }
    }
  }
  result = RtlpReAllocateHeapInternal(HeapHandle);
  v9 = result;
  if ( result && v3 && a3 != v7 )
  {
    v15 = *(_QWORD *)(qword_1801D2C38 + 8LL * v3 - 8);
    RtlAcquireSRWLockShared(&RtlpHpTagContext);
    _InterlockedAdd64((volatile signed __int64 *)(v15 + 32), a3 - v7);
    RtlReleaseSRWLockShared(&RtlpHpTagContext);
    return v9;
  }
  return result;
}
