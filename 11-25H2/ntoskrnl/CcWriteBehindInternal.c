/*
 * XREFs of CcWriteBehindInternal @ 0x1403AC840
 * Callers:
 *     CcWriteBehind @ 0x1403AC318 (CcWriteBehind.c)
 * Callees:
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

ULONG __fastcall CcWriteBehindInternal(__int64 a1)
{
  __int128 *v1; // r14
  int v3; // ebx
  const void *v4; // r15
  __int128 *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  ULONG result; // eax
  char v13; // cl
  char v14; // si
  _DWORD *v15; // rcx
  _DWORD *v16; // r8
  int v17; // r10d
  __int128 v18; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v19[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v20; // [rsp+70h] [rbp-90h]
  const void *v21; // [rsp+78h] [rbp-88h]
  __int64 v22; // [rsp+A8h] [rbp-58h]
  __int64 v23; // [rsp+B0h] [rbp-50h] BYREF
  __int64 *v24; // [rsp+B8h] [rbp-48h]
  void *v25; // [rsp+C0h] [rbp-40h]
  int v26; // [rsp+C8h] [rbp-38h]
  char v27; // [rsp+CCh] [rbp-34h]
  __int128 *v28; // [rsp+D0h] [rbp-30h]
  char v29; // [rsp+E4h] [rbp-1Ch]
  __int16 v30; // [rsp+E8h] [rbp-18h]
  char v31; // [rsp+EBh] [rbp-15h]
  __int64 v32; // [rsp+148h] [rbp+48h]
  LARGE_INTEGER PerformanceCounter; // [rsp+150h] [rbp+50h]
  int v34; // [rsp+158h] [rbp+58h]
  __int64 v35; // [rsp+168h] [rbp+68h]

  v1 = *(__int128 **)(a1 + 24);
  v3 = 0;
  while ( 1 )
  {
    memset_0(v19, 0, 0x110uLL);
    v28 = v1;
    v30 = 0;
    v35 = a1;
    v31 = 1;
    if ( (unsigned int)CcWriteBehindPreProcess(v19) == 1 )
      break;
    v4 = v21;
    v25 = &CcNoDelay;
    v5 = &v18;
    if ( v1 )
      v5 = v1;
    v26 = 1;
    v27 = 0;
    v28 = v5;
    v22 = 0LL;
    v18 = 0LL;
    if ( v24 )
    {
      v23 = *v24;
      v24 = &v23;
    }
    if ( CcFlushCachePreProcess((__int64)v19) )
    {
      if ( v29 )
        v25 = 0LL;
      if ( v20 && (*(_DWORD *)(v20 + 152) & 0x4000000) == 0 )
      {
        do
        {
          if ( !(unsigned __int8)CcFlushCacheAcquireRange((__int64)v19) )
            break;
          CcFlushCacheOneRange(v19);
        }
        while ( CcFlushCachePostProcessOneRange(v19, v9, v10, v11) );
        if ( v32 && v34 )
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
      }
      CcFlushCachePostProcess(v19, v6, v7, v8);
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
    result = CcWriteBehindPostProcess(v19, 0LL);
    v13 = HIBYTE(v30);
    v14 = result;
    if ( !(_BYTE)result || HIBYTE(v30) )
    {
      v16 = *(_DWORD **)(a1 + 144);
      if ( v16 )
        v17 = v16[6];
      else
        v17 = 0;
      result = DbgPrintEx(
                 0x7Fu,
                 3u,
                 "[%04x:%04x]CcWriteBehindInternal: PostProc:%d, Retry:%d, PVCM:%p(vid:%2lx)\n",
                 LODWORD(KeGetCurrentThread()[1].CycleTime),
                 KeGetCurrentThread()[1].CurrentRunTime,
                 (unsigned __int8)result,
                 HIBYTE(v30),
                 v16,
                 v17);
      v13 = HIBYTE(v30);
    }
    if ( v14 || !v13 )
      return result;
  }
  v15 = *(_DWORD **)(a1 + 144);
  if ( v15 )
    v3 = v15[6];
  return DbgPrintEx(
           0x7Fu,
           3u,
           "[%04x:%04x]CcWriteBehindInternal: WBPreProcess FAILED(%lx): PVCM:%p(vid:%2lx)\n",
           LODWORD(KeGetCurrentThread()[1].CycleTime),
           KeGetCurrentThread()[1].CurrentRunTime,
           1,
           v15,
           v3);
}
