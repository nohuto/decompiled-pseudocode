/*
 * XREFs of MmFlushSection @ 0x140240CC4
 * Callers:
 *     CcFlushCacheOneRange @ 0x140240110 (CcFlushCacheOneRange.c)
 *     CcFlushCachePostProcessOneRange @ 0x1402AACA0 (CcFlushCachePostProcessOneRange.c)
 *     CcFlushCachePreProcess @ 0x1402AC290 (CcFlushCachePreProcess.c)
 *     CcMdlWriteComplete2 @ 0x140461194 (CcMdlWriteComplete2.c)
 *     CcPurgeAndClearCacheSection @ 0x1404612E4 (CcPurgeAndClearCacheSection.c)
 *     MiFlushDataSection @ 0x140483F48 (MiFlushDataSection.c)
 *     CcUnpinRepinnedBcb @ 0x140494980 (CcUnpinRepinnedBcb.c)
 *     CcSetFileSizesEx @ 0x1404A6800 (CcSetFileSizesEx.c)
 * Callees:
 *     MiComputeFlushRange @ 0x14022F1B8 (MiComputeFlushRange.c)
 *     MiFlushSection @ 0x14023A550 (MiFlushSection.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x140240FA0 (ObFastDereferenceObjectDeferDelete.c)
 *     MiReferenceControlAreaFileWithTag @ 0x1402440D0 (MiReferenceControlAreaFileWithTag.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     KeDelayExecutionThread @ 0x14033BC60 (KeDelayExecutionThread.c)
 *     MiFreeOverlappedFlushEntry @ 0x140371070 (MiFreeOverlappedFlushEntry.c)
 *     MiFlushRelease @ 0x1403710F0 (MiFlushRelease.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1409D1DE0 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1409D2090 (FsRtlReleaseFileForCcFlush.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmFlushSection(__int64 *a1, __int64 *a2, __int64 a3, struct _KEVENT *a4, _DWORD *a5, int a6)
{
  __int64 *v8; // r15
  _DWORD *v9; // rdi
  int v10; // r12d
  int v11; // r14d
  volatile signed __int32 *Pool; // rbx
  __int64 v13; // r9
  __int64 v14; // rax
  struct _KTHREAD *CurrentThread; // r15
  __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // r14
  struct _FILE_OBJECT *v19; // r13
  __int64 *v20; // r12
  int v21; // r15d
  int v22; // esi
  __int64 result; // rax
  int v24; // [rsp+28h] [rbp-58h]
  __int64 v25; // [rsp+40h] [rbp-40h]
  struct _KTHREAD *v26; // [rsp+48h] [rbp-38h]
  __int128 v27; // [rsp+50h] [rbp-30h] BYREF
  __int128 v28; // [rsp+60h] [rbp-20h]
  __int128 v29; // [rsp+70h] [rbp-10h]
  unsigned int v30; // [rsp+C8h] [rbp+48h]
  __int64 v32; // [rsp+D8h] [rbp+58h] BYREF

  v32 = 0LL;
  LODWORD(v8) = (_DWORD)a2;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  if ( a2 )
  {
    v8 = &v32;
    v32 = *a2;
  }
  v9 = a5;
  v10 = a6;
  v11 = a6 & 1;
  *a5 = 0;
  *((_QWORD *)v9 + 1) = 0LL;
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
    *v9 = result;
    return result;
  }
LABEL_5:
  if ( (unsigned int)MiComputeFlushRange(a1, (int)v8, a3, 0, (__int64)&v27) )
  {
    if ( Pool )
    {
      v14 = *((_QWORD *)&v28 + 1);
      *((_DWORD *)Pool + 5) = 0;
      *(_QWORD *)Pool = v14;
      *((_QWORD *)Pool + 1) = v29;
      *((_QWORD *)Pool + 4) = a4;
      *((_QWORD *)Pool + 3) = v9;
      *((_DWORD *)Pool + 4) = 1;
    }
    CurrentThread = KeGetCurrentThread();
    v16 = v27;
    v26 = CurrentThread;
    LOBYTE(a5) = BYTE4(CurrentThread[1].Queue);
    BYTE4(CurrentThread[1].Queue) = 1;
    if ( v11 )
    {
      v30 = 0;
      v17 = MiReferenceControlAreaFileWithTag(v16, 1666411853LL, 0LL, v13);
      v18 = v29;
      v19 = (struct _FILE_OBJECT *)v17;
      v20 = (__int64 *)*((_QWORD *)&v28 + 1);
      v21 = a6;
      v25 = v17;
      do
      {
        v22 = FsRtlAcquireFileForCcFlushEx(v19);
        if ( v22 < 0 )
          break;
        v22 = MiFlushSection(*((unsigned __int64 *)&v27 + 1), v28, v20, v18, (__int64)Pool, v21, 0LL, v9);
        FsRtlReleaseFileForCcFlush(v19);
        if ( v22 != -1073741740 )
          break;
        ++v30;
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
      }
      while ( v30 < 5 );
      v16 = v27;
      ObFastDereferenceObjectDeferDelete(v27 + 64, v25, 1666411853LL);
      CurrentThread = v26;
    }
    else
    {
      v18 = v29;
      v24 = v10;
      v20 = (__int64 *)*((_QWORD *)&v28 + 1);
      v22 = MiFlushSection(
              *((unsigned __int64 *)&v27 + 1),
              v28,
              *((__int64 **)&v28 + 1),
              v29,
              (__int64)Pool,
              v24,
              0LL,
              v9);
    }
    if ( v22 < 0 || *((_QWORD *)v9 + 1) )
      *((_QWORD *)v9 + 1) += (unsigned int)(DWORD2(v29) << 12);
    else
      *((_QWORD *)v9 + 1) = a3;
    BYTE4(CurrentThread[1].Queue) = (_BYTE)a5;
    if ( Pool )
    {
      if ( _InterlockedExchangeAdd(Pool + 4, 0xFFFFFFFF) == 1 )
        MiFreeOverlappedFlushEntry((PVOID)Pool);
    }
    else
    {
      MiFlushRelease(v16, v20, v18);
    }
    return (unsigned int)v22;
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
