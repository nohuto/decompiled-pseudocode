/*
 * XREFs of MiLinkPoolCommitChain @ 0x1402077F0
 * Callers:
 *     MiCommitPoolMemory @ 0x14034C650 (MiCommitPoolMemory.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiFlushTbAsNeeded @ 0x140207BE0 (MiFlushTbAsNeeded.c)
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MiUpdateLargePageBitMap @ 0x140219EE0 (MiUpdateLargePageBitMap.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIncreaseUsedPtes @ 0x140299D80 (MiIncreaseUsedPtes.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiUnlinkPageChainHead @ 0x140349AD0 (MiUnlinkPageChainHead.c)
 *     MiGetContainingPageTable @ 0x14034E470 (MiGetContainingPageTable.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 *     MiIsPoolPteInUse @ 0x14041D870 (MiIsPoolPteInUse.c)
 *     MiLockAndIncrementShareCount @ 0x14048B2F4 (MiLockAndIncrementShareCount.c)
 *     MiInitializeLargeNonPagedPoolLeafFrames @ 0x1404A7C00 (MiInitializeLargeNonPagedPoolLeafFrames.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

char __fastcall MiLinkPoolCommitChain(__int64 a1, ULONG_PTR a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v4; // rdi
  unsigned __int64 v5; // rbp
  unsigned int v7; // r12d
  int v8; // esi
  char result; // al
  __int64 v10; // rdx
  ULONG_PTR v11; // rbx
  ULONG_PTR v12; // r9
  __int64 v13; // rbx
  __int64 v14; // rbx
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rdx
  ULONG_PTR v23; // rsi
  __int64 DemandZeroPte; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned __int64 v28; // rbp
  ULONG_PTR ValidPte; // rax
  ULONG_PTR v30; // rbx
  __int64 ContainingPageTable; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  ULONG_PTR v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8

  v4 = a2;
  v5 = (a2 & 0xFFFFFFFFFFFFF000uLL) + 4088;
  if ( v5 > *(_QWORD *)(a1 + 80) )
    v5 = *(_QWORD *)(a1 + 80);
  v7 = 0;
  v8 = 0;
  if ( (*(_BYTE *)(a1 + 100) & 4) != 0 )
  {
    v23 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    DemandZeroPte = MiMakeDemandZeroPte(24LL, *(_QWORD *)v23, 0x7FFFFFFFF8LL, a4);
    if ( v25 != DemandZeroPte )
    {
      v32 = MiMakeDemandZeroPte(16LL, v25, v26, v27);
      if ( v33 != v32 )
      {
        if ( (unsigned int)MiIsPoolPteInUse(v33) )
          KeBugCheckEx(0x1Au, 0x5304uLL, (__int64)(v4 << 25) >> 16, v34, 0LL);
        if ( !v34 )
          MiIncreaseUsedPtes(v35, (v36 & (v23 >> 9)) - 0x98000000000LL, 1LL);
      }
    }
    *(_QWORD *)(a1 + 48) += 512LL;
    v28 = 0xAAAAAAAAAAAAAAABuLL * ((MiUnlinkPageChainHead(a1 + 16) + 0x220000000000LL) >> 4);
    MiUpdateLargePageBitMap(&MiSystemPartition, v28, 512LL, 7LL);
    ValidPte = MiMakeValidPte(0LL, v28, (*(unsigned __int16 *)(a1 + 100) >> 3) & 0x1F | 0xA4000000);
    v30 = ValidPte;
    if ( _bittest64(&MiFlags, 0x24u) && (ValidPte & 0x20) == 0 && v23 >= 0xFFFFF6C000000000uLL )
      MiCheckLinearProtectedPteAccessedBit(v23, ValidPte, 128LL);
    *(_QWORD *)v23 = v30;
    ContainingPageTable = MiGetContainingPageTable(v23);
    MiLockAndIncrementShareCount(ContainingPageTable);
    return MiInitializeLargeNonPagedPoolLeafFrames(v4, v28);
  }
  else
  {
    result = MiFlushTbAsNeeded(*(_QWORD *)(a1 + 72), a2, ((__int64)(v5 - a2) >> 3) + 1, 1LL);
    v11 = *(_QWORD *)(a1 + 56);
    while ( v4 <= v5 )
    {
      v12 = *(_QWORD *)v4;
      v10 = *(_QWORD *)v4 & 0x3E0LL;
      result = v10 == 0;
      if ( (*(_QWORD *)v4 & 0xC01LL) == 0 && v10 == 0 )
      {
        if ( v11 )
          v13 = (__int64)(v11 + 0x94000000000LL) >> 3;
        else
          v13 = 0x7FFFFFFFFFLL;
        result = qword_140E2DCC0;
        ++v8;
        v14 = v13 << 25;
        if ( qword_140E2DCC0 )
        {
          if ( (qword_140E2DCC0 & v14) != 0 )
            v14 |= 0x10uLL;
          else
            v14 |= qword_140E2DCC0;
        }
        *(_QWORD *)v4 = v14 | 0x3E0;
        v11 = v4;
      }
      else if ( (v12 & 1) == 0 )
      {
        result = v10 == 992;
        if ( (*(_QWORD *)v4 & 0xC00LL) == 0 && v10 == 992 )
          KeBugCheckEx(0x1Au, 0x5308uLL, v4, v12, 0LL);
      }
      v4 += 8LL;
    }
    if ( v8 )
    {
      v15 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)(a1 + 88), v10, 0xFFFFF6C000000000uLL);
      v19 = 0xFFFFFFFFFFLL;
      v20 = 48 * ((v15 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v7 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v19, v16, v17, v18) )
          {
            HvlNotifyLongSpinWait(v7);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v20 + 24) < 0 );
      }
      if ( (*(_DWORD *)(v20 + 36) & 0x4000000) != 0 )
        v21 = HIDWORD(*(_QWORD *)v20);
      else
        v21 = *(_QWORD *)(v20 + 16) >> 16;
      v22 = (unsigned int)(v8 + v21);
      if ( (*(_DWORD *)(v20 + 36) & 0x4000000) != 0 )
        *(_QWORD *)v20 = (v22 << 32) ^ ((v22 << 32) ^ *(_QWORD *)v20) & 0xFFFFFC00FFFFFFFFuLL;
      else
        *(_QWORD *)(v20 + 16) = (v22 << 16) ^ ((v22 << 16) ^ *(_QWORD *)(v20 + 16)) & 0xFFFFFFFFFC00FFFFuLL;
      result = -1;
      _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    *(_QWORD *)(a1 + 56) = v11;
  }
  return result;
}
