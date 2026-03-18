/*
 * XREFs of MiCompleteSecureProcessFault @ 0x140435C20
 * Callers:
 *     MiAllocateWsle @ 0x14021F980 (MiAllocateWsle.c)
 *     MiValidVirtualizationFault @ 0x1404359DC (MiValidVirtualizationFault.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleasePageFileInfo @ 0x14021B9A0 (MiReleasePageFileInfo.c)
 *     MiReleaseFreshPageAtDpc @ 0x140222030 (MiReleaseFreshPageAtDpc.c)
 *     MI_PAGE_TO_FULL_COLOR @ 0x1402236D0 (MI_PAGE_TO_FULL_COLOR.c)
 *     MiGetPfnSlabType @ 0x14022D610 (MiGetPfnSlabType.c)
 *     MiCaptureDirtyBitToPfn @ 0x14023ED00 (MiCaptureDirtyBitToPfn.c)
 *     MiAbortCombineScan @ 0x140265104 (MiAbortCombineScan.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiGetSlabPage @ 0x1402F3934 (MiGetSlabPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402F6568 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiTradeActivePage @ 0x1403A0758 (MiTradeActivePage.c)
 *     MiMarkPfnVerified @ 0x140436D24 (MiMarkPfnVerified.c)
 */

__int64 __fastcall MiCompleteSecureProcessFault(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned int v6; // edi
  __int64 v7; // r13
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rax
  unsigned int v12; // eax
  __int64 *v13; // r14
  __int64 SlabPage; // rax
  __int64 v15; // rdi
  unsigned int v16; // edi

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
  v7 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v3 + 40) >> 43) & 0x3FFLL));
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
        MiReleasePageFileInfo(v7, v10, 1LL);
      return 1LL;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v12 = MI_PAGE_TO_FULL_COLOR(0xAAAAAAAAAAAAAAABuLL * ((v3 + 0x220000000000LL) >> 4));
    v13 = (__int64 *)(a3 + 48);
    SlabPage = MiGetSlabPage(v7, 2, v12, 0x10u, v13, 0);
    if ( SlabPage != -1 )
    {
      v15 = 48 * SlabPage - 0x220000000000LL;
      if ( (unsigned int)MiTradeActivePage(v3, v15, v9, 0, 0) )
      {
        *(_QWORD *)(v3 + 16) = CLFS_LSN_NULL_EXT;
        MiSetOriginalPtePfnFromFreeList((__int64 *)(v3 + 16));
        MiReleaseFreshPageAtDpc(v3);
        v3 = v15;
        *a2 = MI_READ_PTE_LOCK_FREE(v8);
        *a1 = v15;
      }
      else
      {
        MiReleaseFreshPageAtDpc(v15);
      }
LABEL_20:
      v16 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v16 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v16);
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
    if ( !*v13 )
      goto LABEL_20;
  }
  return 0LL;
}
