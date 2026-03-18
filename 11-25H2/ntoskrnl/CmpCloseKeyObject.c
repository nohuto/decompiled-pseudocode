/*
 * XREFs of CmpCloseKeyObject @ 0x140845600
 * Callers:
 *     ObpDecrementHandleCount @ 0x140844E00 (ObpDecrementHandleCount.c)
 *     ObCloseHandleTableEntry @ 0x1408501F0 (ObCloseHandleTableEntry.c)
 *     ObpCreateHandle @ 0x1408518D0 (ObpCreateHandle.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     ExReleaseFastMutexUnsafe @ 0x140285A50 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeInsertQueueApc @ 0x1402EFFB0 (KeInsertQueueApc.c)
 *     EtwGetKernelTraceTimestamp @ 0x14031CDD0 (EtwGetKernelTraceTimestamp.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403EF5E0 (ExAcquireFastMutexUnsafe.c)
 *     CmpInitializeThreadInfo @ 0x1403F5C00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x140429780 (CmCleanupThreadInfo.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     CmUnlockHive @ 0x14084AA3C (CmUnlockHive.c)
 *     CmLockHive @ 0x14084AA78 (CmLockHive.c)
 *     CmpSignalDeferredPosts @ 0x14086CBD0 (CmpSignalDeferredPosts.c)
 *     CmpFreePostBlock @ 0x14086CC80 (CmpFreePostBlock.c)
 *     CmpCancelSubordinatePost @ 0x14086FEDC (CmpCancelSubordinatePost.c)
 *     CmpFreeSubordinatePost @ 0x1408703F0 (CmpFreeSubordinatePost.c)
 *     EtwpTraceRegistry @ 0x140874AF0 (EtwpTraceRegistry.c)
 *     CmpDelayedDerefKeys @ 0x140A0F1E8 (CmpDelayedDerefKeys.c)
 *     CmpAddToDelayedDeref @ 0x140A2E074 (CmpAddToDelayedDeref.c)
 *     CmpUnlockKcb @ 0x140BA92B0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x140BA9340 (CmpLockKcbShared.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140BA94E0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpLockRegistry @ 0x140BA9570 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BA9920 (CmpUnlockRegistry.c)
 */

