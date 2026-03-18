/*
 * XREFs of MiAllocatePfnRepurposeLogDispatch @ 0x14047E0C0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     PfIsProcessExitingInNonSystemPartition @ 0x14047E324 (PfIsProcessExitingInNonSystemPartition.c)
 *     Feature_PrefetchQueueWorkerProactivelyForProcessExit__private_IsEnabledDeviceUsageNoInline @ 0x1404F2040 (Feature_PrefetchQueueWorkerProactivelyForProcessExit__private_IsEnabledDeviceUsageNoInline.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiAllocatePfnRepurposeLogDispatch(
        struct _KDPC *Dpc,
        volatile LONG *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  unsigned __int64 v5; // rbp
  __int64 Pool; // rax
  void *v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdi
  unsigned int v12; // r14d
  int v13; // esi
  BOOL v14; // ebp
  int IsEnabledDeviceUsageNoInline; // eax
  bool v16; // zf

  v5 = MEMORY[0xFFFFF78000000320];
  Pool = MiAllocatePool(0x40uLL, 0x1000uLL, 1884450125);
  v7 = (void *)Pool;
  if ( Pool )
  {
    *(_QWORD *)Pool = 0LL;
    *(_QWORD *)(Pool + 32) = Pool + 64;
    *(_QWORD *)(Pool + 40) = Pool + 4088;
    *(_DWORD *)(Pool + 8) = 2;
    *(_QWORD *)(Pool + 16) = v5;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel(DeferredContext + 4384);
  v8 = *((_QWORD *)DeferredContext + 2183);
  if ( !*((_DWORD *)DeferredContext + 4363) )
    goto LABEL_28;
  if ( v7 )
  {
    *((_QWORD *)DeferredContext + 2183) = v7;
    v7 = 0LL;
    goto LABEL_6;
  }
  if ( v8 )
  {
    if ( (*(_DWORD *)(v8 + 32) & 0xFFFLL) != 0 )
    {
      v8 = 0LL;
      goto LABEL_6;
    }
LABEL_28:
    *((_QWORD *)DeferredContext + 2183) = 0LL;
  }
LABEL_6:
  ExReleaseSpinLockExclusiveFromDpcLevel(DeferredContext + 4384);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v8 )
  {
    v9 = *(_QWORD *)(v8 + 32);
    if ( v9 == v8 + 64 )
      goto LABEL_24;
    if ( (v9 & 0xFFF) != 0 )
    {
      if ( v5 < *(_QWORD *)(v8 + 16) )
        v5 = MEMORY[0xFFFFF78000000320];
      v10 = *(_QWORD *)(v8 + 32) - 8LL;
      *(_QWORD *)(v8 + 24) = v5;
      *(_QWORD *)(v8 + 40) = v10;
    }
    *(_QWORD *)(v8 + 32) = v8 + 64;
    v11 = *(_QWORD *)(*((_QWORD *)DeferredContext + 23) + 32LL);
    if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v11 + 728)) )
    {
LABEL_24:
      ExFreePoolWithTag((PVOID)v8, 0);
      return;
    }
    v12 = *(unsigned __int16 *)(v11 + 768);
    if ( v12 >= *(_DWORD *)(v11 + 760) )
    {
      _InterlockedAdd((volatile signed __int32 *)(v11 + 688), 0x64u);
      v13 = 0;
      goto LABEL_23;
    }
    v13 = 1;
    v14 = (unsigned int)Feature_PrefetchQueueWorkerProactivelyForProcessExit__private_IsEnabledDeviceUsageNoInline()
       && *(int *)(v8 + 8) <= 1
       && *(_QWORD *)(v8 + 56)
       && (unsigned __int8)PfIsProcessExitingInNonSystemPartition(v11);
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)(v11 + 768), (PSLIST_ENTRY)v8);
    if ( !*(_DWORD *)(v11 + 740) && v12 >= 8 )
      KeSetEvent((PRKEVENT)(v11 + 736), 0, 0);
    IsEnabledDeviceUsageNoInline = Feature_PrefetchQueueWorkerProactivelyForProcessExit__private_IsEnabledDeviceUsageNoInline();
    if ( *(_DWORD *)(v11 + 740) )
    {
LABEL_23:
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v11 + 728));
      if ( v13 )
        return;
      goto LABEL_24;
    }
    if ( IsEnabledDeviceUsageNoInline )
    {
      v16 = !v14;
    }
    else
    {
      if ( *(int *)(v8 + 8) > 1 || !*(_QWORD *)(v8 + 56) )
        goto LABEL_23;
      v16 = (unsigned __int8)PfIsProcessExitingInNonSystemPartition(v11) == 0;
    }
    if ( !v16 )
      KeSetEvent((PRKEVENT)(v11 + 736), 0, 0);
    goto LABEL_23;
  }
}
