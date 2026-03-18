/*
 * XREFs of ObpCallPreOperationCallbacks @ 0x14099B9C0
 * Callers:
 *     ObDuplicateObject @ 0x140843A40 (ObDuplicateObject.c)
 *     ObpPreInterceptHandleDuplicate @ 0x14099B8E8 (ObpPreInterceptHandleDuplicate.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExfReleaseRundownProtection @ 0x1403242B0 (ExfReleaseRundownProtection.c)
 *     ExfAcquireRundownProtection @ 0x140326BD0 (ExfAcquireRundownProtection.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ObpCallPostOperationCallbacks @ 0x14099BDC0 (ObpCallPostOperationCallbacks.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall ObpCallPreOperationCallbacks(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _EX_RUNDOWN_REF **v3; // r14
  __int64 v4; // rbp
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v8; // r12
  struct _EX_RUNDOWN_REF *v9; // rsi
  struct _KTHREAD *v10; // rax
  signed __int64 *v11; // rbx
  __int64 *v12; // rdi
  struct _EX_RUNDOWN_REF *i; // rdi
  unsigned __int64 v14; // rtt
  signed __int64 v15; // rax
  signed __int64 v16; // rdx
  signed __int64 v17; // rtt
  struct _KTHREAD *v18; // rax
  bool v19; // zf
  unsigned __int64 v20; // rtt
  struct _KTHREAD *v21; // rax
  __int64 *v22; // rbp
  signed __int64 v23; // rax
  signed __int64 v24; // rdx
  signed __int64 v25; // rtt
  struct _KTHREAD *v26; // rax
  unsigned __int64 v27; // rtt
  _QWORD *Pool2; // rax
  _QWORD *v30; // rcx
  __int128 v31; // [rsp+20h] [rbp-68h] BYREF
  __int128 v32; // [rsp+30h] [rbp-58h]
  __int128 v33; // [rsp+40h] [rbp-48h]

  v3 = (struct _EX_RUNDOWN_REF **)(a1 + 200);
  v31 = 0LL;
  v4 = a2;
  v32 = 0LL;
  v33 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v8 = 0LL;
  v9 = 0LL;
  --CurrentThread->KernelApcDisable;
  ObfReferenceObjectWithTag(*(PVOID *)(a2 + 8), 0x6243624Fu);
  v10 = KeGetCurrentThread();
  v11 = (signed __int64 *)(a1 + 184);
  --v10->SpecialApcDisable;
  v12 = KeAbPreAcquire((__int64)v11, 0LL);
  if ( _InterlockedCompareExchange64(v11, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v11, 0, v12, (unsigned __int64)v11);
  if ( v12 )
    *((_BYTE *)v12 + 10) = 1;
  for ( i = *v3; i != (struct _EX_RUNDOWN_REF *)v3; i = (struct _EX_RUNDOWN_REF *)i->Count )
  {
    if ( (HIDWORD(i[2].Ptr) & 1) != 0 && (i[2].Count & *(_DWORD *)v4) != 0 )
    {
      _m_prefetchw(&i[7]);
      v14 = i[7].Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v14 == _InterlockedCompareExchange64((volatile signed __int64 *)&i[7], v14 + 2, v14)
        || ExfAcquireRundownProtection(i + 7) )
      {
        _m_prefetchw(v11);
        v15 = *v11;
        v16 = *v11 - 16;
        if ( (*v11 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v16 = 0LL;
        if ( (v15 & 2) != 0 || (v17 = *v11, v17 != _InterlockedCompareExchange64(v11, v16, v15)) )
          ExfReleasePushLock(v11);
        KeAbPostRelease((ULONG_PTR)v11);
        v18 = KeGetCurrentThread();
        v19 = v18->SpecialApcDisable++ == -1;
        if ( v19 && ($727077A9B6E167EAE1398C74674DC5A5 *)v18->ApcState.ApcListHead[0].Flink != &v18->152 )
          KiCheckForKernelApcDelivery();
        if ( v9 )
        {
          _m_prefetchw(v9);
          v20 = v9->Count & 0xFFFFFFFFFFFFFFFEuLL;
          if ( v20 != _InterlockedCompareExchange64((volatile signed __int64 *)v9, v20 - 2, v20) )
            ExfReleaseRundownProtection(v9);
          v9 = 0LL;
        }
        if ( i[6].Count )
        {
          Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
          v8 = Pool2;
          if ( !Pool2 )
          {
            ExReleaseRundownProtection_0(i + 7);
            if ( (_QWORD *)*a3 == a3 )
            {
              KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
              ObfDereferenceObjectWithTag(*(PVOID *)(v4 + 8), 0x6243624Fu);
            }
            else
            {
              *(_QWORD *)&v31 = *(_QWORD *)v4;
              v32 = *(unsigned __int64 *)(v4 + 16);
              *((_QWORD *)&v31 + 1) = *(_QWORD *)(v4 + 8);
              v33 = 0xC000009AuLL;
              ObpCallPostOperationCallbacks(&v31, a3);
            }
            return 3221225626LL;
          }
          Pool2[2] = i;
          Pool2[3] = 0LL;
          v30 = (_QWORD *)a3[1];
          if ( (_QWORD *)*v30 != a3 )
            __fastfail(3u);
          *Pool2 = a3;
          Pool2[1] = v30;
          *v30 = Pool2;
          a3[1] = Pool2;
        }
        if ( i[5].Count )
        {
          guard_dispatch_icall_no_overrides(*(_QWORD *)(i[3].Count + 8));
          if ( i[6].Count )
            v8[3] = *(_QWORD *)(v4 + 24);
          else
            v9 = i + 7;
          *(_QWORD *)(v4 + 24) = 0LL;
        }
        v21 = KeGetCurrentThread();
        --v21->SpecialApcDisable;
        v22 = KeAbPreAcquire((__int64)v11, 0LL);
        if ( _InterlockedCompareExchange64(v11, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(v11, 0, v22, (unsigned __int64)v11);
        if ( v22 )
          *((_BYTE *)v22 + 10) = 1;
        v4 = a2;
      }
    }
  }
  _m_prefetchw(v11);
  v23 = *v11;
  v24 = *v11 - 16;
  if ( (*v11 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v24 = 0LL;
  if ( (v23 & 2) != 0 || (v25 = *v11, v25 != _InterlockedCompareExchange64(v11, v24, v23)) )
    ExfReleasePushLock(v11);
  KeAbPostRelease((ULONG_PTR)v11);
  v26 = KeGetCurrentThread();
  v19 = v26->SpecialApcDisable++ == -1;
  if ( v19 && ($727077A9B6E167EAE1398C74674DC5A5 *)v26->ApcState.ApcListHead[0].Flink != &v26->152 )
    KiCheckForKernelApcDelivery();
  if ( v9 )
  {
    _m_prefetchw(v9);
    v27 = v9->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v27 != _InterlockedCompareExchange64((volatile signed __int64 *)v9, v27 - 2, v27) )
      ExfReleaseRundownProtection(v9);
  }
  if ( (_QWORD *)*a3 == a3 )
  {
    ObfDereferenceObjectWithTag(*(PVOID *)(v4 + 8), 0x6243624Fu);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return 0LL;
}
