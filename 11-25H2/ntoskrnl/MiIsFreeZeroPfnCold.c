/*
 * XREFs of MiIsFreeZeroPfnCold @ 0x1402C80AC
 * Callers:
 *     MiGetLargePage @ 0x140222688 (MiGetLargePage.c)
 *     MiConvertContiguousPages @ 0x140224560 (MiConvertContiguousPages.c)
 *     MiDemoteLocalLargePage @ 0x140229CD0 (MiDemoteLocalLargePage.c)
 *     MiGetPerfectColorHeadPage @ 0x14022C2A0 (MiGetPerfectColorHeadPage.c)
 *     MiPruneStandbyPages @ 0x1402C622C (MiPruneStandbyPages.c)
 *     MiCopyPfnEntryEx @ 0x1402C7CF0 (MiCopyPfnEntryEx.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140344B60 (MiUnlinkFreeOrZeroedPage.c)
 *     MiCoalesceFreeSmallPages @ 0x140345720 (MiCoalesceFreeSmallPages.c)
 *     MiGetLargePageChain @ 0x140378BB8 (MiGetLargePageChain.c)
 *     MiAllocateLargeZeroPages @ 0x140390BD8 (MiAllocateLargeZeroPages.c)
 *     MiLargePagePromote @ 0x1404384BC (MiLargePagePromote.c)
 *     MiLargeFreePageToMdl @ 0x14049FBFC (MiLargeFreePageToMdl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsFreeZeroPfnCold(__int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned int v2; // edx

  v1 = *(_QWORD *)(a1 + 16);
  v2 = 0;
  if ( qword_140E2D940 )
  {
    if ( (v1 & 0x10) != 0 )
      v1 &= ~0x10uLL;
    else
      v1 &= ~qword_140E2D940;
  }
  LOBYTE(v2) = HIDWORD(v1) == 4294967293;
  return v2;
}
