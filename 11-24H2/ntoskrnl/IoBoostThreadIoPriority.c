/*
 * XREFs of IoBoostThreadIoPriority @ 0x14022E320
 * Callers:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     ExpApplyPriorityBoost @ 0x14022CFA0 (ExpApplyPriorityBoost.c)
 *     ExpBoostIoAfterAcquire @ 0x14022DEF0 (ExpBoostIoAfterAcquire.c)
 *     KiAbProcessThreadLocks @ 0x140280FD0 (KiAbProcessThreadLocks.c)
 *     KiAbDeferredProcessingWorker @ 0x140283660 (KiAbDeferredProcessingWorker.c)
 *     KiAbConvertWaiterToOwnerEntry @ 0x1402CBF00 (KiAbConvertWaiterToOwnerEntry.c)
 *     FsRtlpWaitForIoAtEof @ 0x1402E1598 (FsRtlpWaitForIoAtEof.c)
 *     ExpAcquireResourceSharedLite @ 0x1403217E0 (ExpAcquireResourceSharedLite.c)
 *     PspNotifyProcessEffectiveIoLimitChanged @ 0x1403E2874 (PspNotifyProcessEffectiveIoLimitChanged.c)
 *     MiModifiedPageWriter @ 0x14046F7B0 (MiModifiedPageWriter.c)
 *     FsRtlpDoBoost @ 0x14047A9E8 (FsRtlpDoBoost.c)
 *     IoBoostThreadIo @ 0x1404AE920 (IoBoostThreadIo.c)
 *     CcBoostLowPriorityWorkerThread @ 0x1404D48A8 (CcBoostLowPriorityWorkerThread.c)
 *     NtSetInformationThread @ 0x1408E8B60 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExReferenceCallBackBlock @ 0x14022E890 (ExReferenceCallBackBlock.c)
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseQueuedSpinLock @ 0x1402CA740 (KxReleaseQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402CB820 (KeReleaseQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x140357D70 (KeAcquireQueuedSpinLock.c)
 *     KxAcquireQueuedSpinLock @ 0x140357E10 (KxAcquireQueuedSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  char *v35; // rcx
  __int64 i; // rdx
  struct _EX_RUNDOWN_REF *v37; // rcx
  __int64 v38; // rdx
  PEX_RUNDOWN_REF *Pool2; // rax
  KIRQL v40; // [rsp+20h] [rbp-E0h]
  struct _EX_RUNDOWN_REF *v42; // [rsp+28h] [rbp-D8h]
  __int64 v44; // [rsp+38h] [rbp-C8h]
  struct _EX_RUNDOWN_REF *v45; // [rsp+38h] [rbp-C8h]
  PVOID v46[10]; // [rsp+50h] [rbp-B0h] BYREF
  PVOID P; // [rsp+A0h] [rbp-60h]
  PEX_RUNDOWN_REF RunRef[8]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v49[8]; // [rsp+F0h] [rbp-10h] BYREF

  v5 = 0;
  memset_0(RunRef, 0, sizeof(RunRef));
  memset_0(v49, 0, sizeof(v49));
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
      v49[v10] = v12[2].Count;
    ++v10;
    --v11;
  }
  while ( v11 );
  v14 = 8LL;
  if ( v5 == 1 )
    goto LABEL_13;
  v45 = 0LL;
  v28 = a1 + 195;
  v29 = KeAcquireSpinLockRaiseToDpc(a1 + 195);
  v30 = a1[168];
  v40 = v29;
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
            v42 = *(struct _EX_RUNDOWN_REF **)(v32 + 40);
            while ( v33 < 8u )
            {
              v34 = RunRef[v33];
              if ( v34 )
              {
                v35 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160;
                KxAcquireQueuedSpinLock(v35, *((_QWORD *)v35 + 1));
                for ( i = *(_QWORD *)(*(_QWORD *)(v49[v33] + 32LL) + 8LL); ; i = *(_QWORD *)(i + 16) )
                {
                  if ( !i )
                  {
                    KxReleaseQueuedSpinLock((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
                    goto LABEL_48;
                  }
                  if ( (struct _EX_RUNDOWN_REF *)i == v42 && (*(_DWORD *)(i + 48) & 0x1000000) != 0 )
                    break;
                }
                KxReleaseQueuedSpinLock((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
                v37 = v42;
                if ( v45 != v42 )
                {
                  v45 = v42;
                  if ( v7 >= 2 )
                  {
                    Pool2 = (PEX_RUNDOWN_REF *)ExAllocatePool2(0x40uLL, 0x30uLL, 0x43426F49u);
                    if ( !Pool2 )
                      break;
                    Pool2[4] = (PEX_RUNDOWN_REF)P;
                    v37 = v42;
                    P = Pool2;
                    Pool2[1] = v42;
                    *Pool2 = v34;
                    *((_WORD *)Pool2 + 20) = v33;
                    Pool2[2] = (PEX_RUNDOWN_REF)a1;
                    *((_DWORD *)Pool2 + 6) = a2;
                  }
                  else
                  {
                    v38 = 6LL * v7;
                    v46[v38] = v34;
                    LOWORD(v46[v38 + 5]) = v33;
                    v46[v38 + 1] = v42;
                    v46[v38 + 2] = a1;
                    LODWORD(v46[v38 + 3]) = a2;
                    v46[v38 + 4] = 0LL;
                  }
                  ++v7;
                  ObfReferenceObjectWithTag(v37, 0x746C6644u);
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
    v29 = v40;
  }
  KeReleaseSpinLock(v28, v29);
  if ( !v7 )
  {
LABEL_13:
    v15 = 0;
    v44 = 0LL;
    v16 = 0LL;
    while ( 1 )
    {
      v17 = *(PEX_RUNDOWN_REF *)((char *)RunRef + v16);
      if ( !v17 )
        goto LABEL_15;
      v22 = KeAcquireQueuedSpinLock(0xAuLL);
      v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)((char *)v49 + v16) + 32LL) + 8LL);
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
      v25 = (_QWORD *)ExAllocatePool2(0x40uLL, 0x30uLL, 0x43426F49u);
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
      v16 = v44;
LABEL_35:
      KeReleaseQueuedSpinLock(0xAuLL, v22);
LABEL_15:
      v16 += 8LL;
      ++v15;
      v44 = v16;
      if ( v15 >= 8u )
      {
        v14 = 8LL;
        if ( v7 )
          ++IoBlanketBoostCount;
        goto LABEL_18;
      }
    }
    v24 = 6LL * v7;
    v46[v24] = v17;
    LOWORD(v46[v24 + 5]) = v15;
    v46[v24 + 1] = (PVOID)v23;
    v46[v24 + 2] = a1;
    LODWORD(v46[v24 + 3]) = a2;
    v46[v24 + 4] = 0LL;
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
      guard_dispatch_icall_no_overrides(v46[6 * j], &v46[6 * j + 1], 0LL, v46[6 * j]);
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
