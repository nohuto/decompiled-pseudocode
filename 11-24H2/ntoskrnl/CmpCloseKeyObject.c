/*
 * XREFs of CmpCloseKeyObject @ 0x14083DB50
 * Callers:
 *     ObpDecrementHandleCount @ 0x14083D360 (ObpDecrementHandleCount.c)
 *     ObCloseHandleTableEntry @ 0x140848260 (ObCloseHandleTableEntry.c)
 *     ObpCreateHandle @ 0x140849D60 (ObpCreateHandle.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402C5B00 (ExReleaseFastMutexUnsafe.c)
 *     KeInsertQueueApc @ 0x1402DF360 (KeInsertQueueApc.c)
 *     EtwGetKernelTraceTimestamp @ 0x1403AEC60 (EtwGetKernelTraceTimestamp.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403CD970 (ExAcquireFastMutexUnsafe.c)
 *     CmpInitializeThreadInfo @ 0x1403F0160 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x140414BA0 (CmpCleanupThreadInfo.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     CmLockHive @ 0x140841F34 (CmLockHive.c)
 *     CmUnlockHive @ 0x140842A00 (CmUnlockHive.c)
 *     CmpFreeSubordinatePost @ 0x14086D3B4 (CmpFreeSubordinatePost.c)
 *     CmpAddToDelayedDeref @ 0x14086DAAC (CmpAddToDelayedDeref.c)
 *     CmpSignalDeferredPosts @ 0x14086E9C0 (CmpSignalDeferredPosts.c)
 *     CmpFreePostBlock @ 0x14086EA70 (CmpFreePostBlock.c)
 *     EtwpTraceRegistry @ 0x140875270 (EtwpTraceRegistry.c)
 *     CmpDelayedDerefKeys @ 0x140A10DA8 (CmpDelayedDerefKeys.c)
 *     CmpCancelSubordinatePost @ 0x140A2BA34 (CmpCancelSubordinatePost.c)
 *     CmpUnlockKcb @ 0x140BBB2C0 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140BBB480 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpLockKcbShared @ 0x140BBBA1C (CmpLockKcbShared.c)
 *     CmpLockRegistry @ 0x140BBBE60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 */

