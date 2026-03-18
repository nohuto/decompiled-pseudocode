/*
 * XREFs of CmpCloseKeyObject @ 0x140841890
 * Callers:
 *     ObpDecrementHandleCount @ 0x1408410A0 (ObpDecrementHandleCount.c)
 *     ObCloseHandleTableEntry @ 0x14084BFA0 (ObCloseHandleTableEntry.c)
 *     ObpCreateHandle @ 0x14084DAA0 (ObpCreateHandle.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     ExReleaseFastMutexUnsafe @ 0x14031CF70 (ExReleaseFastMutexUnsafe.c)
 *     KeInsertQueueApc @ 0x140337240 (KeInsertQueueApc.c)
 *     EtwGetKernelTraceTimestamp @ 0x1403C00A0 (EtwGetKernelTraceTimestamp.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403DB130 (ExAcquireFastMutexUnsafe.c)
 *     CmpInitializeThreadInfo @ 0x1403FA250 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x14041EE60 (CmpCleanupThreadInfo.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     CmLockHive @ 0x140845C74 (CmLockHive.c)
 *     CmUnlockHive @ 0x140846740 (CmUnlockHive.c)
 *     CmpFreeSubordinatePost @ 0x1408690C4 (CmpFreeSubordinatePost.c)
 *     CmpAddToDelayedDeref @ 0x14086977C (CmpAddToDelayedDeref.c)
 *     CmpSignalDeferredPosts @ 0x14086A690 (CmpSignalDeferredPosts.c)
 *     CmpFreePostBlock @ 0x14086A740 (CmpFreePostBlock.c)
 *     EtwpTraceRegistry @ 0x140870F40 (EtwpTraceRegistry.c)
 *     CmpDelayedDerefKeys @ 0x140A17C38 (CmpDelayedDerefKeys.c)
 *     CmpCancelSubordinatePost @ 0x140A36BDC (CmpCancelSubordinatePost.c)
 *     CmpUnlockKcb @ 0x140BB92C0 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140BB9480 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpLockKcbShared @ 0x140BB9A1C (CmpLockKcbShared.c)
 *     CmpLockRegistry @ 0x140BB9E60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BB9F50 (CmpUnlockRegistry.c)
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
  _QWORD *v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // ecx
  __int64 v22; // rcx
  _QWORD *v23; // r14
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  int v26; // ecx
  int v27; // ecx
  __int64 v28; // rdx
  _QWORD *v29; // rcx
  unsigned __int8 CurrentIrql; // r15
  __int64 v31; // rdx
  _QWORD *v32; // rcx
  __int64 v33; // rax
  __int128 v34; // [rsp+40h] [rbp-49h] BYREF
  __int128 v35; // [rsp+50h] [rbp-39h] BYREF
  __int128 v36; // [rsp+60h] [rbp-29h] BYREF
  __int64 v37; // [rsp+70h] [rbp-19h]
  __int128 v38; // [rsp+78h] [rbp-11h]
  __int128 v39; // [rsp+88h] [rbp-1h]
  _OWORD v40[2]; // [rsp+98h] [rbp+Fh] BYREF

  v4 = 0LL;
  v37 = 0LL;
  v36 = 0LL;
  v35 = 0LL;
  v34 = 0LL;
  memset(v40, 0, sizeof(v40));
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v40, 0x20000u);
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v36);
  if ( CmpTraceRoutine && a2 )
    v4 = *(_QWORD *)(a2 + 8);
  if ( a4 <= 1 && *(_DWORD *)a2 == 1803104306 && *(_QWORD *)(a2 + 16) )
  {
    *((_QWORD *)&v35 + 1) = &v35;
    *(_QWORD *)&v35 = &v35;
    *((_QWORD *)&v34 + 1) = &v34;
    *(_QWORD *)&v34 = &v34;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    CmpLockRegistry();
    CmpLockKcbShared(*(_QWORD *)(a2 + 8));
    IsKeyDeletedForKeyBody = CmpIsKeyDeletedForKeyBody(a2, 0LL);
    v11 = *(_QWORD *)(a2 + 8);
    if ( IsKeyDeletedForKeyBody )
    {
      CmpUnlockKcb(v11);
      CmpUnlockRegistry(v20);
      KeLeaveCriticalRegionThread();
      goto LABEL_7;
    }
    CmLockHive(*(_QWORD *)(v11 + 32));
    v12 = *(_QWORD *)(a2 + 16);
    if ( v12 )
    {
      v13 = (__int64 *)(v12 + 16);
      if ( (__int64 *)*v13 != v13 )
      {
        v38 = 0LL;
        v39 = 0LL;
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
                goto LABEL_27;
              if ( *(__int64 **)(v14 + 8) != v13 )
                goto LABEL_25;
              v15 = *(_QWORD *)v14;
              if ( *(_QWORD *)(*(_QWORD *)v14 + 8LL) != v14 )
                goto LABEL_25;
              *v13 = v15;
              *(_QWORD *)(v15 + 8) = v13;
              v16 = *(_DWORD *)(v14 + 56);
              if ( (v16 & 0x10000) != 0 )
                break;
              v28 = *(_QWORD *)(v14 + 32);
              if ( *(_QWORD *)(v28 + 8) != v14 + 32 )
                goto LABEL_25;
              v29 = *(_QWORD **)(v14 + 40);
              if ( *v29 != v14 + 32 )
                goto LABEL_25;
              *v29 = v28;
              *(_QWORD *)(v28 + 8) = v29;
              CurrentIrql = KeGetCurrentIrql();
              __writecr8(1uLL);
              if ( KiIrqlFlags )
                KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 1);
              v31 = *(_QWORD *)(v14 + 16);
              if ( *(_QWORD *)(v31 + 8) != v14 + 16 || (v32 = *(_QWORD **)(v14 + 24), *v32 != v14 + 16) )
LABEL_25:
                __fastfail(3u);
              *v32 = v31;
              *(_QWORD *)(v31 + 8) = v32;
              if ( KiIrqlFlags )
                KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
              __writecr8(CurrentIrql);
              if ( *(_DWORD *)(v14 + 56) != 1 )
              {
                CmpAddToDelayedDeref(v14, &v34);
                CmpFreePostBlock((PVOID)v14);
              }
            }
            if ( (_WORD)v16 != 1 )
            {
              CmpCancelSubordinatePost(v14, &v34);
              v17 = *(_QWORD **)(v14 + 48);
              if ( v17 )
              {
                v18 = (_QWORD *)*((_QWORD *)&v34 + 1);
                if ( **((__int128 ***)&v34 + 1) != &v34 )
                  goto LABEL_25;
                v17[1] = *((_QWORD *)&v34 + 1);
                *v17 = &v34;
                *v18 = v17;
                *((_QWORD *)&v34 + 1) = v17;
                *(_QWORD *)(v14 + 48) = 0LL;
              }
            }
            v21 = (unsigned __int16)*(_DWORD *)(v14 + 56);
            if ( v21 == 4 )
            {
LABEL_32:
              CmpFreeSubordinatePost(v14);
              v22 = *(_QWORD *)(v14 + 16);
              v23 = (_QWORD *)(v14 + 16);
              if ( *(_QWORD **)(v22 + 8) != v23 )
                goto LABEL_25;
              v24 = (_QWORD *)v23[1];
              if ( (_QWORD *)*v24 != v23 )
                goto LABEL_25;
              *v24 = v22;
              *(_QWORD *)(v22 + 8) = v24;
              v25 = (_QWORD *)*((_QWORD *)&v35 + 1);
              if ( **((__int128 ***)&v35 + 1) != &v35 )
                goto LABEL_25;
              v23[1] = *((_QWORD *)&v35 + 1);
              *v23 = &v35;
              *v25 = v23;
              *((_QWORD *)&v35 + 1) = v23;
            }
            else
            {
              v26 = v21 - 1;
              if ( v26 )
              {
                v27 = v26 - 1;
                if ( v27 )
                {
                  if ( v27 == 1 )
                    goto LABEL_32;
                }
                else
                {
                  KeInsertQueueApc(*(_QWORD *)(v14 + 64) + 16LL, 267LL, v14, 0);
                }
              }
              else
              {
                v33 = *(_QWORD *)(v14 + 64);
                *(_QWORD *)v14 = 0LL;
                *(_DWORD *)(v33 + 24) = 267;
                KeSetEvent(*(PRKEVENT *)(v14 + 64), 0, 0);
              }
            }
          }
        }
        *(_DWORD *)(v12 + 48) |= 0x80000000;
LABEL_27:
        ExReleaseFastMutexUnsafe(&CmpPostLock);
      }
    }
    CmUnlockHive(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 32LL));
    CmpUnlockKcb(*(_QWORD *)(a2 + 8));
    CmpUnlockRegistry(v19);
    CmpDelayedDerefKeys(&v34);
    CmpSignalDeferredPosts(&v35);
    KeLeaveCriticalRegionThread();
  }
LABEL_7:
  if ( CmpTraceRoutine )
  {
    v8 = EtwpTraceRegistry;
    LOBYTE(v8) = 27;
    if ( (__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, __int64, __int64))CmpTraceRoutine == EtwpTraceRegistry )
      EtwpTraceRegistry((_DWORD)v8, (unsigned int)v40, 0, 0, v4, 0LL);
    else
      guard_dispatch_icall_no_overrides(v8, v40, 0LL, 0LL);
  }
  return CmpCleanupThreadInfo((_KAFFINITY_EX **)&v36);
}
