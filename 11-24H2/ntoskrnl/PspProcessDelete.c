/*
 * XREFs of PspProcessDelete @ 0x1408A99B0
 * Callers:
 *     <none>
 * Callees:
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14025E950 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     PsDereferencePartition @ 0x140275E60 (PsDereferencePartition.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     PspUnlockProcessListExclusive @ 0x1403494CC (PspUnlockProcessListExclusive.c)
 *     PspLockProcessListExclusive @ 0x140349ACC (PspLockProcessListExclusive.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x14041B3B0 (PsReturnProcessNonPagedPoolQuota.c)
 *     PsGetProcessId @ 0x140434960 (PsGetProcessId.c)
 *     KiRemoveAndFreeCpuPartitionAssignmentProcess @ 0x14043A220 (KiRemoveAndFreeCpuPartitionAssignmentProcess.c)
 *     KiRundownAvailableCpusWorkItem @ 0x14043A3D8 (KiRundownAvailableCpusWorkItem.c)
 *     ExSaFree @ 0x14043A42C (ExSaFree.c)
 *     KeInitializeDpc @ 0x140455470 (KeInitializeDpc.c)
 *     IoSetDiskIoAttributionOnProcess @ 0x140489168 (IoSetDiskIoAttributionOnProcess.c)
 *     SmCompressionProcessHoldsPartitionReference @ 0x1404F6D2C (SmCompressionProcessHoldsPartitionReference.c)
 *     KeBugCheck @ 0x1404FB970 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     KeUnsecureProcess @ 0x1405B8510 (KeUnsecureProcess.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwDeleteWnfStateName @ 0x1406A8030 (ZwDeleteWnfStateName.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PspDetachProcessFromSyscallProvider @ 0x14077125C (PspDetachProcessFromSyscallProvider.c)
 *     VmpProcessContextCleanup @ 0x14079F5DC (VmpProcessContextCleanup.c)
 *     ExMapHandleToPointer @ 0x14084ACF0 (ExMapHandleToPointer.c)
 *     PspRemoveProcessFromJobChain @ 0x1408A9078 (PspRemoveProcessFromJobChain.c)
 *     PspDereferenceQuota @ 0x1408A9418 (PspDereferenceQuota.c)
 *     SeDeassignPrimaryToken @ 0x1408A9434 (SeDeassignPrimaryToken.c)
 *     EtwExitProcess @ 0x1408A9474 (EtwExitProcess.c)
 *     ObClearProcessDeviceMap @ 0x1408A94FC (ObClearProcessDeviceMap.c)
 *     sub_1408A95DC @ 0x1408A95DC (sub_1408A95DC.c)
 *     LpcExitProcess @ 0x1408A9738 (LpcExitProcess.c)
 *     PoEnergyContextCleanup @ 0x1408A9850 (PoEnergyContextCleanup.c)
 *     ExpWnfDeleteScopeById @ 0x1408A9F88 (ExpWnfDeleteScopeById.c)
 *     ExpWnfDeleteProcessContext @ 0x1408AA090 (ExpWnfDeleteProcessContext.c)
 *     ExDestroyHandle @ 0x14098A050 (ExDestroyHandle.c)
 *     SmProcessDeleteNotification @ 0x140A51570 (SmProcessDeleteNotification.c)
 *     PspReleaseReferenceToSession @ 0x140A86D78 (PspReleaseReferenceToSession.c)
 *     MmDeleteProcessAddressSpace @ 0x140AE6484 (MmDeleteProcessAddressSpace.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PspProcessDelete(ULONG_PTR BugCheckParameter1)
{
  int v1; // eax
  _QWORD *v3; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v5; // rcx
  _QWORD *v6; // rax
  void *v7; // rcx
  __int64 v8; // rdx
  void *v9; // rcx
  __int64 v10; // rcx
  HANDLE ProcessId; // rax
  __int64 v12; // rdx
  __int64 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  void *v17; // rcx
  void *v18; // rcx
  signed __int64 *v19; // rax
  __int64 v20; // rcx
  bool v21; // zf
  void *v22; // rcx
  int v23; // edi
  struct _KTHREAD *v24; // rax
  void *v25; // rcx
  __int64 v26; // rcx
  __int128 *v27; // r9
  __int64 v28; // r8
  int v29; // r10d
  char v30; // di
  __int64 v31; // rdx
  __int64 v32; // rax
  volatile signed __int32 *v33; // rcx
  __int64 v34; // rcx
  struct _EX_RUNDOWN_REF *v35; // rcx
  void *v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rdx
  _QWORD *v39; // r11
  const char *v40; // rax
  unsigned int v41; // r10d
  unsigned __int64 v42; // rcx
  __int64 v43; // r9
  unsigned __int64 v44; // rax
  __int64 v45; // rax
  __int128 *v46; // r10
  int v47; // r9d
  __int64 v48; // rax
  ULONG_PTR v49; // [rsp+40h] [rbp-68h] BYREF
  _OWORD v50[3]; // [rsp+48h] [rbp-60h] BYREF

  v1 = *(_DWORD *)(BugCheckParameter1 + 1532);
  memset(v50, 0, sizeof(v50));
  if ( (v1 & 1) != 0
    && !*(_QWORD *)(BugCheckParameter1 + 1600)
    && (*(_DWORD *)(BugCheckParameter1 + 500) & 0x4000000) != 0
    && (*(_DWORD *)(BugCheckParameter1 + 2012) & 2) == 0 )
  {
    KeBugCheckEx(0x1F8u, 0LL, BugCheckParameter1, 0LL, 0LL);
  }
  *(_DWORD *)(BugCheckParameter1 + 500) &= ~0x4000000u;
  v3 = (_QWORD *)(BugCheckParameter1 + 472);
  CurrentThread = KeGetCurrentThread();
  if ( *(_QWORD *)(BugCheckParameter1 + 472) )
  {
    PspLockProcessListExclusive((__int64)CurrentThread);
    v5 = *v3;
    if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v6 = (_QWORD *)v3[1], (_QWORD *)*v6 != v3) )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    PspUnlockProcessListExclusive((__int64)CurrentThread);
  }
  v7 = *(void **)(BugCheckParameter1 + 848);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0);
    *(_QWORD *)(BugCheckParameter1 + 848) = 0LL;
  }
  ObClearProcessDeviceMap(BugCheckParameter1);
  if ( *(_QWORD *)(BugCheckParameter1 + 1824) )
    ZwDeleteWnfStateName(BugCheckParameter1 + 1824, v8);
  v9 = *(void **)(BugCheckParameter1 + 776);
  if ( v9 )
  {
    ObfDereferenceObject(v9);
    *(_QWORD *)(BugCheckParameter1 + 776) = 0LL;
  }
  v10 = *(_QWORD *)(BugCheckParameter1 + 576);
  if ( v10 )
  {
    ObfDereferenceObject((PVOID)(v10 & 0xFFFFFFFFFFFFFFF8uLL));
    *(_QWORD *)(BugCheckParameter1 + 576) = 0LL;
  }
  if ( *(_QWORD *)(BugCheckParameter1 + 1976) )
    PspDetachProcessFromSyscallProvider((__int64 *)BugCheckParameter1);
  ProcessId = PsGetProcessId((PEPROCESS)BugCheckParameter1);
  sub_1408A95DC((__int64)ProcessId);
  v13 = 4LL;
  if ( _bittest((const signed __int32 *)(BugCheckParameter1 + 500), 0x12u) )
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v50);
    if ( (*(_DWORD *)(BugCheckParameter1 + 496) & 0x400) != 0 )
      guard_dispatch_icall_no_overrides(BugCheckParameter1, v14, v15, v16);
    _InterlockedOr((volatile signed __int32 *)(BugCheckParameter1 + 500), 4u);
    v17 = *(void **)(BugCheckParameter1 + 840);
    if ( v17 )
    {
      if ( v17 == (void *)1 )
      {
LABEL_22:
        KiUnstackDetachProcess((__int64)v50, 0);
        MmDeleteProcessAddressSpace(BugCheckParameter1);
        v18 = *(void **)(BugCheckParameter1 + 744);
        if ( v18 )
          PspReleaseReferenceToSession(v18);
        goto LABEL_24;
      }
      ObfDereferenceObject(v17);
    }
    *(_QWORD *)(BugCheckParameter1 + 840) = 1LL;
    goto LABEL_22;
  }
LABEL_24:
  if ( *(_QWORD *)(BugCheckParameter1 + 672) )
  {
    PspRemoveProcessFromJobChain((PEPROCESS)BugCheckParameter1, 0LL, 1u, 0);
    ObDereferenceObjectDeferDeleteWithTag(*(PVOID *)(BugCheckParameter1 + 672), 0x73507350u);
    *(_QWORD *)(BugCheckParameter1 + 672) = 0LL;
    *(_QWORD *)(BugCheckParameter1 + 632) = 0LL;
    *(_QWORD *)(BugCheckParameter1 + 1520) = MmBadPointer;
  }
  if ( *(_QWORD *)(BugCheckParameter1 + 368) )
    KeUnsecureProcess(BugCheckParameter1);
  if ( *(_QWORD *)(BugCheckParameter1 + 464) )
  {
    --CurrentThread->SpecialApcDisable;
    v19 = ExMapHandleToPointer(PspCidTable, *(_QWORD *)(BugCheckParameter1 + 464));
    if ( !v19 )
      KeBugCheck(0x17u);
    ExDestroyHandle(PspCidTable, *(_QWORD *)(BugCheckParameter1 + 464), v19);
    v21 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v21 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v20, v12);
  }
  if ( *(_QWORD *)(BugCheckParameter1 + 584) )
    SeDeassignPrimaryToken(BugCheckParameter1);
  v22 = *(void **)(BugCheckParameter1 + 704);
  if ( v22 )
  {
    ExFreePoolWithTag(v22, 0);
    PsReturnProcessNonPagedPoolQuota(BugCheckParameter1, 0x6028uLL);
  }
  if ( *(_QWORD *)(BugCheckParameter1 + 1880) )
  {
    v23 = 0;
    if ( (*(_DWORD *)(BugCheckParameter1 + 1532) & 0x40000000) == 0
      || SmCompressionProcessHoldsPartitionReference(BugCheckParameter1) )
    {
      v23 = 1;
    }
    if ( _bittest((const signed __int32 *)(BugCheckParameter1 + 500), 0x12u) )
      SmProcessDeleteNotification(BugCheckParameter1);
    if ( v23 )
      PsDereferencePartition(*(_QWORD *)(BugCheckParameter1 + 1880));
  }
  EtwExitProcess(BugCheckParameter1, v12);
  LpcExitProcess(BugCheckParameter1);
  v24 = KeGetCurrentThread();
  v49 = BugCheckParameter1;
  --v24->KernelApcDisable;
  v25 = *(void **)(BugCheckParameter1 + 1512);
  if ( v25 )
    ExpWnfDeleteProcessContext(v25);
  ExpWnfDeleteScopeById(3LL, &v49);
  KeLeaveCriticalRegion();
  IoSetDiskIoAttributionOnProcess(0LL, BugCheckParameter1);
  PoEnergyContextCleanup(BugCheckParameter1);
  v26 = *(_QWORD *)(BugCheckParameter1 + 1648);
  if ( v26 )
  {
    VmpProcessContextCleanup(v26);
    ExFreePoolWithTag(*(PVOID *)(BugCheckParameter1 + 1648), 0);
  }
  if ( MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0] >= (unsigned __int64)qword_140E62500 )
  {
    v27 = &KeServiceDescriptorTable;
    _mm_prefetch((const char *)&KeServiceDescriptorTable, 0);
    v28 = qword_140E624F0;
    v29 = 64;
    v30 = qword_140E624F8;
    v31 = qword_140E624F0;
    v32 = 8LL;
    do
    {
      v31 = __ROR8__(v31 - *(_QWORD *)v27, qword_140E624F8);
      v27 = (__int128 *)((char *)v27 + 8);
      v29 -= 8;
      --v32;
    }
    while ( v32 );
    for ( ; v29; --v29 )
    {
      v37 = *(unsigned __int8 *)v27;
      v27 = (__int128 *)((char *)v27 + 1);
      v31 = __ROR8__(v31 - v37, qword_140E624F8);
    }
    v21 = qword_140E62508 == v31;
    v38 = qword_140E624C0;
    if ( !v21 && !qword_140E624C0 )
    {
      v30 = qword_140E624F8;
      v28 = qword_140E624F0;
      v38 = (unsigned int)__ROR4__(8683520, 15);
      qword_140E624C0 = (unsigned int)v38;
      xmmword_140E624C8 = 0LL;
      qword_140E624D8 = 267LL;
      qword_140E624E0 = (__int64)&KeServiceDescriptorTable;
    }
    v39 = (_QWORD *)KeServiceDescriptorTable;
    v40 = (const char *)KeServiceDescriptorTable;
    v41 = 4 * xmmword_1412018D0;
    v42 = KeServiceDescriptorTable + (unsigned int)(4 * xmmword_1412018D0);
    if ( (unsigned __int64)KeServiceDescriptorTable < v42 )
    {
      do
      {
        _mm_prefetch(v40, 0);
        v40 += 64;
      }
      while ( (unsigned __int64)v40 < v42 );
    }
    v43 = v28;
    if ( v41 >= 8 )
    {
      v44 = (unsigned __int64)v41 >> 3;
      do
      {
        v43 = __ROR8__(v43 - *v39++, v30);
        v41 -= 8;
        --v44;
      }
      while ( v44 );
    }
    for ( ; v41; --v41 )
    {
      v45 = *(unsigned __int8 *)v39;
      v39 = (_QWORD *)((char *)v39 + 1);
      v43 = __ROR8__(v43 - v45, v30);
    }
    if ( qword_140E62510 != v43 && !v38 )
    {
      v30 = qword_140E624F8;
      v28 = qword_140E624F0;
      v38 = (unsigned int)__ROL4__(17367040, 16);
      qword_140E624C0 = (unsigned int)v38;
      xmmword_140E624C8 = 0LL;
      qword_140E624D8 = 267LL;
      qword_140E624E0 = KeServiceDescriptorTable;
    }
    v46 = &KeServiceDescriptorTableShadow;
    _mm_prefetch((const char *)&KeServiceDescriptorTableShadow, 0);
    v47 = 32;
    do
    {
      v28 = __ROR8__(v28 - *(_QWORD *)v46, v30);
      v46 = (__int128 *)((char *)v46 + 8);
      v47 -= 8;
      --v13;
    }
    while ( v13 );
    for ( ; v47; --v47 )
    {
      v48 = *(unsigned __int8 *)v46;
      v46 = (__int128 *)((char *)v46 + 1);
      v28 = __ROR8__(v28 - v48, v30);
    }
    if ( qword_140E62518 != v28 && !v38 )
    {
      v38 = (unsigned int)__ROL4__(4240, 28);
      qword_140E624C0 = (unsigned int)v38;
      xmmword_140E624C8 = 0LL;
      qword_140E624D8 = 267LL;
      qword_140E624E0 = (__int64)&KeServiceDescriptorTableShadow;
    }
    if ( (_QWORD)KeServiceDescriptorTableShadow != (_QWORD)KeServiceDescriptorTable
      || (_DWORD)xmmword_140FC6290 != (_DWORD)xmmword_1412018D0 )
    {
      if ( v38 )
        goto LABEL_68;
      v38 = (unsigned int)__ROR4__(69468160, 114);
      qword_140E624C0 = (unsigned int)v38;
      xmmword_140E624C8 = 0LL;
      qword_140E624D8 = 267LL;
      qword_140E624E0 = KeServiceDescriptorTableShadow;
    }
    if ( !v38 )
    {
LABEL_71:
      qword_140E62500 = MEMORY[0xFFFFF78000000008]
                      + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL
                      - MEMORY[0xFFFFF780000003B0]
                      + 288000000000LL;
      goto LABEL_53;
    }
LABEL_68:
    if ( (void (__fastcall __noreturn *)(struct _KDPC *, _QWORD *, PVOID, PVOID))DeferredContext.DeferredRoutine != KiSchedulerDpc )
      KeInitializeDpc(&DeferredContext, (PKDEFERRED_ROUTINE)KiSchedulerDpc, &DeferredContext);
    qword_140E624E8 = 1759552LL;
    KeInsertQueueDpc(&DeferredContext, 0LL, 0LL);
    goto LABEL_71;
  }
LABEL_53:
  v33 = *(volatile signed __int32 **)(BugCheckParameter1 + 760);
  if ( v33 )
    PspDereferenceQuota(v33);
  v34 = *(_QWORD *)(BugCheckParameter1 + 400);
  if ( v34 )
    ExSaFree(v34, 0x10u);
  KiRemoveAndFreeCpuPartitionAssignmentProcess(BugCheckParameter1);
  v35 = *(struct _EX_RUNDOWN_REF **)(BugCheckParameter1 + 448);
  if ( v35 )
    KiRundownAvailableCpusWorkItem(v35 + 7);
  v36 = *(void **)(BugCheckParameter1 + 784);
  if ( v36 )
  {
    ExFreePoolWithTag(v36, 0);
    *(_QWORD *)(BugCheckParameter1 + 784) = 0LL;
  }
}
