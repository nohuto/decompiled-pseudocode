/*
 * XREFs of MiIsFreeZeroPfnCold @ 0x140250EDC
 * Callers:
 *     MiUnlinkFreeOrZeroedPage @ 0x14024E130 (MiUnlinkFreeOrZeroedPage.c)
 *     MiCoalesceFreeSmallPages @ 0x140250600 (MiCoalesceFreeSmallPages.c)
 *     MiGetLargePage @ 0x1402517B0 (MiGetLargePage.c)
 *     MiCopyPfnEntryEx @ 0x140251B90 (MiCopyPfnEntryEx.c)
 *     MiGetLargePageChain @ 0x140263C74 (MiGetLargePageChain.c)
 *     MiAllocateLargeZeroPages @ 0x14026F2E8 (MiAllocateLargeZeroPages.c)
 *     MiLargeFreePageToMdl @ 0x1402EF600 (MiLargeFreePageToMdl.c)
 *     MiGetPerfectColorHeadPage @ 0x14033D740 (MiGetPerfectColorHeadPage.c)
 *     MiDemoteLocalLargePage @ 0x14033E130 (MiDemoteLocalLargePage.c)
 *     MiConvertContiguousPages @ 0x1403932BC (MiConvertContiguousPages.c)
 *     MiPruneStandbyPages @ 0x1403F7714 (MiPruneStandbyPages.c)
 *     MiLargePagePromote @ 0x140423C14 (MiLargePagePromote.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsFreeZeroPfnCold(__int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned int v2; // edx

  v1 = *(_QWORD *)(a1 + 16);
  v2 = 0;
  if ( qword_140E2DCC0 )
  {
    if ( (v1 & 0x10) != 0 )
      v1 &= ~0x10uLL;
    else
      v1 &= ~qword_140E2DCC0;
  }
  LOBYTE(v2) = HIDWORD(v1) == 4294967293;
  return v2;
}
