/*
 * XREFs of KeInitializeProcess @ 0x140A45798
 * Callers:
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 *     KiInitializeIdleProcess @ 0x140C2A7D0 (KiInitializeIdleProcess.c)
 * Callees:
 *     ExSaAllocate @ 0x14026E1D4 (ExSaAllocate.c)
 *     KeQueryMaximumProcessorCountEx @ 0x14031D920 (KeQueryMaximumProcessorCountEx.c)
 *     KiStartIdealProcessorAssignmentBlock @ 0x14032AE3C (KiStartIdealProcessorAssignmentBlock.c)
 *     KiSetIdealNodeProcessByGroup @ 0x14032B52C (KiSetIdealNodeProcessByGroup.c)
 *     KeSelectNodeForAffinity @ 0x14032B690 (KeSelectNodeForAffinity.c)
 *     KeIsEmptyGroupMask @ 0x14032FF20 (KeIsEmptyGroupMask.c)
 *     KeFindFirstSetRightGroupMask @ 0x140330524 (KeFindFirstSetRightGroupMask.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x14039FF30 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     MmGetNextNode @ 0x140421790 (MmGetNextNode.c)
 *     KeClearBitGroupMask @ 0x140454108 (KeClearBitGroupMask.c)
 *     KeSetGroupMaskProcess @ 0x140494478 (KeSetGroupMaskProcess.c)
 *     KeAndGroupMasks @ 0x1404A63E0 (KeAndGroupMasks.c)
 *     KiInitializeProcessAvailableCpuState @ 0x1404A7788 (KiInitializeProcessAvailableCpuState.c)
 *     KiInitializeIdealProcessorAssignmentBlock @ 0x1404AAAD0 (KiInitializeIdealProcessorAssignmentBlock.c)
 *     KiComputeProcessAutoBoostTreeCount @ 0x1404AC408 (KiComputeProcessAutoBoostTreeCount.c)
 *     KeSetBitGroupMask @ 0x1404B9A10 (KeSetBitGroupMask.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     VslCreateSecureProcess @ 0x140A7FD70 (VslCreateSecureProcess.c)
 */

