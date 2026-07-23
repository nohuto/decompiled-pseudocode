/*
 * XREFs of CcWriteBehindInternal @ 0x140279FE0
 * Callers:
 *     CcWriteBehind @ 0x1402798D4 (CcWriteBehind.c)
 * Callees:
 *     CcFlushCacheOneRange @ 0x140208260 (CcFlushCacheOneRange.c)
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 *     CcFlushCachePostProcessOneRange @ 0x140275FC0 (CcFlushCachePostProcessOneRange.c)
 *     CcFlushCacheAcquireRange @ 0x140276EF0 (CcFlushCacheAcquireRange.c)
 *     CcFlushCachePreProcess @ 0x140278C74 (CcFlushCachePreProcess.c)
 *     CcFlushCachePostProcess @ 0x1402791F0 (CcFlushCachePostProcess.c)
 *     CcWriteBehindPreProcess @ 0x14027A224 (CcWriteBehindPreProcess.c)
 *     CcWriteBehindPostProcess @ 0x14027A62C (CcWriteBehindPostProcess.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

ULONG __fastcall CcWriteBehindInternal(__int64 a1)
{
  __int128 *v1; // r14
  int v3; // ebx
  const void *v4; // r15
  __int128 *v5; // rsi
  ULONG result; // eax
  char v7; // cl
  char v8; // si
  _DWORD *v9; // rcx
  _DWORD *v10; // r8
  int v11; // r10d
  __int128 v12; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v13[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v14; // [rsp+70h] [rbp-90h]
  const void *v15; // [rsp+78h] [rbp-88h]
  __int64 v16; // [rsp+A8h] [rbp-58h]
  __int64 v17; // [rsp+B0h] [rbp-50h] BYREF
  __int64 *v18; // [rsp+B8h] [rbp-48h]
  void *v19; // [rsp+C0h] [rbp-40h]
  int v20; // [rsp+C8h] [rbp-38h]
  char v21; // [rsp+CCh] [rbp-34h]
  __int128 *v22; // [rsp+D0h] [rbp-30h]
  char v23; // [rsp+E4h] [rbp-1Ch]
  __int16 v24; // [rsp+E8h] [rbp-18h]
  char v25; // [rsp+EBh] [rbp-15h]
  __int64 v26; // [rsp+148h] [rbp+48h]
  LARGE_INTEGER PerformanceCounter; // [rsp+150h] [rbp+50h]
  int v28; // [rsp+158h] [rbp+58h]
  __int64 v29; // [rsp+168h] [rbp+68h]

  v1 = *(__int128 **)(a1 + 24);
  v3 = 0;
  while ( 1 )
  {
    memset_0(v13, 0, 0x110uLL);
    v22 = v1;
    v24 = 0;
    v29 = a1;
    v25 = 1;
    if ( (unsigned int)CcWriteBehindPreProcess(v13) == 1 )
      break;
    v4 = v15;
    v19 = &CcNoDelay;
    v5 = &v12;
    if ( v1 )
      v5 = v1;
    v20 = 1;
    v21 = 0;
    v22 = v5;
    v16 = 0LL;
    v12 = 0LL;
    if ( v18 )
    {
      v17 = *v18;
      v18 = &v17;
    }
    if ( CcFlushCachePreProcess((__int64)v13) )
    {
      if ( v23 )
        v19 = 0LL;
      if ( v14 && (*(_DWORD *)(v14 + 152) & 0x4000000) == 0 )
      {
        do
        {
          if ( !(unsigned __int8)CcFlushCacheAcquireRange((__int64)v13) )
            break;
          CcFlushCacheOneRange(v13);
        }
        while ( CcFlushCachePostProcessOneRange(v13) );
        if ( v26 && v28 )
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
      }
      CcFlushCachePostProcess(v13);
    }
    else
    {
      DbgPrintEx(
        0x7Fu,
        3u,
        "[%04x:%04x]CcFlushCachePriv: PreProcess returned FALSE, nothing to do (SOP=%p, IoStatus=0x%x)\n",
        LODWORD(KeGetCurrentThread()[1].CycleTime),
        KeGetCurrentThread()[1].CurrentRunTime,
        v4,
        *(_DWORD *)v5);
    }
    result = CcWriteBehindPostProcess(v13, 0LL);
    v7 = HIBYTE(v24);
    v8 = result;
    if ( !(_BYTE)result || HIBYTE(v24) )
    {
      v10 = *(_DWORD **)(a1 + 144);
      if ( v10 )
        v11 = v10[6];
      else
        v11 = 0;
      result = DbgPrintEx(
                 0x7Fu,
                 3u,
                 "[%04x:%04x]CcWriteBehindInternal: PostProc:%d, Retry:%d, PVCM:%p(vid:%2lx)\n",
                 LODWORD(KeGetCurrentThread()[1].CycleTime),
                 KeGetCurrentThread()[1].CurrentRunTime,
                 (unsigned __int8)result,
                 HIBYTE(v24),
                 v10,
                 v11);
      v7 = HIBYTE(v24);
    }
    if ( v8 || !v7 )
      return result;
  }
  v9 = *(_DWORD **)(a1 + 144);
  if ( v9 )
    v3 = v9[6];
  return DbgPrintEx(
           0x7Fu,
           3u,
           "[%04x:%04x]CcWriteBehindInternal: WBPreProcess FAILED(%lx): PVCM:%p(vid:%2lx)\n",
           LODWORD(KeGetCurrentThread()[1].CycleTime),
           KeGetCurrentThread()[1].CurrentRunTime,
           1,
           v9,
           v3);
}
