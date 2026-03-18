/*
 * XREFs of CcWriteBehindAsync @ 0x1402A91A8
 * Callers:
 *     CcAsyncLazywriteWorker @ 0x1402A8E24 (CcAsyncLazywriteWorker.c)
 * Callees:
 *     CcFlushCacheOneRange @ 0x140240110 (CcFlushCacheOneRange.c)
 *     CcWriteBehindPreProcess @ 0x1402A8434 (CcWriteBehindPreProcess.c)
 *     CcWriteBehindPostProcess @ 0x1402A883C (CcWriteBehindPostProcess.c)
 *     CcFlushCachePostProcessOneRange @ 0x1402AACA0 (CcFlushCachePostProcessOneRange.c)
 *     CcFlushCacheAcquireRange @ 0x1402ABBD0 (CcFlushCacheAcquireRange.c)
 *     CcFlushCachePostProcess @ 0x1402ABF10 (CcFlushCachePostProcess.c)
 *     CcFlushCachePreProcess @ 0x1402AC290 (CcFlushCachePreProcess.c)
 *     DbgPrintEx @ 0x1402CB2F0 (DbgPrintEx.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
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
    if ( (unsigned __int8)CcFlushCachePreProcess(v12) )
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
          if ( !(unsigned __int8)CcFlushCacheAcquireRange(v12) )
            break;
          CcFlushCacheOneRange(v12);
          if ( !v13 )
            KeWaitForSingleObject(a3, Executive, 0, 0, 0LL);
        }
        while ( (unsigned __int8)CcFlushCachePostProcessOneRange(v12) );
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
