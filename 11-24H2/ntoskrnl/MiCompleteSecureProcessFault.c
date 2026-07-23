/*
 * XREFs of MiCompleteSecureProcessFault @ 0x1404286A0
 * Callers:
 *     MiAllocateWsle @ 0x14024C6D0 (MiAllocateWsle.c)
 *     MiValidVirtualizationFault @ 0x14042845C (MiValidVirtualizationFault.c)
 * Callees:
 *     MiCaptureDirtyBitToPfn @ 0x140206E50 (MiCaptureDirtyBitToPfn.c)
 *     MiTradeActivePage @ 0x1402172BC (MiTradeActivePage.c)
 *     MiGetSlabPage @ 0x14021CE24 (MiGetSlabPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 *     MiReleaseFreshPageAtDpc @ 0x14024ED80 (MiReleaseFreshPageAtDpc.c)
 *     MI_PAGE_TO_FULL_COLOR @ 0x140250420 (MI_PAGE_TO_FULL_COLOR.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiGetPfnSlabType @ 0x140300F20 (MiGetPfnSlabType.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14033E678 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiAbortCombineScan @ 0x1403A9DB0 (MiAbortCombineScan.c)
 *     MiMarkPfnVerified @ 0x1404297A4 (MiMarkPfnVerified.c)
 */

__int64 __fastcall MiCompleteSecureProcessFault(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned int v6; // edi
  __int64 v7; // r13
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rax
  __int64 v11; // r9
  unsigned int v13; // eax
  __int64 *v14; // r14
  __int64 SlabPage; // rax
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // edi
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9

  v3 = *a1;
  MI_READ_PTE_LOCK_FREE((unsigned __int64)a2);
  if ( *(__int64 *)(v3 + 40) < 0 )
    return 1LL;
  v6 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v6 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v6);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v3 + 24) < 0 );
  }
  v7 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v3 + 40) >> 43) & 0x3FFLL));
  v8 = *(_QWORD *)(v3 + 8) | 0x8000000000000000uLL;
  v9 = (__int64)(v8 << 25) >> 16;
  if ( (*(_BYTE *)(v3 + 34) & 8) != 0 )
  {
    *(_DWORD *)(a3 + 56) |= 0x40u;
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else
  {
    if ( (*(_DWORD *)(v7 + 4) & 8) == 0 || (unsigned int)MiGetPfnSlabType(v3) != 9 || v9 >= 0xFFFF800000000000uLL )
    {
LABEL_6:
      if ( ((*(_QWORD *)(v3 + 40) >> 60) & 7) != 3 )
      {
        MiAbortCombineScan(v3);
        MiMarkPfnVerified(v3, 4LL);
      }
      v10 = MiCaptureDirtyBitToPfn(v3);
      _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v10 )
        MiReleasePageFileInfo(v7, v10, 1LL, v11);
      return 1LL;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v13 = MI_PAGE_TO_FULL_COLOR(0xAAAAAAAAAAAAAAABuLL * ((v3 + 0x220000000000LL) >> 4));
    v14 = (__int64 *)(a3 + 48);
    SlabPage = MiGetSlabPage(v7, 2, v13, 0x10u, v14, 0);
    if ( SlabPage != -1 )
    {
      v16 = 48 * SlabPage - 0x220000000000LL;
      if ( (unsigned int)MiTradeActivePage(v3, v16, v9, 0, 0) )
      {
        *(_QWORD *)(v3 + 16) = CLFS_LSN_NULL_EXT;
        MiSetOriginalPtePfnFromFreeList((__int64 *)(v3 + 16));
        MiReleaseFreshPageAtDpc(v3, v21, v22, v23);
        v3 = v16;
        *a2 = MI_READ_PTE_LOCK_FREE(v8);
        *a1 = v16;
      }
      else
      {
        MiReleaseFreshPageAtDpc(v16, v17, v18, v19);
      }
LABEL_20:
      v20 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v20 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v20);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v3 + 24) < 0 );
      }
      goto LABEL_6;
    }
    if ( !*v14 )
      goto LABEL_20;
  }
  return 0LL;
}