_KAFFINITY_EX *__fastcall CmpCloseKeyObject(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // rsi
  __int64 (__fastcall *v8)(_DWORD, _DWORD, _DWORD, _DWORD, __int64, __int64); // rcx
  struct _KTHREAD *CurrentThread; // rax
  char IsKeyDeletedForKeyBody; // al
  ULONG_PTR v11; // rcx
  __int64 v12; // r14
  __int64 *v13; // rbx
  __int64 v14; // r14
  __int64 v15; // rax
  int v16; // eax
  int v17; // ecx
  __int64 v18; // rcx
  _QWORD *v19; // r14
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // ecx
  int v25; // ecx
  __int64 v26; // rdx
  _QWORD *v27; // rcx
  unsigned __int8 CurrentIrql; // r15
  __int64 v29; // rdx
  _QWORD *v30; // rcx
  __int64 v31; // rax
  __int128 v32; // [rsp+40h] [rbp-49h] BYREF
  __int128 v33; // [rsp+50h] [rbp-39h] BYREF
  _OWORD v34[3]; // [rsp+60h] [rbp-29h] BYREF
  _OWORD v35[2]; // [rsp+90h] [rbp+7h] BYREF

  v4 = 0LL;
  v34[0] = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  memset(v35, 0, sizeof(v35));
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v35, 0x20000u);
  CmpInitializeThreadInfo((_KAFFINITY_EX *)v34);
  if ( CmpTraceRoutine && a2 )
    v4 = *(_QWORD *)(a2 + 8);
  if ( a4 <= 1 && *(_DWORD *)a2 == 1803104306 && *(_QWORD *)(a2 + 16) )
  {
    *((_QWORD *)&v32 + 1) = &v32;
    *(_QWORD *)&v32 = &v32;
    *((_QWORD *)&v33 + 1) = &v33;
    *(_QWORD *)&v33 = &v33;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    CmpLockRegistry();
    CmpLockKcbShared(*(_QWORD *)(a2 + 8));
    IsKeyDeletedForKeyBody = CmpIsKeyDeletedForKeyBody(a2, 0LL);
    v11 = *(_QWORD *)(a2 + 8);
    if ( IsKeyDeletedForKeyBody )
    {
      CmpUnlockKcb(v11);
      CmpUnlockRegistry(v23);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      goto LABEL_7;
    }
    CmLockHive(*(_QWORD *)(v11 + 32));
    v12 = *(_QWORD *)(a2 + 16);
    if ( v12 )
    {
      v13 = (__int64 *)(v12 + 16);
      if ( (__int64 *)*v13 != v13 )
      {
        memset(&v34[1], 0, 32);
        ExAcquireFastMutexUnsafe(&CmpPostLock);
        if ( (__int64 *)*v13 != v13 )
        {
          *(_DWORD *)(v12 + 48) &= ~0x80000000;
          while ( 1 )
          {
            while ( 1 )
            {
              v14 = *v13;
              if ( (__int64 *)*v13 == v13 )
                goto LABEL_30;
              if ( *(__int64 **)(v14 + 8) != v13 )
                goto LABEL_28;
              v15 = *(_QWORD *)v14;
              if ( *(_QWORD *)(*(_QWORD *)v14 + 8LL) != v14 )
                goto LABEL_28;
              *v13 = v15;
              *(_QWORD *)(v15 + 8) = v13;
              v16 = *(_DWORD *)(v14 + 56);
              if ( (v16 & 0x10000) != 0 )
                break;
              v26 = *(_QWORD *)(v14 + 32);
              if ( *(_QWORD *)(v26 + 8) != v14 + 32 )
                goto LABEL_28;
              v27 = *(_QWORD **)(v14 + 40);
              if ( *v27 != v14 + 32 )
                goto LABEL_28;
              *v27 = v26;
              *(_QWORD *)(v26 + 8) = v27;
              CurrentIrql = KeGetCurrentIrql();
              __writecr8(1uLL);
              if ( KiIrqlFlags )
                KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 1);
              v29 = *(_QWORD *)(v14 + 16);
              if ( *(_QWORD *)(v29 + 8) != v14 + 16 || (v30 = *(_QWORD **)(v14 + 24), *v30 != v14 + 16) )
LABEL_28:
                __fastfail(3u);
              *v30 = v29;
              *(_QWORD *)(v29 + 8) = v30;
              if ( KiIrqlFlags )
                KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
              __writecr8(CurrentIrql);
              if ( *(_DWORD *)(v14 + 56) != 1 )
              {
                CmpAddToDelayedDeref(v14, &v33);
                CmpFreePostBlock((PVOID)v14);
              }
            }
            if ( (_WORD)v16 != 1 )
            {
              CmpCancelSubordinatePost(v14, &v33);
              CmpAddToDelayedDeref(v14, &v33);
            }
            v17 = (unsigned __int16)*(_DWORD *)(v14 + 56);
            if ( v17 == 4 )
            {
LABEL_25:
              CmpFreeSubordinatePost(v14);
              v18 = *(_QWORD *)(v14 + 16);
              v19 = (_QWORD *)(v14 + 16);
              if ( *(_QWORD **)(v18 + 8) != v19 )
                goto LABEL_28;
              v20 = (_QWORD *)v19[1];
              if ( (_QWORD *)*v20 != v19 )
                goto LABEL_28;
              *v20 = v18;
              *(_QWORD *)(v18 + 8) = v20;
              v21 = (_QWORD *)*((_QWORD *)&v32 + 1);
              if ( **((__int128 ***)&v32 + 1) != &v32 )
                goto LABEL_28;
              v19[1] = *((_QWORD *)&v32 + 1);
              *v19 = &v32;
              *v21 = v19;
              *((_QWORD *)&v32 + 1) = v19;
            }
            else
            {
              v24 = v17 - 1;
              if ( v24 )
              {
                v25 = v24 - 1;
                if ( v25 )
                {
                  if ( v25 == 1 )
                    goto LABEL_25;
                }
                else
                {
                  KeInsertQueueApc(*(_QWORD *)(v14 + 64) + 16LL, 267LL, v14, 0);
                }
              }
              else
              {
                v31 = *(_QWORD *)(v14 + 64);
                *(_QWORD *)v14 = 0LL;
                *(_DWORD *)(v31 + 24) = 267;
                KeSetEvent(*(PRKEVENT *)(v14 + 64), 0, 0);
              }
            }
          }
        }
        *(_DWORD *)(v12 + 48) |= 0x80000000;
LABEL_30:
        ExReleaseFastMutexUnsafe(&CmpPostLock);
      }
    }
    CmUnlockHive(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 32LL));
    CmpUnlockKcb(*(_QWORD *)(a2 + 8));
    CmpUnlockRegistry(v22);
    CmpDelayedDerefKeys(&v33);
    CmpSignalDeferredPosts(&v32);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
LABEL_7:
  if ( CmpTraceRoutine )
  {
    v8 = EtwpTraceRegistry;
    LOBYTE(v8) = 27;
    if ( (__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, __int64, __int64))CmpTraceRoutine == EtwpTraceRegistry )
      EtwpTraceRegistry((_DWORD)v8, (unsigned int)v35, 0, 0, v4, 0LL);
    else
      guard_dispatch_icall_no_overrides(v8);
  }
  return CmCleanupThreadInfo((_KAFFINITY_EX **)v34);
}
