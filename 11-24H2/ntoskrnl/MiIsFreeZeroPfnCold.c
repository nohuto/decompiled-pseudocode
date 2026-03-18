/*
 * XREFs of MiIsFreeZeroPfnCold @ 0x14022418C
 * Callers:
 *     MiUnlinkFreeOrZeroedPage @ 0x1402213E0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiCoalesceFreeSmallPages @ 0x1402238B0 (MiCoalesceFreeSmallPages.c)
 *     MiCopyPfnEntryEx @ 0x1402247E0 (MiCopyPfnEntryEx.c)
 *     MiPruneStandbyPages @ 0x140225F84 (MiPruneStandbyPages.c)
 *     MiConvertContiguousPages @ 0x140268C24 (MiConvertContiguousPages.c)
 *     MiGetLargePage @ 0x1402F35A0 (MiGetLargePage.c)
 *     MiGetPerfectColorHeadPage @ 0x1402F59B0 (MiGetPerfectColorHeadPage.c)
 *     MiDemoteLocalLargePage @ 0x1402F6020 (MiDemoteLocalLargePage.c)
 *     MiAllocateLargeZeroPages @ 0x1403A7BB8 (MiAllocateLargeZeroPages.c)
 *     MiGetLargePageChain @ 0x1403D4E10 (MiGetLargePageChain.c)
 *     MiLargeFreePageToMdl @ 0x14041F370 (MiLargeFreePageToMdl.c)
 *     MiLargePagePromote @ 0x1404316D4 (MiLargePagePromote.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsFreeZeroPfnCold(__int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned int v2; // edx

  v1 = *(_QWORD *)(a1 + 16);
  v2 = 0;
  if ( qword_140E2DB80 )
  {
    if ( (v1 & 0x10) != 0 )
      v1 &= ~0x10uLL;
    else
      v1 &= ~qword_140E2DB80;
  }
  LOBYTE(v2) = HIDWORD(v1) == 4294967293;
  return v2;
}
