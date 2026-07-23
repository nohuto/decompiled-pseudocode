/*
 * XREFs of RtlpHpTagReAllocateHeap @ 0x180029EC0
 * Callers:
 *     RtlReAllocateHeap @ 0x180029DE0 (RtlReAllocateHeap.c)
 * Callees:
 *     RtlpReAllocateHeapInternal @ 0x180029FF0 (RtlpReAllocateHeapInternal.c)
 *     RtlAcquireSRWLockShared @ 0x18004F0C0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18004F120 (RtlReleaseSRWLockShared.c)
 *     RtlpHpSizeHeapInternal @ 0x180055950 (RtlpHpSizeHeapInternal.c)
 */

__int64 __fastcall RtlpHpTagReAllocateHeap(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int16 v3; // bp
  int v6; // ebx
  __int64 v7; // r14
  __int64 result; // rax
  __int64 v9; // rdi
  int v10; // r12d
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int16 *v14; // rcx
  __int64 v15; // rbx
  int v16; // [rsp+70h] [rbp+8h] BYREF

  v3 = 0;
  v6 = a1;
  v7 = 0LL;
  if ( *(_DWORD *)(a1 + 16) == -571548178
    && a1 != qword_1801D4208[2 * (unsigned int)dword_1801816F8[BYTE1(RtlpHpEnvHandle)]] )
  {
    v10 = *(_DWORD *)(a1 + 20);
    v16 = 0;
    v11 = RtlpHpSizeHeapInternal(a1, a2, &v16);
    if ( v11 != -1 )
    {
      v7 = v11;
      if ( v16 )
      {
        v12 = a2 + v11;
        v13 = v12 + 16;
        if ( (v10 & 0x2000) == 0 )
          v13 = v12;
        v14 = (unsigned __int16 *)((v13 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
        if ( v14 )
          v3 = *v14;
      }
    }
  }
  result = RtlpReAllocateHeapInternal(v6);
  v9 = result;
  if ( result && v3 && a3 != v7 )
  {
    v15 = *(_QWORD *)(qword_1801D5C98 + 8LL * v3 - 8);
    RtlAcquireSRWLockShared(&RtlpHpTagContext);
    _InterlockedAdd64((volatile signed __int64 *)(v15 + 32), a3 - v7);
    RtlReleaseSRWLockShared(&RtlpHpTagContext);
    return v9;
  }
  return result;
}
