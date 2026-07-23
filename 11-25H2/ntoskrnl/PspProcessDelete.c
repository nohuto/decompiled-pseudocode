/*
 * XREFs of PspProcessDelete @ 0x1408E1310
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402BC860 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     PsDereferencePartition @ 0x140302710 (PsDereferencePartition.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     KiRemoveAndFreeCpuPartitionAssignmentProcess @ 0x14036D190 (KiRemoveAndFreeCpuPartitionAssignmentProcess.c)
 *     ExSaFree @ 0x14036D37C (ExSaFree.c)
 *     KiRundownAvailableCpusWorkItem @ 0x14036D3EC (KiRundownAvailableCpusWorkItem.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403C5970 (PsReturnProcessNonPagedPoolQuota.c)
 *     PspUnlockProcessListExclusive @ 0x1403D6E4C (PspUnlockProcessListExclusive.c)
 *     PspLockProcessListExclusive @ 0x1403D744C (PspLockProcessListExclusive.c)
 *     PsGetProcessId @ 0x140438AF0 (PsGetProcessId.c)
 *     KeInitializeDpc @ 0x140454E30 (KeInitializeDpc.c)
 *     IoSetDiskIoAttributionOnProcess @ 0x140489A74 (IoSetDiskIoAttributionOnProcess.c)
 *     SmCompressionProcessHoldsPartitionReference @ 0x1404F4434 (SmCompressionProcessHoldsPartitionReference.c)
 *     KeBugCheck @ 0x1404F9260 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     KeUnsecureProcess @ 0x1405B4620 (KeUnsecureProcess.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwDeleteWnfStateName @ 0x14069CD60 (ZwDeleteWnfStateName.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PspDetachProcessFromSyscallProvider @ 0x14076189C (PspDetachProcessFromSyscallProvider.c)
 *     VmpProcessContextCleanup @ 0x14079021C (VmpProcessContextCleanup.c)
 *     ExMapHandleToPointer @ 0x14084EF40 (ExMapHandleToPointer.c)
 *     ExDestroyHandle @ 0x1408B4AF0 (ExDestroyHandle.c)
 *     MmDeleteProcessAddressSpace @ 0x1408D7B40 (MmDeleteProcessAddressSpace.c)
 *     PspDereferenceQuota @ 0x1408E0988 (PspDereferenceQuota.c)
 *     SeDeassignPrimaryToken @ 0x1408E09A4 (SeDeassignPrimaryToken.c)
 *     PspRemoveProcessFromJobChain @ 0x1408E09E4 (PspRemoveProcessFromJobChain.c)
 *     EtwExitProcess @ 0x1408E0D90 (EtwExitProcess.c)
 *     ObClearProcessDeviceMap @ 0x1408E0E18 (ObClearProcessDeviceMap.c)
 *     sub_1408E0EF8 @ 0x1408E0EF8 (sub_1408E0EF8.c)
 *     LpcExitProcess @ 0x1408E109C (LpcExitProcess.c)
 *     PoEnergyContextCleanup @ 0x1408E11B4 (PoEnergyContextCleanup.c)
 *     ExpWnfDeleteScopeById @ 0x1408E18E8 (ExpWnfDeleteScopeById.c)
 *     ExpWnfDeleteProcessContext @ 0x1408E19F0 (ExpWnfDeleteProcessContext.c)
 *     SmProcessDeleteNotification @ 0x140A4DE0C (SmProcessDeleteNotification.c)
 *     PspReleaseReferenceToSession @ 0x140A898D0 (PspReleaseReferenceToSession.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PspProcessDelete(ULONG_PTR BugCheckParameter2)
{
  int v1; // eax
  _QWORD *v3; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v5; // rcx
  _QWORD *v6; // rax
  void *v7; // rcx
  void *v8; // rcx
  __int64 v9; // rcx
  HANDLE ProcessId; // rax
  __int64 v11; // rdx
  __int64 v12; // r14
  void *v13; // rcx
  void *v14; // rcx
  signed __int64 *v15; // rax
  bool v16; // zf
  void *v17; // rcx
  int v18; // edi
  struct _KTHREAD *v19; // rax
  void *v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int128 *v25; // r9
  __int64 v26; // r8
  int v27; // r10d
  char v28; // di
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  struct _EX_RUNDOWN_REF *v33; // rcx
  void *v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rdx
  _QWORD *v37; // r11
  const char *v38; // rax
  unsigned int v39; // r10d
  unsigned __int64 v40; // rcx
  __int64 v41; // r9
  unsigned __int64 v42; // rax
  __int64 v43; // rax
  __int128 *v44; // r10
  int v45; // r9d
  __int64 v46; // rax
  ULONG_PTR v47; // [rsp+40h] [rbp-68h] BYREF
  _OWORD v48[3]; // [rsp+48h] [rbp-60h] BYREF

  v1 = *(_DWORD *)(BugCheckParameter2 + 1532);
  memset(v48, 0, sizeof(v48));
  if ( (v1 & 1) != 0
    && !*(_QWORD *)(BugCheckParameter2 + 1600)
    && (*(_DWORD *)(BugCheckParameter2 + 500) & 0x4000000) != 0
    && (*(_DWORD *)(BugCheckParameter2 + 2012) & 2) == 0 )
  {
    KeBugCheckEx(0x1F8u, 0LL, BugCheckParameter2, 0LL, 0LL);
  }
  *(_DWORD *)(BugCheckParameter2 + 500) &= ~0x4000000u;
  v3 = (_QWORD *)(BugCheckParameter2 + 472);
  CurrentThread = KeGetCurrentThread();
  if ( *(_QWORD *)(BugCheckParameter2 + 472) )
  {
    PspLockProcessListExclusive((__int64)CurrentThread);
    v5 = *v3;
    if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v6 = (_QWORD *)v3[1], (_QWORD *)*v6 != v3) )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    PspUnlockProcessListExclusive((__int64)CurrentThread);
  }
  v7 = *(void **)(BugCheckParameter2 + 848);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0);
    *(_QWORD *)(BugCheckParameter2 + 848) = 0LL;
  }
  ObClearProcessDeviceMap(BugCheckParameter2);
  if ( *(_QWORD *)(BugCheckParameter2 + 1824) )
    ZwDeleteWnfStateName((PCWNF_STATE_NAME)(BugCheckParameter2 + 1824));
  v8 = *(void **)(BugCheckParameter2 + 776);
  if ( v8 )
  {
    ObfDereferenceObject(v8);
    *(_QWORD *)(BugCheckParameter2 + 776) = 0LL;
  }
  v9 = *(_QWORD *)(BugCheckParameter2 + 576);
  if ( v9 )
  {
    ObfDereferenceObject((PVOID)(v9 & 0xFFFFFFFFFFFFFFF8uLL));
    *(_QWORD *)(BugCheckParameter2 + 576) = 0LL;
  }
  if ( *(_QWORD *)(BugCheckParameter2 + 1976) )
    PspDetachProcessFromSyscallProvider((__int64 *)BugCheckParameter2);
  ProcessId = PsGetProcessId((PEPROCESS)BugCheckParameter2);
  sub_1408E0EF8((__int64)ProcessId);
  v12 = 4LL;
  if ( _bittest((const signed __int32 *)(BugCheckParameter2 + 500), 0x12u) )
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter2, 0, (__int64)v48);
    if ( (*(_DWORD *)(BugCheckParameter2 + 496) & 0x400) != 0 )
      guard_dispatch_icall_no_overrides(BugCheckParameter2);
    _InterlockedOr((volatile signed __int32 *)(BugCheckParameter2 + 500), 4u);
    v13 = *(void **)(BugCheckParameter2 + 840);
    if ( v13 )
    {
      if ( v13 == (void *)1 )
      {
LABEL_22:
        KiUnstackDetachProcess((__int64)v48, 0LL);
        MmDeleteProcessAddressSpace(BugCheckParameter2);
        v14 = *(void **)(BugCheckParameter2 + 744);
        if ( v14 )
          PspReleaseReferenceToSession(v14);
        goto LABEL_24;
      }
      ObfDereferenceObject(v13);
    }
    *(_QWORD *)(BugCheckParameter2 + 840) = 1LL;
    goto LABEL_22;
  }
LABEL_24:
  if ( *(_QWORD *)(BugCheckParameter2 + 672) )
  {
    PspRemoveProcessFromJobChain((PEPROCESS)BugCheckParameter2, 0LL, 1u, 0);
    ObDereferenceObjectDeferDeleteWithTag(*(PVOID *)(BugCheckParameter2 + 672), 0x73507350u);
    *(_QWORD *)(BugCheckParameter2 + 672) = 0LL;
    *(_QWORD *)(BugCheckParameter2 + 632) = 0LL;
    *(_QWORD *)(BugCheckParameter2 + 1520) = MmBadPointer;
  }
  if ( *(_QWORD *)(BugCheckParameter2 + 368) )
    KeUnsecureProcess(BugCheckParameter2);
  if ( *(_QWORD *)(BugCheckParameter2 + 464) )
  {
    --CurrentThread->SpecialApcDisable;
    v15 = ExMapHandleToPointer(PspCidTable, *(_QWORD *)(BugCheckParameter2 + 464));
    if ( !v15 )
      KeBugCheck(0x17u);
    ExDestroyHandle(PspCidTable, *(_QWORD *)(BugCheckParameter2 + 464), v15);
    v16 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v16 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  if ( *(_QWORD *)(BugCheckParameter2 + 584) )
    SeDeassignPrimaryToken(BugCheckParameter2);
  v17 = *(void **)(BugCheckParameter2 + 704);
  if ( v17 )
  {
    ExFreePoolWithTag(v17, 0);
    PsReturnProcessNonPagedPoolQuota(BugCheckParameter2, 0x6028uLL);
  }
  if ( *(_QWORD *)(BugCheckParameter2 + 1880) )
  {
    v18 = 0;
    if ( (*(_DWORD *)(BugCheckParameter2 + 1532) & 0x40000000) == 0
      || SmCompressionProcessHoldsPartitionReference(BugCheckParameter2) )
    {
      v18 = 1;
    }
    if ( _bittest((const signed __int32 *)(BugCheckParameter2 + 500), 0x12u) )
      SmProcessDeleteNotification(BugCheckParameter2);
    if ( v18 )
      PsDereferencePartition(*(_QWORD *)(BugCheckParameter2 + 1880));
  }
  EtwExitProcess(BugCheckParameter2, v11);
  LpcExitProcess(BugCheckParameter2);
  v19 = KeGetCurrentThread();
  v47 = BugCheckParameter2;
  --v19->KernelApcDisable;
  v20 = *(void **)(BugCheckParameter2 + 1512);
  if ( v20 )
    ExpWnfDeleteProcessContext(v20);
  ExpWnfDeleteScopeById(3LL, &v47);
  KeLeaveCriticalRegion();
  IoSetDiskIoAttributionOnProcess(0LL, BugCheckParameter2);
  PoEnergyContextCleanup(BugCheckParameter2);
  v23 = *(_QWORD *)(BugCheckParameter2 + 1648);
  if ( v23 )
  {
    VmpProcessContextCleanup(v23);
    ExFreePoolWithTag(*(PVOID *)(BugCheckParameter2 + 1648), 0);
  }
  v24 = MEMORY[0xFFFFF780000003B0];
  if ( MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0] >= (unsigned __int64)qword_140E622C0 )
  {
    v25 = &KeServiceDescriptorTable;
    _mm_prefetch((const char *)&KeServiceDescriptorTable, 0);
    v26 = qword_140E622B0;
    v27 = 64;
    v28 = qword_140E622B8;
    v29 = qword_140E622B0;
    v30 = 8LL;
    do
    {
      v29 = __ROR8__(v29 - *(_QWORD *)v25, qword_140E622B8);
      v25 = (__int128 *)((char *)v25 + 8);
      v27 -= 8;
      --v30;
    }
    while ( v30 );
    for ( ; v27; --v27 )
    {
      v35 = *(unsigned __int8 *)v25;
      v25 = (__int128 *)((char *)v25 + 1);
      v29 = __ROR8__(v29 - v35, qword_140E622B8);
    }
    v16 = qword_140E622C8 == v29;
    v36 = qword_140E62280;
    if ( !v16 && !qword_140E62280 )
    {
      v28 = qword_140E622B8;
      v26 = qword_140E622B0;
      v36 = (unsigned int)__ROR4__(8683520, 15);
      qword_140E62280 = (unsigned int)v36;
      xmmword_140E62288 = 0LL;
      qword_140E62298 = 267LL;
      qword_140E622A0 = (__int64)&KeServiceDescriptorTable;
    }
    v37 = (_QWORD *)KeServiceDescriptorTable;
    v38 = (const char *)KeServiceDescriptorTable;
    v39 = 4 * xmmword_1412018D0;
    v40 = KeServiceDescriptorTable + (unsigned int)(4 * xmmword_1412018D0);
    if ( (unsigned __int64)KeServiceDescriptorTable < v40 )
    {
      do
      {
        _mm_prefetch(v38, 0);
        v38 += 64;
      }
      while ( (unsigned __int64)v38 < v40 );
    }
    v41 = v26;
    if ( v39 >= 8 )
    {
      v42 = (unsigned __int64)v39 >> 3;
      do
      {
        v41 = __ROR8__(v41 - *v37++, v28);
        v39 -= 8;
        --v42;
      }
      while ( v42 );
    }
    for ( ; v39; --v39 )
    {
      v43 = *(unsigned __int8 *)v37;
      v37 = (_QWORD *)((char *)v37 + 1);
      v41 = __ROR8__(v41 - v43, v28);
    }
    if ( qword_140E622D0 != v41 && !v36 )
    {
      v28 = qword_140E622B8;
      v26 = qword_140E622B0;
      v36 = (unsigned int)__ROL4__(17367040, 16);
      qword_140E62280 = (unsigned int)v36;
      xmmword_140E62288 = 0LL;
      qword_140E62298 = 267LL;
      qword_140E622A0 = KeServiceDescriptorTable;
    }
    v44 = &KeServiceDescriptorTableShadow;
    _mm_prefetch((const char *)&KeServiceDescriptorTableShadow, 0);
    v45 = 32;
    do
    {
      v26 = __ROR8__(v26 - *(_QWORD *)v44, v28);
      v44 = (__int128 *)((char *)v44 + 8);
      v45 -= 8;
      --v12;
    }
    while ( v12 );
    for ( ; v45; --v45 )
    {
      v46 = *(unsigned __int8 *)v44;
      v44 = (__int128 *)((char *)v44 + 1);
      v26 = __ROR8__(v26 - v46, v28);
    }
    if ( qword_140E622D8 != v26 && !v36 )
    {
      v36 = (unsigned int)__ROL4__(4240, 28);
      qword_140E62280 = (unsigned int)v36;
      xmmword_140E62288 = 0LL;
      qword_140E62298 = 267LL;
      qword_140E622A0 = (__int64)&KeServiceDescriptorTableShadow;
    }
    if ( (_QWORD)KeServiceDescriptorTableShadow != (_QWORD)KeServiceDescriptorTable
      || (_DWORD)xmmword_140FC6290 != (_DWORD)xmmword_1412018D0 )
    {
      if ( v36 )
        goto LABEL_68;
      v36 = (unsigned int)__ROR4__(69468160, 114);
      qword_140E62280 = (unsigned int)v36;
      xmmword_140E62288 = 0LL;
      qword_140E62298 = 267LL;
      qword_140E622A0 = KeServiceDescriptorTableShadow;
    }
    if ( !v36 )
    {
LABEL_71:
      v21 = MEMORY[0xFFFFF78000000008];
      v22 = 80000000000LL;
      v24 = 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL - MEMORY[0xFFFFF780000003B0];
      qword_140E622C0 = MEMORY[0xFFFFF78000000008] + v24 + 288000000000LL;
      goto LABEL_58;
    }
LABEL_68:
    if ( (void (__fastcall __noreturn *)(struct _KDPC *, _QWORD *, PVOID, PVOID))DeferredContext.DeferredRoutine != KiSchedulerDpc )
      KeInitializeDpc(&DeferredContext, (PKDEFERRED_ROUTINE)KiSchedulerDpc, &DeferredContext);
    qword_140E622A8 = 1759552LL;
    KeInsertQueueDpc(&DeferredContext, 0LL, 0LL);
    goto LABEL_71;
  }
LABEL_58:
  v31 = *(_QWORD *)(BugCheckParameter2 + 760);
  if ( v31 )
    PspDereferenceQuota(v31, v24, v21, v22);
  v32 = *(_QWORD *)(BugCheckParameter2 + 400);
  if ( v32 )
    ExSaFree(v32, 0x10u);
  KiRemoveAndFreeCpuPartitionAssignmentProcess(BugCheckParameter2);
  v33 = *(struct _EX_RUNDOWN_REF **)(BugCheckParameter2 + 448);
  if ( v33 )
    KiRundownAvailableCpusWorkItem(v33 + 7);
  v34 = *(void **)(BugCheckParameter2 + 784);
  if ( v34 )
  {
    ExFreePoolWithTag(v34, 0);
    *(_QWORD *)(BugCheckParameter2 + 784) = 0LL;
  }
}
