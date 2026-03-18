/*
 * XREFs of IoBoostThreadIoPriority @ 0x140278D90
 * Callers:
 *     KiAbProcessThreadLocks @ 0x1402509C0 (KiAbProcessThreadLocks.c)
 *     KiAbDeferredProcessingWorker @ 0x140253050 (KiAbDeferredProcessingWorker.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     ExpApplyPriorityBoost @ 0x140277A10 (ExpApplyPriorityBoost.c)
 *     ExpBoostIoAfterAcquire @ 0x140278960 (ExpBoostIoAfterAcquire.c)
 *     MiModifiedPageWriter @ 0x1402CF990 (MiModifiedPageWriter.c)
 *     KiAbConvertWaiterToOwnerEntry @ 0x140323370 (KiAbConvertWaiterToOwnerEntry.c)
 *     ExpAcquireResourceSharedLite @ 0x140342300 (ExpAcquireResourceSharedLite.c)
 *     PspNotifyProcessEffectiveIoLimitChanged @ 0x1403EF8F4 (PspNotifyProcessEffectiveIoLimitChanged.c)
 *     FsRtlpWaitForIoAtEof @ 0x14040D308 (FsRtlpWaitForIoAtEof.c)
 *     FsRtlpDoBoost @ 0x14047FDA8 (FsRtlpDoBoost.c)
 *     IoBoostThreadIo @ 0x1404B4100 (IoBoostThreadIo.c)
 *     CcBoostLowPriorityWorkerThread @ 0x1404DAE88 (CcBoostLowPriorityWorkerThread.c)
 *     NtSetInformationThread @ 0x140911410 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x140947500 (NtSetInformationProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExReferenceCallBackBlock @ 0x140279300 (ExReferenceCallBackBlock.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402D6AF0 (KeAcquireQueuedSpinLock.c)
 *     KxAcquireQueuedSpinLock @ 0x1402D6B90 (KxAcquireQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x140321BB0 (KxReleaseQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140322C90 (KeReleaseQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  __int64 v13; // r9
  __int64 v14; // r12
  unsigned __int16 v15; // bx
  __int64 v16; // rdi
  void *v17; // rsi
  unsigned __int16 j; // di
  struct _EX_RUNDOWN_REF *v19; // rdx
  signed __int64 v20; // rax
  signed __int64 v21; // rtt
  KIRQL v22; // r12
  __int64 v23; // r15
  __int64 v24; // rcx
  _QWORD *v25; // rax
  _QWORD *v26; // rbx
  char *v27; // rdx
  KSPIN_LOCK *v28; // rbx
  KIRQL v29; // al
  KSPIN_LOCK v30; // r15
  __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  unsigned __int16 v33; // bx
  PEX_RUNDOWN_REF v34; // rsi
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
  v14 = 8LL;
  if ( v5 == 1 )
    goto LABEL_13;
  v44 = 0LL;
  v28 = a1 + 195;
  v29 = KeAcquireSpinLockRaiseToDpc(a1 + 195);
  v30 = a1[168];
  v39 = v29;
  if ( (KSPIN_LOCK *)v30 != a1 + 168 )
  {
    do
    {
      v31 = *(char *)(v30 + 34);
      if ( *(char *)(v30 + 35) <= (char)v31 )
      {
        v32 = *(_QWORD *)(v30 + 152);
        if ( v32 < v30 + 8 * (9 * v31 + 22) )
        {
          if ( *(_QWORD *)(v32 + 40) )
          {
            v33 = 0;
            v41 = *(struct _EX_RUNDOWN_REF **)(v32 + 40);
            while ( v33 < 8u )
            {
              v34 = RunRef[v33];
              if ( v34 )
              {
                KxAcquireQueuedSpinLock((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
                for ( i = *(_QWORD *)(*(_QWORD *)(v48[v33] + 32LL) + 8LL); ; i = *(_QWORD *)(i + 16) )
                {
                  if ( !i )
                  {
                    KxReleaseQueuedSpinLock((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
                    goto LABEL_48;
                  }
                  if ( (struct _EX_RUNDOWN_REF *)i == v41 && (*(_DWORD *)(i + 48) & 0x1000000) != 0 )
                    break;
                }
                KxReleaseQueuedSpinLock((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
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
                    *Pool2 = v34;
                    *((_WORD *)Pool2 + 20) = v33;
                    Pool2[2] = (PEX_RUNDOWN_REF)a1;
                    *((_DWORD *)Pool2 + 6) = a2;
                  }
                  else
                  {
                    v37 = 6LL * v7;
                    v45[v37] = v34;
                    LOWORD(v45[v37 + 5]) = v33;
                    v45[v37 + 1] = v41;
                    v45[v37 + 2] = a1;
                    LODWORD(v45[v37 + 3]) = a2;
                    v45[v37 + 4] = 0LL;
                  }
                  ++v7;
                  ObfReferenceObjectWithTag(v36, 0x746C6644u);
                  ObfReferenceObjectWithTag(a1, 0x746C6644u);
                  if ( (*(_DWORD *)(v30 - 16) & 2) != 0 )
                    ++IoBoostedPagingIrpCount;
                  else
                    ++IoBoostedThreadedIrpCount;
                  break;
                }
              }
LABEL_48:
              ++v33;
            }
          }
        }
      }
      v30 = *(_QWORD *)v30;
    }
    while ( (KSPIN_LOCK *)v30 != a1 + 168 );
    v28 = a1 + 195;
    v14 = 8LL;
    v29 = v39;
  }
  KeReleaseSpinLock(v28, v29);
  if ( !v7 )
  {
LABEL_13:
    v15 = 0;
    v43 = 0LL;
    v16 = 0LL;
    while ( 1 )
    {
      v17 = *(PEX_RUNDOWN_REF *)((char *)RunRef + v16);
      if ( !v17 )
        goto LABEL_15;
      v22 = KeAcquireQueuedSpinLock(0xAuLL);
      v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)((char *)v48 + v16) + 32LL) + 8LL);
      if ( !v23 )
        goto LABEL_35;
      while ( (*(_DWORD *)(v23 + 48) & 0x1000000) == 0 )
      {
LABEL_33:
        v23 = *(_QWORD *)(v23 + 16);
        if ( !v23 )
          goto LABEL_34;
      }
      if ( v7 < 2 )
        break;
      v25 = (_QWORD *)ExAllocatePool2(0x40uLL);
      if ( v25 )
      {
        v25[4] = P;
        P = v25;
        *v25 = v17;
        *((_WORD *)v25 + 20) = v15;
        v25[1] = v23;
        v25[2] = a1;
        *((_DWORD *)v25 + 6) = a2;
        goto LABEL_32;
      }
LABEL_34:
      v16 = v43;
LABEL_35:
      KeReleaseQueuedSpinLock(0xAuLL, v22);
LABEL_15:
      v16 += 8LL;
      ++v15;
      v43 = v16;
      if ( v15 >= 8u )
      {
        v14 = 8LL;
        if ( v7 )
          ++IoBlanketBoostCount;
        goto LABEL_18;
      }
    }
    v24 = 6LL * v7;
    v45[v24] = v17;
    LOWORD(v45[v24 + 5]) = v15;
    v45[v24 + 1] = (PVOID)v23;
    v45[v24 + 2] = a1;
    LODWORD(v45[v24 + 3]) = a2;
    v45[v24 + 4] = 0LL;
LABEL_32:
    ObfReferenceObjectWithTag((PVOID)v23, 0x746C6644u);
    ObfReferenceObjectWithTag(a1, 0x746C6644u);
    ++v7;
    goto LABEL_33;
  }
LABEL_18:
  for ( j = 0; j < v7; ++j )
  {
    if ( j >= 2u )
    {
      v26 = P;
      v27 = (char *)P + 8;
      P = (PVOID)*((_QWORD *)P + 4);
      guard_dispatch_icall_no_overrides(*v26, v27, 0LL, v13);
      ExFreePoolWithTag(v26, 0);
    }
    else
    {
      guard_dispatch_icall_no_overrides(v45[6 * j], &v45[6 * j + 1], 0LL, v45[6 * j]);
    }
  }
  do
  {
    v19 = RunRef[v6 / 8];
    if ( v19 )
    {
      _m_prefetchw((char *)&IopUpdatePriorityCallbackRoutine + v6);
      v20 = *(_QWORD *)((char *)&IopUpdatePriorityCallbackRoutine + v6);
      while ( ((unsigned __int64)v19 ^ v20) < 0xF )
      {
        v21 = v20;
        v20 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)((char *)&IopUpdatePriorityCallbackRoutine + v6),
                v20 + 1,
                v20);
        if ( v21 == v20 )
          goto LABEL_26;
      }
      ExReleaseRundownProtection_0(v19);
    }
LABEL_26:
    v6 += 8LL;
    --v14;
  }
  while ( v14 );
}
