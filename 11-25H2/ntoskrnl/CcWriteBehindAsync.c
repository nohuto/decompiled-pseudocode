/*
 * XREFs of CcWriteBehindAsync @ 0x1403AB04C
 * Callers:
 *     CcAsyncLazywriteWorker @ 0x1403AB228 (CcAsyncLazywriteWorker.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     CcFlushCacheOneRange @ 0x1402C13D0 (CcFlushCacheOneRange.c)
 *     CcFlushCachePostProcessOneRange @ 0x1402D9210 (CcFlushCachePostProcessOneRange.c)
 *     CcFlushCacheAcquireRange @ 0x1402D9840 (CcFlushCacheAcquireRange.c)
 *     CcFlushCachePostProcess @ 0x1402D9BE0 (CcFlushCachePostProcess.c)
 *     CcFlushCachePreProcess @ 0x1402D9F6C (CcFlushCachePreProcess.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     DbgPrintEx @ 0x1403A9690 (DbgPrintEx.c)
 *     CcWriteBehindPreProcess @ 0x1403ACA84 (CcWriteBehindPreProcess.c)
 *     CcWriteBehindPostProcess @ 0x1403ACE8C (CcWriteBehindPostProcess.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall CcWriteBehindAsync(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  _DWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // ebx
  char v16; // al
  __int64 v18[7]; // [rsp+58h] [rbp-B0h] BYREF
  int v19; // [rsp+94h] [rbp-74h]
  _DWORD *v20; // [rsp+A0h] [rbp-68h]
  void *v21; // [rsp+B8h] [rbp-50h]
  int v22; // [rsp+C0h] [rbp-48h]
  _DWORD *v23; // [rsp+C8h] [rbp-40h]
  __int16 v24; // [rsp+E0h] [rbp-28h]
  char v25; // [rsp+E3h] [rbp-25h]
  __int64 v26; // [rsp+140h] [rbp+38h]
  LARGE_INTEGER PerformanceCounter; // [rsp+148h] [rbp+40h]
  int v28; // [rsp+150h] [rbp+48h]
  __int64 v29; // [rsp+160h] [rbp+58h]

  while ( 1 )
  {
    memset_0(v18, 0, 0x110uLL);
    v24 = 0;
    v23 = a2;
    v29 = a1;
    v25 = 0;
    v6 = CcWriteBehindPreProcess(v18);
    if ( v6 == 2 )
    {
      *(_QWORD *)(a1 + 16) = 0LL;
      return 2LL;
    }
    if ( v6 == 1 )
      break;
    v22 = 1;
    v21 = &CcNoDelay;
    v20 = a3;
    if ( CcFlushCachePreProcess((__int64)v18) )
    {
      v10 = v20;
      v21 = 0LL;
      v11 = v18[2];
      v20[1] = 0;
      *(_WORD *)v10 = 1;
      *((_BYTE *)v10 + 2) = 6;
      v10 += 2;
      *((_QWORD *)v10 + 1) = v10;
      *(_QWORD *)v10 = v10;
      if ( v11 && (*(_DWORD *)(v11 + 152) & 0x4000000) == 0 )
      {
        do
        {
          if ( !(unsigned __int8)CcFlushCacheAcquireRange((__int64)v18) )
            break;
          CcFlushCacheOneRange(v18);
          if ( !v19 )
            KeWaitForSingleObject(a3, Executive, 0, 0, 0LL);
        }
        while ( CcFlushCachePostProcessOneRange(v18, v12, v13, v14) );
        if ( v26 && v28 )
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
      }
      CcFlushCachePostProcess(v18, v7, v8, v9);
    }
    else
    {
      DbgPrintEx(
        0x7Fu,
        3u,
        "[%04x:%04x]CcWriteBehindAsync: PreProcess returned FALSE, nothing to do (SOP=%p, IoStatus=0x%x)\n",
        LODWORD(KeGetCurrentThread()[1].CycleTime),
        KeGetCurrentThread()[1].CurrentRunTime,
        (const void *)v18[3],
        *a2);
    }
    v15 = (unsigned __int8)CcWriteBehindPostProcess(v18, 0LL);
    v16 = HIBYTE(v24);
    if ( !(_BYTE)v15 || HIBYTE(v24) )
    {
      DbgPrintEx(
        0x7Fu,
        3u,
        "[%04x:%04x]CcWriteBehindAsync: PostProc:%d, Retry:%d, PVCM:%p(vid:%2lx)\n",
        LODWORD(KeGetCurrentThread()[1].CycleTime),
        KeGetCurrentThread()[1].CurrentRunTime,
        v15,
        HIBYTE(v24),
        *(const void **)(a1 + 144),
        *(_DWORD *)(*(_QWORD *)(a1 + 144) + 24LL));
      v16 = HIBYTE(v24);
    }
    if ( (_BYTE)v15 || !v16 )
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
