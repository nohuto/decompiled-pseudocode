/*
 * XREFs of MiArePageContentsZero @ 0x1404C9D90
 * Callers:
 *     MiDeleteUltraThreadContext @ 0x140211630 (MiDeleteUltraThreadContext.c)
 *     MiConvertLargeActivePageToChain @ 0x1402220D4 (MiConvertLargeActivePageToChain.c)
 *     MiSlistGetFreePage @ 0x14022AF60 (MiSlistGetFreePage.c)
 *     MiGetPerfectFreeOrZeroPage @ 0x14022BEE0 (MiGetPerfectFreeOrZeroPage.c)
 *     MiGetPage @ 0x14022CE00 (MiGetPage.c)
 *     MiCreateSharedZeroPages @ 0x14023B000 (MiCreateSharedZeroPages.c)
 *     MiCreateSystemPageTable @ 0x1402D0110 (MiCreateSystemPageTable.c)
 *     MiInitializeSystemPageTable @ 0x1402D04C8 (MiInitializeSystemPageTable.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140343510 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140344B60 (MiUnlinkFreeOrZeroedPage.c)
 *     MiDeleteUltraMapContext @ 0x140450D20 (MiDeleteUltraMapContext.c)
 *     MiManageUltraSpacePageTable @ 0x140450E6C (MiManageUltraSpacePageTable.c)
 *     MiIdealClusterPage @ 0x1404D210C (MiIdealClusterPage.c)
 *     MiReplenishPageSlist @ 0x1404EF270 (MiReplenishPageSlist.c)
 * Callees:
 *     MiIsPageOnBadList @ 0x14021E29C (MiIsPageOnBadList.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024DAC0 (MiMapPageInHyperSpaceWorker.c)
 *     KeShouldYieldProcessor @ 0x1402B0440 (KeShouldYieldProcessor.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14040FDB8 (MiUnmapPageInHyperSpaceWorker.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiPageNotZero @ 0x14066844C (MiPageNotZero.c)
 *     KeCheckForZeroPage @ 0x1406A7FE0 (KeCheckForZeroPage.c)
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
    LOBYTE(BugCheckParameter2) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(BugCheckParameter2);
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
            v8 = MiMapPageInHyperSpaceWorker(v3, 0LL, 0x20000000);
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
              KiRaiseIrqlProcessIrqlFlags(v9);
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
