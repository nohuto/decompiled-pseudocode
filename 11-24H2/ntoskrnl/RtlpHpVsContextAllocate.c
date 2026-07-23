/*
 * XREFs of RtlpHpVsContextAllocate @ 0x14036781C
 * Callers:
 *     ExAllocateHeapPool @ 0x140277790 (ExAllocateHeapPool.c)
 *     RtlpAllocateNTHeapInternal @ 0x14036876C (RtlpAllocateNTHeapInternal.c)
 *     RtlpHpAllocateHeap @ 0x1403E93B0 (RtlpHpAllocateHeap.c)
 *     RtlpHpMetadataAlloc @ 0x140458A08 (RtlpHpMetadataAlloc.c)
 *     RtlpHpAllocateHeapSlow @ 0x1404D2B7C (RtlpHpAllocateHeapSlow.c)
 * Callees:
 *     RtlpHpAcquireQueuedLockExclusive @ 0x140336C60 (RtlpHpAcquireQueuedLockExclusive.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x1403628A0 (RtlpHpReleaseQueuedLockExclusive.c)
 *     RtlpHpVsSlotAllocate @ 0x140367A10 (RtlpHpVsSlotAllocate.c)
 *     RtlpHpTryAcquireQueuedLockExclusive @ 0x14036810C (RtlpHpTryAcquireQueuedLockExclusive.c)
 *     RtlpHpVsContextHandleContention @ 0x1403687F4 (RtlpHpVsContextHandleContention.c)
 *     RtlHeapZero @ 0x1406B5ED0 (RtlHeapZero.c)
 */

__int64 __fastcall RtlpHpVsContextAllocate(_BYTE *a1, unsigned int a2, int a3, char a4)
{
  char v4; // al
  int v5; // r10d
  __int64 v7; // rcx
  unsigned __int8 *v9; // rbx
  int v10; // r12d
  __int64 v11; // rdx
  int *v12; // r14
  bool v13; // zf
  __int64 v14; // rsi
  __int64 v15; // rdi
  unsigned int v16; // ebx
  __int64 v17; // r14
  unsigned int v18; // ebx
  __int16 v19; // cx
  __int128 v21; // [rsp+30h] [rbp-58h] BYREF
  __int64 v22; // [rsp+40h] [rbp-48h]
  unsigned int v23; // [rsp+98h] [rbp+10h]
  unsigned int v24; // [rsp+A0h] [rbp+18h]

  v4 = a1[4];
  v5 = a3 + 2;
  v7 = *(unsigned __int16 *)a1;
  if ( a2 == a3 )
    v5 = a3;
  v9 = a1 + 3;
  v10 = 0;
  v23 = ((unsigned int)(v5 + 15) >> 4) + (v4 & 1) + 1;
  v11 = (unsigned __int8)(a1[2] & KeGetCurrentThread()[1].SchedulerApcFill3[45]);
  v24 = v11;
  v12 = (int *)&a1[64 * (unsigned __int64)*(unsigned __int16 *)&a1[64 * v7 + 4 * v11]];
  v13 = (a1[5] & 1) == 0;
  v21 = 0LL;
  v22 = 0LL;
  if ( v13 && !(unsigned int)RtlpHpTryAcquireQueuedLockExclusive((ULONG_PTR)(v12 + 2)) )
  {
    v10 = 1;
    if ( (a1[5] & 1) == 0 )
      RtlpHpAcquireQueuedLockExclusive(v12 + 2, *v9, (__int64)&v21);
  }
  v14 = RtlpHpVsSlotAllocate((_DWORD)a1, (_DWORD)v12, v23, v23 << 16, (__int64)&v21);
  if ( v14 )
  {
    if ( (a1[5] & 1) == 0 )
      RtlpHpReleaseQueuedLockExclusive(*v9, (__int64)&v21);
    v15 = v14 + 16;
    v16 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v14) ^ *(unsigned __int16 *)(v14 + 2)) - 16;
    if ( (a1[4] & 1) != 0 && ((v14 + 32) & 0xFFF) == 0 )
    {
      v15 = v14 + 32;
      v16 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v14) ^ *(unsigned __int16 *)(v14 + 2)) - 32;
    }
    v17 = v16;
    if ( (a4 & 2) != 0 )
      RtlHeapZero(v15, v16);
    if ( a2 < v16 )
    {
      *(_DWORD *)(v14 + 8) |= 0x100u;
      v18 = v16 - a2;
      *(_BYTE *)(v17 + v15 - 1) = 0;
      v19 = *(_WORD *)(v17 + v15 - 2);
      if ( v18 == 1 )
        *(_WORD *)(v17 + v15 - 2) = v19 | 0x8000;
      else
        *(_WORD *)(v17 + v15 - 2) = v19 ^ (v18 ^ v19) & 0x1FFF;
    }
  }
  else
  {
    v15 = 0LL;
  }
  if ( v10 && (unsigned int)(unsigned __int8)a1[2] + 1 > 1 )
    RtlpHpVsContextHandleContention(a1, v24);
  return v15;
}
