/*
 * XREFs of CreateNVMeSplitIoContextPool @ 0x140119C4C
 * Callers:
 *     NvmeControllerIoQueuesInitialize @ 0x1400F159C (NvmeControllerIoQueuesInitialize.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     RaidAllocatePoolEx @ 0x14008AB5C (RaidAllocatePoolEx.c)
 *     AllocateNewNVMeIoSplitContext @ 0x140119530 (AllocateNewNVMeIoSplitContext.c)
 *     DeleteNVMeSplitIoContextPool @ 0x14011A024 (DeleteNVMeSplitIoContextPool.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall CreateNVMeSplitIoContextPool(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 Pool; // rax
  ULONG v4; // edi
  unsigned int NodeNumber; // ebp
  __int64 v6; // rcx
  int v7; // ebp
  struct _SLIST_ENTRY *NewNVMeIoSplitContext; // rax
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Information; // [rsp+30h] [rbp-68h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+A0h] [rbp+8h] BYREF
  ULONG Length; // [rsp+A8h] [rbp+10h] BYREF

  v2 = 0;
  Pool = RaidAllocatePool(
           72LL,
           (unsigned int)(g_RecommendedSharedDataAlignment - 1)
         + 8LL * (unsigned int)g_MaximumProcessorCount
         - ((unsigned int)(g_RecommendedSharedDataAlignment - 1)
          + 8 * (unsigned __int64)(unsigned int)g_MaximumProcessorCount)
         % (unsigned int)g_RecommendedSharedDataAlignment,
           1380147538LL,
           *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL));
  *(_QWORD *)(a1 + 888) = Pool;
  if ( !Pool )
  {
LABEL_12:
    v2 = -1073741670;
    DeleteNVMeSplitIoContextPool(a1);
    return v2;
  }
  v4 = 0;
  if ( g_MaximumProcessorCount )
  {
LABEL_3:
    ProcNumber = 0;
    NodeNumber = 0x80000000;
    memset_0(&Information, 0, sizeof(Information));
    Length = 80;
    if ( KeGetProcessorNumberFromIndex(v4, &ProcNumber) >= 0
      && KeQueryLogicalProcessorRelationship(&ProcNumber, RelationNumaNode, &Information, &Length) >= 0 )
    {
      NodeNumber = Information.NumaNode.NodeNumber;
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 888) + 8LL * v4) = RaidAllocatePoolEx(
                                                      72LL,
                                                      (unsigned int)(g_RecommendedSharedDataAlignment - 1)
                                                    + 32LL
                                                    - ((unsigned __int64)(unsigned int)(g_RecommendedSharedDataAlignment
                                                                                      - 1)
                                                     + 32)
                                                    % (unsigned int)g_RecommendedSharedDataAlignment,
                                                      1380147538LL,
                                                      *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL),
                                                      NodeNumber);
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 888) + 8LL * v4);
    if ( v6 )
    {
      *(_DWORD *)(v6 + 16) = v4;
      InitializeSListHead(*(PSLIST_HEADER *)(*(_QWORD *)(a1 + 888) + 8LL * v4));
      v7 = 0;
      while ( 1 )
      {
        NewNVMeIoSplitContext = (struct _SLIST_ENTRY *)AllocateNewNVMeIoSplitContext(a1, v4);
        if ( !NewNVMeIoSplitContext )
          break;
        ExpInterlockedPushEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(a1 + 888) + 8LL * v4), NewNVMeIoSplitContext);
        if ( (unsigned int)++v7 >= 0x20 )
        {
          if ( ++v4 < g_MaximumProcessorCount )
            goto LABEL_3;
          return v2;
        }
      }
    }
    goto LABEL_12;
  }
  return v2;
}
