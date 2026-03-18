/*
 * XREFs of IoBoostThreadIoPriority @ 0x140326240
 * Callers:
 *     KiAbConvertWaiterToOwnerEntry @ 0x14027E670 (KiAbConvertWaiterToOwnerEntry.c)
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExpAcquireResourceSharedLite @ 0x1402955C0 (ExpAcquireResourceSharedLite.c)
 *     KiAbDeferredProcessingWorker @ 0x1402E4D00 (KiAbDeferredProcessingWorker.c)
 *     KiAbProcessThreadLocks @ 0x1402E8D40 (KiAbProcessThreadLocks.c)
 *     ExpApplyPriorityBoost @ 0x140324DC0 (ExpApplyPriorityBoost.c)
 *     ExpBoostIoAfterAcquire @ 0x140325DB0 (ExpBoostIoAfterAcquire.c)
 *     FsRtlpWaitForIoAtEof @ 0x140376284 (FsRtlpWaitForIoAtEof.c)
 *     MiModifiedPageWriter @ 0x1403BFEE0 (MiModifiedPageWriter.c)
 *     PspNotifyProcessEffectiveIoLimitChanged @ 0x1403E69D4 (PspNotifyProcessEffectiveIoLimitChanged.c)
 *     FsRtlpDoBoost @ 0x14047F3B8 (FsRtlpDoBoost.c)
 *     IoBoostThreadIo @ 0x1404B47F0 (IoBoostThreadIo.c)
 *     CcBoostLowPriorityWorkerThread @ 0x1404DB798 (CcBoostLowPriorityWorkerThread.c)
 *     NtSetInformationThread @ 0x1408B7970 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x1408BA860 (NtSetInformationProcess.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeReleaseQueuedSpinLock @ 0x14028B980 (KeReleaseQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140301270 (KeAcquireQueuedSpinLock.c)
 *     KxAcquireQueuedSpinLock @ 0x140301310 (KxAcquireQueuedSpinLock.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExReferenceCallBackBlock @ 0x140326780 (ExReferenceCallBackBlock.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall IoBoostThreadIoPriority(KSPIN_LOCK *a1, int a2, int a3)
{
  char v5; // r15
  unsigned __int64 v6; // r14
  unsigned int v7; // r13d
  KIRQL v8; // al
  unsigned __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rdi
  struct _EX_RUNDOWN_REF *v12; // rax
  __int64 v13; // r12
  unsigned __int16 v14; // bx
  __int64 v15; // rdi
  void *v16; // rsi
  unsigned __int16 j; // di
  struct _EX_RUNDOWN_REF *v18; // rdx
  signed __int64 v19; // rax
  signed __int64 v20; // rtt
  KIRQL v21; // r12
  __int64 v22; // r15
  __int64 v23; // rcx
  _QWORD *v24; // rax
  _QWORD *v25; // rbx
  char *v26; // rdx
  KSPIN_LOCK *v27; // rbx
  KIRQL v28; // al
  KSPIN_LOCK v29; // r15
  __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  unsigned __int16 v32; // bx
  PEX_RUNDOWN_REF v33; // rsi
  char *v34; // rcx
  __int64 i; // rdx
  struct _EX_RUNDOWN_REF *v36; // rcx
  __int64 v37; // rdx
  PEX_RUNDOWN_REF *Pool2; // rax
  KIRQL v39; // [rsp+20h] [rbp-E0h]
  struct _EX_RUNDOWN_REF *v41; // [rsp+28h] [rbp-D8h]
  __int64 v43; // [rsp+38h] [rbp-C8h]
  struct _EX_RUNDOWN_REF *v44; // [rsp+38h] [rbp-C8h]
  PVOID v45[10]; // [rsp+50h] [rbp-B0h] BYREF
  PVOID P; // [rsp+A0h] [rbp-60h]
  PEX_RUNDOWN_REF RunRef[8]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v48[8]; // [rsp+F0h] [rbp-10h] BYREF

  v5 = 0;
  memset_0(RunRef, 0, sizeof(RunRef));
  memset_0(v48, 0, sizeof(v48));
  v6 = 0LL;
  v7 = 0;
  if ( a3 < 0 )
  {
    v5 = 1;
  }
  else
  {
    v8 = KeAcquireSpinLockRaiseToDpc(a1 + 195);
    v9 = v8;
    if ( (KSPIN_LOCK *)a1[168] == a1 + 168 )
    {
      if ( (a3 & 0x40000000) == 0 )
      {
        KxReleaseSpinLock(a1 + 195);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v9);
        __writecr8(v9);
        return;
      }
      v5 = 1;
    }
    KeReleaseSpinLock(a1 + 195, v8);
  }
  v10 = 0LL;
  v11 = 8LL;
  do
  {
    v12 = (struct _EX_RUNDOWN_REF *)ExReferenceCallBackBlock((char *)&IopUpdatePriorityCallbackRoutine + v10 * 8);
    RunRef[v10] = v12;
    if ( v12 )
      v48[v10] = v12[2].Count;
    ++v10;
    --v11;
  }
  while ( v11 );
  v13 = 8LL;
  if ( v5 == 1 )
    goto LABEL_13;
  v44 = 0LL;
  v27 = a1 + 195;
  v28 = KeAcquireSpinLockRaiseToDpc(a1 + 195);
  v29 = a1[168];
  v39 = v28;
  if ( (KSPIN_LOCK *)v29 != a1 + 168 )
  {
    do
    {
      v30 = *(char *)(v29 + 34);
      if ( *(char *)(v29 + 35) <= (char)v30 )
      {
        v31 = *(_QWORD *)(v29 + 152);
        if ( v31 < v29 + 8 * (9 * v30 + 22) )
        {
          if ( *(_QWORD *)(v31 + 40) )
          {
            v32 = 0;
            v41 = *(struct _EX_RUNDOWN_REF **)(v31 + 40);
            while ( v32 < 8u )
            {
              v33 = RunRef[v32];
              if ( v33 )
              {
                v34 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160;
                KxAcquireQueuedSpinLock((struct _KPRCB *)v34, *((volatile __int64 **)v34 + 1));
                for ( i = *(_QWORD *)(*(_QWORD *)(v48[v32] + 32LL) + 8LL); ; i = *(_QWORD *)(i + 16) )
                {
                  if ( !i )
                  {
                    KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer
                                                                                   + 160));
                    goto LABEL_48;
                  }
                  if ( (struct _EX_RUNDOWN_REF *)i == v41 && (*(_DWORD *)(i + 48) & 0x1000000) != 0 )
                    break;
                }
                KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer
                                                                               + 160));
                v36 = v41;
                if ( v44 != v41 )
                {
                  v44 = v41;
                  if ( v7 >= 2 )
                  {
                    Pool2 = (PEX_RUNDOWN_REF *)ExAllocatePool2(0x40uLL);
                    if ( !Pool2 )
                      break;
                    Pool2[4] = (PEX_RUNDOWN_REF)P;
                    v36 = v41;
                    P = Pool2;
                    Pool2[1] = v41;
                    *Pool2 = v33;
                    *((_WORD *)Pool2 + 20) = v32;
                    Pool2[2] = (PEX_RUNDOWN_REF)a1;
                    *((_DWORD *)Pool2 + 6) = a2;
                  }
                  else
                  {
                    v37 = 6LL * v7;
                    v45[v37] = v33;
                    LOWORD(v45[v37 + 5]) = v32;
                    v45[v37 + 1] = v41;
                    v45[v37 + 2] = a1;
                    LODWORD(v45[v37 + 3]) = a2;
                    v45[v37 + 4] = 0LL;
                  }
                  ++v7;
                  ObfReferenceObjectWithTag(v36, 0x746C6644u);
                  ObfReferenceObjectWithTag(a1, 0x746C6644u);
                  if ( (*(_DWORD *)(v29 - 16) & 2) != 0 )
                    ++IoBoostedPagingIrpCount;
                  else
                    ++IoBoostedThreadedIrpCount;
                  break;
                }
              }
LABEL_48:
              ++v32;
            }
          }
        }
      }
      v29 = *(_QWORD *)v29;
    }
    while ( (KSPIN_LOCK *)v29 != a1 + 168 );
    v27 = a1 + 195;
    v13 = 8LL;
    v28 = v39;
  }
  KeReleaseSpinLock(v27, v28);
  if ( !v7 )
  {
LABEL_13:
    v14 = 0;
    v43 = 0LL;
    v15 = 0LL;
    while ( 1 )
    {
      v16 = *(PEX_RUNDOWN_REF *)((char *)RunRef + v15);
      if ( !v16 )
        goto LABEL_15;
      v21 = KeAcquireQueuedSpinLock(0xAuLL);
      v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)((char *)v48 + v15) + 32LL) + 8LL);
      if ( !v22 )
        goto LABEL_35;
      while ( (*(_DWORD *)(v22 + 48) & 0x1000000) == 0 )
      {
LABEL_33:
        v22 = *(_QWORD *)(v22 + 16);
        if ( !v22 )
          goto LABEL_34;
      }
      if ( v7 < 2 )
        break;
      v24 = (_QWORD *)ExAllocatePool2(0x40uLL);
      if ( v24 )
      {
        v24[4] = P;
        P = v24;
        *v24 = v16;
        *((_WORD *)v24 + 20) = v14;
        v24[1] = v22;
        v24[2] = a1;
        *((_DWORD *)v24 + 6) = a2;
        goto LABEL_32;
      }
LABEL_34:
      v15 = v43;
LABEL_35:
      KeReleaseQueuedSpinLock(0xAuLL, v21);
LABEL_15:
      v15 += 8LL;
      ++v14;
      v43 = v15;
      if ( v14 >= 8u )
      {
        v13 = 8LL;
        if ( v7 )
          ++IoBlanketBoostCount;
        goto LABEL_18;
      }
    }
    v23 = 6LL * v7;
    v45[v23] = v16;
    LOWORD(v45[v23 + 5]) = v14;
    v45[v23 + 1] = (PVOID)v22;
    v45[v23 + 2] = a1;
    LODWORD(v45[v23 + 3]) = a2;
    v45[v23 + 4] = 0LL;
LABEL_32:
    ObfReferenceObjectWithTag((PVOID)v22, 0x746C6644u);
    ObfReferenceObjectWithTag(a1, 0x746C6644u);
    ++v7;
    goto LABEL_33;
  }
LABEL_18:
  for ( j = 0; j < v7; ++j )
  {
    if ( j >= 2u )
    {
      v25 = P;
      v26 = (char *)P + 8;
      P = (PVOID)*((_QWORD *)P + 4);
      guard_dispatch_icall_no_overrides(*v25, v26);
      ExFreePoolWithTag(v25, 0);
    }
    else
    {
      guard_dispatch_icall_no_overrides(v45[6 * j], &v45[6 * j + 1]);
    }
  }
  do
  {
    v18 = RunRef[v6 / 8];
    if ( v18 )
    {
      _m_prefetchw((char *)&IopUpdatePriorityCallbackRoutine + v6);
      v19 = *(_QWORD *)((char *)&IopUpdatePriorityCallbackRoutine + v6);
      while ( ((unsigned __int64)v18 ^ v19) < 0xF )
      {
        v20 = v19;
        v19 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)((char *)&IopUpdatePriorityCallbackRoutine + v6),
                v19 + 1,
                v19);
        if ( v20 == v19 )
          goto LABEL_26;
      }
      ExReleaseRundownProtection_0(v18);
    }
LABEL_26:
    v6 += 8LL;
    --v13;
  }
  while ( v13 );
}
