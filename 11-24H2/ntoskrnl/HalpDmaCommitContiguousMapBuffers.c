/*
 * XREFs of HalpDmaCommitContiguousMapBuffers @ 0x14054CAF4
 * Callers:
 *     HalpDmaAllocateMapRegisters @ 0x14038829C (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x1406FD3A4 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaGrowContiguousMapBuffers @ 0x140AB8534 (HalpDmaGrowContiguousMapBuffers.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140C12B98 (HalpDmaInitializeMasterAdapter.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     RtlClearBits @ 0x1402EA360 (RtlClearBits.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     HalpDmaTranslationEntryToIndex @ 0x1404772B8 (HalpDmaTranslationEntryToIndex.c)
 *     HalpDmaGetTranslationEntries @ 0x1404899C4 (HalpDmaGetTranslationEntries.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

unsigned __int64 __fastcall HalpDmaCommitContiguousMapBuffers(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4)
{
  __int64 *v4; // rsi
  __int64 v6; // rax
  unsigned int v9; // r8d
  unsigned __int64 result; // rax
  unsigned __int64 *v11; // rbp
  __int64 *v12; // rdx
  unsigned __int64 *v13; // r14
  __int64 *v14; // rax
  __int64 v15; // r12
  unsigned __int64 *v16; // rdi
  ULONG v17; // ebp
  __int64 v18; // rdx
  unsigned __int64 *v19; // rcx
  bool v20; // zf
  char v21; // [rsp+20h] [rbp-68h]
  ULONG StartingIndex; // [rsp+24h] [rbp-64h]
  __int64 *v23; // [rsp+28h] [rbp-60h] BYREF
  unsigned __int64 v24; // [rsp+30h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-50h] BYREF
  char v26; // [rsp+90h] [rbp+8h]

  v4 = (__int64 *)a4;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = *(_QWORD *)(a1 + 48);
  v23 = 0LL;
  v9 = a4;
  if ( v6 && (*(_QWORD *)(a1 + 64) != v6 || *(_DWORD *)(a1 + 72)) )
  {
    v9 = a4 + 1;
    v26 = 1;
  }
  else
  {
    v26 = 0;
  }
  if ( !*(_BYTE *)(a1 + 153) )
    v9 += ((a3 + ((unsigned __int64)a4 << 12) - 1) >> 16) - (a3 >> 16);
  result = HalpDmaGetTranslationEntries(a1, 0, v9);
  v24 = result;
  v11 = (unsigned __int64 *)result;
  if ( result )
  {
    StartingIndex = HalpDmaTranslationEntryToIndex(a1, result, &v23);
    if ( (unsigned int)(((__int64)v11 - v23[2]) / 72) )
    {
      v13 = v11 - 9;
    }
    else
    {
      v12 = *(__int64 **)(a1 + 48);
      if ( v12 == v23 )
      {
        v13 = 0LL;
      }
      else
      {
        if ( v12 )
        {
          do
          {
            v14 = (__int64 *)*v12;
            if ( (__int64 *)*v12 == v23 )
              break;
            v12 = (__int64 *)*v12;
          }
          while ( v14 );
        }
        v13 = (unsigned __int64 *)(v12[2] + 72LL * (unsigned int)(*((_DWORD *)v12 + 2) - 1));
      }
    }
    v15 = *(unsigned __int8 *)(a1 + 152);
    v21 = *(_BYTE *)(a1 + 153);
    v16 = v11;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
    if ( (_DWORD)v4 )
    {
      v17 = StartingIndex;
      v18 = 4 * v15;
      v23 = v4;
      do
      {
        if ( v13 && (*v13 + 4096 != a3 || !v21 && ((a3 ^ *v13) & 0xFFFFFFFFFFFF0000uLL) != 0) )
        {
          v16 = (unsigned __int64 *)v16[1];
          ++v17;
        }
        *v16 = a3;
        v19 = v16 + 6;
        if ( a2 )
        {
          *v19 = a2 | *(_DWORD *)v19 & 0xFFF;
          a2 += 4096LL;
        }
        *v19 = (v18 ^ (v18 ^ (v15 ^ (*v19 ^ v15) & 0xFFFFFFFFFFFFFFFEuLL) & 0xFFFFFFFFFFFFFFFDuLL) & 0xFFFFFFFFFFFFFFFBuLL) & 0xFFFFFFFFFFFFFFF7uLL;
        RtlClearBits(*(PRTL_BITMAP *)(a1 + 24), v17, 1u);
        a3 += 4096LL;
        v18 = 4 * v15;
        ++v17;
        v13 = v16;
        v20 = v23 == (__int64 *)1;
        v23 = (__int64 *)((char *)v23 - 1);
        v16 = (unsigned __int64 *)v16[1];
      }
      while ( !v20 );
      LODWORD(v4) = a4;
      v11 = (unsigned __int64 *)v24;
    }
    if ( v26 && v16 )
    {
      --*(_DWORD *)(a1 + 72);
      memset_0(v16, 0, 0x48uLL);
    }
    if ( (_BYTE)v15 )
      *(_DWORD *)(a1 + 216) += (_DWORD)v4;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return (unsigned __int64)v11;
  }
  return result;
}
