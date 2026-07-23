/*
 * XREFs of VfHandlePoolAlloc @ 0x140BAAAA0
 * Callers:
 *     MiStoreGetWriteSupport @ 0x140276E44 (MiStoreGetWriteSupport.c)
 *     MiGetInPageAutoBoostLock @ 0x1402770DC (MiGetInPageAutoBoostLock.c)
 *     ExAllocatePoolWithTagFromNode @ 0x140277180 (ExAllocatePoolWithTagFromNode.c)
 *     CcFlushCachePriv @ 0x1402771F0 (CcFlushCachePriv.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     ExAllocatePoolMm @ 0x1402775A0 (ExAllocatePoolMm.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExAllocatePool3 @ 0x140B76270 (ExAllocatePool3.c)
 *     IovAllocateMdl @ 0x140B84350 (IovAllocateMdl.c)
 *     IovAllocateWorkItem @ 0x140B84490 (IovAllocateWorkItem.c)
 *     ViIrpAllocateLockedPacket @ 0x140B900BC (ViIrpAllocateLockedPacket.c)
 *     ViSpIoSetCompletionRoutineEx_Exit @ 0x140BA6A10 (ViSpIoSetCompletionRoutineEx_Exit.c)
 *     ViSpRtlReplaceStringBuffer @ 0x140BA6E44 (ViSpRtlReplaceStringBuffer.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     VfAvlLookupTreeNode @ 0x1403E4D94 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403E514C (VfAvlCleanupLockContext.c)
 *     ExAllocatePoolWithTagPriority @ 0x14042A3E0 (ExAllocatePoolWithTagPriority.c)
 *     ExIsSpecialPoolAddress @ 0x14048BD64 (ExIsSpecialPoolAddress.c)
 *     VfAvlInitializeLockContext @ 0x140496D08 (VfAvlInitializeLockContext.c)
 *     ViGrowPoolAllocation @ 0x140610840 (ViGrowPoolAllocation.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExpPoolFlagsToPoolType @ 0x140B76080 (ExpPoolFlagsToPoolType.c)
 *     ExAllocatePool3 @ 0x140B76270 (ExAllocatePool3.c)
 *     ViPtLogPoolTraceWrapper @ 0x140B84104 (ViPtLogPoolTraceWrapper.c)
 *     ViTargetUpdateTreeAllowed @ 0x140B8DC14 (ViTargetUpdateTreeAllowed.c)
 *     VfFillAllocatedMemory @ 0x140B8DD04 (VfFillAllocatedMemory.c)
 *     CarReportRuleViolationFromNt @ 0x140B8F914 (CarReportRuleViolationFromNt.c)
 *     ViPostPoolAllocation @ 0x140B938F0 (ViPostPoolAllocation.c)
 *     VfFaultsIsSystemSufficientlyBooted @ 0x140B9865C (VfFaultsIsSystemSufficientlyBooted.c)
 *     ExAllocatePoolSanityChecks @ 0x140BA62F4 (ExAllocatePoolSanityChecks.c)
 *     VfTargetDriversGetVerifierData @ 0x140BA9E7C (VfTargetDriversGetVerifierData.c)
 *     VfDriverIsKernelImageAddress @ 0x140BA9ECC (VfDriverIsKernelImageAddress.c)
 */

