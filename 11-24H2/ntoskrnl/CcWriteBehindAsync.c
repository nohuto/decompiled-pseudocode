/*
 * XREFs of CcWriteBehindAsync @ 0x14027B44C
 * Callers:
 *     CcAsyncLazywriteWorker @ 0x14027B0C8 (CcAsyncLazywriteWorker.c)
 * Callees:
 *     CcFlushCacheOneRange @ 0x140208260 (CcFlushCacheOneRange.c)
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 *     CcFlushCachePostProcessOneRange @ 0x140275FC0 (CcFlushCachePostProcessOneRange.c)
 *     CcFlushCacheAcquireRange @ 0x140276EF0 (CcFlushCacheAcquireRange.c)
 *     CcFlushCachePreProcess @ 0x140278C74 (CcFlushCachePreProcess.c)
 *     CcFlushCachePostProcess @ 0x1402791F0 (CcFlushCachePostProcess.c)
 *     CcWriteBehindPreProcess @ 0x14027A224 (CcWriteBehindPreProcess.c)
 *     CcWriteBehindPostProcess @ 0x14027A62C (CcWriteBehindPostProcess.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall CcWriteBehindAsync(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  int v6; // eax
  _DWORD *v7; // rax
  __int64 v8; // rcx
  int v9; // ebx
  char v10; // al
  __int64 v12[7]; // [rsp+58h] [rbp-B0h] BYREF
  int v13; // [rsp+94h] [rbp-74h]
  _DWORD *v14; // [rsp+A0h] [rbp-68h]
  void *v15; // [rsp+B8h] [rbp-50h]
  int v16; // [rsp+C0h] [rbp-48h]
  _DWORD *v17; // [rsp+C8h] [rbp-40h]
  __int16 v18; // [rsp+E0h] [rbp-28h]
  char v19; // [rsp+E3h] [rbp-25h]
  __int64 v20; // [rsp+140h] [rbp+38h]
  LARGE_INTEGER PerformanceCounter; // [rsp+148h] [rbp+40h]
  int v22; // [rsp+150h] [rbp+48h]
  __int64 v23; // [rsp+160h] [rbp+58h]

  while ( 1 )
  {
    memset_0(v12, 0, 0x110uLL);
    v18 = 0;
    v17 = a2;
    v23 = a1;
    v19 = 0;
    v6 = CcWriteBehindPreProcess((__int64)v12);
    if ( v6 == 2 )
    {
      *(_QWORD *)(a1 + 16) = 0LL;
      return 2LL;
    }
    if ( v6 == 1 )
      break;
    v16 = 1;
    v15 = &CcNoDelay;
    v14 = a3;
    if ( CcFlushCachePreProcess((__int64)v12) )
    {
      v7 = v14;
      v15 = 0LL;
      v8 = v12[2];
      v14[1] = 0;
      *(_WORD *)v7 = 1;
      *((_BYTE *)v7 + 2) = 6;
      v7 += 2;
      *((_QWORD *)v7 + 1) = v7;
      *(_QWORD *)v7 = v7;
      if ( v8 && (*(_DWORD *)(v8 + 152) & 0x4000000) == 0 )
      {
        do
        {
          if ( !(unsigned __int8)CcFlushCacheAcquireRange((__int64)v12) )
            break;
          CcFlushCacheOneRange(v12);
          if ( !v13 )
            KeWaitForSingleObject(a3, Executive, 0, 0, 0LL);
        }
        while ( CcFlushCachePostProcessOneRange(v12) );
        if ( v20 && v22 )
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
      }
      CcFlushCachePostProcess(v12);
    }
    else
    {
      DbgPrintEx(
        0x7Fu,
        3u,
        "[%04x:%04x]CcWriteBehindAsync: PreProcess returned FALSE, nothing to do (SOP=%p, IoStatus=0x%x)\n",
        LODWORD(KeGetCurrentThread()[1].CycleTime),
        KeGetCurrentThread()[1].CurrentRunTime,
        (const void *)v12[3],
        *a2);
    }
    v9 = (unsigned __int8)CcWriteBehindPostProcess((__int64)v12, 0);
    v10 = HIBYTE(v18);
    if ( !(_BYTE)v9 || HIBYTE(v18) )
    {
      DbgPrintEx(
        0x7Fu,
        3u,
        "[%04x:%04x]CcWriteBehindAsync: PostProc:%d, Retry:%d, PVCM:%p(vid:%2lx)\n",
        LODWORD(KeGetCurrentThread()[1].CycleTime),
        KeGetCurrentThread()[1].CurrentRunTime,
        v9,
        HIBYTE(v18),
        *(const void **)(a1 + 144),
        *(_DWORD *)(*(_QWORD *)(a1 + 144) + 24LL));
      v10 = HIBYTE(v18);
    }
    if ( (_BYTE)v9 || !v10 )
      return 0LL;
  }
  DbgPrintEx(
    0x7Fu,
    3u,
    "[%04x:%04x]CcWriteBehindAsync: WBPreProcess FAILED (%lx): PVCM:%p(vid:%2lx)\n",
    LODWORD(KeGetCurrentThread()[1].CycleTime),
    KeGetCurrentThread()[1].CurrentRunTime,
    1,
    *(const void **)(a1 + 144),
    *(_DWORD *)(*(_QWORD *)(a1 + 144) + 24LL));
  return 1LL;
}
