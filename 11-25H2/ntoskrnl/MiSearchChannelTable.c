/*
 * XREFs of MiSearchChannelTable @ 0x1402167C8
 * Callers:
 *     MiAcquirePageListLock @ 0x1402122F0 (MiAcquirePageListLock.c)
 *     MiReplaceStandbyLookaside @ 0x140214750 (MiReplaceStandbyLookaside.c)
 *     MiFindSuitableLookasideReplacement @ 0x140215040 (MiFindSuitableLookasideReplacement.c)
 *     MiUnlinkSecondaryListStandbyPage @ 0x140215A30 (MiUnlinkSecondaryListStandbyPage.c)
 *     MiWriteStandbyLookasideEntry @ 0x140215EE0 (MiWriteStandbyLookasideEntry.c)
 *     MiGetPfnChannel @ 0x140216430 (MiGetPfnChannel.c)
 *     MiPfnToStandbyLookaside @ 0x140216480 (MiPfnToStandbyLookaside.c)
 *     MiInsertSecondaryListStandbyPage @ 0x140216890 (MiInsertSecondaryListStandbyPage.c)
 *     MiPageToChannel @ 0x14023EDC0 (MiPageToChannel.c)
 *     MiUnlinkStandbyPage @ 0x14024E2D0 (MiUnlinkStandbyPage.c)
 *     MiCoalesceFreeSmallPages @ 0x140345720 (MiCoalesceFreeSmallPages.c)
 *     MiRestrictRangeToNode @ 0x1403FA42C (MiRestrictRangeToNode.c)
 *     MxPageAlwaysHot @ 0x140C46A48 (MxPageAlwaysHot.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

_QWORD *__fastcall MiSearchChannelTable(ULONG_PTR BugCheckParameter2)
{
  _QWORD *result; // rax
  int v3; // r9d
  int v4; // r10d
  int v5; // eax
  _QWORD *v6; // rcx

  if ( (unsigned __int8)byte_140E2D88A > (unsigned int)(unsigned __int8)byte_140E2D88B
    || (result = (char *)qword_140E2D8E8 + 16 * (unsigned __int8)byte_140E2D88A, BugCheckParameter2 < *result)
    || byte_140E2D88A != byte_140E2D88B && BugCheckParameter2 >= result[2] )
  {
    v3 = 0;
    v4 = (unsigned __int8)byte_140E2D88B;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v4 < v3 )
          KeBugCheckEx(0x1Au, 0x5181uLL, BugCheckParameter2, 0LL, 0LL);
        v5 = (v3 + v4) >> 1;
        v6 = (char *)qword_140E2D8E8 + 16 * v5;
        if ( BugCheckParameter2 >= *v6 )
          break;
        if ( !v5 )
          KeBugCheckEx(0x1Au, 0x5181uLL, BugCheckParameter2, (ULONG_PTR)v6, 0LL);
        v4 = v5 - 1;
      }
      if ( v5 == (unsigned __int8)byte_140E2D88B || BugCheckParameter2 < v6[2] )
        break;
      v3 = v5 + 1;
    }
    byte_140E2D88A = (v3 + v4) >> 1;
    return (char *)qword_140E2D8E8 + 16 * v5;
  }
  return result;
}
