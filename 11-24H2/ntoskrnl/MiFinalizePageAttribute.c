/*
 * XREFs of MiFinalizePageAttribute @ 0x14024C240
 * Callers:
 *     MiAllocateKernelStackPages @ 0x14021639C (MiAllocateKernelStackPages.c)
 *     MiTradeActivePage @ 0x1402172BC (MiTradeActivePage.c)
 *     MiHandleForkTransitionPte @ 0x1402678C4 (MiHandleForkTransitionPte.c)
 *     MiBuildForkPte @ 0x1402687D0 (MiBuildForkPte.c)
 *     MiCombineInitialInstance @ 0x140294F94 (MiCombineInitialInstance.c)
 *     MiMigratePfn @ 0x1402FF9B0 (MiMigratePfn.c)
 *     MiMapBackgroundPagesToZero @ 0x140331C80 (MiMapBackgroundPagesToZero.c)
 *     MiCopyOnWrite @ 0x140346A74 (MiCopyOnWrite.c)
 *     MiInitializeHardFaultPfn @ 0x140347C54 (MiInitializeHardFaultPfn.c)
 *     MiCopyDataPageToImagePage @ 0x1403F1624 (MiCopyDataPageToImagePage.c)
 *     MiInitializeTransitionPfn @ 0x1403F2C1C (MiInitializeTransitionPfn.c)
 *     MiSwapNumaStandbyPage @ 0x1403F7A6C (MiSwapNumaStandbyPage.c)
 *     MiSwapStackPage @ 0x140421D74 (MiSwapStackPage.c)
 *     MiSplitDirectMapPage @ 0x1404CA510 (MiSplitDirectMapPage.c)
 *     MiInitializeCacheFlushing @ 0x140C5C468 (MiInitializeCacheFlushing.c)
 * Callees:
 *     MiChangePageAttribute @ 0x14024C2DC (MiChangePageAttribute.c)
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
