/*
 * XREFs of MiLinkPoolCommitChain @ 0x14023F6A0
 * Callers:
 *     MiCommitPoolMemory @ 0x1402EB010 (MiCommitPoolMemory.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeValidPte @ 0x1402383C0 (MiMakeValidPte.c)
 *     MiFlushTbAsNeeded @ 0x14023FA90 (MiFlushTbAsNeeded.c)
 *     MiIncreaseUsedPtes @ 0x14028A180 (MiIncreaseUsedPtes.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiMakeDemandZeroPte @ 0x1402E3CC0 (MiMakeDemandZeroPte.c)
 *     MiUnlinkPageChainHead @ 0x1402E8490 (MiUnlinkPageChainHead.c)
 *     MiGetContainingPageTable @ 0x1402ECE30 (MiGetContainingPageTable.c)
 *     MiUpdateLargePageBitMap @ 0x1403A29EC (MiUpdateLargePageBitMap.c)
 *     MiIsPoolPteInUse @ 0x140429960 (MiIsPoolPteInUse.c)
 *     MiLockAndIncrementShareCount @ 0x140490CB4 (MiLockAndIncrementShareCount.c)
 *     MiInitializeLargeNonPagedPoolLeafFrames @ 0x1404AD520 (MiInitializeLargeNonPagedPoolLeafFrames.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

char __fastcall MiLinkPoolCommitChain(__int64 a1, ULONG_PTR a2)
{
  ULONG_PTR v2; // rdi
  unsigned __int64 v3; // rbp
  unsigned int v5; // r12d
  int v6; // esi
  char result; // al
  ULONG_PTR v8; // rbx
  ULONG_PTR v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rbx
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rdx
  ULONG_PTR v18; // rsi
  __int64 DemandZeroPte; // rax
  __int64 v20; // rdx
  __int64 v21; // rbp
  ULONG_PTR ValidPte; // rax
  ULONG_PTR v23; // rbx
  __int64 ContainingPageTable; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  ULONG_PTR v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8

  v2 = a2;
  v3 = (a2 & 0xFFFFFFFFFFFFF000uLL) + 4088;
  if ( v3 > *(_QWORD *)(a1 + 80) )
    v3 = *(_QWORD *)(a1 + 80);
  v5 = 0;
  v6 = 0;
  if ( (*(_BYTE *)(a1 + 100) & 4) != 0 )
  {
    v18 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    DemandZeroPte = MiMakeDemandZeroPte(24LL);
    if ( v20 != DemandZeroPte )
    {
      v25 = MiMakeDemandZeroPte(16LL);
      if ( v26 != v25 )
      {
        if ( (unsigned int)MiIsPoolPteInUse(v26) )
          KeBugCheckEx(0x1Au, 0x5304uLL, (__int64)(v2 << 25) >> 16, v27, 0LL);
        if ( !v27 )
          MiIncreaseUsedPtes(v28, (v29 & (v18 >> 9)) - 0x98000000000LL, 1LL, 0LL);
      }
    }
    *(_QWORD *)(a1 + 48) += 512LL;
    v21 = 0xAAAAAAAAAAAAAAABuLL * ((MiUnlinkPageChainHead(a1 + 16) + 0x220000000000LL) >> 4);
    MiUpdateLargePageBitMap(&MiSystemPartition, v21, 512LL, 7LL);
    ValidPte = MiMakeValidPte(0LL, v21, (*(unsigned __int16 *)(a1 + 100) >> 3) & 0x1F | 0xA4000000);
    v23 = ValidPte;
    if ( _bittest64(&MiFlags, 0x24u) && (ValidPte & 0x20) == 0 && v18 >= 0xFFFFF6C000000000uLL )
      MiCheckLinearProtectedPteAccessedBit(v18, ValidPte, 128);
    *(_QWORD *)v18 = v23;
    ContainingPageTable = MiGetContainingPageTable(v18);
    MiLockAndIncrementShareCount(ContainingPageTable);
    return MiInitializeLargeNonPagedPoolLeafFrames(v2, v21);
  }
  else
  {
    result = MiFlushTbAsNeeded(*(_QWORD *)(a1 + 72), a2, ((__int64)(v3 - a2) >> 3) + 1, 1LL);
    v8 = *(_QWORD *)(a1 + 56);
    while ( v2 <= v3 )
    {
      v9 = *(_QWORD *)v2;
      v10 = *(_QWORD *)v2 & 0x3E0LL;
      result = v10 == 0;
      if ( (*(_QWORD *)v2 & 0xC01LL) == 0 && v10 == 0 )
      {
        if ( v8 )
          v11 = (__int64)(v8 + 0x94000000000LL) >> 3;
        else
          v11 = 0x7FFFFFFFFFLL;
        result = qword_140E2DB80;
        ++v6;
        v12 = v11 << 25;
        if ( qword_140E2DB80 )
        {
          if ( (qword_140E2DB80 & v12) != 0 )
            v12 |= 0x10uLL;
          else
            v12 |= qword_140E2DB80;
        }
        *(_QWORD *)v2 = v12 | 0x3E0;
        v8 = v2;
      }
      else if ( (v9 & 1) == 0 )
      {
        result = v10 == 992;
        if ( (*(_QWORD *)v2 & 0xC00LL) == 0 && v10 == 992 )
          KeBugCheckEx(0x1Au, 0x5308uLL, v2, v9, 0LL);
      }
      v2 += 8LL;
    }
    if ( v6 )
    {
      v13 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)(a1 + 88));
      v14 = 0xFFFFFFFFFFLL;
      v15 = 48 * ((v13 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v5 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v14) )
          {
            HvlNotifyLongSpinWait(v5);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v15 + 24) < 0 );
      }
      if ( (*(_DWORD *)(v15 + 36) & 0x4000000) != 0 )
        v16 = HIDWORD(*(_QWORD *)v15);
      else
        v16 = *(_QWORD *)(v15 + 16) >> 16;
      v17 = (unsigned int)(v6 + v16);
      if ( (*(_DWORD *)(v15 + 36) & 0x4000000) != 0 )
        *(_QWORD *)v15 = (v17 << 32) ^ ((v17 << 32) ^ *(_QWORD *)v15) & 0xFFFFFC00FFFFFFFFuLL;
      else
        *(_QWORD *)(v15 + 16) = (v17 << 16) ^ ((v17 << 16) ^ *(_QWORD *)(v15 + 16)) & 0xFFFFFFFFFC00FFFFuLL;
      result = -1;
      _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    *(_QWORD *)(a1 + 56) = v8;
  }
  return result;
}
