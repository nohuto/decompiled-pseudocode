/*
 * XREFs of MiSearchChannelTable @ 0x140224664
 * Callers:
 *     MiStopPageAccessor @ 0x140220340 (MiStopPageAccessor.c)
 *     MiReplaceStandbyLookaside @ 0x140222270 (MiReplaceStandbyLookaside.c)
 *     MiFindSuitableLookasideReplacement @ 0x140222B60 (MiFindSuitableLookasideReplacement.c)
 *     MiPurgingPageFromLookaside @ 0x140223400 (MiPurgingPageFromLookaside.c)
 *     MiUnlinkSecondaryListStandbyPage @ 0x1402238C0 (MiUnlinkSecondaryListStandbyPage.c)
 *     MiWriteStandbyLookasideEntry @ 0x140223D70 (MiWriteStandbyLookasideEntry.c)
 *     MiGetPfnChannel @ 0x1402242D0 (MiGetPfnChannel.c)
 *     MiPfnToStandbyLookaside @ 0x140224320 (MiPfnToStandbyLookaside.c)
 *     MiInsertSecondaryListStandbyPage @ 0x140224720 (MiInsertSecondaryListStandbyPage.c)
 *     MiUnlinkStandbyPage @ 0x140225CF0 (MiUnlinkStandbyPage.c)
 *     MiAcquirePageListLock @ 0x140240AB0 (MiAcquirePageListLock.c)
 *     MI_PAGE_TO_FULL_COLOR @ 0x140250420 (MI_PAGE_TO_FULL_COLOR.c)
 *     MiCoalesceFreeSmallPages @ 0x140250600 (MiCoalesceFreeSmallPages.c)
 *     MiPageToChannel @ 0x140258D54 (MiPageToChannel.c)
 *     MiRestrictRangeToNode @ 0x1403FC38C (MiRestrictRangeToNode.c)
 *     MxPageAlwaysHot @ 0x140C59EB8 (MxPageAlwaysHot.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

_QWORD *__fastcall MiSearchChannelTable(ULONG_PTR BugCheckParameter2)
{
  _QWORD *result; // rax
  int v3; // r9d
  int v4; // r10d
  int v5; // eax
  _QWORD *v6; // rcx

  if ( (unsigned __int8)byte_140E2DC0A > (unsigned int)(unsigned __int8)byte_140E2DC0B
    || (result = (char *)qword_140E2DC68 + 16 * (unsigned __int8)byte_140E2DC0A, BugCheckParameter2 < *result)
    || byte_140E2DC0A != byte_140E2DC0B && BugCheckParameter2 >= result[2] )
  {
    v3 = 0;
    v4 = (unsigned __int8)byte_140E2DC0B;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v4 < v3 )
          KeBugCheckEx(0x1Au, 0x5181uLL, BugCheckParameter2, 0LL, 0LL);
        v5 = (v3 + v4) >> 1;
        v6 = (char *)qword_140E2DC68 + 16 * v5;
        if ( BugCheckParameter2 >= *v6 )
          break;
        if ( !v5 )
          KeBugCheckEx(0x1Au, 0x5181uLL, BugCheckParameter2, (ULONG_PTR)v6, 0LL);
        v4 = v5 - 1;
      }
      if ( v5 == (unsigned __int8)byte_140E2DC0B || BugCheckParameter2 < v6[2] )
        break;
      v3 = v5 + 1;
    }
    byte_140E2DC0A = (v3 + v4) >> 1;
    return (char *)qword_140E2DC68 + 16 * v5;
  }
  return result;
}