__int64 __fastcall KeInitializeProcess(
        struct _KPROCESS *a1,
        char a2,
        unsigned __int16 a3,
        struct _KAFFINITY_EX *a4,
        unsigned __int16 *a5,
        _KSCHEDULING_GROUP *a6,
        int a7,
        char a8,
        volatile _KAFFINITY_EX *a9)
{
  unsigned __int16 *v9; // rsi
  __int64 v11; // rcx
  __int64 v12; // r15
  __int64 v14; // rbx
  char *v15; // rcx
  __int16 v16; // ax
  _KPROCESS_AVAILABLE_CPU_STATE *v17; // r13
  size_t v18; // r8
  unsigned __int16 v19; // ax
  size_t v20; // r8
  struct _KAFFINITY_EX *v21; // rbx
  _KI_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK *v22; // r13
  __int64 v23; // rcx
  _KAB_UM_PROCESS_TREE *v24; // r13
  __int64 v25; // r8
  __int128 v26; // xmm1
  unsigned __int16 v27; // dx
  unsigned __int64 v28; // r8
  int SecureProcess; // r12d
  char v30; // r15
  int NextNode; // eax
  __int64 v32; // r14
  unsigned __int16 FirstSetRightGroupMask; // bx
  unsigned __int16 v34; // dx
  void *v35; // r14
  ULONG v36; // r15d
  unsigned int v37; // esi
  unsigned int v38; // ecx
  __int64 v39; // rdx
  unsigned int v40; // eax
  unsigned __int64 v41; // r8
  __int64 v42; // r9
  unsigned __int64 *p_TreeLock; // rcx
  __int64 v44; // rdx
  unsigned __int64 v46; // rcx
  int v47; // [rsp+20h] [rbp-50h] BYREF
  size_t Size; // [rsp+28h] [rbp-48h]
  __int128 v49; // [rsp+30h] [rbp-40h] BYREF
  __int128 v50; // [rsp+40h] [rbp-30h] BYREF
  __int128 v51; // [rsp+50h] [rbp-20h] BYREF

  v9 = a5;
  v11 = (unsigned __int16)KiMaximumGroups;
  v12 = a3;
  a1->Header.Type = 3;
  a1->Header.WaitListHead.Blink = &a1->Header.WaitListHead;
  a1->Header.WaitListHead.Flink = &a1->Header.WaitListHead;
  v14 = 8 * v11 + 8;
  LOWORD(v47) = v11;
  Size = 8 * v11;
  *(_QWORD *)&v49 = v14;
  a1->BasePriority = a2;
  if ( (a8 & 1) != 0 )
    *(_DWORD *)&a1->0 |= 1u;
  a1->ActiveProcessors = a9;
  a9->Count = v11;
  a9->Size = v11;
  a9->Reserved = 0;
  memset_0(&a9->8, 0, 8 * v11);
  a1->Affinity = (_KAFFINITY_EX *)((char *)a9 + v14);
  v15 = (char *)a9 + v14;
  v16 = KiMaximumGroups;
  v17 = (_KPROCESS_AVAILABLE_CPU_STATE *)((char *)a9 + v14 + v14);
  v18 = 8LL * (unsigned __int16)KiMaximumGroups;
  *((_DWORD *)v15 + 1) = 0;
  *(_WORD *)v15 = 1;
  *((_WORD *)v15 + 1) = v16;
  memset_0((char *)&a9->8 + v14, 0, v18);
  KiCopyAffinityEx(a1->Affinity, a1->Affinity->Size, a4);
  v19 = v47;
  v20 = Size;
  a1->AvailableCpuState = v17;
  v21 = (struct _KAFFINITY_EX *)&v17[1];
  v22 = (_KI_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK *)((char *)&v17[1] + v49);
  v21->Reserved = 0;
  v21->Count = 1;
  v21->Size = v19;
  memset_0(&v21->8, 0, v20);
  KiCopyAffinityEx(v21, v21->Size, a4);
  KiInitializeProcessAvailableCpuState((__int64)a1->AvailableCpuState, (__int64)v21, (__int64)a1);
  v23 = (__int64)v22;
  a1->IdealProcessorAssignmentBlock = v22;
  v24 = (_KAB_UM_PROCESS_TREE *)&v22[1];
  Size = (size_t)v24;
  KiInitializeIdealProcessorAssignmentBlock(v23);
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0;
  v51 = 0LL;
  if ( a4->Count )
  {
    do
    {
      if ( a4->Bitmap[v27] != v25 )
        KeSetBitGroupMask((signed __int64 *)&v51, v27);
      ++v27;
    }
    while ( v27 < a4->Count );
    v26 = v51;
  }
  v49 = v26;
  KeSetGroupMaskProcess((__int64)a1, &v49);
  a1->PrimaryGroup = v12;
  a1->ProfileListHead.Blink = &a1->ProfileListHead;
  a1->ProfileListHead.Flink = &a1->ProfileListHead;
  a1->ReadyListHead.Blink = &a1->ReadyListHead;
  a1->ReadyListHead.Flink = &a1->ReadyListHead;
  a1->ThreadListHead.Blink = &a1->ThreadListHead;
  a1->ThreadListHead.Flink = &a1->ThreadListHead;
  a1->QuantumReset = 6;
  a1->StackCount.Value = v28;
  if ( !a5 )
  {
    v49 = 0LL;
    WORD4(v49) = v12;
    if ( (unsigned __int16)v12 >= a4->Count )
      v46 = v28;
    else
      v46 = a4->Bitmap[v12];
    *(_QWORD *)&v49 = v46;
    v9 = (unsigned __int16 *)KeSelectNodeForAffinity((__int64)&v49);
  }
  SecureProcess = 0;
  a1->IdealGlobalNode = *v9;
  v30 = 0;
  v50 = v26;
  while ( 1 )
  {
    NextNode = *v9;
    v47 = 0;
    do
    {
      v49 = 0LL;
      v32 = KeNodeBlock[NextNode];
      KeAndGroupMasks((__int128 *)(v32 + 16), &v50, &v49);
      if ( !(unsigned int)KeIsEmptyGroupMask((unsigned __int64 *)&v49)
        && ((*(_BYTE *)(v32 + 10) & 1) == v30 || (unsigned __int16 *)v32 == v9) )
      {
        while ( !(unsigned int)KeIsEmptyGroupMask((unsigned __int64 *)&v49) )
        {
          FirstSetRightGroupMask = KeFindFirstSetRightGroupMask((__int64 *)&v49);
          KiSetIdealNodeProcessByGroup((__int64)a1, (_WORD *)v32, FirstSetRightGroupMask);
          KeClearBitGroupMask((signed __int64 *)&v49, FirstSetRightGroupMask);
          KeClearBitGroupMask((signed __int64 *)&v50, v34);
        }
        if ( (unsigned int)KeIsEmptyGroupMask((unsigned __int64 *)&v50) )
          break;
      }
      NextNode = MmGetNextNode(*v9, &v47);
    }
    while ( NextNode != -1 );
    if ( (unsigned int)KeIsEmptyGroupMask((unsigned __int64 *)&v50) )
      break;
    v30 = 1;
  }
  a1->SchedulingGroup = a6;
  if ( (KiCacheAwareScheduling & 8) != 0 )
  {
    v35 = (void *)ExSaAllocate(16LL, 0);
    if ( v35 == (void *)-1LL )
    {
      v35 = 0LL;
    }
    else
    {
      v36 = 0;
      if ( KeQueryMaximumProcessorCountEx(0xFFFFu) )
      {
        v37 = ((unsigned int)v35 >> 13) & 0x3FFFF;
        do
        {
          _BitScanReverse(&v38, v37);
          v39 = v36++;
          *(_OWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(ExSaPageArrays + 8 * v39) + 8LL * (v38 - 2))
                                + 8 * (v37 ^ (unsigned __int64)(unsigned int)(1 << v38))
                                + 8)
                    + 8LL * (((unsigned int)v35 >> 4) & 0x1FF)) = 0LL;
        }
        while ( v36 < KeQueryMaximumProcessorCountEx(0xFFFFu) );
        v24 = (_KAB_UM_PROCESS_TREE *)Size;
      }
    }
    a1->PerProcessorCycleTimes = v35;
  }
  if ( (a8 & 2) != 0 )
  {
    SecureProcess = VslCreateSecureProcess(a1, 0LL, &a1->SecureState);
    if ( SecureProcess >= 0 )
      a1->SecureState.SecureHandle |= 1uLL;
  }
  if ( _bittest64(&KeFeatureBits, 0x37u) )
    a1->ExtendedFeatureDisableMask = MEMORY[0xFFFFF78000000710];
  a1->CpuPartitionList.Blink = &a1->CpuPartitionList;
  a1->CpuPartitionList.Flink = &a1->CpuPartitionList;
  if ( (a8 & 4) != 0 )
  {
    v40 = KiComputeProcessAutoBoostTreeCount();
    if ( v40 )
    {
      p_TreeLock = &v24->TreeLock;
      v44 = v40;
      do
      {
        *(p_TreeLock - 2) = v41;
        *(p_TreeLock - 1) = v41;
        *p_TreeLock = v41;
        p_TreeLock += 3;
        v44 -= v42;
      }
      while ( v44 );
    }
    a1->AutoBoostState.Trees = v24;
    a1->AutoBoostState.TreeCount = v40;
  }
  KiStartIdealProcessorAssignmentBlock(&a1->IdealProcessorAssignmentBlock->ExpectedConcurrencyCount, a1);
  return (unsigned int)SecureProcess;
}
