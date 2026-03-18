/*
 * XREFs of CcFlushCachePriv @ 0x1402DA4E0
 * Callers:
 *     CcZeroEndOfLastPage @ 0x140203918 (CcZeroEndOfLastPage.c)
 *     CcZeroData @ 0x1403A6B60 (CcZeroData.c)
 *     CcFlushCacheToLsn @ 0x140478B70 (CcFlushCacheToLsn.c)
 *     CcFlushCache @ 0x14047AA10 (CcFlushCache.c)
 *     MiFlushDataSection @ 0x140483684 (MiFlushDataSection.c)
 *     CcCoherencyFlushAndPurgeCache @ 0x1404DDA40 (CcCoherencyFlushAndPurgeCache.c)
 *     CcMapAndCopyInToCache @ 0x1404DDB50 (CcMapAndCopyInToCache.c)
 * Callees:
 *     CcFlushCacheOneRange @ 0x1402C13D0 (CcFlushCacheOneRange.c)
 *     CcFlushCachePostProcessOneRange @ 0x1402D9210 (CcFlushCachePostProcessOneRange.c)
 *     CcFlushCacheAcquireRange @ 0x1402D9840 (CcFlushCacheAcquireRange.c)
 *     CcFlushCachePostProcess @ 0x1402D9BE0 (CcFlushCachePostProcess.c)
 *     CcFlushCachePreProcess @ 0x1402D9F6C (CcFlushCachePreProcess.c)
 *     ExpAllocatePoolWithTagFromNode @ 0x1402DAA60 (ExpAllocatePoolWithTagFromNode.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     DbgPrintEx @ 0x1403A9690 (DbgPrintEx.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     VfHandlePoolAlloc @ 0x140B98AC0 (VfHandlePoolAlloc.c)
 */

void __fastcall CcFlushCachePriv(const void *a1, __int64 a2, int a3, _QWORD *a4, char a5, __int128 *a6, __int64 a7)
{
  __int128 *v7; // rdi
  unsigned int v12; // edx
  ULONG_PTR v13; // r9
  void *PoolWithTagFromNode; // rax
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23[2]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v24; // [rsp+50h] [rbp-28h] BYREF
  __int64 retaddr; // [rsp+78h] [rbp+0h]

  v7 = &v24;
  if ( a6 )
    v7 = a6;
  v24 = 0LL;
  if ( a7 )
  {
    v15 = a7;
  }
  else
  {
    *(_OWORD *)v23 = 0LL;
    v12 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
    if ( (ExpPoolFlags & 8) != 0 )
    {
      v23[0] = 1LL;
      LODWORD(v23[1]) = 32;
      PoolWithTagFromNode = (void *)VfHandlePoolAlloc(
                                      NonPagedPool,
                                      0x42uLL,
                                      0x110uLL,
                                      0x42576343u,
                                      LowPoolPriority,
                                      (__int64)v23,
                                      1,
                                      retaddr);
    }
    else
    {
      v13 = v12;
      LODWORD(v13) = v12 | 0x80000000;
      PoolWithTagFromNode = (void *)ExpAllocatePoolWithTagFromNode(0x42uLL, 0x110uLL, 0x42576343uLL, v13);
    }
    v15 = (__int64)PoolWithTagFromNode;
    if ( !PoolWithTagFromNode )
    {
      *(_DWORD *)v7 = -1073741670;
      return;
    }
    memset_0(PoolWithTagFromNode, 0, 0x110uLL);
  }
  *(_BYTE *)(v15 + 108) = a5;
  *(_QWORD *)(v15 + 96) = a2;
  *(_DWORD *)(v15 + 104) = a3;
  *(_QWORD *)(v15 + 112) = v7;
  *(_QWORD *)(v15 + 24) = a1;
  *(_QWORD *)(v15 + 72) = 0LL;
  if ( a4 )
  {
    *(_QWORD *)(v15 + 80) = *a4;
    *(_QWORD *)(v15 + 88) = v15 + 80;
  }
  if ( CcFlushCachePreProcess(v15) )
  {
    if ( *(_BYTE *)(v15 + 132) )
      *(_QWORD *)(v15 + 96) = 0LL;
    v19 = *(_QWORD *)(v15 + 16);
    if ( v19 && (*(_DWORD *)(v19 + 152) & 0x4000000) == 0 )
    {
      do
      {
        if ( !(unsigned __int8)CcFlushCacheAcquireRange(v15) )
          break;
        CcFlushCacheOneRange((__int64 *)v15);
      }
      while ( CcFlushCachePostProcessOneRange((__int64 *)v15, v20, v21, v22) );
      if ( *(_QWORD *)(v15 + 232) && *(_DWORD *)(v15 + 248) )
        *(LARGE_INTEGER *)(v15 + 240) = KeQueryPerformanceCounter(0LL);
    }
    CcFlushCachePostProcess((__int64 *)v15, v16, v17, v18);
  }
  else
  {
    DbgPrintEx(
      0x7Fu,
      3u,
      "[%04x:%04x]CcFlushCachePriv: PreProcess returned FALSE, nothing to do (SOP=%p, IoStatus=0x%x)\n",
      LODWORD(KeGetCurrentThread()[1].CycleTime),
      KeGetCurrentThread()[1].CurrentRunTime,
      a1,
      *(_DWORD *)v7);
  }
  if ( v15 != a7 )
    ExFreePoolWithTag((PVOID)v15, 0x42576343u);
}
