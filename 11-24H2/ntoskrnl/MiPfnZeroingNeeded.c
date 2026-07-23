/*
 * XREFs of MiPfnZeroingNeeded @ 0x1403934B0
 * Callers:
 *     MiGetSlabPage @ 0x14021CE24 (MiGetSlabPage.c)
 *     MmCheckCachedPageStates @ 0x140236420 (MmCheckCachedPageStates.c)
 *     MiChangePageAttribute @ 0x14024C2DC (MiChangePageAttribute.c)
 *     MiCoalesceFreeSmallPages @ 0x140250600 (MiCoalesceFreeSmallPages.c)
 *     MiMakePageAvoidRead @ 0x140253334 (MiMakePageAvoidRead.c)
 *     MiPfPutPagesInTransition @ 0x140347F6C (MiPfPutPagesInTransition.c)
 *     MiConvertContiguousPages @ 0x1403932BC (MiConvertContiguousPages.c)
 *     MiInitializeMdlOneNodeBatchPages @ 0x140393A14 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiFindLargePageMemory @ 0x140A8F22C (MiFindLargePageMemory.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiPfnZeroingNeeded(__int64 a1, int a2)
{
  int v2; // ecx
  _BOOL8 result; // rax

  result = 1;
  if ( (*(_QWORD *)(a1 + 16) & 0x3E0LL) == 0 )
  {
    v2 = (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 32)) >> 6;
    if ( v2 == a2 || ((unsigned __int8)((1 << v2) | (1 << a2)) & (unsigned __int8)byte_140E2DD18) == 0 )
      return 0;
  }
  return result;
}
