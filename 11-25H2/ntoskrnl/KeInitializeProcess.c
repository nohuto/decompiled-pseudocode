/*
 * XREFs of KeInitializeProcess @ 0x1409BE04C
 * Callers:
 *     PspAllocateProcess @ 0x1409BE78C (PspAllocateProcess.c)
 *     KiInitializeIdleProcess @ 0x140C17620 (KiInitializeIdleProcess.c)
 * Callees:
 *     KiSetIdealNodeProcessByGroup @ 0x140268C58 (KiSetIdealNodeProcessByGroup.c)
 *     KeSelectNodeForAffinity @ 0x140268DBC (KeSelectNodeForAffinity.c)
 *     KiStartIdealProcessorAssignmentBlock @ 0x140269A44 (KiStartIdealProcessorAssignmentBlock.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140271570 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeQueryMaximumProcessorCountEx @ 0x1402BD630 (KeQueryMaximumProcessorCountEx.c)
 *     RtlNumberOfSetBitsEx @ 0x140305240 (RtlNumberOfSetBitsEx.c)
 *     KeFindFirstSetRightGroupMask @ 0x140305380 (KeFindFirstSetRightGroupMask.c)
 *     MmGetNextNode @ 0x140433CC0 (MmGetNextNode.c)
 *     KeClearBitGroupMask @ 0x14046509C (KeClearBitGroupMask.c)
 *     ExSaAllocate @ 0x14047B0DC (ExSaAllocate.c)
 *     KeSetGroupMaskProcess @ 0x1404998C8 (KeSetGroupMaskProcess.c)
 *     KeAndGroupMasks @ 0x1404AD73C (KeAndGroupMasks.c)
 *     KiInitializeProcessAvailableCpuState @ 0x1404B124C (KiInitializeProcessAvailableCpuState.c)
 *     KiComputeProcessAutoBoostTreeCount @ 0x1404B38AC (KiComputeProcessAutoBoostTreeCount.c)
 *     KiInitializeIdealProcessorAssignmentBlock @ 0x1404B43F8 (KiInitializeIdealProcessorAssignmentBlock.c)
 *     KeSetBitGroupMask @ 0x1404C5E98 (KeSetBitGroupMask.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     VslCreateSecureProcess @ 0x140A80B58 (VslCreateSecureProcess.c)
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
  void *v31; // r14
  ULONG v32; // r15d
  unsigned int v33; // esi
  unsigned int v34; // ecx
  __int64 v35; // rdx
  unsigned int v36; // eax
  unsigned __int64 v37; // r8
  __int64 v38; // r9
  unsigned __int64 *p_TreeLock; // rcx
  __int64 v40; // rdx
  int NextNode; // eax
  __int64 v43; // r14
  unsigned __int16 FirstSetRightGroupMask; // bx
  unsigned __int16 v45; // dx
  unsigned __int64 v46; // rcx
  int v47; // [rsp+20h] [rbp-89h] BYREF
  size_t Size; // [rsp+28h] [rbp-81h]
  __int64 v49[2]; // [rsp+30h] [rbp-79h] BYREF
  __int64 v50[2]; // [rsp+40h] [rbp-69h] BYREF
  __int64 v51[2]; // [rsp+50h] [rbp-59h] BYREF
  __int64 v52[2]; // [rsp+60h] [rbp-49h] BYREF
  __int128 v53; // [rsp+70h] [rbp-39h] BYREF
  __int128 v54; // [rsp+80h] [rbp-29h] BYREF
  __int128 v55; // [rsp+90h] [rbp-19h] BYREF

  v9 = a5;
  v11 = (unsigned __int16)KiMaximumGroups;
  v12 = a3;
  a1->Header.Type = 3;
  a1->Header.WaitListHead.Blink = &a1->Header.WaitListHead;
  a1->Header.WaitListHead.Flink = &a1->Header.WaitListHead;
  v14 = 8 * v11 + 8;
  LOWORD(v47) = v11;
  Size = 8 * v11;
  *(_QWORD *)&v53 = v14;
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
  v22 = (_KI_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK *)((char *)&v17[1] + v53);
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
  v55 = 0LL;
  if ( a4->Count )
  {
    do
    {
      if ( a4->Bitmap[v27] != v25 )
        KeSetBitGroupMask((signed __int64 *)&v55, v27);
      ++v27;
    }
    while ( v27 < a4->Count );
    v26 = v55;
  }
  v53 = v26;
  KeSetGroupMaskProcess((__int64)a1, &v53);
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
    v53 = 0LL;
    WORD4(v53) = v12;
    if ( (unsigned __int16)v12 >= a4->Count )
      v46 = v28;
    else
      v46 = a4->Bitmap[v12];
    *(_QWORD *)&v53 = v46;
    v9 = (unsigned __int16 *)KeSelectNodeForAffinity((__int64)&v53);
  }
  SecureProcess = 0;
  a1->IdealGlobalNode = *v9;
  v30 = 0;
  v54 = v26;
  while ( 1 )
  {
    NextNode = *v9;
    v47 = 0;
    do
    {
      v53 = 0LL;
      v43 = KeNodeBlock[NextNode];
      KeAndGroupMasks((__int128 *)(v43 + 16), &v54, &v53);
      v49[0] = 32LL;
      v49[1] = (__int64)&v53;
      if ( RtlNumberOfSetBitsEx(v49) && ((*(_BYTE *)(v43 + 10) & 1) == v30 || (unsigned __int16 *)v43 == v9) )
      {
        while ( 1 )
        {
          v50[0] = 32LL;
          v50[1] = (__int64)&v53;
          if ( !RtlNumberOfSetBitsEx(v50) )
            break;
          FirstSetRightGroupMask = KeFindFirstSetRightGroupMask((__int64 *)&v53);
          KiSetIdealNodeProcessByGroup((__int64)a1, (_WORD *)v43, FirstSetRightGroupMask);
          KeClearBitGroupMask((signed __int64 *)&v53, FirstSetRightGroupMask);
          KeClearBitGroupMask((signed __int64 *)&v54, v45);
        }
        v51[0] = 32LL;
        v51[1] = (__int64)&v54;
        if ( !RtlNumberOfSetBitsEx(v51) )
          break;
      }
      NextNode = MmGetNextNode(*v9, &v47);
    }
    while ( NextNode != -1 );
    v52[0] = 32LL;
    v52[1] = (__int64)&v54;
    if ( !RtlNumberOfSetBitsEx(v52) )
      break;
    v30 = 1;
  }
  a1->SchedulingGroup = a6;
  if ( (KiCacheAwareScheduling & 8) != 0 )
  {
    v31 = (void *)ExSaAllocate(16LL, 0);
    if ( v31 == (void *)-1LL )
    {
      v31 = 0LL;
    }
    else
    {
      v32 = 0;
      if ( KeQueryMaximumProcessorCountEx(0xFFFFu) )
      {
        v33 = ((unsigned int)v31 >> 13) & 0x3FFFF;
        do
        {
          _BitScanReverse(&v34, v33);
          v35 = v32++;
          *(_OWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(ExSaPageArrays + 8 * v35) + 8LL * (v34 - 2))
                                + 8 * (v33 ^ (unsigned __int64)(unsigned int)(1 << v34))
                                + 8)
                    + 8LL * (((unsigned int)v31 >> 4) & 0x1FF)) = 0LL;
        }
        while ( v32 < KeQueryMaximumProcessorCountEx(0xFFFFu) );
        v24 = (_KAB_UM_PROCESS_TREE *)Size;
      }
    }
    a1->PerProcessorCycleTimes = v31;
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
    v36 = KiComputeProcessAutoBoostTreeCount();
    if ( v36 )
    {
      p_TreeLock = &v24->TreeLock;
      v40 = v36;
      do
      {
        *(p_TreeLock - 2) = v37;
        *(p_TreeLock - 1) = v37;
        *p_TreeLock = v37;
        p_TreeLock += 3;
        v40 -= v38;
      }
      while ( v40 );
    }
    a1->AutoBoostState.Trees = v24;
    a1->AutoBoostState.TreeCount = v36;
  }
  KiStartIdealProcessorAssignmentBlock(&a1->IdealProcessorAssignmentBlock->ExpectedConcurrencyCount, a1);
  return (unsigned int)SecureProcess;
}
