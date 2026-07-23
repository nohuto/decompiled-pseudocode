/*
 * XREFs of CcFlushCachePriv @ 0x1402771F0
 * Callers:
 *     CcZeroData @ 0x14040BA30 (CcZeroData.c)
 *     CcZeroEndOfLastPage @ 0x140443674 (CcZeroEndOfLastPage.c)
 *     CcFlushCacheToLsn @ 0x140474C10 (CcFlushCacheToLsn.c)
 *     CcFlushCache @ 0x140476B40 (CcFlushCache.c)
 *     MiFlushDataSection @ 0x14047F468 (MiFlushDataSection.c)
 *     CcCoherencyFlushAndPurgeCache @ 0x1404D6B50 (CcCoherencyFlushAndPurgeCache.c)
 *     CcMapAndCopyInToCache @ 0x1404D6C60 (CcMapAndCopyInToCache.c)
 * Callees:
 *     CcFlushCacheOneRange @ 0x140208260 (CcFlushCacheOneRange.c)
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 *     CcFlushCachePostProcessOneRange @ 0x140275FC0 (CcFlushCachePostProcessOneRange.c)
 *     CcFlushCacheAcquireRange @ 0x140276EF0 (CcFlushCacheAcquireRange.c)
 *     ExpAllocatePoolWithTagFromNode @ 0x1402776D0 (ExpAllocatePoolWithTagFromNode.c)
 *     CcFlushCachePreProcess @ 0x140278C74 (CcFlushCachePreProcess.c)
 *     CcFlushCachePostProcess @ 0x1402791F0 (CcFlushCachePostProcess.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     VfHandlePoolAlloc @ 0x140BAAAA0 (VfHandlePoolAlloc.c)
 */

void __fastcall CcFlushCachePriv(const void *a1, __int64 a2, int a3, _QWORD *a4, char a5, __int128 *a6, __int64 a7)
{
  __int128 *v7; // rdi
  volatile CCHAR v12; // al
  unsigned int v13; // edx
  ULONG_PTR v14; // r9
  void *PoolWithTagFromNode; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18[2]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v19; // [rsp+50h] [rbp-28h] BYREF
  __int64 retaddr; // [rsp+78h] [rbp+0h]

  v7 = &v19;
  if ( a6 )
    v7 = a6;
  v19 = 0LL;
  if ( a7 )
  {
    v16 = a7;
  }
  else
  {
    *(_OWORD *)v18 = 0LL;
    v12 = KeNumberProcessorsGroup0[9];
    v13 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
    if ( (v12 & 8) != 0 )
    {
      v18[0] = 1LL;
      LODWORD(v18[1]) = 32;
      PoolWithTagFromNode = (void *)VfHandlePoolAlloc(
                                      NonPagedPool,
                                      0x42uLL,
                                      0x110uLL,
                                      0x42576343u,
                                      LowPoolPriority,
                                      (__int64)v18,
                                      1,
                                      retaddr);
    }
    else
    {
      v14 = v13;
      LODWORD(v14) = v13 | 0x80000000;
      PoolWithTagFromNode = (void *)ExpAllocatePoolWithTagFromNode(0x42uLL, 0x110uLL, 0x42576343uLL, v14);
    }
    v16 = (__int64)PoolWithTagFromNode;
    if ( !PoolWithTagFromNode )
    {
      *(_DWORD *)v7 = -1073741670;
      return;
    }
    memset_0(PoolWithTagFromNode, 0, 0x110uLL);
  }
  *(_BYTE *)(v16 + 108) = a5;
  *(_QWORD *)(v16 + 96) = a2;
  *(_DWORD *)(v16 + 104) = a3;
  *(_QWORD *)(v16 + 112) = v7;
  *(_QWORD *)(v16 + 24) = a1;
  *(_QWORD *)(v16 + 72) = 0LL;
  if ( a4 )
  {
    *(_QWORD *)(v16 + 80) = *a4;
    *(_QWORD *)(v16 + 88) = v16 + 80;
  }
  if ( (unsigned __int8)CcFlushCachePreProcess(v16) )
  {
    if ( *(_BYTE *)(v16 + 132) )
      *(_QWORD *)(v16 + 96) = 0LL;
    v17 = *(_QWORD *)(v16 + 16);
    if ( v17 && (*(_DWORD *)(v17 + 152) & 0x4000000) == 0 )
    {
      do
      {
        if ( !(unsigned __int8)CcFlushCacheAcquireRange(v16) )
          break;
        CcFlushCacheOneRange((__int64 *)v16);
      }
      while ( CcFlushCachePostProcessOneRange((__int64 *)v16) );
      if ( *(_QWORD *)(v16 + 232) && *(_DWORD *)(v16 + 248) )
        *(LARGE_INTEGER *)(v16 + 240) = KeQueryPerformanceCounter(0LL);
    }
    CcFlushCachePostProcess(v16);
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
  if ( v16 != a7 )
    ExFreePoolWithTag((PVOID)v16, 0x42576343u);
}
