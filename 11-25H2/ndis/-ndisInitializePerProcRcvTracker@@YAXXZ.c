/*
 * XREFs of ?ndisInitializePerProcRcvTracker@@YAXXZ @ 0x140198764
 * Callers:
 *     DriverEntry @ 0x140196234 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140036F70 (WPP_RECORDER_SF_.c)
 */

void ndisInitializePerProcRcvTracker(void)
{
  int v0; // edx

  ndisPerProcRcvTrackers = (struct _NDIS_RCV_TRACKER_ARRAY *)ExAllocatePool2(
                                                               64LL,
                                                               2096 * ndisMaxNumberOfProcessors,
                                                               538985550);
  if ( !ndisPerProcRcvTrackers && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v0) = 2;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v0,
      1,
      10,
      (struct _GUID *)&WPP_ab2fd775e6d238d6e5be27dfc6df6673_Traceguids);
  }
}
