/*
 * XREFs of PspProcessDelete @ 0x1408FFC10
 * Callers:
 *     <none>
 * Callees:
 *     PsDereferencePartition @ 0x14022B3F0 (PsDereferencePartition.c)
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14028EF60 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KiRemoveAndFreeCpuPartitionAssignmentProcess @ 0x1402B9A64 (KiRemoveAndFreeCpuPartitionAssignmentProcess.c)
 *     KiRundownAvailableCpusWorkItem @ 0x1402B9C1C (KiRundownAvailableCpusWorkItem.c)
 *     ExSaFree @ 0x1402B9C7C (ExSaFree.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     PspUnlockProcessListExclusive @ 0x1403C2F0C (PspUnlockProcessListExclusive.c)
 *     PspLockProcessListExclusive @ 0x1403C350C (PspLockProcessListExclusive.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x14040EEF0 (PsReturnProcessNonPagedPoolQuota.c)
 *     PsGetProcessId @ 0x140427BE0 (PsGetProcessId.c)
 *     KeInitializeDpc @ 0x14044A220 (KeInitializeDpc.c)
 *     IoSetDiskIoAttributionOnProcess @ 0x140484128 (IoSetDiskIoAttributionOnProcess.c)
 *     SmCompressionProcessHoldsPartitionReference @ 0x1404F4610 (SmCompressionProcessHoldsPartitionReference.c)
 *     KeBugCheck @ 0x1404F9230 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     KeUnsecureProcess @ 0x1405B5AF0 (KeUnsecureProcess.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwDeleteWnfStateName @ 0x1406A8FD0 (ZwDeleteWnfStateName.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PspDetachProcessFromSyscallProvider @ 0x14077147C (PspDetachProcessFromSyscallProvider.c)
 *     VmpProcessContextCleanup @ 0x14079F6EC (VmpProcessContextCleanup.c)
 *     ExMapHandleToPointer @ 0x140846FB0 (ExMapHandleToPointer.c)
 *     ExDestroyHandle @ 0x1408961C0 (ExDestroyHandle.c)
 *     PspRemoveProcessFromJobChain @ 0x1408FF2D8 (PspRemoveProcessFromJobChain.c)
 *     PspDereferenceQuota @ 0x1408FF678 (PspDereferenceQuota.c)
 *     SeDeassignPrimaryToken @ 0x1408FF694 (SeDeassignPrimaryToken.c)
 *     EtwExitProcess @ 0x1408FF6D4 (EtwExitProcess.c)
 *     ObClearProcessDeviceMap @ 0x1408FF75C (ObClearProcessDeviceMap.c)
 *     sub_1408FF83C @ 0x1408FF83C (sub_1408FF83C.c)
 *     LpcExitProcess @ 0x1408FF998 (LpcExitProcess.c)
 *     PoEnergyContextCleanup @ 0x1408FFAB0 (PoEnergyContextCleanup.c)
 *     ExpWnfDeleteScopeById @ 0x1409001E8 (ExpWnfDeleteScopeById.c)
 *     ExpWnfDeleteProcessContext @ 0x1409002F0 (ExpWnfDeleteProcessContext.c)
 *     SmProcessDeleteNotification @ 0x140A4863C (SmProcessDeleteNotification.c)
 *     PspReleaseReferenceToSession @ 0x140A81850 (PspReleaseReferenceToSession.c)
 *     MmDeleteProcessAddressSpace @ 0x140AE7D64 (MmDeleteProcessAddressSpace.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PspProcessDelete(ULONG_PTR BugCheckParameter1)
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
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  void *v16; // rcx
  void *v17; // rcx
  signed __int64 *v18; // rax
  bool v19; // zf
  void *v20; // rcx
  int v21; // edi
  struct _KTHREAD *v22; // rax
  void *v23; // rcx
  __int64 v24; // rcx
  __int128 *v25; // r9
  __int64 v26; // r8
  int v27; // r10d
  char v28; // di
  __int64 v29; // rdx
  __int64 v30; // rax
  volatile signed __int32 *v31; // rcx
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

  v1 = *(_DWORD *)(BugCheckParameter1 + 1532);
  memset(v48, 0, sizeof(v48));
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
    ZwDeleteWnfStateName((PCWNF_STATE_NAME)(BugCheckParameter1 + 1824));
  v8 = *(void **)(BugCheckParameter1 + 776);
  if ( v8 )
  {
    ObfDereferenceObject(v8);
    *(_QWORD *)(BugCheckParameter1 + 776) = 0LL;
  }
  v9 = *(_QWORD *)(BugCheckParameter1 + 576);
  if ( v9 )
  {
    ObfDereferenceObject((PVOID)(v9 & 0xFFFFFFFFFFFFFFF8uLL));
    *(_QWORD *)(BugCheckParameter1 + 576) = 0LL;
  }
  if ( *(_QWORD *)(BugCheckParameter1 + 1976) )
    PspDetachProcessFromSyscallProvider((__int64 *)BugCheckParameter1);
  ProcessId = PsGetProcessId((PEPROCESS)BugCheckParameter1);
  sub_1408FF83C((__int64)ProcessId);
  v12 = 4LL;
  if ( _bittest((const signed __int32 *)(BugCheckParameter1 + 500), 0x12u) )
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v48);
    if ( (*(_DWORD *)(BugCheckParameter1 + 496) & 0x400) != 0 )
      guard_dispatch_icall_no_overrides(BugCheckParameter1, v13);
    _InterlockedOr((volatile signed __int32 *)(BugCheckParameter1 + 500), 4u);
    v16 = *(void **)(BugCheckParameter1 + 840);
    if ( v16 )
    {
      if ( v16 == (void *)1 )
      {
LABEL_22:
        KiUnstackDetachProcess((__int64)v48, 0, v14, v15);
        MmDeleteProcessAddressSpace(BugCheckParameter1);
        v17 = *(void **)(BugCheckParameter1 + 744);
        if ( v17 )
          PspReleaseReferenceToSession(v17);
        goto LABEL_24;
      }
      ObfDereferenceObject(v16);
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
    v18 = ExMapHandleToPointer(PspCidTable, *(_QWORD *)(BugCheckParameter1 + 464));
    if ( !v18 )
      KeBugCheck(0x17u);
    ExDestroyHandle(PspCidTable, *(_QWORD *)(BugCheckParameter1 + 464), v18);
    v19 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v19 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  if ( *(_QWORD *)(BugCheckParameter1 + 584) )
    SeDeassignPrimaryToken(BugCheckParameter1);
  v20 = *(void **)(BugCheckParameter1 + 704);
  if ( v20 )
  {
    ExFreePoolWithTag(v20, 0);
    PsReturnProcessNonPagedPoolQuota(BugCheckParameter1, 0x6028uLL);
  }
  if ( *(_QWORD *)(BugCheckParameter1 + 1880) )
  {
    v21 = 0;
    if ( (*(_DWORD *)(BugCheckParameter1 + 1532) & 0x40000000) == 0
      || SmCompressionProcessHoldsPartitionReference(BugCheckParameter1) )
    {
      v21 = 1;
    }
    if ( _bittest((const signed __int32 *)(BugCheckParameter1 + 500), 0x12u) )
      SmProcessDeleteNotification(BugCheckParameter1);
    if ( v21 )
      PsDereferencePartition(*(_QWORD *)(BugCheckParameter1 + 1880));
  }
  EtwExitProcess(BugCheckParameter1, v11);
  LpcExitProcess(BugCheckParameter1);
  v22 = KeGetCurrentThread();
  v47 = BugCheckParameter1;
  --v22->KernelApcDisable;
  v23 = *(void **)(BugCheckParameter1 + 1512);
  if ( v23 )
    ExpWnfDeleteProcessContext(v23);
  ExpWnfDeleteScopeById(3LL, &v47);
  KeLeaveCriticalRegion();
  IoSetDiskIoAttributionOnProcess(0LL, BugCheckParameter1);
  PoEnergyContextCleanup(BugCheckParameter1);
  v24 = *(_QWORD *)(BugCheckParameter1 + 1648);
  if ( v24 )
  {
    VmpProcessContextCleanup(v24);
    ExFreePoolWithTag(*(PVOID *)(BugCheckParameter1 + 1648), 0);
  }
  if ( MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0] >= (unsigned __int64)qword_140E62690 )
  {
    v25 = &KeServiceDescriptorTable;
    _mm_prefetch((const char *)&KeServiceDescriptorTable, 0);
    v26 = qword_140E62680;
    v27 = 64;
    v28 = qword_140E62688;
    v29 = qword_140E62680;
    v30 = 8LL;
    do
    {
      v29 = __ROR8__(v29 - *(_QWORD *)v25, qword_140E62688);
      v25 = (__int128 *)((char *)v25 + 8);
      v27 -= 8;
      --v30;
    }
    while ( v30 );
    for ( ; v27; --v27 )
    {
      v35 = *(unsigned __int8 *)v25;
      v25 = (__int128 *)((char *)v25 + 1);
      v29 = __ROR8__(v29 - v35, qword_140E62688);
    }
    v19 = qword_140E62698 == v29;
    v36 = qword_140E62650;
    if ( !v19 && !qword_140E62650 )
    {
      v28 = qword_140E62688;
      v26 = qword_140E62680;
      v36 = (unsigned int)__ROR4__(8683520, 15);
      qword_140E62650 = (unsigned int)v36;
      xmmword_140E62658 = 0LL;
      qword_140E62668 = 267LL;
      qword_140E62670 = (__int64)&KeServiceDescriptorTable;
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
    if ( qword_140E626A0 != v41 && !v36 )
    {
      v28 = qword_140E62688;
      v26 = qword_140E62680;
      v36 = (unsigned int)__ROL4__(17367040, 16);
      qword_140E62650 = (unsigned int)v36;
      xmmword_140E62658 = 0LL;
      qword_140E62668 = 267LL;
      qword_140E62670 = KeServiceDescriptorTable;
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
    if ( qword_140E626A8 != v26 && !v36 )
    {
      v36 = (unsigned int)__ROL4__(4240, 28);
      qword_140E62650 = (unsigned int)v36;
      xmmword_140E62658 = 0LL;
      qword_140E62668 = 267LL;
      qword_140E62670 = (__int64)&KeServiceDescriptorTableShadow;
    }
    if ( (_QWORD)KeServiceDescriptorTableShadow != (_QWORD)KeServiceDescriptorTable
      || (_DWORD)xmmword_140FC72D0 != (_DWORD)xmmword_1412018D0 )
    {
      if ( v36 )
        goto LABEL_68;
      v36 = (unsigned int)__ROR4__(69468160, 114);
      qword_140E62650 = (unsigned int)v36;
      xmmword_140E62658 = 0LL;
      qword_140E62668 = 267LL;
      qword_140E62670 = KeServiceDescriptorTableShadow;
    }
    if ( !v36 )
    {
LABEL_71:
      qword_140E62690 = MEMORY[0xFFFFF78000000008]
                      + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL
                      - MEMORY[0xFFFFF780000003B0]
                      + 288000000000LL;
      goto LABEL_53;
    }
LABEL_68:
    if ( (void (__fastcall __noreturn *)(struct _KDPC *, _QWORD *, PVOID, PVOID))DeferredContext.DeferredRoutine != KiSchedulerDpc )
      KeInitializeDpc(&DeferredContext, (PKDEFERRED_ROUTINE)KiSchedulerDpc, &DeferredContext);
    qword_140E62678 = 1759552LL;
    KeInsertQueueDpc(&DeferredContext, 0LL, 0LL);
    goto LABEL_71;
  }
LABEL_53:
  v31 = *(volatile signed __int32 **)(BugCheckParameter1 + 760);
  if ( v31 )
    PspDereferenceQuota(v31);
  v32 = *(_QWORD *)(BugCheckParameter1 + 400);
  if ( v32 )
    ExSaFree(v32);
  KiRemoveAndFreeCpuPartitionAssignmentProcess(BugCheckParameter1);
  v33 = *(struct _EX_RUNDOWN_REF **)(BugCheckParameter1 + 448);
  if ( v33 )
    KiRundownAvailableCpusWorkItem(v33 + 7);
  v34 = *(void **)(BugCheckParameter1 + 784);
  if ( v34 )
  {
    ExFreePoolWithTag(v34, 0);
    *(_QWORD *)(BugCheckParameter1 + 784) = 0LL;
  }
}
