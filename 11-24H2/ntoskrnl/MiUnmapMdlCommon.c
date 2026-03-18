/*
 * XREFs of MiUnmapMdlCommon @ 0x14040F900
 * Callers:
 *     MmUnmapReservedMapping @ 0x14040F6F0 (MmUnmapReservedMapping.c)
 *     MmUnmapLockedRestartPages @ 0x1407E8280 (MmUnmapLockedRestartPages.c)
 * Callees:
 *     MiRewritePteWithLockBit @ 0x14020CBCC (MiRewritePteWithLockBit.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiInitializeTbFlushList @ 0x140233BB0 (MiInitializeTbFlushList.c)
 *     MiMakeValidPte @ 0x1402383C0 (MiMakeValidPte.c)
 *     MiReleaseProcessorFlushList @ 0x14023FFD0 (MiReleaseProcessorFlushList.c)
 *     MiInsertTbFlushEntry @ 0x1402432E0 (MiInsertTbFlushEntry.c)
 *     MiLockNestedPageTable @ 0x140285190 (MiLockNestedPageTable.c)
 *     MiGetProcessorFlushList @ 0x1402894BC (MiGetProcessorFlushList.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     MiFlushTbList @ 0x140291730 (MiFlushTbList.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x1402E3A1C (MiLockWorkingSetSharedAtDpc.c)
 *     MiMakeDemandZeroPte @ 0x1402E3CC0 (MiMakeDemandZeroPte.c)
 *     MiSetPfnContainingFrame @ 0x1402E6800 (MiSetPfnContainingFrame.c)
 *     MiUnlinkPageChainHead @ 0x1402E8490 (MiUnlinkPageChainHead.c)
 *     MiGetContainingPageTable @ 0x1402ECE30 (MiGetContainingPageTable.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     MiDecreaseUsedPtes @ 0x1403A4830 (MiDecreaseUsedPtes.c)
 *     MiInsertLargeTbFlushEntry @ 0x1403A4A2C (MiInsertLargeTbFlushEntry.c)
 *     MiDereferenceIoPages @ 0x1403CE8E0 (MiDereferenceIoPages.c)
 *     KeYieldProcessorEx @ 0x1403F9C60 (KeYieldProcessorEx.c)
 *     MiSplitPageChain @ 0x14049F35C (MiSplitPageChain.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

char __fastcall MiUnmapMdlCommon(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        ULONG_PTR BugCheckParameter4)
{
  bool v7; // zf
  void *v8; // rax
  unsigned __int64 v9; // rdx
  ULONG_PTR v10; // rbx
  int v11; // r12d
  ULONG_PTR DemandZeroPte; // rdi
  unsigned int v13; // r15d
  unsigned __int64 v14; // r14
  __int64 CurrentIrql; // rcx
  unsigned __int8 v16; // r13
  __int64 v17; // rcx
  __int64 v18; // rcx
  ULONG_PTR v19; // rdx
  volatile unsigned __int64 v20; // rbx
  unsigned __int64 v21; // r15
  bool v22; // cf
  char result; // al
  __int64 v24; // rdx
  __int64 v25; // rcx
  KIRQL v26; // bl
  unsigned __int64 v27; // rsi
  unsigned __int64 v28; // rbx
  unsigned __int64 v29; // rdi
  unsigned __int8 v30; // r15
  char v31; // r15
  __int64 *v32; // r14
  ULONG_PTR ValidPte; // rbx
  unsigned __int8 v34; // r13
  __int64 ContainingPageTable; // rax
  __int64 *ProcessorFlushList; // [rsp+30h] [rbp-B8h]
  ULONG_PTR v37; // [rsp+38h] [rbp-B0h]
  ULONG_PTR v38; // [rsp+40h] [rbp-A8h]
  volatile __int64 *v39; // [rsp+48h] [rbp-A0h]
  ULONG_PTR v40; // [rsp+50h] [rbp-98h]
  unsigned __int64 v41; // [rsp+50h] [rbp-98h]
  unsigned int v42; // [rsp+58h] [rbp-90h] BYREF
  _QWORD *v43; // [rsp+60h] [rbp-88h]
  __int64 v44; // [rsp+68h] [rbp-80h]
  __int64 v45; // [rsp+70h] [rbp-78h]
  __int128 v46; // [rsp+78h] [rbp-70h] BYREF
  __int64 v47; // [rsp+88h] [rbp-60h]
  unsigned int v48; // [rsp+F0h] [rbp+8h]
  int v49; // [rsp+F8h] [rbp+10h]
  int v51; // [rsp+108h] [rbp+20h]
  char v52; // [rsp+110h] [rbp+28h]

  v46 = 0LL;
  v47 = 0LL;
  v43 = (_QWORD *)(a4 + 48);
  v51 = a2 == 0 ? 8 : 0;
  v7 = a2 == 0;
  v8 = (void *)a2;
  v9 = 0xFFFFF68000000000uLL;
  if ( v7 )
    v8 = &unk_140E38100;
  v45 = (__int64)v8;
  v10 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v38 = v10;
  v40 = v10 + 8 * BugCheckParameter4;
  v11 = 1;
  v39 = (volatile __int64 *)(((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( (*v39 & 0x80u) == 0LL )
  {
    v37 = 1LL;
    DemandZeroPte = 0LL;
  }
  else
  {
    v37 = 512LL;
    DemandZeroPte = MiMakeDemandZeroPte(16);
  }
  v13 = 0;
  v48 = 0;
  v14 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v44 = CurrentIrql;
  if ( a2 )
  {
    v49 = 1;
    if ( (_BYTE)CurrentIrql == 2 )
    {
      v16 = 17;
      MiLockWorkingSetSharedAtDpc(a2);
    }
    else
    {
      v16 = MiLockWorkingSetShared(a2);
    }
  }
  else
  {
    v49 = 0;
    v17 = 2LL;
    if ( KeGetCurrentIrql() == 2 )
    {
      v16 = 17;
    }
    else
    {
      v16 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v9) = 2;
        LOBYTE(v17) = v16;
        KiRaiseIrqlProcessIrqlFlags(v17, v9);
      }
    }
  }
  ProcessorFlushList = MiGetProcessorFlushList();
  MiInitializeTbFlushList((__int64)ProcessorFlushList, v45, *((_DWORD *)ProcessorFlushList + 3), v51, 1);
  v19 = v37;
  while ( v10 < v40 )
  {
    if ( v49 )
    {
      if ( v14 )
      {
        if ( (v10 & 0xFFF) != 0 )
          goto LABEL_27;
        if ( v13 )
        {
          MiDecreaseUsedPtes(v18, v14, v13);
          v48 = 0;
          v18 = (__int64)ProcessorFlushList;
        }
        MiFlushTbList(v18);
        MiUnlockPageTableInternal(a2, v14);
      }
      v14 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockNestedPageTable(a2, v14);
    }
    else
    {
      if ( (v10 & 0xFFF) != 0 )
        goto LABEL_27;
      MiFlushTbList(v18);
    }
    v19 = v37;
    v18 = (__int64)ProcessorFlushList;
LABEL_27:
    if ( v19 == 1 )
    {
      v20 = *(_QWORD *)v10;
      if ( (v20 & 1) == 0 )
        KeBugCheckEx(0xDAu, 0x10BuLL, BugCheckParameter2, a3, BugCheckParameter4);
      ++v48;
      *(_QWORD *)v38 = CLFS_LSN_NULL_EXT;
      v21 = (v20 >> 12) & 0xFFFFFFFFFFLL;
      MiInsertTbFlushEntry(v18, (__int64)(v38 << 25) >> 16, 1LL, 0);
    }
    else
    {
      v20 = *v39;
      v21 = ((unsigned __int64)*v39 >> 12) & 0xFFFFFFFFFFLL;
      if ( (*v39 & 0x80u) == 0LL || *v43 != v21 )
        KeBugCheckEx(0xDAu, 0x10EuLL, BugCheckParameter2, a3, BugCheckParameter4);
      MiRewritePteWithLockBit(a2, 0, v39, DemandZeroPte);
      MiInsertLargeTbFlushEntry((__int64)ProcessorFlushList, 1, (unsigned __int64)v39++);
    }
    v19 = v37;
    v18 = (__int64)ProcessorFlushList;
    v38 += 8 * v37;
    v43 += v37;
    v22 = (v20 & 0x200) != 0;
    v10 = v38;
    if ( !v22 )
    {
      if ( v21 > qword_140E2DBE0
        || (v18 = (__int64)ProcessorFlushList, ((*(_QWORD *)(48 * v21 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0) )
      {
        MiDereferenceIoPages(1, v21, v37);
        v18 = (__int64)ProcessorFlushList;
        v19 = v37;
        v10 = v38;
      }
    }
    v13 = v48;
  }
  MiFlushTbList(v18);
  result = (unsigned __int8)MiReleaseProcessorFlushList();
  if ( v49 )
  {
    if ( v14 )
    {
      if ( v13 )
        MiDecreaseUsedPtes(v25, v14, v13);
      MiUnlockPageTableInternal(a2, v14);
    }
    result = MiUnlockWorkingSetShared(a2, v16);
  }
  else if ( v16 != 17 )
  {
    if ( KiIrqlFlags )
    {
      LOBYTE(v24) = v16;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v24);
    }
    result = v16;
    __writecr8(v16);
  }
  if ( v37 == 1 )
    return result;
  if ( (_BYTE)v44 == 2 )
  {
    v26 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E35EA8);
  }
  else
  {
    v26 = ExAcquireSpinLockExclusive(&dword_140E35EA8);
  }
  MiSplitPageChain(&xmmword_140E35EB8, BugCheckParameter4 >> 9, &v46);
  MiReleaseSpinLockExclusive(&dword_140E35EA8, v26);
  v27 = ((BugCheckParameter2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  result = 0;
  v28 = ((v40 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v29 = 0LL;
  v41 = v28;
  if ( a2 )
  {
    if ( (_BYTE)v44 == 2 )
    {
      v30 = 17;
      v52 = 17;
      result = MiLockWorkingSetSharedAtDpc(a2);
    }
    else
    {
      result = MiLockWorkingSetShared(a2);
      v30 = result;
      v52 = result;
    }
  }
  else
  {
    v30 = 17;
    v11 = 0;
    v52 = 17;
  }
  if ( v27 >= v28 )
    goto LABEL_74;
  v31 = v44;
  while ( 2 )
  {
    if ( v11 )
    {
      if ( !v29 )
        goto LABEL_64;
      if ( (v27 & 0xFFF) == 0 )
      {
        MiUnlockPageTableInternal(a2, v29);
LABEL_64:
        v29 = ((v27 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiLockNestedPageTable(a2, v29);
      }
    }
    v32 = MiUnlinkPageChainHead((__int64)&v46);
    ValidPte = MiMakeValidPte(v27, 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v32 + 0x44000000000LL) >> 4), -1879048186);
    if ( v11 || v31 == 2 )
    {
      v42 = 0;
      v34 = 17;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v32 + 6, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v42);
        while ( v32[3] < 0 );
      }
    }
    else
    {
      v34 = MiLockPageInline((__int64)v32);
    }
    v32[1] = v27;
    ContainingPageTable = MiGetContainingPageTable(v27);
    MiSetPfnContainingFrame((__int64)v32, ContainingPageTable);
    *v32 = 0LL;
    result = MiUnlockPage((__int64)v32, v34);
    if ( _bittest64(&MiFlags, 0x24u) )
    {
      if ( (ValidPte & 0x20) == 0 )
      {
        result = 0;
        if ( v27 >= 0xFFFFF6C000000000uLL )
          result = MiCheckLinearProtectedPteAccessedBit(v27, ValidPte, 128);
      }
    }
    *(_QWORD *)v27 = ValidPte;
    v27 += 8LL;
    if ( v27 < v41 )
      continue;
    break;
  }
  v30 = v52;
LABEL_74:
  if ( v11 )
  {
    if ( v29 )
      MiUnlockPageTableInternal(a2, v29);
    return MiUnlockWorkingSetShared(a2, v30);
  }
  return result;
}
