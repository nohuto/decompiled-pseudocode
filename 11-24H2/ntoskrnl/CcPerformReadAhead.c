/*
 * XREFs of CcPerformReadAhead @ 0x1404D78D0
 * Callers:
 *     CcWorkerThread @ 0x1404D4DF0 (CcWorkerThread.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x14020D960 (IoDiskIoAttributionDereference.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     CcDecrementOpenCount @ 0x140279504 (CcDecrementOpenCount.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     PsGetPagePriorityThread @ 0x1403305B0 (PsGetPagePriorityThread.c)
 *     PsSetPagePriorityThread @ 0x140330E98 (PsSetPagePriorityThread.c)
 *     MmWaitForCacheManagerPrefetch @ 0x140352BC0 (MmWaitForCacheManagerPrefetch.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     FsRtlIsNtstatusExpected @ 0x14044B3D0 (FsRtlIsNtstatusExpected.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     MmPrefetchForCacheManager @ 0x140939B54 (MmPrefetchForCacheManager.c)
 *     CcMapAndCopyFromCache @ 0x140ABE1E0 (CcMapAndCopyFromCache.c)
 */

void __fastcall CcPerformReadAhead(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rdx
  unsigned __int8 v6; // al
  __int64 v7; // rax
  PVOID v8; // rdi
  signed __int64 v9; // rbx
  unsigned int v10; // r14d
  __int64 v11; // r15
  BOOL v12; // eax
  signed __int64 v13; // rcx
  unsigned int v14; // ecx
  unsigned int v15; // r15d
  struct _KTHREAD *CurrentThread; // rbx
  int v17; // r9d
  __int64 v18; // rbx
  unsigned int v19; // edx
  __int64 v20; // rcx
  unsigned int v21; // [rsp+50h] [rbp-178h]
  int v22; // [rsp+54h] [rbp-174h]
  int v23; // [rsp+58h] [rbp-170h]
  int v24; // [rsp+5Ch] [rbp-16Ch]
  BOOL v25; // [rsp+60h] [rbp-168h]
  int PagePriorityThread; // [rsp+60h] [rbp-168h]
  unsigned int v27; // [rsp+64h] [rbp-164h]
  int v28; // [rsp+68h] [rbp-160h]
  int v29; // [rsp+6Ch] [rbp-15Ch]
  __int64 v30; // [rsp+70h] [rbp-158h]
  BOOL v32; // [rsp+80h] [rbp-148h]
  int v33; // [rsp+84h] [rbp-144h]
  unsigned int v34; // [rsp+88h] [rbp-140h]
  unsigned int v35; // [rsp+90h] [rbp-138h]
  __int64 v36; // [rsp+98h] [rbp-130h]
  __int64 v37; // [rsp+A0h] [rbp-128h]
  _QWORD *v38; // [rsp+A8h] [rbp-120h]
  int v39[6]; // [rsp+B0h] [rbp-118h] BYREF
  signed __int64 v40; // [rsp+C8h] [rbp-100h]
  PVOID P; // [rsp+D0h] [rbp-F8h]
  __int64 v42; // [rsp+D8h] [rbp-F0h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+E0h] [rbp-E8h] BYREF
  signed __int64 v44; // [rsp+F8h] [rbp-D0h]
  __int64 v45; // [rsp+100h] [rbp-C8h]
  __int64 v46; // [rsp+108h] [rbp-C0h]
  _QWORD *v47; // [rsp+118h] [rbp-B0h]
  __int64 v48; // [rsp+120h] [rbp-A8h]
  _QWORD v49[2]; // [rsp+138h] [rbp-90h] BYREF
  _QWORD v50[2]; // [rsp+148h] [rbp-80h] BYREF
  _QWORD v51[2]; // [rsp+158h] [rbp-70h] BYREF
  unsigned int v52; // [rsp+168h] [rbp-60h]
  int v53; // [rsp+16Ch] [rbp-5Ch]
  __int64 v54; // [rsp+170h] [rbp-58h]
  _QWORD v55[2]; // [rsp+178h] [rbp-50h] BYREF
  unsigned int v56; // [rsp+188h] [rbp-40h]
  int v57; // [rsp+18Ch] [rbp-3Ch]
  __int64 v58; // [rsp+190h] [rbp-38h]

  v46 = a1;
  v45 = a2;
  v40 = 0LL;
  v44 = 0LL;
  v35 = 0;
  v21 = 0;
  v32 = 0;
  v22 = 0;
  v28 = 0;
  v29 = 0;
  v24 = 0;
  v33 = 0;
  v34 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeGetCurrentThread()[1].Timer.DueTime.HighPart = 0;
  v38 = *(_QWORD **)(*(_QWORD *)(a2 + 40) + 8LL);
  v30 = (__int64)v38;
  v3 = v38;
  v47 = v38;
  v4 = v38[28];
  v36 = v4;
  v42 = v38[67];
  v37 = v42;
  v5 = v38[27];
  LOBYTE(v5) = 1;
  v6 = guard_dispatch_icall_no_overrides(v4, v5);
  v23 = v6;
  if ( v6 )
  {
    v7 = v42;
    while ( 1 )
    {
      v8 = 0LL;
      P = 0LL;
      v9 = v40;
      v10 = v21;
      v25 = v32;
      while ( 1 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v7 + 768), &LockHandle);
        v11 = *(_QWORD *)(a2 + 48);
        v48 = v11;
        if ( v11 )
        {
          KxAcquireSpinLock((PKSPIN_LOCK)(v11 + 80));
          v10 = *(_DWORD *)(v11 + 52);
          v12 = v10 == 0;
          v25 = v12;
          v32 = v12;
          v9 = *(_QWORD *)(v11 + 56);
          v40 = v9;
          if ( v10 > 0x800000 )
            v10 = 0x800000;
          v21 = v10;
          *(_DWORD *)(v11 + 52) = 0;
          if ( !v12 )
            *(_QWORD *)(v11 + 64) = v9 + v10;
          if ( (*(_DWORD *)v11 & 0x200000) != 0 )
          {
            v33 = 1;
            v34 = *(_DWORD *)(v11 + 88);
          }
          KxReleaseSpinLock((volatile signed __int64 *)(v11 + 80));
          v22 = (*(_DWORD *)v11 >> 18) & 7;
        }
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        if ( !v11 || v25 )
          break;
        v13 = v38[1];
        if ( v9 < v13 )
        {
          v29 = 1;
          if ( v9 + v10 >= v13 )
          {
            v10 = v13 - v9;
            v28 = 1;
          }
          v10 = (v10 + 4095) & 0xFFFFF000;
          v21 = v10;
          v14 = v10;
          v27 = v10;
          v44 = v9;
          v35 = v10;
          if ( v33 )
          {
            if ( !v34 )
              KeBugCheckEx(0x34u, 0xABCuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
            v15 = v10;
            if ( v10 > v34 )
              v15 = v34;
          }
          else
          {
            v15 = v10;
          }
          if ( (xmmword_140FC6B50 & 0x20000) != 0 )
          {
            v51[1] = v9;
            v52 = v10;
            v51[0] = a1;
            v53 = v22;
            v54 = 0LL;
            v49[0] = v51;
            v49[1] = 32LL;
            EtwTraceKernelEvent((int)v49, 1, 0x80020000, 5635, 5249282);
            v14 = v10;
          }
          while ( v14 )
          {
            if ( v15 > v14 )
              v15 = v14;
            if ( (xmmword_140FC6B50 & 0x20000) != 0 )
            {
              v58 = 0LL;
              v55[1] = v9;
              v56 = v15;
              v55[0] = a1;
              v57 = v22;
              v50[0] = v55;
              v50[1] = 32LL;
              EtwTraceKernelEvent((int)v50, 1, 0x80020000, 5643, 5249282);
            }
            v24 |= MmPrefetchForCacheManager(a2, v9, 0, v15, v22);
            v14 = v27 - v15;
            v27 -= v15;
            v9 += v15;
            v40 = v9;
            v8 = P;
          }
        }
        v7 = v42;
      }
      if ( !v8 )
        break;
      CurrentThread = KeGetCurrentThread();
      PagePriorityThread = PsGetPagePriorityThread((__int64)CurrentThread);
      v39[0] = 0;
      MmWaitForCacheManagerPrefetch(P);
      PsSetPagePriorityThread((__int64)CurrentThread, v22);
      LOBYTE(v17) = 1;
      CcMapAndCopyFromCache(a2, v44, v35, v17, 0LL, (__int64)v39, v22, *(_QWORD *)(a1 + 24), 0LL);
      PsSetPagePriorityThread((__int64)CurrentThread, PagePriorityThread);
      v38 = (_QWORD *)v30;
      v7 = v37;
      v42 = v37;
    }
    v3 = v47;
  }
  __addgsdword(0x89A4u, KeGetCurrentThread()[1].Timer.DueTime.HighPart);
  if ( v23 )
    guard_dispatch_icall_no_overrides(v36, v3[27]);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v37 + 768), &LockHandle);
  v18 = *(_QWORD *)(a2 + 48);
  if ( v18 )
  {
    KxAcquireSpinLock((PKSPIN_LOCK)(v18 + 80));
    v19 = *(_DWORD *)v18 & 0xFFFEFFFF;
    *(_DWORD *)v18 = v19;
    if ( v28 && (*(_DWORD *)(a2 + 80) & 0x20) != 0 )
      *(_QWORD *)(v18 + 64) = 0LL;
    if ( v29 && !v24 )
      *(_DWORD *)v18 = v19 & 0xFFFDFFFF;
    KxReleaseSpinLock((volatile signed __int64 *)(v18 + 80));
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  ObfDereferenceObjectWithTag((PVOID)a2, 0x746C6644u);
  v20 = *(_QWORD *)(a1 + 24);
  if ( v20 )
    IoDiskIoAttributionDereference(v20);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v37 + 768), &LockHandle);
  CcDecrementOpenCount(v30);
  *(_DWORD *)(v30 + 152) &= ~0x4000u;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
