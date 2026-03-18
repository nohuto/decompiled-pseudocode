/*
 * XREFs of MiMakeVaRangePhysicallyContiguous @ 0x14068CDFC
 * Callers:
 *     MiProcessVaContiguityInformation @ 0x14068D0DC (MiProcessVaContiguityInformation.c)
 * Callees:
 *     MiReleaseFreshPageAtDpc @ 0x140222030 (MiReleaseFreshPageAtDpc.c)
 *     MiReturnFreeZeroPage @ 0x1402220B0 (MiReturnFreeZeroPage.c)
 *     MiReplaceTransitionPage @ 0x140224B14 (MiReplaceTransitionPage.c)
 *     MiGetNextPageTable @ 0x140235DA0 (MiGetNextPageTable.c)
 *     KeShouldYieldProcessor @ 0x1402DA180 (KeShouldYieldProcessor.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiUnlinkPageChainHead @ 0x1402E8490 (MiUnlinkPageChainHead.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402F6568 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     MiLockTransitionLeafPageEx @ 0x14036A520 (MiLockTransitionLeafPageEx.c)
 *     MiTradeActivePage @ 0x1403A0758 (MiTradeActivePage.c)
 *     MiWorkingSetIsContended @ 0x1403D01B0 (MiWorkingSetIsContended.c)
 *     KeYieldProcessorEx @ 0x1403F9C60 (KeYieldProcessorEx.c)
 *     MiFreePageChain @ 0x14045AD80 (MiFreePageChain.c)
 *     MiCheckContiguityTradeEligible @ 0x140680D3C (MiCheckContiguityTradeEligible.c)
 */

__int64 __fastcall MiMakeVaRangePhysicallyContiguous(__int64 a1, unsigned __int64 a2, int a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 v5; // r8
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rsi
  char v10; // r12
  unsigned __int64 NextPageTable; // rax
  __int64 v12; // rbx
  __int64 *v13; // r15
  __int64 v14; // rdx
  __int64 v15; // r8
  _QWORD v17[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v18; // [rsp+40h] [rbp-48h]
  unsigned int v19; // [rsp+98h] [rbp+10h] BYREF
  int v20; // [rsp+A0h] [rbp+18h] BYREF

  v17[0] = a4;
  v4 = 0;
  v5 = MiPageSizes[a3];
  v20 = 0;
  v18 = v5;
  v17[1] = a4 - 48 + 48 * v5;
  v7 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = ((((v5 << 12) + a2 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = 0LL;
  v10 = MiLockWorkingSetShared(a1);
  while ( v7 <= v8 )
  {
    if ( v9 )
    {
      if ( (v7 & 0xFFF) != 0 )
        goto LABEL_8;
      MiUnlockPageTableInternal(a1, v9);
    }
    NextPageTable = MiGetNextPageTable(v7, v8, v10, 1, &v20);
    if ( !NextPageTable )
      goto LABEL_29;
    v9 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( NextPageTable != v7 )
      break;
LABEL_8:
    if ( (*(_QWORD *)v7 & 1) != 0 )
    {
      v12 = 48 * ((*(_QWORD *)v7 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    }
    else
    {
      if ( (*(_QWORD *)v7 & 0xC00LL) != 0x800 )
        break;
      v12 = MiLockTransitionLeafPageEx(v7, 0LL, 0);
      if ( !v12 )
        break;
    }
    if ( !MiCheckContiguityTradeEligible(v12) )
      break;
    v13 = MiUnlinkPageChainHead((__int64)v17);
    if ( (*(_BYTE *)(v12 + 34) & 7) == 6 )
    {
      MiTradeActivePage(v12, (__int64)v13, (__int64)(v7 << 25) >> 16, 0, 0);
      v19 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v19);
        while ( *(__int64 *)(v12 + 24) < 0 );
      }
    }
    else if ( !(unsigned int)MiReplaceTransitionPage(v12, (unsigned __int64)v13, 9, 0) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiReleaseFreshPageAtDpc((__int64)v13);
      break;
    }
    *(_QWORD *)(v12 + 16) = CLFS_LSN_NULL_EXT;
    MiSetOriginalPtePfnFromFreeList((__int64 *)(v12 + 16));
    MiReturnFreeZeroPage(v12);
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (v7 & 0x78) == 0 && (unsigned int)MiWorkingSetIsContended(a1, 0) || KeShouldYieldProcessor() )
    {
      if ( v9 )
      {
        MiUnlockPageTableInternal(a1, v9);
        v9 = 0LL;
      }
      MiUnlockWorkingSetShared(a1, v10);
      MiLockWorkingSetShared(a1);
    }
    v7 += 8LL;
  }
  if ( v9 )
    MiUnlockPageTableInternal(a1, v9);
LABEL_29:
  MiUnlockWorkingSetShared(a1, v10);
  if ( v18 )
  {
    MiFreePageChain((__int64)v17, v14, v15);
    return (unsigned int)-1073741823;
  }
  return v4;
}
