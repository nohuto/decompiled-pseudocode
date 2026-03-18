/*
 * XREFs of MiArePageContentsZero @ 0x1404CA060
 * Callers:
 *     MiDeleteUltraThreadContext @ 0x14020C870 (MiDeleteUltraThreadContext.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402213E0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140222210 (MiInsertPageInFreeOrZeroedList.c)
 *     MiDeleteUltraMapContext @ 0x1402D1B78 (MiDeleteUltraMapContext.c)
 *     MiManageUltraSpacePageTable @ 0x1402D1CC4 (MiManageUltraSpacePageTable.c)
 *     MiCreateSharedZeroPages @ 0x1402EED80 (MiCreateSharedZeroPages.c)
 *     MiSlistGetFreePage @ 0x1402F3B70 (MiSlistGetFreePage.c)
 *     MiGetPage @ 0x1402F41B0 (MiGetPage.c)
 *     MiGetPerfectFreeOrZeroPage @ 0x1402F55E0 (MiGetPerfectFreeOrZeroPage.c)
 *     MiConvertLargeActivePageToChain @ 0x1403083C0 (MiConvertLargeActivePageToChain.c)
 *     MiCreateSystemPageTable @ 0x140395350 (MiCreateSystemPageTable.c)
 *     MiInitializeSystemPageTable @ 0x140395744 (MiInitializeSystemPageTable.c)
 *     MiIdealClusterPage @ 0x1404D205C (MiIdealClusterPage.c)
 *     MiReplenishPageSlist @ 0x1404F40C0 (MiReplenishPageSlist.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x14021F1A0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140266854 (MiUnmapPageInHyperSpaceWorker.c)
 *     KeShouldYieldProcessor @ 0x1402DA180 (KeShouldYieldProcessor.c)
 *     MiIsPageOnBadList @ 0x14030492C (MiIsPageOnBadList.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiPageNotZero @ 0x140673EAC (MiPageNotZero.c)
 *     KeCheckForZeroPage @ 0x1406B32B0 (KeCheckForZeroPage.c)
 */

__int64 __fastcall MiArePageContentsZero(ULONG_PTR BugCheckParameter2, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbp
  ULONG_PTR v3; // r14
  __int64 v4; // rsi
  unsigned __int8 CurrentIrql; // di
  int v6; // ecx
  __int64 v7; // rbx
  ULONG_PTR v8; // rbp
  __int64 v9; // rcx
  __int64 result; // rax

  v2 = a2;
  v3 = BugCheckParameter2;
  v4 = 48 * BugCheckParameter2 - 0x220000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    LOBYTE(BugCheckParameter2) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(BugCheckParameter2, a2);
  }
  if ( KeGetCurrentPrcb()->MmInternal )
  {
    v6 = (unsigned __int8)BYTE2(*(_DWORD *)(v4 + 32)) >> 6;
    if ( v6 != 3 )
    {
      if ( v6 != 1 && (v7 = 16LL, v2 > 0x10) || (v7 = v2) != 0 )
      {
        do
        {
          if ( (*(_DWORD *)(v4 + 32) & 0x40000000) == 0 && !MiIsPageOnBadList(v4) )
          {
            v8 = MiMapPageInHyperSpaceWorker(v3, 0LL, 0x20000000LL);
            if ( KeCheckForZeroPage(v8) )
              MiPageNotZero(v8, v3);
            MiUnmapPageInHyperSpaceWorker(v8, 0x11u, 0);
          }
          v4 += 48LL;
          ++v3;
          if ( (--v7 & 0x3F) == 0 && KeShouldYieldProcessor() )
          {
            if ( CurrentIrql == 2 )
              break;
            if ( KiIrqlFlags )
            {
              LOBYTE(a2) = CurrentIrql;
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a2);
            }
            __writecr8(CurrentIrql);
            v9 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags )
            {
              LOBYTE(a2) = 2;
              KiRaiseIrqlProcessIrqlFlags(v9, a2);
            }
          }
        }
        while ( v7 );
      }
    }
  }
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), a2);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
