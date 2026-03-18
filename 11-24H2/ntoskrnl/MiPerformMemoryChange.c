/*
 * XREFs of MiPerformMemoryChange @ 0x14066E094
 * Callers:
 *     MiCompleteMemoryAddition @ 0x1407E901C (MiCompleteMemoryAddition.c)
 *     MiRemovePhysicalMemory @ 0x1407E9DAC (MiRemovePhysicalMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiComputeNodeMemory @ 0x14066C790 (MiComputeNodeMemory.c)
 *     MiInitializeNonPagedPoolThresholds @ 0x140676B54 (MiInitializeNonPagedPoolThresholds.c)
 *     MiUpdatePhysicalPages @ 0x14068BA5C (MiUpdatePhysicalPages.c)
 *     MiMergeMemoryBlocks @ 0x1407E98BC (MiMergeMemoryBlocks.c)
 *     MiUnlinkHotAddFlight @ 0x1407EA0CC (MiUnlinkHotAddFlight.c)
 *     MiUpdateSharedUserDataNumberOfPages @ 0x1407EA1D0 (MiUpdateSharedUserDataNumberOfPages.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiPerformMemoryChange(__int64 a1)
{
  int v2; // ebx
  __int64 ***v3; // rsi
  __int64 v4; // rbp
  KIRQL v5; // bl
  void *v6; // rdx
  bool v7; // zf
  __int64 v8; // rcx
  int v9; // eax
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 **i; // rdx
  __int64 v13; // r8
  __int64 *v14; // rax
  _QWORD *v15; // rbx
  _QWORD v16[3]; // [rsp+30h] [rbp-18h] BYREF

  v2 = *(_DWORD *)(a1 + 40) & 1;
  MiMergeMemoryBlocks(*(_QWORD *)(a1 + 160), (_DWORD)MmPhysicalMemoryBlock - 16, a1 + 112, v2, 0);
  v3 = (__int64 ***)(a1 + 136);
  MiMergeMemoryBlocks(*(_QWORD *)(a1 + 168), qword_140E38C20 - 16, a1 + 136, v2, 1);
  MiUnlinkHotAddFlight(a1);
  v4 = 2LL;
  if ( KeGetCurrentIrql() == 2 )
  {
    v5 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E38CC8);
  }
  else
  {
    v5 = ExAcquireSpinLockExclusive(&dword_140E38CC8);
  }
  v6 = 0LL;
  v7 = (*((_QWORD *)MmPhysicalMemoryBlock - 1))-- == 1LL;
  if ( v7 )
    v6 = MmPhysicalMemoryBlock;
  MmPhysicalMemoryBlock = (void *)(*(_QWORD *)(a1 + 160) + 16LL);
  v8 = 0LL;
  v16[0] = v6;
  v7 = (*(_QWORD *)(qword_140E38C20 - 8))-- == 1LL;
  if ( v7 )
    v8 = qword_140E38C20;
  qword_140E38C20 = *(_QWORD *)(a1 + 168) + 16LL;
  v9 = *(_DWORD *)(a1 + 40);
  v16[1] = v8;
  v10 = *(_QWORD *)(a1 + 24) - 1LL;
  if ( (v9 & 1) != 0 )
  {
    if ( v10 > BugCheckParameter3 )
      BugCheckParameter3 = *(_QWORD *)(a1 + 24) - 1LL;
    if ( (*(_DWORD *)(a1 + 40) & 0x80008) == 0 )
    {
      v11 = *(_QWORD *)(a1 + 32);
LABEL_17:
      MiUpdatePhysicalPages(&MiSystemPartition, v11, 0LL);
    }
  }
  else
  {
    if ( v10 == BugCheckParameter3 )
      BugCheckParameter3 = *(_QWORD *)(a1 + 16) - 1LL;
    if ( (*(_DWORD *)(a1 + 40) & 0x80000) == 0 )
    {
      v11 = -*(_QWORD *)(a1 + 32);
      goto LABEL_17;
    }
  }
  MiInitializeNonPagedPoolThresholds(1LL);
  MiReleaseSpinLockExclusive(&dword_140E38CC8, v5);
  if ( (*(_DWORD *)(a1 + 40) & 0x80000) != 0 )
  {
    for ( i = *v3; i != (__int64 **)v3; i = (__int64 **)*i )
    {
      v13 = *((unsigned __int8 *)i + 36) + 2LL * *((unsigned int *)i + 8);
      v14 = i[3];
      if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
        qword_140E37800[v13] += v14;
      else
        qword_140E37800[v13] -= v14;
    }
  }
  v15 = v16;
  do
  {
    if ( *v15 )
      ExFreePoolWithTag((PVOID)(*v15 - 16LL), 0);
    ++v15;
    --v4;
  }
  while ( v4 );
  *(_OWORD *)(a1 + 160) = 0LL;
  MiComputeNodeMemory(&MiSystemPartition, 1);
  if ( (*(_DWORD *)(a1 + 40) & 0x80000) == 0 )
    MiUpdateSharedUserDataNumberOfPages();
}
