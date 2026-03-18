/*
 * XREFs of MiFinalizePageAttribute @ 0x14024DDE0
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x14020754C (MiCopyDataPageToImagePage.c)
 *     MiMapBackgroundPagesToZero @ 0x140210430 (MiMapBackgroundPagesToZero.c)
 *     MiMigratePfn @ 0x140217D00 (MiMigratePfn.c)
 *     MiMakePageAvoidRead @ 0x140222A90 (MiMakePageAvoidRead.c)
 *     MiAllocateKernelStackPages @ 0x1402282B8 (MiAllocateKernelStackPages.c)
 *     MiBuildForkPte @ 0x1402CCF80 (MiBuildForkPte.c)
 *     MiCombineInitialInstance @ 0x1402CE290 (MiCombineInitialInstance.c)
 *     MiHandleForkTransitionPte @ 0x1402CF714 (MiHandleForkTransitionPte.c)
 *     MiInitializeHardFaultPfn @ 0x140339E34 (MiInitializeHardFaultPfn.c)
 *     MiCopyOnWrite @ 0x140386068 (MiCopyOnWrite.c)
 *     MiSwapNumaStandbyPage @ 0x1403B905C (MiSwapNumaStandbyPage.c)
 *     MiSwapStackPage @ 0x1403DBBA8 (MiSwapStackPage.c)
 *     MiTradeActivePage @ 0x1403FE5A0 (MiTradeActivePage.c)
 *     MiInitializeTransitionPfn @ 0x140453E64 (MiInitializeTransitionPfn.c)
 *     MiSplitDirectMapPage @ 0x1404D1400 (MiSplitDirectMapPage.c)
 *     MiInitializeCacheFlushing @ 0x140C48FA8 (MiInitializeCacheFlushing.c)
 * Callees:
 *     MiChangePageAttribute @ 0x14024DE74 (MiChangePageAttribute.c)
 */

__int64 __fastcall MiFinalizePageAttribute(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // di
  __int64 result; // rax
  signed __int64 v6; // rdx
  signed __int64 v7; // rcx
  signed __int64 v8; // r8

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
    v8 = result;
    if ( v6 != result )
    {
      do
      {
        v7 = v8;
        result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v8 & 0xC7FFFFFFFFFFFFFFuLL, v8);
        v8 = result;
      }
      while ( v7 != result );
    }
  }
  return result;
}
