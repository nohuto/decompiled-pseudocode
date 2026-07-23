/*
 * XREFs of MmFlushSection @ 0x140208E14
 * Callers:
 *     CcFlushCacheOneRange @ 0x140208260 (CcFlushCacheOneRange.c)
 *     CcFlushCachePostProcessOneRange @ 0x140275FC0 (CcFlushCachePostProcessOneRange.c)
 *     CcFlushCachePreProcess @ 0x140278C74 (CcFlushCachePreProcess.c)
 *     CcMdlWriteComplete2 @ 0x1404567A4 (CcMdlWriteComplete2.c)
 *     CcPurgeAndClearCacheSection @ 0x1404568F4 (CcPurgeAndClearCacheSection.c)
 *     MiFlushDataSection @ 0x14047F468 (MiFlushDataSection.c)
 *     CcUnpinRepinnedBcb @ 0x14048F410 (CcUnpinRepinnedBcb.c)
 *     CcSetFileSizesEx @ 0x1404A10D0 (CcSetFileSizesEx.c)
 * Callees:
 *     ObFastDereferenceObjectDeferDelete @ 0x1402090F0 (ObFastDereferenceObjectDeferDelete.c)
 *     MiReferenceControlAreaFileWithTag @ 0x14020C860 (MiReferenceControlAreaFileWithTag.c)
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     MiFreeOverlappedFlushEntry @ 0x14025943C (MiFreeOverlappedFlushEntry.c)
 *     MiFlushRelease @ 0x1402594B0 (MiFlushRelease.c)
 *     MiFlushSection @ 0x140272630 (MiFlushSection.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiComputeFlushRange @ 0x140302AC8 (MiComputeFlushRange.c)
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1409C1C10 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1409C1EC0 (FsRtlReleaseFileForCcFlush.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmFlushSection(int a1, __int64 *a2, __int64 a3, struct _KEVENT *a4, _DWORD *a5, int a6)
{
  __int64 *v8; // r15
  __int64 v9; // rdi
  int v10; // r12d
  int v11; // r14d
  volatile signed __int32 *Pool; // rbx
  __int64 v13; // rax
  struct _KTHREAD *CurrentThread; // r15
  __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // r14
  struct _FILE_OBJECT *v18; // r13
  __int64 v19; // r12
  int v20; // r15d
  int v21; // esi
  __int64 result; // rax
  int v23; // [rsp+28h] [rbp-58h]
  __int64 v24; // [rsp+40h] [rbp-40h]
  struct _KTHREAD *v25; // [rsp+48h] [rbp-38h]
  __int128 v26; // [rsp+50h] [rbp-30h] BYREF
  __int128 v27; // [rsp+60h] [rbp-20h]
  __int128 v28; // [rsp+70h] [rbp-10h]
  unsigned int v29; // [rsp+C8h] [rbp+48h]
  __int64 v31; // [rsp+D8h] [rbp+58h] BYREF

  v31 = 0LL;
  LODWORD(v8) = (_DWORD)a2;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  if ( a2 )
  {
    v8 = &v31;
    v31 = *a2;
  }
  v9 = (__int64)a5;
  v10 = a6;
  v11 = a6 & 1;
  *a5 = 0;
  *(_QWORD *)(v9 + 8) = 0LL;
  if ( !a4 )
  {
    Pool = 0LL;
    goto LABEL_5;
  }
  if ( v11 )
  {
    KeSetEvent(a4, 0, 0);
    result = 3221225716LL;
    goto LABEL_32;
  }
  Pool = (volatile signed __int32 *)MiAllocatePool(0x40uLL, 0x30uLL);
  if ( !Pool )
  {
    KeSetEvent(a4, 0, 0);
    result = 3221225626LL;
LABEL_32:
    *(_DWORD *)v9 = result;
    return result;
  }
LABEL_5:
  if ( (unsigned int)MiComputeFlushRange(a1, (_DWORD)v8, a3, 0, (__int64)&v26) )
  {
    if ( Pool )
    {
      v13 = *((_QWORD *)&v27 + 1);
      *((_DWORD *)Pool + 5) = 0;
      *(_QWORD *)Pool = v13;
      *((_QWORD *)Pool + 1) = v28;
      *((_QWORD *)Pool + 4) = a4;
      *((_QWORD *)Pool + 3) = v9;
      *((_DWORD *)Pool + 4) = 1;
    }
    CurrentThread = KeGetCurrentThread();
    v15 = v26;
    v25 = CurrentThread;
    LOBYTE(a5) = BYTE4(CurrentThread[1].Queue);
    BYTE4(CurrentThread[1].Queue) = 1;
    if ( v11 )
    {
      v29 = 0;
      v16 = MiReferenceControlAreaFileWithTag(v15, 1666411853LL, 0LL);
      v17 = v28;
      v18 = (struct _FILE_OBJECT *)v16;
      v19 = *((_QWORD *)&v27 + 1);
      v20 = a6;
      v24 = v16;
      do
      {
        v21 = FsRtlAcquireFileForCcFlushEx(v18);
        if ( v21 < 0 )
          break;
        v21 = MiFlushSection(DWORD2(v26), v27, v19, v17, (__int64)Pool, v20, 0LL, v9);
        FsRtlReleaseFileForCcFlush(v18);
        if ( v21 != -1073741740 )
          break;
        ++v29;
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
      }
      while ( v29 < 5 );
      v15 = v26;
      ObFastDereferenceObjectDeferDelete(v26 + 64, v24, 1666411853LL);
      CurrentThread = v25;
    }
    else
    {
      v17 = v28;
      v23 = v10;
      v19 = *((_QWORD *)&v27 + 1);
      v21 = MiFlushSection(DWORD2(v26), v27, DWORD2(v27), v28, (__int64)Pool, v23, 0LL, v9);
    }
    if ( v21 < 0 || *(_QWORD *)(v9 + 8) )
      *(_QWORD *)(v9 + 8) += (unsigned int)(DWORD2(v28) << 12);
    else
      *(_QWORD *)(v9 + 8) = a3;
    BYTE4(CurrentThread[1].Queue) = (_BYTE)a5;
    if ( Pool )
    {
      if ( _InterlockedExchangeAdd(Pool + 4, 0xFFFFFFFF) == 1 )
        MiFreeOverlappedFlushEntry((PVOID)Pool);
    }
    else
    {
      MiFlushRelease(v15, v19, v17);
    }
    return (unsigned int)v21;
  }
  else
  {
    if ( Pool )
    {
      ExFreePoolWithTag((PVOID)Pool, 0);
      KeSetEvent(a4, 0, 0);
    }
    return 0LL;
  }
}
