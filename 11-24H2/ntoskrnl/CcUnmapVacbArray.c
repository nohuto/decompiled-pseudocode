/*
 * XREFs of CcUnmapVacbArray @ 0x1402073E0
 * Callers:
 *     CcPurgeCacheSection @ 0x1402070C0 (CcPurgeCacheSection.c)
 *     CcUnmapAndPurge @ 0x140207728 (CcUnmapAndPurge.c)
 *     CcGetVirtualAddress @ 0x140229480 (CcGetVirtualAddress.c)
 *     CcFlushCachePreProcess @ 0x140278C74 (CcFlushCachePreProcess.c)
 *     CcUnmapFileOffsetFromSystemCache @ 0x1404D8510 (CcUnmapFileOffsetFromSystemCache.c)
 * Callees:
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     KeReleaseQueuedSpinLock @ 0x1402CB820 (KeReleaseQueuedSpinLock.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     CcSetVacbLargeOffset @ 0x140357260 (CcSetVacbLargeOffset.c)
 *     KeAcquireQueuedSpinLock @ 0x140357D70 (KeAcquireQueuedSpinLock.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x1403EEF44 (CcAcquireBcbLockAndVacbLock.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x1403EEFB0 (CcReleaseBcbLockAndVacbLock.c)
 *     CcSetVacbInFreeList @ 0x1403EF028 (CcSetVacbInFreeList.c)
 *     CcGetVacbLargeOffset @ 0x1403EF0D0 (CcGetVacbLargeOffset.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     CcUnmapVacb @ 0x1409DC780 (CcUnmapVacb.c)
 */

__int64 __fastcall CcUnmapVacbArray(__int64 a1, __int64 *a2, unsigned int a3, char a4, char a5, char a6)
{
  unsigned int v8; // r15d
  char v9; // r12
  __int64 v11; // rax
  signed __int64 v12; // rbx
  signed __int64 v13; // rdi
  bool v14; // zf
  __int64 v15; // rax
  __int64 v16; // r14
  void *v17; // rbp
  __int64 v18; // rax
  __int64 v19; // r14
  KIRQL v20; // al
  __int64 v21; // rcx
  __int64 v22; // r8
  KIRQL v23; // bp
  signed __int32 v24[8]; // [rsp+0h] [rbp-78h] BYREF
  BOOL v25; // [rsp+30h] [rbp-48h]
  int v26; // [rsp+34h] [rbp-44h]
  signed __int64 v27; // [rsp+38h] [rbp-40h]
  __int64 v28; // [rsp+40h] [rbp-38h]
  unsigned __int8 v29; // [rsp+80h] [rbp+8h]

  v29 = 1;
  v27 = 0LL;
  v8 = 0;
  v9 = 1;
  v28 = *(_QWORD *)(a1 + 536);
  if ( !*(_QWORD *)(a1 + 88) )
    return 1LL;
  if ( a2 )
  {
    v11 = *a2;
    v12 = *a2 & 0xFFFFFFFFFFFC0000uLL;
    v27 = v12;
    if ( a3 )
      v13 = v11 + a3;
    else
      v13 = *(_QWORD *)(a1 + 376);
  }
  else
  {
    v13 = *(_QWORD *)(a1 + 32);
    v12 = v27;
  }
  v14 = (*(_DWORD *)(a1 + 152) & 0x200) == 0;
  v26 = *(_DWORD *)(a1 + 152) & 0x200;
  v25 = !v14;
  CcAcquireBcbLockAndVacbLock(!v14, a1);
  if ( a4 )
  {
    v8 = 1;
    *(_QWORD *)(a1 + 344) = v13;
  }
  if ( v12 < v13 )
  {
    while ( 1 )
    {
      v15 = *(_QWORD *)(a1 + 32);
      if ( v12 >= v15 )
        goto LABEL_38;
      v16 = v15 <= 0x2000000
          ? *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * ((unsigned __int64)(unsigned int)v27 >> 18))
          : CcGetVacbLargeOffset(a1, v12);
      if ( !v16 )
        goto LABEL_38;
      if ( !*(_WORD *)(v16 + 16) )
        break;
      if ( a6 )
      {
        v12 += 0x40000LL;
        v27 = v12;
        if ( a5 )
          KeBugCheckEx(0x34u, 0xC66uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      }
      else
      {
        if ( !a5 )
        {
          v29 = 0;
          goto LABEL_42;
        }
        v17 = *(void **)(a1 + 192);
        if ( v17 )
        {
          if ( v9 )
          {
            KeResetEvent(*(PRKEVENT *)(a1 + 192));
            _InterlockedOr(v24, 0);
            v9 = 0;
          }
          else
          {
            CcReleaseBcbLockAndVacbLock(v25, a1);
            KeWaitForSingleObject(v17, Executive, 0, 0, 0LL);
            v9 = 1;
            if ( v26 )
              ExAcquireFastMutex((PKGUARDED_MUTEX)(a1 + 288));
            v18 = KeAbPreAcquire(a1 + 104, 0LL, 0LL);
            v19 = v18;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 104), 0LL) )
              ExfAcquirePushLockExclusiveEx(a1 + 104, v18, a1 + 104);
            if ( v19 )
              *(_BYTE *)(v19 + 10) = 1;
          }
        }
        else
        {
          v9 = 0;
          *(_WORD *)(a1 + 352) = 0;
          *(_QWORD *)(a1 + 368) = a1 + 360;
          *(_QWORD *)(a1 + 360) = a1 + 360;
          *(_BYTE *)(a1 + 354) = 6;
          *(_DWORD *)(a1 + 356) = 0;
          _InterlockedExchange64((volatile __int64 *)(a1 + 192), a1 + 352);
        }
      }
LABEL_39:
      if ( v12 >= v13 )
        goto LABEL_42;
    }
    v9 = 1;
    if ( *(__int64 *)(a1 + 32) <= 0x2000000 )
      *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * ((unsigned __int64)(unsigned int)v27 >> 18)) = 0LL;
    else
      CcSetVacbLargeOffset(a1, v12, 0LL, 0LL);
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 548));
    if ( *(_DWORD *)(v28 + 1248) >= (unsigned int)CcMinimumFreeHighPriorityVacbs )
      v8 &= ~2u;
    else
      v8 |= 2u;
    CcUnmapVacb(v16, a1, v8);
    v20 = KeAcquireQueuedSpinLock(4uLL);
    v21 = v28;
    v22 = v8 >> 1;
    LOBYTE(v22) = (v8 & 2) != 0;
    *(_QWORD *)(v16 + 8) = 0LL;
    v23 = v20;
    CcSetVacbInFreeList(v21, v16, v22);
    KeReleaseQueuedSpinLock(4uLL, v23);
LABEL_38:
    v12 += 0x40000LL;
    v27 = v12;
    goto LABEL_39;
  }
LABEL_42:
  CcReleaseBcbLockAndVacbLock(v25, a1);
  return v29;
}
