/*
 * XREFs of CcPerformReadAhead @ 0x1404DDEB0
 * Callers:
 *     CcWorkerThread @ 0x1404DB3D0 (CcWorkerThread.c)
 * Callees:
 *     PsGetPagePriorityThread @ 0x140208FD0 (PsGetPagePriorityThread.c)
 *     PsSetPagePriorityThread @ 0x1402098B8 (PsSetPagePriorityThread.c)
 *     IoDiskIoAttributionDereference @ 0x140245180 (IoDiskIoAttributionDereference.c)
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     EtwTraceKernelEvent @ 0x140255180 (EtwTraceKernelEvent.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     CcDecrementOpenCount @ 0x1402ABDBC (CcDecrementOpenCount.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     MmWaitForCacheManagerPrefetch @ 0x140397244 (MmWaitForCacheManagerPrefetch.c)
 *     FsRtlIsNtstatusExpected @ 0x140456400 (FsRtlIsNtstatusExpected.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     MmPrefetchForCacheManager @ 0x1409561A4 (MmPrefetchForCacheManager.c)
 *     CcMapAndCopyFromCache @ 0x140AC2F00 (CcMapAndCopyFromCache.c)
 */

void __fastcall CcPerformReadAhead(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned __int8 v8; // al
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  PVOID v12; // rdi
  signed __int64 v13; // rbx
  unsigned int v14; // r14d
  __int64 v15; // r15
  BOOL v16; // eax
  signed __int64 v17; // rcx
  unsigned int v18; // ecx
  unsigned int v19; // r15d
  struct _KTHREAD *CurrentThread; // rbx
  int v21; // r9d
  __int64 v22; // rbx
  unsigned int v23; // edx
  __int64 v24; // rcx
  unsigned int v25; // [rsp+50h] [rbp-178h]
  int v26; // [rsp+54h] [rbp-174h]
  int v27; // [rsp+58h] [rbp-170h]
  int v28; // [rsp+5Ch] [rbp-16Ch]
  BOOL v29; // [rsp+60h] [rbp-168h]
  int PagePriorityThread; // [rsp+60h] [rbp-168h]
  unsigned int v31; // [rsp+64h] [rbp-164h]
  int v32; // [rsp+68h] [rbp-160h]
  int v33; // [rsp+6Ch] [rbp-15Ch]
  __int64 v34; // [rsp+70h] [rbp-158h]
  BOOL v36; // [rsp+80h] [rbp-148h]
  int v37; // [rsp+84h] [rbp-144h]
  unsigned int v38; // [rsp+88h] [rbp-140h]
  unsigned int v39; // [rsp+90h] [rbp-138h]
  __int64 v40; // [rsp+98h] [rbp-130h]
  __int64 v41; // [rsp+A0h] [rbp-128h]
  _QWORD *v42; // [rsp+A8h] [rbp-120h]
  int v43[6]; // [rsp+B0h] [rbp-118h] BYREF
  signed __int64 v44; // [rsp+C8h] [rbp-100h]
  PVOID P; // [rsp+D0h] [rbp-F8h]
  __int64 v46; // [rsp+D8h] [rbp-F0h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+E0h] [rbp-E8h] BYREF
  signed __int64 v48; // [rsp+F8h] [rbp-D0h]
  __int64 v49; // [rsp+100h] [rbp-C8h]
  __int64 v50; // [rsp+108h] [rbp-C0h]
  _QWORD *v51; // [rsp+118h] [rbp-B0h]
  __int64 v52; // [rsp+120h] [rbp-A8h]
  _QWORD v53[2]; // [rsp+138h] [rbp-90h] BYREF
  _QWORD v54[2]; // [rsp+148h] [rbp-80h] BYREF
  _QWORD v55[2]; // [rsp+158h] [rbp-70h] BYREF
  unsigned int v56; // [rsp+168h] [rbp-60h]
  int v57; // [rsp+16Ch] [rbp-5Ch]
  __int64 v58; // [rsp+170h] [rbp-58h]
  _QWORD v59[2]; // [rsp+178h] [rbp-50h] BYREF
  unsigned int v60; // [rsp+188h] [rbp-40h]
  int v61; // [rsp+18Ch] [rbp-3Ch]
  __int64 v62; // [rsp+190h] [rbp-38h]

  v50 = a1;
  v49 = a2;
  v44 = 0LL;
  v48 = 0LL;
  v39 = 0;
  v25 = 0;
  v36 = 0;
  v26 = 0;
  v32 = 0;
  v33 = 0;
  v28 = 0;
  v37 = 0;
  v38 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeGetCurrentThread()[1].Timer.DueTime.HighPart = 0;
  v42 = *(_QWORD **)(*(_QWORD *)(a2 + 40) + 8LL);
  v34 = (__int64)v42;
  v5 = v42;
  v51 = v42;
  v6 = v42[28];
  v40 = v6;
  v46 = v42[67];
  v41 = v46;
  v7 = v42[27];
  LOBYTE(v7) = 1;
  v8 = guard_dispatch_icall_no_overrides(v6, v7, a3, a4);
  v27 = v8;
  if ( v8 )
  {
    v11 = v46;
    while ( 1 )
    {
      v12 = 0LL;
      P = 0LL;
      v13 = v44;
      v14 = v25;
      v29 = v36;
      while ( 1 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v11 + 768), &LockHandle);
        v15 = *(_QWORD *)(a2 + 48);
        v52 = v15;
        if ( v15 )
        {
          KxAcquireSpinLock((PKSPIN_LOCK)(v15 + 80));
          v14 = *(_DWORD *)(v15 + 52);
          v16 = v14 == 0;
          v29 = v16;
          v36 = v16;
          v13 = *(_QWORD *)(v15 + 56);
          v44 = v13;
          if ( v14 > 0x800000 )
            v14 = 0x800000;
          v25 = v14;
          *(_DWORD *)(v15 + 52) = 0;
          if ( !v16 )
            *(_QWORD *)(v15 + 64) = v13 + v14;
          if ( (*(_DWORD *)v15 & 0x200000) != 0 )
          {
            v37 = 1;
            v38 = *(_DWORD *)(v15 + 88);
          }
          KxReleaseSpinLock((volatile signed __int64 *)(v15 + 80));
          v26 = (*(_DWORD *)v15 >> 18) & 7;
        }
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        if ( !v15 || v29 )
          break;
        v17 = v42[1];
        if ( v13 < v17 )
        {
          v33 = 1;
          if ( v13 + v14 >= v17 )
          {
            v14 = v17 - v13;
            v32 = 1;
          }
          v14 = (v14 + 4095) & 0xFFFFF000;
          v25 = v14;
          v18 = v14;
          v31 = v14;
          v48 = v13;
          v39 = v14;
          if ( v37 )
          {
            if ( !v38 )
              KeBugCheckEx(0x34u, 0xABCuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
            v19 = v14;
            if ( v14 > v38 )
              v19 = v38;
          }
          else
          {
            v19 = v14;
          }
          if ( (xmmword_140FC5B10 & 0x20000) != 0 )
          {
            v55[1] = v13;
            v56 = v14;
            v55[0] = a1;
            v57 = v26;
            v58 = 0LL;
            v53[0] = v55;
            v53[1] = 32LL;
            EtwTraceKernelEvent((int)v53, 1, 0x80020000, 5635, 5249282);
            v18 = v14;
          }
          while ( v18 )
          {
            if ( v19 > v18 )
              v19 = v18;
            if ( (xmmword_140FC5B10 & 0x20000) != 0 )
            {
              v62 = 0LL;
              v59[1] = v13;
              v60 = v19;
              v59[0] = a1;
              v61 = v26;
              v54[0] = v59;
              v54[1] = 32LL;
              EtwTraceKernelEvent((int)v54, 1, 0x80020000, 5643, 5249282);
            }
            v28 |= MmPrefetchForCacheManager(a2, v13, 0, v19, v26);
            v18 = v31 - v19;
            v31 -= v19;
            v13 += v19;
            v44 = v13;
            v12 = P;
          }
        }
        v11 = v46;
      }
      if ( !v12 )
        break;
      CurrentThread = KeGetCurrentThread();
      PagePriorityThread = PsGetPagePriorityThread((__int64)CurrentThread);
      v43[0] = 0;
      MmWaitForCacheManagerPrefetch(P);
      PsSetPagePriorityThread((__int64)CurrentThread, v26);
      LOBYTE(v21) = 1;
      CcMapAndCopyFromCache(a2, v48, v39, v21, 0LL, (__int64)v43, v26, *(_QWORD *)(a1 + 24), 0LL);
      PsSetPagePriorityThread((__int64)CurrentThread, PagePriorityThread);
      v42 = (_QWORD *)v34;
      v11 = v41;
      v46 = v41;
    }
    v5 = v51;
  }
  __addgsdword(0x89A4u, KeGetCurrentThread()[1].Timer.DueTime.HighPart);
  if ( v27 )
    guard_dispatch_icall_no_overrides(v40, v5[27], v9, v10);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v41 + 768), &LockHandle);
  v22 = *(_QWORD *)(a2 + 48);
  if ( v22 )
  {
    KxAcquireSpinLock((PKSPIN_LOCK)(v22 + 80));
    v23 = *(_DWORD *)v22 & 0xFFFEFFFF;
    *(_DWORD *)v22 = v23;
    if ( v32 && (*(_DWORD *)(a2 + 80) & 0x20) != 0 )
      *(_QWORD *)(v22 + 64) = 0LL;
    if ( v33 && !v28 )
      *(_DWORD *)v22 = v23 & 0xFFFDFFFF;
    KxReleaseSpinLock((volatile signed __int64 *)(v22 + 80));
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  ObfDereferenceObjectWithTag((PVOID)a2, 0x746C6644u);
  v24 = *(_QWORD *)(a1 + 24);
  if ( v24 )
    IoDiskIoAttributionDereference(v24);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v41 + 768), &LockHandle);
  CcDecrementOpenCount(v34);
  *(_DWORD *)(v34 + 152) &= ~0x4000u;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
