/*
 * XREFs of MiFinalizePageAttribute @ 0x14021F4F0
 * Callers:
 *     MiMapBackgroundPagesToZero @ 0x14020B740 (MiMapBackgroundPagesToZero.c)
 *     MiMigratePfn @ 0x14022C0A0 (MiMigratePfn.c)
 *     MiBuildForkPte @ 0x1402C53E8 (MiBuildForkPte.c)
 *     MiCopyOnWrite @ 0x1402E47DC (MiCopyOnWrite.c)
 *     MiInitializeHardFaultPfn @ 0x1402E6618 (MiInitializeHardFaultPfn.c)
 *     MiInitializeTransitionPfn @ 0x14031359C (MiInitializeTransitionPfn.c)
 *     MiCopyDataPageToImagePage @ 0x1403142D8 (MiCopyDataPageToImagePage.c)
 *     MiCombineInitialInstance @ 0x14036C3E0 (MiCombineInitialInstance.c)
 *     MiHandleForkTransitionPte @ 0x14036D640 (MiHandleForkTransitionPte.c)
 *     MiSwapNumaStandbyPage @ 0x14039474C (MiSwapNumaStandbyPage.c)
 *     MiAllocateKernelStackPages @ 0x14039F96C (MiAllocateKernelStackPages.c)
 *     MiTradeActivePage @ 0x1403A0758 (MiTradeActivePage.c)
 *     MiSwapStackPage @ 0x1404303C4 (MiSwapStackPage.c)
 *     MiSplitDirectMapPage @ 0x1404D14D0 (MiSplitDirectMapPage.c)
 *     MiInitializeCacheFlushing @ 0x140C5A2D8 (MiInitializeCacheFlushing.c)
 * Callees:
 *     MiChangePageAttribute @ 0x14021F58C (MiChangePageAttribute.c)
 */

__int64 __fastcall MiFinalizePageAttribute(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // di
  __int64 result; // rax
  signed __int64 v6; // rdx
  signed __int64 v7; // r8
  signed __int64 v8; // rcx

  v3 = a3;
  result = (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 32)) >> 6;
  if ( (_DWORD)result != (_DWORD)a2 )
    result = MiChangePageAttribute(a1, a2, a3);
  v6 = *(_QWORD *)(a1 + 24);
  if ( (v3 & 1) != 0 )
  {
    *(_QWORD *)(a1 + 24) = v6 & 0xC7FFFFFFFFFFFFFFuLL;
  }
  else
  {
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v6 & 0xC7FFFFFFFFFFFFFFuLL, v6);
    v7 = result;
    if ( v6 != result )
    {
      do
      {
        v8 = v7;
        result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v7 & 0xC7FFFFFFFFFFFFFFuLL, v7);
        v7 = result;
      }
      while ( v8 != result );
    }
  }
  return result;
}
