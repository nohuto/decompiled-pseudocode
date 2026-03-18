/*
 * XREFs of MiDecommitPagesTail @ 0x1402B2194
 * Callers:
 *     MiDeleteVaDirect @ 0x1402B05C0 (MiDeleteVaDirect.c)
 *     MiDecommitPages @ 0x140381AE0 (MiDecommitPages.c)
 *     MiDeleteVaTail @ 0x1404701A0 (MiDeleteVaTail.c)
 *     MiDeleteEmptyPageTableTail @ 0x140479EC0 (MiDeleteEmptyPageTableTail.c)
 *     MiStoreDiscardPoisonedPage @ 0x1406806F8 (MiStoreDiscardPoisonedPage.c)
 * Callees:
 *     MiReleaseProcessorFlushList @ 0x140237CC0 (MiReleaseProcessorFlushList.c)
 *     MiRemoveWsleList @ 0x14024AF10 (MiRemoveWsleList.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiFlushTbList @ 0x14032BCA0 (MiFlushTbList.c)
 *     MiReducePteUseCount @ 0x14042F6B0 (MiReducePteUseCount.c)
 *     MiDecayPfnFullyInitialized @ 0x140440EE8 (MiDecayPfnFullyInitialized.c)
 *     MiFlushGraphicsPtes @ 0x1404D7CB4 (MiFlushGraphicsPtes.c)
 *     MiDecommitFreePagesTail @ 0x1404EDBB0 (MiDecommitFreePagesTail.c)
 */

void __fastcall MiDecommitPagesTail(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r8
  __int64 v4; // rdi
  ULONG_PTR v5; // rcx
  unsigned __int64 v6; // rdx

  v2 = *(unsigned int *)(a1 + 112);
  if ( (_DWORD)v2 )
  {
    a2 = *(_QWORD *)(a1 + 88) - 8LL;
    if ( (a2 < 0xFFFFF6FB7DBED000uLL || a2 > 0xFFFFF6FB7DBEDFFFuLL) && (unsigned int)MiReducePteUseCount() )
      *(_DWORD *)(a1 + 132) = 1;
    *(_DWORD *)(a1 + 112) = 0;
  }
  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 )
  {
    MiFlushTbList(*(_QWORD *)(a1 + 16), a2, v2);
    if ( *(_DWORD *)(a1 + 136) && *(_QWORD *)(a1 + 216) )
    {
      MiFlushGraphicsPtes(*(_QWORD *)(a1 + 208));
      *(_QWORD *)(a1 + 208) = 0LL;
      *(_QWORD *)(a1 + 216) = 0LL;
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
      MiUnlockPageTable(*(_QWORD *)(a1 + 32), v6);
      *(_QWORD *)(a1 + 64) = 0LL;
    }
    LOBYTE(v6) = *(_BYTE *)(a1 + 44);
    MiUnlockWorkingSetShared(*(_QWORD *)(a1 + 32), v6);
    *(_BYTE *)(a1 + 44) = 17;
  }
}