PVOID __fastcall VfHandlePoolAlloc(
        POOL_TYPE PoolType,
        __int64 BugCheckParameter3,
        __int64 a3,
        __int64 Tag,
        EX_POOL_PRIORITY Priority,
        __int64 a6,
        unsigned int a7,
        __int64 a8)
{
  ULONG v8; // r14d
  unsigned __int64 v9; // rdi
  ULONG_PTR v10; // rbx
  POOL_TYPE v11; // esi
  _SLIST_HEADER *VerifierData; // r13
  ULONG_PTR v13; // rcx
  ULONG_PTR v14; // r8
  size_t v15; // rdx
  __int64 v17; // r12
  __int64 v18; // r15
  EX_POOL_PRIORITY v19; // r14d
  PSLIST_ENTRY v20; // rsi
  ULONG_PTR PoolWithTagPriority; // rax
  __int64 v22; // rbx
  int v23; // eax
  _QWORD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rcx
  unsigned int v28; // r15d
  __int64 v29; // r14
  char v30; // dl
  _SLIST_ENTRY *v31; // rax
  unsigned int i; // edx
  size_t v33; // rdi
  char v34[4]; // [rsp+40h] [rbp-40h] BYREF
  int v35; // [rsp+44h] [rbp-3Ch]
  SIZE_T NumberOfBytes; // [rsp+48h] [rbp-38h]
  unsigned int v37; // [rsp+50h] [rbp-30h]
  unsigned __int64 v38; // [rsp+58h] [rbp-28h]
  unsigned __int64 v39; // [rsp+60h] [rbp-20h]
  __int128 v40; // [rsp+68h] [rbp-18h] BYREF
  __int64 v41; // [rsp+78h] [rbp-8h]
  POOL_TYPE v42; // [rsp+C0h] [rbp+40h] BYREF
  char v43; // [rsp+C8h] [rbp+48h] BYREF
  ULONG Taga; // [rsp+D8h] [rbp+58h] BYREF

  Taga = Tag;
  v42 = PoolType;
  v8 = Tag;
  LODWORD(NumberOfBytes) = 0;
  v9 = a3;
  v37 = 0;
  v10 = BugCheckParameter3;
  v11 = PoolType;
  VerifierData = 0LL;
  if ( BugCheckParameter3 )
  {
    if ( (int)ExpPoolFlagsToPoolType(BugCheckParameter3, 0, (int *)&v42, v34, &v43) < 0 )
    {
      v14 = v8;
      v15 = v9;
LABEL_4:
      if ( a6 )
        return (PVOID)ExAllocatePool3(v13, v15, v14, a6, a7);
      else
        return (PVOID)ExAllocatePool2(v13, v15, v14);
    }
    v11 = v42;
  }
  v17 = a8;
  if ( KernelVerifier )
  {
    if ( (v11 & 0x80u) == 0 )
    {
      v11 |= 0x80u;
      v42 = v11;
      if ( v10 )
        v10 |= 0x200uLL;
    }
    else
    {
      LODWORD(NumberOfBytes) = 1;
      VerifierData = (_SLIST_HEADER *)VfTargetDriversGetVerifierData(a8, BugCheckParameter3, a3, Tag);
      if ( !VerifierData )
      {
        v14 = v8;
        v15 = v9;
        if ( !v10 )
          return ExAllocatePoolWithTagPriority(v11, v9, v8, Priority);
        v13 = v10;
        goto LABEL_4;
      }
    }
  }
  if ( (MmVerifierData & 1) != 0 )
    ExAllocatePoolSanityChecks(v11, v9, &Taga, v17);
  v35 = 0;
  if ( !v9 && (unsigned int)VfVerifyMode <= 1 )
  {
    v35 = 1;
    v9 = 1LL;
  }
  v39 = v9;
  v38 = v9;
  _InterlockedIncrement(&dword_140F047F0);
  v18 = v42;
  if ( (v42 & 2) != 0 && (VfRuleClasses & 4) != 0 && (unsigned int)VfFaultsIsSystemSufficientlyBooted() )
    CarReportRuleViolationFromNt(194, 154LL, v18 & 0xFFFFFFFFFFFFFF7FuLL, v9, Taga, 2u, v17);
  v19 = Priority;
  if ( (VfRuleClasses & 1) != 0 || DifpSpecialPoolEnabled )
  {
    if ( (Priority & 9) == 0 )
    {
      if ( MmSpecialPoolCatchOverruns == 1 )
        v19 = Priority | 8;
      else
        v19 = Priority | 9;
    }
    if ( v10 )
      v10 |= 0x100000000uLL;
  }
  v20 = 0LL;
  if ( (VfRuleClasses & 8) != 0
    && !_bittest(&VfOptionFlags, 0xCu)
    && (v18 & 0x20) == 0
    && Taga != 1850304854
    && Taga != 1316118851 )
  {
    if ( !(_DWORD)NumberOfBytes )
      VerifierData = (_SLIST_HEADER *)VfTargetDriversGetVerifierData(v17, BugCheckParameter3, a3, Tag);
    if ( VerifierData && (NumberOfBytes = v9 + 8, v9 + 8 >= v9) )
    {
      v20 = RtlpInterlockedPopEntrySList(VerifierData + 5);
      if ( v20 || (v20 = ViGrowPoolAllocation(VerifierData)) != 0LL )
      {
        v9 = NumberOfBytes;
        LODWORD(v18) = v18 | 0x40;
        v42 = (int)v18;
        if ( !v10 )
        {
LABEL_47:
          PoolWithTagPriority = (ULONG_PTR)ExAllocatePoolWithTagPriority((POOL_TYPE)v18, v9, Taga, v19);
          goto LABEL_51;
        }
        v10 |= 0x400uLL;
      }
    }
    else
    {
      ++dword_140F0481C;
    }
  }
  if ( !v10 )
    goto LABEL_47;
  if ( a6 )
    PoolWithTagPriority = ExAllocatePool3(v10, v9, Taga, a6, a7);
  else
    PoolWithTagPriority = ExAllocatePool2(v10, v9, Taga);
LABEL_51:
  v22 = PoolWithTagPriority;
  if ( !PoolWithTagPriority )
  {
    ++dword_140F04808;
    if ( (MmVerifierData & 0x1000) != 0 )
    {
      v41 = 0LL;
      v40 = 0LL;
      if ( ViTargetUpdateTreeAllowed() )
      {
        LOBYTE(v23) = VfDriverIsKernelImageAddress(v17);
        if ( !v23 )
        {
          VfAvlInitializeLockContext((__int64)&v40, 1);
          v24 = VfAvlLookupTreeNode(&ViTargetDriversAvl, (__int64)&v40, v17, 1LL);
          if ( v24 )
          {
            v26 = v24[8];
            if ( v26 )
            {
              _InterlockedAdd((volatile signed __int32 *)(v26 + 176), 1u);
              LOBYTE(v18) = v42;
            }
          }
          VfAvlCleanupLockContext((__int64)&v40, v25);
        }
      }
    }
    if ( v20 )
      RtlpInterlockedPushEntrySList(VerifierData + 5, v20);
    if ( (v18 & 0x10) != 0 )
      RtlRaiseStatus(-1073741670);
    return 0LL;
  }
  if ( v35 && (VfRuleClasses & 8) != 0 )
  {
    v27 = 3LL * (((unsigned __int8)_InterlockedExchangeAdd(&ViBugcheckWorkaroundLogIndex, 1u) + 1) & 0xF);
    ViBugcheckWorkaroundLog[2 * v27] = 1;
    qword_140FFF818[v27] = v17;
    qword_140FFF820[v27] = PoolWithTagPriority;
  }
  v28 = 0;
  _InterlockedIncrement(&dword_140F047F4);
  if ( (unsigned int)ExIsSpecialPoolAddress(PoolWithTagPriority) == 1 )
  {
    v28 = 1;
LABEL_70:
    _InterlockedIncrement(&dword_140F047F8);
    goto LABEL_71;
  }
  if ( v9 > 0xFE0 )
    goto LABEL_70;
LABEL_71:
  v29 = Taga;
  if ( v20 )
  {
    v30 = v42;
    *((_QWORD *)&v20->Next + 1) = v17;
    v20->Next = (_SLIST_ENTRY *)(v22 | v28);
    v31 = (_SLIST_ENTRY *)v39;
    if ( !v28 )
      v31 = (_SLIST_ENTRY *)v9;
    *((_QWORD *)&v20[1].Next + 1) = v29;
    v20[1].Next = v31;
    ViPostPoolAllocation((unsigned __int64 *)v20, v30);
  }
  if ( (VfRuleClasses & 8) != 0 )
  {
    if ( (unsigned int)(DifpPoolTagsSize - 1) > 9 )
    {
LABEL_81:
      v33 = v38;
      ViPtLogPoolTraceWrapper(v22, v29, v38, 0);
    }
    else
    {
      for ( i = v37; i < DifpPoolTagsSize; ++i )
      {
        if ( *((_DWORD *)&DifpPoolTags + i) == (_DWORD)v29 )
          goto LABEL_81;
      }
      v33 = v38;
    }
    if ( v20 && !v28 && (v42 & 0x400) == 0 )
      VfFillAllocatedMemory((void *)v22, v33);
  }
  return (PVOID)v22;
}
