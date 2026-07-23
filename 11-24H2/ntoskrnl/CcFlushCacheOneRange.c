/*
 * XREFs of CcFlushCacheOneRange @ 0x140208260
 * Callers:
 *     CcFlushCachePriv @ 0x1402771F0 (CcFlushCachePriv.c)
 *     CcWriteBehindInternal @ 0x140279FE0 (CcWriteBehindInternal.c)
 *     CcWriteBehindAsync @ 0x14027B44C (CcWriteBehindAsync.c)
 *     CcWriteBehindAsyncFlushOneRange @ 0x14057B7CC (CcWriteBehindAsyncFlushOneRange.c)
 * Callees:
 *     MmSetAddressRangeModifiedEx @ 0x140208750 (MmSetAddressRangeModifiedEx.c)
 *     MmFlushSection @ 0x140208E14 (MmFlushSection.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x1402090F0 (ObFastDereferenceObjectDeferDelete.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x1402091EC (CcReferenceSharedCacheMapFileObject.c)
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall CcFlushCacheOneRange(__int64 *a1)
{
  __int64 v1; // r13
  int v2; // esi
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // r14
  unsigned int v7; // r12d
  __int64 v8; // rdi
  __int64 v9; // r9
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int16 v13; // ax
  signed __int64 v14; // rax
  signed __int64 v15; // rdx
  __int64 v16; // rtt
  BOOL v17; // eax
  __int64 v18; // rbp
  struct _KEVENT *v19; // rcx
  unsigned int v20; // eax
  int v21; // ebp
  int v22; // r14d
  __int64 v23; // r15
  __int64 v24; // rax
  int v26; // edx
  int v27; // ecx
  int v28; // r8d
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  int v31; // eax
  char v32; // [rsp+30h] [rbp-B8h]
  char v33; // [rsp+31h] [rbp-B7h]
  unsigned int v34; // [rsp+34h] [rbp-B4h]
  unsigned int v35; // [rsp+38h] [rbp-B0h]
  int *v36; // [rsp+40h] [rbp-A8h]
  __int64 v37; // [rsp+48h] [rbp-A0h]
  __int64 v38; // [rsp+50h] [rbp-98h]
  __int64 v39; // [rsp+58h] [rbp-90h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-88h] BYREF
  _QWORD v41[2]; // [rsp+80h] [rbp-68h] BYREF
  _QWORD v42[2]; // [rsp+90h] [rbp-58h] BYREF
  __int64 v43; // [rsp+A0h] [rbp-48h]
  int v44; // [rsp+A8h] [rbp-40h]
  int v45; // [rsp+ACh] [rbp-3Ch]

  v1 = a1[2];
  v2 = 0;
  v39 = *a1;
  v41[0] = a1[1];
  v32 = *((_BYTE *)a1 + 132);
  v33 = *((_BYTE *)a1 + 133);
  v37 = a1[9];
  v36 = (int *)a1[14];
  v38 = a1[3];
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( *((_BYTE *)a1 + 200) && !*((_BYTE *)a1 + 201) )
  {
    a1[26] = a1[5];
    *((_BYTE *)a1 + 201) = 1;
  }
  v4 = *((unsigned int *)a1 + 12);
  v34 = *((_DWORD *)a1 + 12);
  *((_DWORD *)a1 + 15) = 0;
  do
  {
    v5 = a1[5] + *((unsigned int *)a1 + 12) - v4;
    v6 = 0LL;
    v35 = (*((_DWORD *)a1 + 10) + *((_DWORD *)a1 + 12) - v4) & 0x3FFFF;
    v7 = 0x40000 - v35;
    v8 = KeAbPreAcquire(v1 + 104, 0LL, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 104), 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v1 + 104, 0LL, v8, v1 + 104);
    if ( v8 )
      *(_BYTE *)(v8 + 10) = 1;
    v9 = *(_QWORD *)(v1 + 32);
    v10 = *(_QWORD *)(v1 + 88);
    if ( v9 > 0x2000000 )
    {
      v26 = 0;
      v27 = 25;
      do
      {
        v28 = v27;
        v27 += 7;
        ++v26;
      }
      while ( v9 > 1LL << v27 );
      v11 = *(_QWORD *)(v10 + 8 * (v5 >> v28));
      if ( !v11 )
        goto LABEL_14;
      do
      {
        if ( !v26 )
          break;
        v29 = 1LL << v28;
        v28 -= 7;
        v5 &= v29 - 1;
        --v26;
        v11 = *(_QWORD *)(v11 + 8 * (v5 >> v28));
      }
      while ( v11 );
    }
    else
    {
      v11 = *(_QWORD *)(v10 + 8 * ((unsigned __int64)(unsigned int)v5 >> 18));
    }
    if ( v11 )
    {
      v12 = *(_QWORD *)(v11 + 8);
      v13 = _InterlockedIncrement((volatile signed __int32 *)(v11 + 16));
      if ( !v13 )
        KeBugCheckEx(0x34u, 0xBACuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      if ( v13 == 1 )
        _InterlockedIncrement((volatile signed __int32 *)(v12 + 552));
      v6 = *(_QWORD *)v11 + v35;
    }
LABEL_14:
    _m_prefetchw((const void *)(v1 + 104));
    v14 = *(_QWORD *)(v1 + 104);
    v15 = v14 - 16;
    if ( (v14 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v15 = 0LL;
    if ( (v14 & 2) != 0
      || (v16 = *(_QWORD *)(v1 + 104),
          v16 != _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 104), v15, v14)) )
    {
      ExfReleasePushLock(v1 + 104, v15);
    }
    KeAbPostRelease(v1 + 104);
    if ( v6 )
    {
      if ( v7 > v34 )
        v7 = v34;
      v17 = ((unsigned __int8)MmSetAddressRangeModifiedEx(v6, v7) || *((_DWORD *)a1 + 15))
         && a1[5] + *((unsigned int *)a1 + 12) < *(_QWORD *)(v1 + 40)
         && (*(_DWORD *)(v1 + 276) & 0xF) != 0
         && v32
         && !v33
         && (*(_DWORD *)(v1 + 152) & 0x200) == 0
         && !*(_BYTE *)a1[24];
      *((_DWORD *)a1 + 15) = v17;
      v18 = *(_QWORD *)(v11 + 8);
      if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v11 + 16)) )
      {
        v19 = *(struct _KEVENT **)(v18 + 192);
        if ( v19 )
          KeSetEvent(v19, 0, 0);
        _InterlockedDecrement((volatile signed __int32 *)(v18 + 552));
      }
      v20 = v34;
    }
    else
    {
      v20 = v34;
      if ( v7 > v34 )
        v7 = v34;
    }
    v4 = v20 - v7;
    v34 = v4;
  }
  while ( (_DWORD)v4 );
  __addgsdword(0x8968u, *((_DWORD *)a1 + 15));
  if ( *((_DWORD *)a1 + 15) )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v39 + 768), &LockHandle);
    v30 = (unsigned __int64)*((unsigned int *)a1 + 12) >> 12;
    if ( CcEnablePerVolumeLazyWriter )
      *(_QWORD *)(v41[0] + 1096LL) += v30;
    else
      *(_QWORD *)(v39 + 1160) += v30;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  else
  {
    if ( (xmmword_140FC6B50 & 0x20000) != 0 )
    {
      v21 = *((_DWORD *)a1 + 14);
      v22 = *((_DWORD *)a1 + 12);
      v23 = a1[22];
      v24 = CcReferenceSharedCacheMapFileObject(v1);
      v42[1] = *(_QWORD *)(v24 + 24);
      ObFastDereferenceObjectDeferDelete(v1 + 96, v24, 1666409283LL);
      if ( a1 == (__int64 *)-40LL )
        v43 = 0LL;
      else
        v43 = a1[5];
      v42[0] = v23;
      v41[0] = v42;
      v44 = v22;
      v45 = v21;
      v41[1] = 32LL;
      EtwTraceKernelEvent((unsigned int)v41, 1, -2147352576, 5642, 5249282);
    }
    *v36 = v32 != 0 ? 0x80000016 : 0;
    v2 = MmFlushSection(v38, a1 + 5, *((unsigned int *)a1 + 12), v37, v36, *((_DWORD *)a1 + 14));
    if ( v2 < 0 )
    {
      v31 = *v36;
      if ( v32 )
      {
        if ( v31 == -2147483626 )
          *v36 = v2;
      }
      else if ( !v31 )
      {
        *v36 = v2;
      }
    }
  }
  return (unsigned int)v2;
}
