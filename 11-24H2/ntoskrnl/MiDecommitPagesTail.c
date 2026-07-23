/*
 * XREFs of MiDecommitPagesTail @ 0x14023D754
 * Callers:
 *     MiDeleteVaDirect @ 0x14023BBE0 (MiDeleteVaDirect.c)
 *     MiDecommitPages @ 0x140297F00 (MiDecommitPages.c)
 *     MiDeleteVaTail @ 0x140462720 (MiDeleteVaTail.c)
 *     MiDeleteEmptyPageTableTail @ 0x1404734A0 (MiDeleteEmptyPageTableTail.c)
 *     MiStoreDiscardPoisonedPage @ 0x14068D0B8 (MiStoreDiscardPoisonedPage.c)
 * Callees:
 *     MiReleaseProcessorFlushList @ 0x140208120 (MiReleaseProcessorFlushList.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiRemoveWsleList @ 0x140303100 (MiRemoveWsleList.c)
 *     MiReducePteUseCount @ 0x140305C80 (MiReducePteUseCount.c)
 *     MiDecayPfnFullyInitialized @ 0x140437598 (MiDecayPfnFullyInitialized.c)
 *     MiFlushGraphicsPtes @ 0x1404CFF34 (MiFlushGraphicsPtes.c)
 *     MiDecommitFreePagesTail @ 0x1404EF800 (MiDecommitFreePagesTail.c)
 */

void __fastcall MiDecommitPagesTail(__int64 a1)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // rdi
  ULONG_PTR v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdx

  if ( *(_DWORD *)(a1 + 112) )
  {
    v2 = *(_QWORD *)(a1 + 88) - 8LL;
    if ( (v2 < 0xFFFFF6FB7DBED000uLL || v2 > 0xFFFFF6FB7DBEDFFFuLL) && (unsigned int)MiReducePteUseCount() )
      *(_DWORD *)(a1 + 132) = 1;
    *(_DWORD *)(a1 + 112) = 0;
  }
  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
  {
    MiFlushTbList(*(_QWORD *)(a1 + 16));
    if ( *(_DWORD *)(a1 + 136) )
    {
      v6 = *(_QWORD *)(a1 + 216);
      if ( v6 )
      {
        MiFlushGraphicsPtes(*(_QWORD *)(a1 + 208), v6);
        *(_QWORD *)(a1 + 208) = 0LL;
        *(_QWORD *)(a1 + 216) = 0LL;
      }
    }
    MiDecommitFreePagesTail(a1);
    if ( *(_DWORD *)(v3 + 16488) )
    {
      if ( (*(_DWORD *)(a1 + 160) & 0x100) == 0 )
        MiRemoveWsleList(*(_QWORD *)(a1 + 32), v3);
      *(_DWORD *)(v3 + 16488) = 0;
    }
    *(_DWORD *)(v3 + 12376) = 0;
    MiReleaseProcessorFlushList();
    v4 = *(_QWORD *)(a1 + 120);
    *(_QWORD *)(a1 + 16) = 0LL;
    if ( v4 )
    {
      MiDecayPfnFullyInitialized(v4);
      *(_QWORD *)(a1 + 120) = 0LL;
    }
  }
  if ( *(_BYTE *)(a1 + 44) != 17 )
  {
    v5 = *(_QWORD *)(a1 + 64);
    if ( v5 )
    {
      MiUnlockPageTableInternal(*(_QWORD *)(a1 + 32), v5);
      *(_QWORD *)(a1 + 64) = 0LL;
    }
    LOBYTE(v5) = *(_BYTE *)(a1 + 44);
    MiUnlockWorkingSetShared(*(_QWORD *)(a1 + 32), v5);
    *(_BYTE *)(a1 + 44) = 17;
  }
}
