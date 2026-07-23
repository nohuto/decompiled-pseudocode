/*
 * XREFs of MiUnmapMdlCommon @ 0x140433530
 * Callers:
 *     MmUnmapReservedMapping @ 0x140433320 (MmUnmapReservedMapping.c)
 *     MmUnmapLockedRestartPages @ 0x1407E8850 (MmUnmapLockedRestartPages.c)
 * Callees:
 *     MiLockNestedPageTable @ 0x140201F50 (MiLockNestedPageTable.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiReleaseProcessorFlushList @ 0x140208120 (MiReleaseProcessorFlushList.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x14020BF58 (MiLockWorkingSetSharedAtDpc.c)
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MiInsertTbFlushEntry @ 0x1402137F0 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x140214780 (MiInitializeTbFlushList.c)
 *     MiDecreaseUsedPtes @ 0x14021C060 (MiDecreaseUsedPtes.c)
 *     MiInsertLargeTbFlushEntry @ 0x14021C25C (MiInsertLargeTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiGetProcessorFlushList @ 0x1402990BC (MiGetProcessorFlushList.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiRewritePteWithLockBit @ 0x140335F2C (MiRewritePteWithLockBit.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiSetPfnContainingFrame @ 0x140347E40 (MiSetPfnContainingFrame.c)
 *     MiUnlinkPageChainHead @ 0x140349AD0 (MiUnlinkPageChainHead.c)
 *     MiGetContainingPageTable @ 0x14034E470 (MiGetContainingPageTable.c)
 *     MiDereferenceIoPages @ 0x14038E760 (MiDereferenceIoPages.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     MiSplitPageChain @ 0x14049A18C (MiSplitPageChain.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

char __fastcall MiUnmapMdlCommon(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        ULONG_PTR BugCheckParameter4)
{
  __int64 v6; // r8
  bool v8; // zf
  void *v9; // rax
  __int64 v10; // rdx
  ULONG_PTR v11; // rbx
  int v12; // r12d
  ULONG_PTR DemandZeroPte; // rdi
  unsigned int v14; // r15d
  unsigned __int64 v15; // r14
  __int64 CurrentIrql; // rcx
  unsigned __int8 v17; // r13
  __int64 v18; // rcx
  __int64 v19; // rcx
  ULONG_PTR v20; // rdx
  volatile unsigned __int64 v21; // rbx
  unsigned __int64 v22; // r15
  bool v23; // cf
  char result; // al
  __int64 v25; // rdx
  __int64 v26; // rcx
  KIRQL v27; // bl
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned __int64 v31; // rsi
  unsigned __int64 v32; // rbx
  unsigned __int64 v33; // rdi
  unsigned __int8 v34; // r15
  char v35; // r15
  __int64 *v36; // r14
  __int64 v37; // rdx
  ULONG_PTR ValidPte; // rbx
  __int64 v39; // r8
  __int64 v40; // r9
  unsigned __int8 v41; // r13
  __int64 ContainingPageTable; // rax
  __int64 *ProcessorFlushList; // [rsp+30h] [rbp-B8h]
  ULONG_PTR v44; // [rsp+38h] [rbp-B0h]
  ULONG_PTR v45; // [rsp+40h] [rbp-A8h]
  volatile __int64 *v46; // [rsp+48h] [rbp-A0h]
  ULONG_PTR v47; // [rsp+50h] [rbp-98h]
  unsigned __int64 v48; // [rsp+50h] [rbp-98h]
  unsigned int v49; // [rsp+58h] [rbp-90h] BYREF
  _QWORD *v50; // [rsp+60h] [rbp-88h]
  __int64 v51; // [rsp+68h] [rbp-80h]
  __int64 v52; // [rsp+70h] [rbp-78h]
  __int128 v53; // [rsp+78h] [rbp-70h] BYREF
  __int64 v54; // [rsp+88h] [rbp-60h]
  unsigned int v55; // [rsp+F0h] [rbp+8h]
  int v56; // [rsp+F8h] [rbp+10h]
  int v58; // [rsp+108h] [rbp+20h]
  char v59; // [rsp+110h] [rbp+28h]

  v53 = 0LL;
  v54 = 0LL;
  v6 = 0x7FFFFFFFF8LL;
  v50 = (_QWORD *)(a4 + 48);
  v58 = a2 == 0 ? 8 : 0;
  v8 = a2 == 0;
  v9 = (void *)a2;
  v10 = 0xFFFFF68000000000uLL;
  if ( v8 )
    v9 = &unk_140E38240;
  v52 = (__int64)v9;
  v11 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v45 = v11;
  v47 = v11 + 8 * BugCheckParameter4;
  v12 = 1;
  v46 = (volatile __int64 *)(((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( (*v46 & 0x80u) == 0LL )
  {
    v44 = 1LL;
    DemandZeroPte = 0LL;
  }
  else
  {
    v44 = 512LL;
    DemandZeroPte = MiMakeDemandZeroPte(16);
  }
  v14 = 0;
  v55 = 0;
  v15 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v51 = CurrentIrql;
  if ( a2 )
  {
    v56 = 1;
    if ( (_BYTE)CurrentIrql == 2 )
    {
      v17 = 17;
      MiLockWorkingSetSharedAtDpc(a2);
    }
    else
    {
      v17 = MiLockWorkingSetShared(a2, v10, v6, a4);
    }
  }
  else
  {
    v56 = 0;
    v18 = 2LL;
    if ( KeGetCurrentIrql() == 2 )
    {
      v17 = 17;
    }
    else
    {
      v17 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v10) = 2;
        LOBYTE(v18) = v17;
        KiRaiseIrqlProcessIrqlFlags(v18, v10);
      }
    }
  }
  ProcessorFlushList = MiGetProcessorFlushList();
  MiInitializeTbFlushList((__int64)ProcessorFlushList, v52, *((_DWORD *)ProcessorFlushList + 3), v58, 1);
  v20 = v44;
  while ( v11 < v47 )
  {
    if ( v56 )
    {
      if ( v15 )
      {
        if ( (v11 & 0xFFF) != 0 )
          goto LABEL_27;
        if ( v14 )
        {
          MiDecreaseUsedPtes(v19, v15, v14);
          v55 = 0;
          v19 = (__int64)ProcessorFlushList;
        }
        MiFlushTbList(v19);
        MiUnlockPageTableInternal(a2, v15);
      }
      v15 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockNestedPageTable(a2, v15);
    }
    else
    {
      if ( (v11 & 0xFFF) != 0 )
        goto LABEL_27;
      MiFlushTbList(v19);
    }
    v20 = v44;
    v19 = (__int64)ProcessorFlushList;
LABEL_27:
    if ( v20 == 1 )
    {
      v21 = *(_QWORD *)v11;
      if ( (v21 & 1) == 0 )
        KeBugCheckEx(0xDAu, 0x10BuLL, BugCheckParameter2, a3, BugCheckParameter4);
      ++v55;
      *(_QWORD *)v45 = CLFS_LSN_NULL_EXT;
      v22 = (v21 >> 12) & 0xFFFFFFFFFFLL;
      MiInsertTbFlushEntry(v19, (__int64)(v45 << 25) >> 16, 1LL, 0);
    }
    else
    {
      v21 = *v46;
      v22 = ((unsigned __int64)*v46 >> 12) & 0xFFFFFFFFFFLL;
      if ( (*v46 & 0x80u) == 0LL || *v50 != v22 )
        KeBugCheckEx(0xDAu, 0x10EuLL, BugCheckParameter2, a3, BugCheckParameter4);
      MiRewritePteWithLockBit(a2, 0, v46, DemandZeroPte);
      MiInsertLargeTbFlushEntry((__int64)ProcessorFlushList, 1, (unsigned __int64)v46++);
    }
    v20 = v44;
    v19 = (__int64)ProcessorFlushList;
    v45 += 8 * v44;
    v50 += v44;
    v23 = (v21 & 0x200) != 0;
    v11 = v45;
    if ( !v23 )
    {
      if ( v22 > qword_140E2DD20
        || (v19 = (__int64)ProcessorFlushList, ((*(_QWORD *)(48 * v22 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0) )
      {
        MiDereferenceIoPages(1, v22, v44);
        v19 = (__int64)ProcessorFlushList;
        v20 = v44;
        v11 = v45;
      }
    }
    v14 = v55;
  }
  MiFlushTbList(v19);
  result = (unsigned __int8)MiReleaseProcessorFlushList();
  if ( v56 )
  {
    if ( v15 )
    {
      if ( v14 )
        MiDecreaseUsedPtes(v26, v15, v14);
      MiUnlockPageTableInternal(a2, v15);
    }
    result = MiUnlockWorkingSetShared(a2, v17);
  }
  else if ( v17 != 17 )
  {
    if ( KiIrqlFlags )
    {
      LOBYTE(v25) = v17;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v25);
    }
    result = v17;
    __writecr8(v17);
  }
  if ( v44 == 1 )
    return result;
  if ( (_BYTE)v51 == 2 )
  {
    v27 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E35FE8);
  }
  else
  {
    v27 = ExAcquireSpinLockExclusive(&dword_140E35FE8);
  }
  MiSplitPageChain(&xmmword_140E35FF8, BugCheckParameter4 >> 9, &v53);
  MiReleaseSpinLockExclusive(&dword_140E35FE8, v27);
  v31 = ((BugCheckParameter2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  result = 0;
  v32 = ((v47 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v33 = 0LL;
  v48 = v32;
  if ( a2 )
  {
    if ( (_BYTE)v51 == 2 )
    {
      v34 = 17;
      v59 = 17;
      result = MiLockWorkingSetSharedAtDpc(a2);
    }
    else
    {
      result = MiLockWorkingSetShared(a2, v28, v29, v30);
      v34 = result;
      v59 = result;
    }
  }
  else
  {
    v34 = 17;
    v12 = 0;
    v59 = 17;
  }
  if ( v31 >= v32 )
    goto LABEL_74;
  v35 = v51;
  while ( 2 )
  {
    if ( v12 )
    {
      if ( !v33 )
        goto LABEL_64;
      if ( (v31 & 0xFFF) == 0 )
      {
        MiUnlockPageTableInternal(a2, v33);
LABEL_64:
        v33 = ((v31 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiLockNestedPageTable(a2, v33);
      }
    }
    v36 = MiUnlinkPageChainHead((__int64)&v53);
    ValidPte = MiMakeValidPte(v31, 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v36 + 0x44000000000LL) >> 4), -1879048186);
    if ( v12 || v35 == 2 )
    {
      v49 = 0;
      v41 = 17;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v36 + 6, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v49);
        while ( v36[3] < 0 );
      }
    }
    else
    {
      v41 = MiLockPageInline((__int64)v36, v37, v39, v40);
    }
    v36[1] = v31;
    ContainingPageTable = MiGetContainingPageTable(v31);
    MiSetPfnContainingFrame((__int64)v36, ContainingPageTable);
    *v36 = 0LL;
    result = MiUnlockPage((__int64)v36, v41);
    if ( _bittest64(&MiFlags, 0x24u) )
    {
      if ( (ValidPte & 0x20) == 0 )
      {
        result = 0;
        if ( v31 >= 0xFFFFF6C000000000uLL )
          result = MiCheckLinearProtectedPteAccessedBit(v31, ValidPte, 128LL);
      }
    }
    *(_QWORD *)v31 = ValidPte;
    v31 += 8LL;
    if ( v31 < v48 )
      continue;
    break;
  }
  v34 = v59;
LABEL_74:
  if ( v12 )
  {
    if ( v33 )
      MiUnlockPageTableInternal(a2, v33);
    return MiUnlockWorkingSetShared(a2, v34);
  }
  return result;
}
