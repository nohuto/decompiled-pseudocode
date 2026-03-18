/*
 * XREFs of MiSearchChannelTable @ 0x14026F0D4
 * Callers:
 *     MI_PAGE_TO_FULL_COLOR @ 0x1402236D0 (MI_PAGE_TO_FULL_COLOR.c)
 *     MiCoalesceFreeSmallPages @ 0x1402238B0 (MiCoalesceFreeSmallPages.c)
 *     MiStopPageAccessor @ 0x14026ADB0 (MiStopPageAccessor.c)
 *     MiReplaceStandbyLookaside @ 0x14026CCE0 (MiReplaceStandbyLookaside.c)
 *     MiFindSuitableLookasideReplacement @ 0x14026D5D0 (MiFindSuitableLookasideReplacement.c)
 *     MiPurgingPageFromLookaside @ 0x14026DE70 (MiPurgingPageFromLookaside.c)
 *     MiUnlinkSecondaryListStandbyPage @ 0x14026E330 (MiUnlinkSecondaryListStandbyPage.c)
 *     MiWriteStandbyLookasideEntry @ 0x14026E7E0 (MiWriteStandbyLookasideEntry.c)
 *     MiGetPfnChannel @ 0x14026ED40 (MiGetPfnChannel.c)
 *     MiPfnToStandbyLookaside @ 0x14026ED90 (MiPfnToStandbyLookaside.c)
 *     MiInsertSecondaryListStandbyPage @ 0x14026F190 (MiInsertSecondaryListStandbyPage.c)
 *     MiUnlinkStandbyPage @ 0x140270760 (MiUnlinkStandbyPage.c)
 *     MiAcquirePageListLock @ 0x1402DF1D0 (MiAcquirePageListLock.c)
 *     MiPageToChannel @ 0x1402F3214 (MiPageToChannel.c)
 *     MiRestrictRangeToNode @ 0x140401E10 (MiRestrictRangeToNode.c)
 *     MxPageAlwaysHot @ 0x140C57D28 (MxPageAlwaysHot.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

_QWORD *__fastcall MiSearchChannelTable(ULONG_PTR BugCheckParameter2)
{
  _QWORD *result; // rax
  int v3; // r9d
  int v4; // r10d
  int v5; // eax
  _QWORD *v6; // rcx

  if ( (unsigned __int8)byte_140E2DACA > (unsigned int)(unsigned __int8)byte_140E2DACB
    || (result = (char *)qword_140E2DB28 + 16 * (unsigned __int8)byte_140E2DACA, BugCheckParameter2 < *result)
    || byte_140E2DACA != byte_140E2DACB && BugCheckParameter2 >= result[2] )
  {
    v3 = 0;
    v4 = (unsigned __int8)byte_140E2DACB;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v4 < v3 )
          KeBugCheckEx(0x1Au, 0x5181uLL, BugCheckParameter2, 0LL, 0LL);
        v5 = (v3 + v4) >> 1;
        v6 = (char *)qword_140E2DB28 + 16 * v5;
        if ( BugCheckParameter2 >= *v6 )
          break;
        if ( !v5 )
          KeBugCheckEx(0x1Au, 0x5181uLL, BugCheckParameter2, (ULONG_PTR)v6, 0LL);
        v4 = v5 - 1;
      }
      if ( v5 == (unsigned __int8)byte_140E2DACB || BugCheckParameter2 < v6[2] )
        break;
      v3 = v5 + 1;
    }
    byte_140E2DACA = (v3 + v4) >> 1;
    return (char *)qword_140E2DB28 + 16 * v5;
  }
  return result;
}
