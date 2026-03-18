/*
 * XREFs of ObpCallPreOperationCallbacks @ 0x1409A65F0
 * Callers:
 *     ObDuplicateObject @ 0x14083FFB0 (ObDuplicateObject.c)
 *     ObpPreInterceptHandleDuplicate @ 0x1409A651C (ObpPreInterceptHandleDuplicate.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExfReleaseRundownProtection @ 0x1402456A0 (ExfReleaseRundownProtection.c)
 *     ExfAcquireRundownProtection @ 0x140247210 (ExfAcquireRundownProtection.c)
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ObpCallPostOperationCallbacks @ 0x140940A78 (ObpCallPostOperationCallbacks.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall ObpCallPreOperationCallbacks(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _EX_RUNDOWN_REF **v3; // r14
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v8; // rbp
  struct _EX_RUNDOWN_REF *v9; // rsi
  struct _KTHREAD *v10; // rax
  signed __int64 *v11; // rbx
  _QWORD *v12; // rdi
  struct _EX_RUNDOWN_REF *i; // rdi
  unsigned __int64 v14; // rtt
  signed __int64 v15; // rax
  signed __int64 v16; // rdx
  signed __int64 v17; // rtt
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  struct _KTHREAD *v22; // rax
  bool v23; // zf
  unsigned __int64 v24; // rtt
  struct _KTHREAD *v25; // rax
  _QWORD *v26; // rbp
  signed __int64 v27; // rax
  signed __int64 v28; // rdx
  signed __int64 v29; // rtt
  __int64 v30; // rdx
  __int64 v31; // rcx
  struct _KTHREAD *v32; // rax
  unsigned __int64 v33; // rtt
  _QWORD *Pool2; // rax
  _QWORD *v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int128 v39; // [rsp+20h] [rbp-68h] BYREF
  __int128 v40; // [rsp+30h] [rbp-58h]
  __int128 v41; // [rsp+40h] [rbp-48h]
  _QWORD *v42; // [rsp+90h] [rbp+8h]

  v3 = (struct _EX_RUNDOWN_REF **)(a1 + 200);
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v8 = 0LL;
  v42 = 0LL;
  v9 = 0LL;
  --CurrentThread->KernelApcDisable;
  ObfReferenceObjectWithTag(*(PVOID *)(a2 + 8), 0x6243624Fu);
  v10 = KeGetCurrentThread();
  v11 = (signed __int64 *)(a1 + 184);
  --v10->SpecialApcDisable;
  v12 = KeAbPreAcquire((__int64)v11, 0LL);
  if ( _InterlockedCompareExchange64(v11, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v11, 0, v12, (__int64)v11);
  if ( v12 )
    *((_BYTE *)v12 + 10) = 1;
  for ( i = *v3; i != (struct _EX_RUNDOWN_REF *)v3; i = (struct _EX_RUNDOWN_REF *)i->Count )
  {
    if ( (HIDWORD(i[2].Ptr) & 1) != 0 && (i[2].Count & *(_DWORD *)a2) != 0 )
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
        v22 = KeGetCurrentThread();
        v23 = v22->SpecialApcDisable++ == -1;
        if ( v23 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)v22->ApcState.ApcListHead[0].Flink != &v22->152 )
          KiCheckForKernelApcDelivery(v19, v18);
        if ( v9 )
        {
          _m_prefetchw(v9);
          v24 = v9->Count & 0xFFFFFFFFFFFFFFFEuLL;
          if ( v24 != _InterlockedCompareExchange64((volatile signed __int64 *)v9, v24 - 2, v24) )
            ExfReleaseRundownProtection(v9);
          v9 = 0LL;
        }
        if ( i[6].Count )
        {
          Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
          v42 = Pool2;
          v8 = Pool2;
          if ( !Pool2 )
          {
            ExReleaseRundownProtection_0(i + 7);
            if ( (_QWORD *)*a3 == a3 )
            {
              KeLeaveCriticalRegionThread();
              ObfDereferenceObjectWithTag(*(PVOID *)(a2 + 8), 0x6243624Fu);
            }
            else
            {
              *(_QWORD *)&v39 = *(_QWORD *)a2;
              v40 = *(unsigned __int64 *)(a2 + 16);
              *((_QWORD *)&v39 + 1) = *(_QWORD *)(a2 + 8);
              v41 = 0xC000009AuLL;
              ObpCallPostOperationCallbacks((__int64)&v39, a3, v37, v38);
            }
            return 3221225626LL;
          }
          Pool2[2] = i;
          Pool2[3] = 0LL;
          v36 = (_QWORD *)a3[1];
          if ( (_QWORD *)*v36 != a3 )
            __fastfail(3u);
          *Pool2 = a3;
          Pool2[1] = v36;
          *v36 = Pool2;
          a3[1] = Pool2;
        }
        if ( i[5].Count )
        {
          guard_dispatch_icall_no_overrides(*(_QWORD *)(i[3].Count + 8), a2, v20, v21);
          if ( i[6].Count )
            v8[3] = *(_QWORD *)(a2 + 24);
          else
            v9 = i + 7;
          *(_QWORD *)(a2 + 24) = 0LL;
        }
        v25 = KeGetCurrentThread();
        --v25->SpecialApcDisable;
        v26 = KeAbPreAcquire((__int64)v11, 0LL);
        if ( _InterlockedCompareExchange64(v11, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(v11, 0, v26, (__int64)v11);
        if ( v26 )
          *((_BYTE *)v26 + 10) = 1;
        v8 = v42;
      }
    }
  }
  _m_prefetchw(v11);
  v27 = *v11;
  v28 = *v11 - 16;
  if ( (*v11 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v28 = 0LL;
  if ( (v27 & 2) != 0 || (v29 = *v11, v29 != _InterlockedCompareExchange64(v11, v28, v27)) )
    ExfReleasePushLock(v11);
  KeAbPostRelease((ULONG_PTR)v11);
  v32 = KeGetCurrentThread();
  v23 = v32->SpecialApcDisable++ == -1;
  if ( v23 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)v32->ApcState.ApcListHead[0].Flink != &v32->152 )
    KiCheckForKernelApcDelivery(v31, v30);
  if ( v9 )
  {
    _m_prefetchw(v9);
    v33 = v9->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v33 != _InterlockedCompareExchange64((volatile signed __int64 *)v9, v33 - 2, v33) )
      ExfReleaseRundownProtection(v9);
  }
  if ( (_QWORD *)*a3 == a3 )
  {
    ObfDereferenceObjectWithTag(*(PVOID *)(a2 + 8), 0x6243624Fu);
    KeLeaveCriticalRegionThread();
  }
  return 0LL;
}
