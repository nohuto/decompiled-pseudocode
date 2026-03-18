/*
 * XREFs of KiCpuPartitionCheckAffinitization @ 0x1405BC120
 * Callers:
 *     KiSetAffinityThread @ 0x140271884 (KiSetAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1402783E0 (KeSetSystemGroupAffinityThread.c)
 *     HalpTimerStallExecutionProcessor @ 0x14027A3C0 (HalpTimerStallExecutionProcessor.c)
 *     KeSetSystemMultipleGroupAffinityThread @ 0x1404C641C (KeSetSystemMultipleGroupAffinityThread.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     KeAddGroupAffinityEx @ 0x140256130 (KeAddGroupAffinityEx.c)
 *     ?KiAndAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z @ 0x14026704C (-KiAndAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140271570 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     KeQueryCpuSetsProcess @ 0x1404D4504 (KeQueryCpuSetsProcess.c)
 *     KiQueryCpuSetsProcessWithLock @ 0x1404F29B0 (KiQueryCpuSetsProcessWithLock.c)
 *     EtwTraceCpuPartitionAffinityViolation @ 0x140641540 (EtwTraceCpuPartitionAffinityViolation.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall KiCpuPartitionCheckAffinitization(__int64 a1, struct _KAFFINITY_EX *a2, unsigned __int8 a3, char a4)
{
  unsigned int v4; // ebp
  __int64 v6; // rbx
  void *v8; // rdi
  size_t v10; // r14
  __int64 Pool2; // rax
  struct _KAFFINITY_EX *v12; // rsi
  _QWORD *v13; // rax
  unsigned __int16 v14; // bx
  __int64 *v15; // r14
  __int64 v16; // rbx

  v4 = (unsigned __int16)KiMaximumGroups;
  v6 = *(_QWORD *)(a1 + 544);
  v8 = 0LL;
  v10 = 8LL * (unsigned __int16)KiMaximumGroups;
  Pool2 = ExAllocatePool2(0x40uLL);
  v12 = (struct _KAFFINITY_EX *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 4) = 0;
    *(_WORD *)Pool2 = 1;
    *(_WORD *)(Pool2 + 2) = v4;
    memset_0((void *)(Pool2 + 8), 0, v10);
    if ( *(_QWORD *)(v6 + 432) == v6 + 432 )
    {
      KxAcquireSpinLock((PKSPIN_LOCK)(KiSystemCpuPartition + 8));
      v16 = KiSystemCpuPartition;
      KiCopyAffinityEx(v12, v12->Size, *(struct _KAFFINITY_EX **)KiSystemCpuPartition);
      KxReleaseSpinLock((volatile signed __int64 *)(v16 + 8));
    }
    else
    {
      v13 = (_QWORD *)ExAllocatePool2(0x40uLL);
      v8 = v13;
      if ( !v13 )
      {
LABEL_14:
        ExFreePoolWithTag(v12, 0);
        if ( v8 )
          ExFreePoolWithTag(v8, 0);
        return;
      }
      if ( a4 )
        KiQueryCpuSetsProcessWithLock(v6, v13, v4, 1);
      else
        KeQueryCpuSetsProcess(v6, (__int64)v13, v4, 1u);
      v14 = 0;
      if ( (_WORD)v4 )
      {
        v15 = (__int64 *)v8;
        do
          KeAddGroupAffinityEx(&v12->Count, v14++, *v15++);
        while ( v14 < (unsigned __int16)v4 );
      }
    }
    if ( !(unsigned int)KiAndAffinityExNoResult(v12, a2) )
      EtwTraceCpuPartitionAffinityViolation(a3, a1, a2);
    goto LABEL_14;
  }
}
