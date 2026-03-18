/*
 * XREFs of MiMakeVaRangePhysicallyContiguous @ 0x14068156C
 * Callers:
 *     MiProcessVaContiguityInformation @ 0x14068184C (MiProcessVaContiguityInformation.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14022BEA4 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     KeShouldYieldProcessor @ 0x1402B0440 (KeShouldYieldProcessor.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiReplaceTransitionPage @ 0x1402C6590 (MiReplaceTransitionPage.c)
 *     MiWorkingSetIsContended @ 0x140338960 (MiWorkingSetIsContended.c)
 *     MiUnlinkPageChainHead @ 0x14033BAF0 (MiUnlinkPageChainHead.c)
 *     MiReleaseFreshPageAtDpc @ 0x140343330 (MiReleaseFreshPageAtDpc.c)
 *     MiReturnFreeZeroPage @ 0x1403433B0 (MiReturnFreeZeroPage.c)
 *     MiGetNextPageTable @ 0x14037D8BC (MiGetNextPageTable.c)
 *     KeYieldProcessorEx @ 0x1403F49C0 (KeYieldProcessorEx.c)
 *     MiTradeActivePage @ 0x1403FE5A0 (MiTradeActivePage.c)
 *     MiLockTransitionLeafPageEx @ 0x14040D774 (MiLockTransitionLeafPageEx.c)
 *     MiFreePageChain @ 0x14045B26C (MiFreePageChain.c)
 *     MiCheckContiguityTradeEligible @ 0x14067551C (MiCheckContiguityTradeEligible.c)
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
  _QWORD v15[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v16; // [rsp+40h] [rbp-48h]
  int v17; // [rsp+98h] [rbp+10h] BYREF
  int v18; // [rsp+A0h] [rbp+18h] BYREF

  v15[0] = a4;
  v4 = 0;
  v5 = MiPageSizes[a3];
  v18 = 0;
  v16 = v5;
  v15[1] = a4 - 48 + 48 * v5;
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
      MiUnlockPageTable(a1, v9);
    }
    NextPageTable = MiGetNextPageTable(v7, v8, v10, 1, &v18);
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
    v13 = MiUnlinkPageChainHead((__int64)v15);
    if ( (*(_BYTE *)(v12 + 34) & 7) == 6 )
    {
      MiTradeActivePage(v12, (__int64)v13, (__int64)(v7 << 25) >> 16, 0, 0);
      v17 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v17);
        while ( *(__int64 *)(v12 + 24) < 0 );
      }
    }
    else if ( !(unsigned int)MiReplaceTransitionPage((__int64 *)v12, (unsigned __int64)v13, 9, 0) )
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
        MiUnlockPageTable(a1, v9);
        v9 = 0LL;
      }
      MiUnlockWorkingSetShared(a1, v10);
      MiLockWorkingSetShared(a1);
    }
    v7 += 8LL;
  }
  if ( v9 )
    MiUnlockPageTable(a1, v9);
LABEL_29:
  MiUnlockWorkingSetShared(a1, v10);
  if ( v16 )
  {
    MiFreePageChain((__int64)v15);
    return (unsigned int)-1073741823;
  }
  return v4;
}
