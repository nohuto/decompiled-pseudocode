/*
 * XREFs of RtlpHpTagReAllocateHeap @ 0x1800A0F10
 * Callers:
 *     RtlReAllocateHeap @ 0x1800A0E30 (RtlReAllocateHeap.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180010220 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180010280 (RtlReleaseSRWLockShared.c)
 *     RtlpHpSizeHeapInternal @ 0x18002CE80 (RtlpHpSizeHeapInternal.c)
 *     RtlpReAllocateHeapInternal @ 0x1800A1040 (RtlpReAllocateHeapInternal.c)
 */

__int64 __fastcall RtlpHpTagReAllocateHeap(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned __int16 v4; // bp
  __int64 v9; // r14
  __int64 result; // rax
  __int64 v11; // rdi
  int v12; // r12d
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int16 *v16; // rcx
  __int64 v17; // rbx
  int v18; // [rsp+70h] [rbp+8h] BYREF

  v4 = 0;
  v9 = 0LL;
  if ( *(_DWORD *)(a1 + 16) == -571548178
    && a1 != qword_1801D21B8[2 * (unsigned int)dword_1801800C8[BYTE1(RtlpHpEnvHandle)]] )
  {
    v12 = *(_DWORD *)(a1 + 20);
    v18 = 0;
    v13 = RtlpHpSizeHeapInternal(a1, a2, &v18);
    if ( v13 != -1 )
    {
      v9 = v13;
      if ( v18 )
      {
        v14 = a2 + v13;
        v15 = v14 + 16;
        if ( (v12 & 0x2000) == 0 )
          v15 = v14;
        v16 = (unsigned __int16 *)((v15 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
        if ( v16 )
          v4 = *v16;
      }
    }
  }
  result = RtlpReAllocateHeapInternal(a1, a4, a2, a3);
  v11 = result;
  if ( result && v4 && a3 != v9 )
  {
    v17 = *(_QWORD *)(qword_1801D3C38 + 8LL * v4 - 8);
    RtlAcquireSRWLockShared(&RtlpHpTagContext);
    _InterlockedAdd64((volatile signed __int64 *)(v17 + 32), a3 - v9);
    RtlReleaseSRWLockShared(&RtlpHpTagContext);
    return v11;
  }
  return result;
}
