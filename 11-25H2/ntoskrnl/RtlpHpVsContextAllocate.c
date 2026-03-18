/*
 * XREFs of RtlpHpVsContextAllocate @ 0x1403CA760
 * Callers:
 *     ExAllocateHeapPool @ 0x1402DAB20 (ExAllocateHeapPool.c)
 *     RtlpHpAllocateHeap @ 0x1403C93A0 (RtlpHpAllocateHeap.c)
 *     RtlpHpAllocateHeapSlow @ 0x1403C9AF8 (RtlpHpAllocateHeapSlow.c)
 *     RtlpAllocateNTHeapInternal @ 0x1403CAA0C (RtlpAllocateNTHeapInternal.c)
 *     RtlpHpMetadataAlloc @ 0x1403CAF34 (RtlpHpMetadataAlloc.c)
 * Callees:
 *     RtlpHpAcquireQueuedLockExclusive @ 0x140213800 (RtlpHpAcquireQueuedLockExclusive.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x140320690 (RtlpHpReleaseQueuedLockExclusive.c)
 *     RtlpHpVsChunkSetUnusedBytes @ 0x1403CA930 (RtlpHpVsChunkSetUnusedBytes.c)
 *     RtlpHpVsSlotAllocate @ 0x1404F074C (RtlpHpVsSlotAllocate.c)
 *     RtlpHpTryAcquireQueuedLockExclusive @ 0x1404F0F38 (RtlpHpTryAcquireQueuedLockExclusive.c)
 *     RtlpHpVsContextHandleContention @ 0x1404F1768 (RtlpHpVsContextHandleContention.c)
 *     RtlHeapZero @ 0x1406A9C60 (RtlHeapZero.c)
 */

__int64 __fastcall RtlpHpVsContextAllocate(_BYTE *a1, unsigned int a2, int a3, char a4)
{
  char v4; // al
  int v5; // r10d
  __int64 v7; // rcx
  unsigned __int8 *v9; // rbx
  int v10; // r12d
  __int64 v11; // r13
  int *v12; // r14
  bool v13; // zf
  __int64 v14; // rdi
  __int64 v15; // rsi
  unsigned int v16; // ebx
  __int128 v18; // [rsp+30h] [rbp-58h] BYREF
  __int64 v19; // [rsp+40h] [rbp-48h]
  unsigned int v20; // [rsp+A0h] [rbp+18h]

  v4 = a1[4];
  v5 = a3 + 2;
  v7 = *(unsigned __int16 *)a1;
  if ( a2 == a3 )
    v5 = a3;
  v9 = a1 + 3;
  v10 = 0;
  v20 = ((unsigned int)(v5 + 15) >> 4) + (v4 & 1) + 1;
  v11 = (unsigned __int8)(a1[2] & KeGetCurrentThread()[1].SchedulerApcFill3[45]);
  v12 = (int *)&a1[64 * (unsigned __int64)*(unsigned __int16 *)&a1[64 * v7 + 4 * v11]];
  v13 = (a1[5] & 1) == 0;
  v18 = 0LL;
  v19 = 0LL;
  if ( v13 && !(unsigned int)RtlpHpTryAcquireQueuedLockExclusive((ULONG_PTR)(v12 + 2)) )
  {
    v10 = 1;
    if ( (a1[5] & 1) == 0 )
      RtlpHpAcquireQueuedLockExclusive(v12 + 2, *v9, (__int64)&v18);
  }
  v14 = RtlpHpVsSlotAllocate((_DWORD)a1, (_DWORD)v12, v20, v20 << 16, (__int64)&v18);
  if ( v14 )
  {
    if ( (a1[5] & 1) == 0 )
      RtlpHpReleaseQueuedLockExclusive(*v9, (__int64)&v18);
    v15 = v14 + 16;
    v16 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v14) ^ *(unsigned __int16 *)(v14 + 2)) - 16;
    if ( (a1[4] & 1) != 0 && ((v14 + 32) & 0xFFF) == 0 )
    {
      v15 = v14 + 32;
      v16 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v14) ^ *(unsigned __int16 *)(v14 + 2)) - 32;
    }
    if ( (a4 & 2) != 0 )
      RtlHeapZero(v15, v16);
    if ( a2 < v16 )
    {
      *(_DWORD *)(v14 + 8) |= 0x100u;
      RtlpHpVsChunkSetUnusedBytes(v15, v16, v16 - a2);
    }
  }
  else
  {
    v15 = 0LL;
  }
  if ( v10 && (unsigned int)(unsigned __int8)a1[2] + 1 > 1 )
    RtlpHpVsContextHandleContention(a1, (unsigned int)v11);
  return v15;
}
