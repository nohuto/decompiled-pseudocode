/*
 * XREFs of MiUnmapMdlCommon @ 0x140412070
 * Callers:
 *     MmUnmapReservedMapping @ 0x140411E60 (MmUnmapReservedMapping.c)
 *     MmUnmapLockedRestartPages @ 0x1407D83C0 (MmUnmapLockedRestartPages.c)
 * Callees:
 *     MiMakeValidPte @ 0x14020EF10 (MiMakeValidPte.c)
 *     MiRewritePteWithLockBit @ 0x1402110AC (MiRewritePteWithLockBit.c)
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiReleaseProcessorFlushList @ 0x140237CC0 (MiReleaseProcessorFlushList.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiGetContainingPageTable @ 0x1402C3750 (MiGetContainingPageTable.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x1402FB704 (MiLockWorkingSetSharedAtDpc.c)
 *     MiLockNestedPageTable @ 0x1402FB780 (MiLockNestedPageTable.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiInsertTbFlushEntry @ 0x1403278B0 (MiInsertTbFlushEntry.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     MiFlushTbList @ 0x14032BCA0 (MiFlushTbList.c)
 *     MiUnlinkPageChainHead @ 0x14033BAF0 (MiUnlinkPageChainHead.c)
 *     MiSetPfnContainingFrame @ 0x14033BD00 (MiSetPfnContainingFrame.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiGetProcessorFlushList @ 0x140381500 (MiGetProcessorFlushList.c)
 *     MiMakeDemandZeroPte @ 0x140385190 (MiMakeDemandZeroPte.c)
 *     MiInitializeTbFlushList @ 0x140388790 (MiInitializeTbFlushList.c)
 *     MiInsertLargeTbFlushEntry @ 0x14038BC74 (MiInsertLargeTbFlushEntry.c)
 *     MiDecreaseUsedPtes @ 0x14038BCF0 (MiDecreaseUsedPtes.c)
 *     MiDereferenceIoPages @ 0x140391A60 (MiDereferenceIoPages.c)
 *     KeYieldProcessorEx @ 0x1403F49C0 (KeYieldProcessorEx.c)
 *     MiSplitPageChain @ 0x1404A6698 (MiSplitPageChain.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

char __fastcall MiUnmapMdlCommon(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        ULONG_PTR BugCheckParameter4)
{
  void *v7; // rax
  ULONG_PTR v8; // rbx
  int v9; // r12d
  ULONG_PTR DemandZeroPte; // rdi
  unsigned int v11; // r15d
  unsigned __int64 v12; // r14
  __int64 CurrentIrql; // rcx
  unsigned __int8 v14; // r13
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r9
  ULONG_PTR v18; // rdx
  __int64 v19; // r8
  volatile unsigned __int64 v20; // rbx
  unsigned __int64 v21; // r15
  bool v22; // cf
  char result; // al
  __int64 v24; // rdx
  __int64 v25; // rcx
  KIRQL v26; // bl
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned __int64 v29; // rsi
  unsigned __int64 v30; // rbx
  unsigned __int64 v31; // rdi
  unsigned __int8 v32; // r15
  char v33; // r15
  __int64 *v34; // r14
  ULONG_PTR ValidPte; // rbx
  unsigned __int8 v36; // r13
  __int64 ContainingPageTable; // rax
  __int64 *ProcessorFlushList; // [rsp+30h] [rbp-B8h]
  ULONG_PTR v39; // [rsp+38h] [rbp-B0h]
  ULONG_PTR v40; // [rsp+40h] [rbp-A8h]
  volatile __int64 *v41; // [rsp+48h] [rbp-A0h]
  ULONG_PTR v42; // [rsp+50h] [rbp-98h]
  unsigned __int64 v43; // [rsp+50h] [rbp-98h]
  int v44; // [rsp+58h] [rbp-90h] BYREF
  _QWORD *v45; // [rsp+60h] [rbp-88h]
  __int64 v46; // [rsp+68h] [rbp-80h]
  __int64 v47; // [rsp+70h] [rbp-78h]
  __int128 v48; // [rsp+78h] [rbp-70h] BYREF
  __int64 v49; // [rsp+88h] [rbp-60h]
  unsigned int v50; // [rsp+F0h] [rbp+8h]
  int v51; // [rsp+F8h] [rbp+10h]
  int v53; // [rsp+108h] [rbp+20h]
  char v54; // [rsp+110h] [rbp+28h]

  v48 = 0LL;
  v49 = 0LL;
  v45 = (_QWORD *)(a4 + 48);
  v53 = a2 == 0 ? 8 : 0;
  v7 = (void *)a2;
  if ( !a2 )
    v7 = &unk_140E37EC0;
  v47 = (__int64)v7;
  v8 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v40 = v8;
  v42 = v8 + 8 * BugCheckParameter4;
  v9 = 1;
  v41 = (volatile __int64 *)(((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( (*v41 & 0x80u) == 0LL )
  {
    v39 = 1LL;
    DemandZeroPte = 0LL;
  }
  else
  {
    v39 = 512LL;
    DemandZeroPte = MiMakeDemandZeroPte(16);
  }
  v11 = 0;
  v50 = 0;
  v12 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v46 = CurrentIrql;
  if ( a2 )
  {
    v51 = 1;
    if ( (_BYTE)CurrentIrql == 2 )
    {
      v14 = 17;
      MiLockWorkingSetSharedAtDpc(a2);
    }
    else
    {
      v14 = MiLockWorkingSetShared(a2);
    }
  }
  else
  {
    v51 = 0;
    v15 = 2LL;
    if ( KeGetCurrentIrql() == 2 )
    {
      v14 = 17;
    }
    else
    {
      v14 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v15) = v14;
        KiRaiseIrqlProcessIrqlFlags(v15);
      }
    }
  }
  ProcessorFlushList = MiGetProcessorFlushList();
  MiInitializeTbFlushList((__int64)ProcessorFlushList, v47, *((_DWORD *)ProcessorFlushList + 3), v53, 1);
  v18 = v39;
  v19 = 0xFFFFFFFFFFLL;
  while ( v8 < v42 )
  {
    if ( v51 )
    {
      if ( v12 )
      {
        if ( (v8 & 0xFFF) != 0 )
          goto LABEL_27;
        if ( v11 )
        {
          MiDecreaseUsedPtes(v16, v12, v11);
          v50 = 0;
          v16 = (__int64)ProcessorFlushList;
        }
        MiFlushTbList(v16);
        MiUnlockPageTable(a2, v12);
      }
      v12 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockNestedPageTable(a2, v12, v19, v17);
    }
    else
    {
      if ( (v8 & 0xFFF) != 0 )
        goto LABEL_27;
      MiFlushTbList(v16);
    }
    v18 = v39;
    v16 = (__int64)ProcessorFlushList;
LABEL_27:
    if ( v18 == 1 )
    {
      v20 = *(_QWORD *)v8;
      if ( (v20 & 1) == 0 )
        KeBugCheckEx(0xDAu, 0x10BuLL, BugCheckParameter2, a3, BugCheckParameter4);
      ++v50;
      *(_QWORD *)v40 = CLFS_LSN_NULL_EXT;
      v21 = (v20 >> 12) & 0xFFFFFFFFFFLL;
      MiInsertTbFlushEntry(v16, (__int64)(v40 << 25) >> 16, 1LL, 0);
    }
    else
    {
      v20 = *v41;
      v21 = ((unsigned __int64)*v41 >> 12) & 0xFFFFFFFFFFLL;
      if ( (*v41 & 0x80u) == 0LL || *v45 != v21 )
        KeBugCheckEx(0xDAu, 0x10EuLL, BugCheckParameter2, a3, BugCheckParameter4);
      MiRewritePteWithLockBit(a2, 0, v41, DemandZeroPte);
      MiInsertLargeTbFlushEntry((__int64)ProcessorFlushList, 1, (unsigned __int64)v41++);
    }
    v18 = v39;
    v19 = 0xFFFFFFFFFFLL;
    v16 = (__int64)ProcessorFlushList;
    v40 += 8 * v39;
    v45 += v39;
    v22 = (v20 & 0x200) != 0;
    v8 = v40;
    if ( !v22 )
    {
      if ( v21 > qword_140E2D9A0
        || (v16 = (__int64)ProcessorFlushList, ((*(_QWORD *)(48 * v21 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0) )
      {
        MiDereferenceIoPages(1, v21, v39);
        v16 = (__int64)ProcessorFlushList;
        v19 = 0xFFFFFFFFFFLL;
        v18 = v39;
        v8 = v40;
      }
    }
    v11 = v50;
  }
  MiFlushTbList(v16);
  result = (unsigned __int8)MiReleaseProcessorFlushList();
  if ( v51 )
  {
    if ( v12 )
    {
      if ( v11 )
        MiDecreaseUsedPtes(v25, v12, v11);
      MiUnlockPageTable(a2, v12);
    }
    result = MiUnlockWorkingSetShared(a2, v14);
  }
  else if ( v14 != 17 )
  {
    if ( KiIrqlFlags )
    {
      LOBYTE(v24) = v14;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v24);
    }
    result = v14;
    __writecr8(v14);
  }
  if ( v39 == 1 )
    return result;
  if ( (_BYTE)v46 == 2 )
  {
    v26 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E35C68);
  }
  else
  {
    v26 = ExAcquireSpinLockExclusive(&dword_140E35C68);
  }
  MiSplitPageChain(&xmmword_140E35C78, BugCheckParameter4 >> 9, &v48);
  MiReleaseSpinLockExclusive(&dword_140E35C68, v26);
  v29 = ((BugCheckParameter2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  result = 0;
  v30 = ((v42 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v31 = 0LL;
  v43 = v30;
  if ( a2 )
  {
    if ( (_BYTE)v46 == 2 )
    {
      v32 = 17;
      v54 = 17;
      result = MiLockWorkingSetSharedAtDpc(a2);
    }
    else
    {
      result = MiLockWorkingSetShared(a2);
      v32 = result;
      v54 = result;
    }
  }
  else
  {
    v32 = 17;
    v9 = 0;
    v54 = 17;
  }
  if ( v29 >= v30 )
    goto LABEL_74;
  v33 = v46;
  while ( 2 )
  {
    if ( v9 )
    {
      if ( !v31 )
        goto LABEL_64;
      if ( (v29 & 0xFFF) == 0 )
      {
        MiUnlockPageTable(a2, v31);
LABEL_64:
        v31 = ((v29 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiLockNestedPageTable(a2, v31, v27, v28);
      }
    }
    v34 = MiUnlinkPageChainHead((__int64)&v48);
    ValidPte = MiMakeValidPte(v29, 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v34 + 0x44000000000LL) >> 4), -1879048186);
    if ( v9 || v33 == 2 )
    {
      v44 = 0;
      v36 = 17;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v34 + 6, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v44);
        while ( v34[3] < 0 );
      }
    }
    else
    {
      v36 = MiLockPageInline((__int64)v34);
    }
    v34[1] = v29;
    ContainingPageTable = MiGetContainingPageTable(v29);
    MiSetPfnContainingFrame((__int64)v34, ContainingPageTable);
    *v34 = 0LL;
    result = MiUnlockPage((__int64)v34, v36);
    if ( _bittest64(&MiFlags, 0x24u) )
    {
      if ( (ValidPte & 0x20) == 0 )
      {
        result = 0;
        if ( v29 >= 0xFFFFF6C000000000uLL )
          result = MiCheckLinearProtectedPteAccessedBit(v29, ValidPte, 128);
      }
    }
    *(_QWORD *)v29 = ValidPte;
    v29 += 8LL;
    if ( v29 < v43 )
      continue;
    break;
  }
  v32 = v54;
LABEL_74:
  if ( v9 )
  {
    if ( v31 )
      MiUnlockPageTable(a2, v31);
    return MiUnlockWorkingSetShared(a2, v32);
  }
  return result;
}
