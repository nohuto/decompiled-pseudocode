/*
 * XREFs of MiMakeVaRangePhysicallyContiguous @ 0x14068DF2C
 * Callers:
 *     MiProcessVaContiguityInformation @ 0x14068E20C (MiProcessVaContiguityInformation.c)
 * Callees:
 *     MiGetNextPageTable @ 0x14020FF30 (MiGetNextPageTable.c)
 *     MiTradeActivePage @ 0x1402172BC (MiTradeActivePage.c)
 *     MiFreePageChain @ 0x14021DC64 (MiFreePageChain.c)
 *     KeShouldYieldProcessor @ 0x14023BA60 (KeShouldYieldProcessor.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiReleaseFreshPageAtDpc @ 0x14024ED80 (MiReleaseFreshPageAtDpc.c)
 *     MiReturnFreeZeroPage @ 0x14024EE00 (MiReturnFreeZeroPage.c)
 *     MiReplaceTransitionPage @ 0x140251EC4 (MiReplaceTransitionPage.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiLockTransitionLeafPageEx @ 0x1402EC2C0 (MiLockTransitionLeafPageEx.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14033E678 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiUnlinkPageChainHead @ 0x140349AD0 (MiUnlinkPageChainHead.c)
 *     MiWorkingSetIsContended @ 0x1403915E0 (MiWorkingSetIsContended.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     MiCheckContiguityTradeEligible @ 0x140681EE8 (MiCheckContiguityTradeEligible.c)
 */

__int64 __fastcall MiMakeVaRangePhysicallyContiguous(__int64 a1, unsigned __int64 a2, int a3, __int64 a4)
{
  __int64 v4; // r9
  unsigned int v5; // edi
  __int64 v6; // r8
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // rsi
  char v11; // r12
  unsigned __int64 NextPageTable; // rax
  __int64 v13; // rbx
  __int64 *v14; // r15
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD v22[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v23; // [rsp+40h] [rbp-48h]
  unsigned int v24; // [rsp+98h] [rbp+10h] BYREF
  int v25; // [rsp+A0h] [rbp+18h] BYREF

  v22[0] = a4;
  v4 = a4 - 48;
  v5 = 0;
  v6 = MiPageSizes[a3];
  v25 = 0;
  v23 = v6;
  v22[1] = v4 + 48 * v6;
  v6 <<= 12;
  v8 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = (((v6 + a2 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = 0LL;
  v11 = MiLockWorkingSetShared(a1, a2, v6, v4);
  while ( v8 <= v9 )
  {
    if ( v10 )
    {
      if ( (v8 & 0xFFF) != 0 )
        goto LABEL_8;
      MiUnlockPageTableInternal(a1, v10);
    }
    NextPageTable = MiGetNextPageTable(v8, v9, v11, 1, &v25);
    if ( !NextPageTable )
      goto LABEL_29;
    v10 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( NextPageTable != v8 )
      break;
LABEL_8:
    if ( (*(_QWORD *)v8 & 1) != 0 )
    {
      v13 = 48 * ((*(_QWORD *)v8 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    }
    else
    {
      if ( (*(_QWORD *)v8 & 0xC00LL) != 0x800 )
        break;
      v13 = MiLockTransitionLeafPageEx(v8, 0LL, 0);
      if ( !v13 )
        break;
    }
    if ( !MiCheckContiguityTradeEligible(v13) )
      break;
    v14 = MiUnlinkPageChainHead((__int64)v22);
    if ( (*(_BYTE *)(v13 + 34) & 7) == 6 )
    {
      MiTradeActivePage(v13, (__int64)v14, (__int64)(v8 << 25) >> 16, 0, 0);
      v24 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v24);
        while ( *(__int64 *)(v13 + 24) < 0 );
      }
    }
    else if ( !(unsigned int)MiReplaceTransitionPage(v13, (unsigned __int64)v14, 9, 0) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiReleaseFreshPageAtDpc((__int64)v14, v15, v16, v17);
      break;
    }
    *(_QWORD *)(v13 + 16) = CLFS_LSN_NULL_EXT;
    MiSetOriginalPtePfnFromFreeList((__int64 *)(v13 + 16));
    MiReturnFreeZeroPage(v13);
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (v8 & 0x78) == 0 && (unsigned int)MiWorkingSetIsContended(a1, 0) || KeShouldYieldProcessor() )
    {
      if ( v10 )
      {
        MiUnlockPageTableInternal(a1, v10);
        v10 = 0LL;
      }
      MiUnlockWorkingSetShared(a1, v11);
      MiLockWorkingSetShared(a1, v18, v19, v20);
    }
    v8 += 8LL;
  }
  if ( v10 )
    MiUnlockPageTableInternal(a1, v10);
LABEL_29:
  MiUnlockWorkingSetShared(a1, v11);
  if ( v23 )
  {
    MiFreePageChain((__int64)v22);
    return (unsigned int)-1073741823;
  }
  return v5;
}