_KAFFINITY_EX *__fastcall CmpCloseKeyObject(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // rsi
  __int64 v7; // rcx
  __int64 (__fastcall *v9)(_DWORD, _DWORD, _DWORD, _DWORD, __int64, __int64); // rcx
  struct _KTHREAD *CurrentThread; // rax
  char IsKeyDeletedForKeyBody; // al
  ULONG_PTR v12; // rcx
  __int64 v13; // r14
  __int64 *v14; // rbx
  __int64 v15; // r14
  __int64 v16; // rax
  int v17; // eax
  _QWORD *v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // ecx
  __int64 v23; // rcx
  _QWORD *v24; // r14
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  int v27; // ecx
  int v28; // ecx
  __int64 v29; // rdx
  _QWORD *v30; // rcx
  unsigned __int8 CurrentIrql; // r15
  __int64 v32; // rdx
  _QWORD *v33; // rcx
  __int64 v34; // rax
  __int128 v35; // [rsp+40h] [rbp-49h] BYREF
  __int128 v36; // [rsp+50h] [rbp-39h] BYREF
  __int128 v37; // [rsp+60h] [rbp-29h] BYREF
  __int64 v38; // [rsp+70h] [rbp-19h]
  __int128 v39; // [rsp+78h] [rbp-11h]
  __int128 v40; // [rsp+88h] [rbp-1h]
  _OWORD v41[2]; // [rsp+98h] [rbp+Fh] BYREF

  v4 = 0LL;
  v38 = 0LL;
  v37 = 0LL;
  v36 = 0LL;
  v35 = 0LL;
  memset(v41, 0, sizeof(v41));
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v41, 0x20000u);
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v37);
  if ( CmpTraceRoutine && a2 )
    v4 = *(_QWORD *)(a2 + 8);
  if ( a4 <= 1 && *(_DWORD *)a2 == 1803104306 && *(_QWORD *)(a2 + 16) )
  {
    *((_QWORD *)&v36 + 1) = &v36;
    *(_QWORD *)&v36 = &v36;
    *((_QWORD *)&v35 + 1) = &v35;
    *(_QWORD *)&v35 = &v35;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    CmpLockRegistry(v7);
    CmpLockKcbShared(*(_QWORD *)(a2 + 8));
    IsKeyDeletedForKeyBody = CmpIsKeyDeletedForKeyBody(a2, 0LL);
    v12 = *(_QWORD *)(a2 + 8);
    if ( IsKeyDeletedForKeyBody )
    {
      CmpUnlockKcb(v12);
      CmpUnlockRegistry(v21);
      KeLeaveCriticalRegionThread();
      goto LABEL_7;
    }
    CmLockHive(*(_QWORD *)(v12 + 32));
    v13 = *(_QWORD *)(a2 + 16);
    if ( v13 )
    {
      v14 = (__int64 *)(v13 + 16);
      if ( (__int64 *)*v14 != v14 )
      {
        v39 = 0LL;
        v40 = 0LL;
        ExAcquireFastMutexUnsafe(&CmpPostLock);
        if ( (__int64 *)*v14 != v14 )
        {
          *(_DWORD *)(v13 + 48) &= ~0x80000000;
          while ( 1 )
          {
            while ( 1 )
            {
              v15 = *v14;
              if ( (__int64 *)*v14 == v14 )
                goto LABEL_27;
              if ( *(__int64 **)(v15 + 8) != v14 )
                goto LABEL_25;
              v16 = *(_QWORD *)v15;
              if ( *(_QWORD *)(*(_QWORD *)v15 + 8LL) != v15 )
                goto LABEL_25;
              *v14 = v16;
              *(_QWORD *)(v16 + 8) = v14;
              v17 = *(_DWORD *)(v15 + 56);
              if ( (v17 & 0x10000) != 0 )
                break;
              v29 = *(_QWORD *)(v15 + 32);
              if ( *(_QWORD *)(v29 + 8) != v15 + 32 )
                goto LABEL_25;
              v30 = *(_QWORD **)(v15 + 40);
              if ( *v30 != v15 + 32 )
                goto LABEL_25;
              *v30 = v29;
              *(_QWORD *)(v29 + 8) = v30;
              CurrentIrql = KeGetCurrentIrql();
              __writecr8(1uLL);
              if ( KiIrqlFlags )
                KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 1);
              v32 = *(_QWORD *)(v15 + 16);
              if ( *(_QWORD *)(v32 + 8) != v15 + 16 || (v33 = *(_QWORD **)(v15 + 24), *v33 != v15 + 16) )
LABEL_25:
                __fastfail(3u);
              *v33 = v32;
              *(_QWORD *)(v32 + 8) = v33;
              if ( KiIrqlFlags )
                KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
              __writecr8(CurrentIrql);
              if ( *(_DWORD *)(v15 + 56) != 1 )
              {
                CmpAddToDelayedDeref(v15, &v35);
                CmpFreePostBlock((PVOID)v15);
              }
            }
            if ( (_WORD)v17 != 1 )
            {
              CmpCancelSubordinatePost(v15, &v35);
              v18 = *(_QWORD **)(v15 + 48);
              if ( v18 )
              {
                v19 = (_QWORD *)*((_QWORD *)&v35 + 1);
                if ( **((__int128 ***)&v35 + 1) != &v35 )
                  goto LABEL_25;
                v18[1] = *((_QWORD *)&v35 + 1);
                *v18 = &v35;
                *v19 = v18;
                *((_QWORD *)&v35 + 1) = v18;
                *(_QWORD *)(v15 + 48) = 0LL;
              }
            }
            v22 = (unsigned __int16)*(_DWORD *)(v15 + 56);
            if ( v22 == 4 )
            {
LABEL_32:
              CmpFreeSubordinatePost(v15);
              v23 = *(_QWORD *)(v15 + 16);
              v24 = (_QWORD *)(v15 + 16);
              if ( *(_QWORD **)(v23 + 8) != v24 )
                goto LABEL_25;
              v25 = (_QWORD *)v24[1];
              if ( (_QWORD *)*v25 != v24 )
                goto LABEL_25;
              *v25 = v23;
              *(_QWORD *)(v23 + 8) = v25;
              v26 = (_QWORD *)*((_QWORD *)&v36 + 1);
              if ( **((__int128 ***)&v36 + 1) != &v36 )
                goto LABEL_25;
              v24[1] = *((_QWORD *)&v36 + 1);
              *v24 = &v36;
              *v26 = v24;
              *((_QWORD *)&v36 + 1) = v24;
            }
            else
            {
              v27 = v22 - 1;
              if ( v27 )
              {
                v28 = v27 - 1;
                if ( v28 )
                {
                  if ( v28 == 1 )
                    goto LABEL_32;
                }
                else
                {
                  KeInsertQueueApc(*(_QWORD *)(v15 + 64) + 16LL, 267LL, v15, 0);
                }
              }
              else
              {
                v34 = *(_QWORD *)(v15 + 64);
                *(_QWORD *)v15 = 0LL;
                *(_DWORD *)(v34 + 24) = 267;
                KeSetEvent(*(PRKEVENT *)(v15 + 64), 0, 0);
              }
            }
          }
        }
        *(_DWORD *)(v13 + 48) |= 0x80000000;
LABEL_27:
        ExReleaseFastMutexUnsafe(&CmpPostLock);
      }
    }
    CmUnlockHive(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 32LL));
    CmpUnlockKcb(*(_QWORD *)(a2 + 8));
    CmpUnlockRegistry(v20);
    CmpDelayedDerefKeys(&v35);
    CmpSignalDeferredPosts(&v36);
    KeLeaveCriticalRegionThread();
  }
LABEL_7:
  if ( CmpTraceRoutine )
  {
    v9 = EtwpTraceRegistry;
    LOBYTE(v9) = 27;
    if ( (__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, __int64, __int64))CmpTraceRoutine == EtwpTraceRegistry )
      EtwpTraceRegistry((_DWORD)v9, (unsigned int)v41, 0, 0, v4, 0LL);
    else
      guard_dispatch_icall_no_overrides(v9, v41);
  }
  return CmpCleanupThreadInfo((_KAFFINITY_EX **)&v37);
}
