/*
 * XREFs of CreateNVMePrpListBufferPool @ 0x140119754
 * Callers:
 *     NvmeControllerIoQueuesInitialize @ 0x1400F159C (NvmeControllerIoQueuesInitialize.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     NvmeAllocateContiguousMemoryWithPreferredNode @ 0x140087984 (NvmeAllocateContiguousMemoryWithPreferredNode.c)
 *     NvmeFreeContiguousMemory @ 0x140087FC4 (NvmeFreeContiguousMemory.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall CreateNVMePrpListBufferPool(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned int v3; // ebp
  __int64 v4; // r9
  char *v5; // r15
  __int64 Pool; // rax
  __int64 v7; // r9
  __int64 v8; // rdi
  unsigned int NodeNumber; // ebp
  unsigned int k; // r14d
  __int64 v11; // r13
  void *v12; // rax
  void *v13; // r12
  __int64 v14; // rcx
  unsigned int i; // r14d
  char *j; // rbp
  PSLIST_ENTRY v17; // rax
  _QWORD *p_Next; // rdi
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Information; // [rsp+20h] [rbp-98h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+C0h] [rbp+8h] BYREF
  ULONG Length; // [rsp+C8h] [rbp+10h] BYREF
  __int64 v23; // [rsp+D0h] [rbp+18h]
  PHYSICAL_ADDRESS v24; // [rsp+D8h] [rbp+20h] BYREF

  v1 = 0;
  v24.QuadPart = 0LL;
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 128);
  v5 = 0LL;
  v23 = 0LL;
  Pool = RaidAllocatePool(
           72LL,
           (unsigned int)(g_RecommendedSharedDataAlignment - 1)
         + 8LL * (unsigned int)g_MaximumProcessorCount
         - ((unsigned int)(g_RecommendedSharedDataAlignment - 1)
          + 8 * (unsigned __int64)(unsigned int)g_MaximumProcessorCount)
         % (unsigned int)g_RecommendedSharedDataAlignment,
           1296982354LL,
           *(_QWORD *)(v4 + 8));
  *(_QWORD *)(a1 + 880) = Pool;
  if ( !Pool
    || (v7 = *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL),
        v3 = g_RecommendedSharedDataAlignment
           * (((unsigned __int64)(unsigned int)(g_RecommendedSharedDataAlignment - 1) + 32)
            / (unsigned int)g_RecommendedSharedDataAlignment),
        v23 = v3,
        (v5 = (char *)RaidAllocatePool(72LL, g_MaximumProcessorCount * v3, 1296982354LL, v7)) == 0LL) )
  {
LABEL_15:
    v1 = -1073741670;
    if ( *(_QWORD *)(a1 + 880) )
    {
      if ( v5 )
      {
        for ( i = 0; i < g_MaximumProcessorCount; ++i )
        {
          for ( j = &v5[i * v3]; ; --*((_DWORD *)j + 4) )
          {
            v17 = ExpInterlockedPopEntrySList((PSLIST_HEADER)j);
            p_Next = &v17->Next;
            if ( !v17 )
              break;
            if ( v17[1].Next )
            {
              NvmeFreeContiguousMemory(*(_QWORD *)(a1 + 128));
              p_Next[2] = 0LL;
            }
            ExFreePoolWithTag(p_Next, 0x4D4E6152u);
          }
          v3 = v23;
        }
        ExFreePoolWithTag(v5, 0x4D4E6152u);
      }
      ExFreePoolWithTag(*(PVOID *)(a1 + 880), 0x4D4E6152u);
      *(_QWORD *)(a1 + 880) = 0LL;
    }
    return v1;
  }
  v8 = 0LL;
LABEL_4:
  if ( (unsigned int)v8 < g_MaximumProcessorCount )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 880) + 8 * v8) = &v5[v3 * (unsigned int)v8];
    InitializeSListHead(*(PSLIST_HEADER *)(*(_QWORD *)(a1 + 880) + 8 * v8));
    ProcNumber = 0;
    NodeNumber = 0x80000000;
    memset_0(&Information, 0, sizeof(Information));
    Length = 80;
    if ( KeGetProcessorNumberFromIndex(v8, &ProcNumber) >= 0
      && KeQueryLogicalProcessorRelationship(&ProcNumber, RelationNumaNode, &Information, &Length) >= 0 )
    {
      NodeNumber = Information.NumaNode.NodeNumber;
    }
    for ( k = 0; ; ++k )
    {
      if ( k >= 0x20 )
      {
        v3 = v23;
        v8 = (unsigned int)(v8 + 1);
        goto LABEL_4;
      }
      v11 = RaidAllocatePool(
              72LL,
              (unsigned int)(g_RecommendedSharedDataAlignment - 1)
            + 64LL
            - ((unsigned __int64)(unsigned int)(g_RecommendedSharedDataAlignment - 1) + 64)
            % (unsigned int)g_RecommendedSharedDataAlignment,
              1296982354LL,
              *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL));
      if ( !v11 )
        break;
      v12 = NvmeAllocateContiguousMemoryWithPreferredNode(0x1000u, *(_QWORD **)(a1 + 128), NodeNumber, &v24);
      v13 = v12;
      if ( !v12 )
        break;
      memset_0(v12, 0, 0x1000uLL);
      *(PHYSICAL_ADDRESS *)(v11 + 24) = v24;
      *(_QWORD *)(v11 + 16) = v13;
      *(_WORD *)(v11 + 36) = 512;
      ExpInterlockedPushEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(a1 + 880) + 8 * v8), (PSLIST_ENTRY)v11);
      v14 = *(_QWORD *)(*(_QWORD *)(a1 + 880) + 8 * v8);
      ++*(_DWORD *)(v14 + 16);
    }
    v3 = v23;
    goto LABEL_15;
  }
  return v1;
}
