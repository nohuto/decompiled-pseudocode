/*
 * XREFs of MiDecommitPagesTail @ 0x1402DBE74
 * Callers:
 *     MiDecommitPages @ 0x140288300 (MiDecommitPages.c)
 *     MiDeleteVaDirect @ 0x1402DA300 (MiDeleteVaDirect.c)
 *     MiDeleteVaTail @ 0x1402E3CF0 (MiDeleteVaTail.c)
 *     MiDeleteEmptyPageTableTail @ 0x140476F00 (MiDeleteEmptyPageTableTail.c)
 *     MiStoreDiscardPoisonedPage @ 0x14068BF88 (MiStoreDiscardPoisonedPage.c)
 * Callees:
 *     MiReducePteUseCount @ 0x140212920 (MiReducePteUseCount.c)
 *     MiRemoveWsleList @ 0x140231F70 (MiRemoveWsleList.c)
 *     MiReleaseProcessorFlushList @ 0x14023FFD0 (MiReleaseProcessorFlushList.c)
 *     MiFlushTbList @ 0x140291730 (MiFlushTbList.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     MiDecayPfnFullyInitialized @ 0x140440AC8 (MiDecayPfnFullyInitialized.c)
 *     MiFlushGraphicsPtes @ 0x1404D6AE4 (MiFlushGraphicsPtes.c)
 *     MiDecommitFreePagesTail @ 0x1404F1D60 (MiDecommitFreePagesTail.c)
 */

void __fastcall MiDecommitPagesTail(__int64 a1)
{
  unsigned int v1; // r8d
  unsigned __int64 v3; // rdx
  __int64 v4; // rdi
  ULONG_PTR v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rdx

  v1 = *(_DWORD *)(a1 + 112);
  if ( v1 )
  {
    v3 = *(_QWORD *)(a1 + 88) - 8LL;
    if ( (v3 < 0xFFFFF6FB7DBED000uLL || v3 > 0xFFFFF6FB7DBEDFFFuLL) && (unsigned int)MiReducePteUseCount(a1, v3, v1) )
      *(_DWORD *)(a1 + 132) = 1;
    *(_DWORD *)(a1 + 112) = 0;
  }
  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 )
  {
    MiFlushTbList(*(_QWORD *)(a1 + 16));
    if ( *(_DWORD *)(a1 + 136) )
    {
      v7 = *(_QWORD *)(a1 + 216);
      if ( v7 )
      {
        MiFlushGraphicsPtes(*(_QWORD *)(a1 + 208), v7);
        *(_QWORD *)(a1 + 208) = 0LL;
        *(_QWORD *)(a1 + 216) = 0LL;
      }
    }
    MiDecommitFreePagesTail(a1);
    if ( *(_DWORD *)(v4 + 16488) )
    {
      if ( (*(_DWORD *)(a1 + 160) & 0x100) == 0 )
        MiRemoveWsleList(*(_QWORD *)(a1 + 32), v4);
      *(_DWORD *)(v4 + 16488) = 0;
    }
    *(_DWORD *)(v4 + 12376) = 0;
    MiReleaseProcessorFlushList();
    v5 = *(_QWORD *)(a1 + 120);
    *(_QWORD *)(a1 + 16) = 0LL;
    if ( v5 )
    {
      MiDecayPfnFullyInitialized(v5);
      *(_QWORD *)(a1 + 120) = 0LL;
    }
  }
  if ( *(_BYTE *)(a1 + 44) != 17 )
  {
    v6 = *(_QWORD *)(a1 + 64);
    if ( v6 )
    {
      MiUnlockPageTableInternal(*(_QWORD *)(a1 + 32), v6);
      *(_QWORD *)(a1 + 64) = 0LL;
    }
    LOBYTE(v6) = *(_BYTE *)(a1 + 44);
    MiUnlockWorkingSetShared(*(_QWORD *)(a1 + 32), v6);
    *(_BYTE *)(a1 + 44) = 17;
  }
}
