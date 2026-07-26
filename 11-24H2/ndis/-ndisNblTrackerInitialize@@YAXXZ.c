/*
 * XREFs of ?ndisNblTrackerInitialize@@YAXXZ @ 0x14018C098
 * Callers:
 *     DriverEntry @ 0x14018B234 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14001DD50 (WPP_RECORDER_SF_.c)
 *     ?ndisNblTrackerReadConfiguration@@YAXXZ @ 0x1400A1C64 (-ndisNblTrackerReadConfiguration@@YAXXZ.c)
 *     WPP_RECORDER_SF_i @ 0x1400A21BC (WPP_RECORDER_SF_i.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     ?ndisCalculateIdealNblTrackerHistoryBufferSize@@YAXXZ @ 0x1401384D0 (-ndisCalculateIdealNblTrackerHistoryBufferSize@@YAXXZ.c)
 */

void __fastcall ndisNblTrackerInitialize(
        __int64 a1,
        __int64 a2,
        unsigned __int8 (*a3)(void *, const struct KnobDescriptor *, unsigned __int64 *))
{
  int v3; // edx
  int v4; // r9d
  unsigned __int64 v5; // r8
  _QWORD v6[2]; // [rsp+30h] [rbp-28h] BYREF

  ndisNblTrackerReadConfiguration(a1, a2, a3);
  qword_14011C660 = (__int64)&ndisNblTrackerList;
  ndisNblTrackerList = (struct _NDIS_NBL_TRACKER *)&ndisNblTrackerList;
  KeInitializeSpinLock(&ndisNblTrackerListLock);
  if ( *(int *)ndisNblTrackerMode >= 2 )
  {
    ndisNblTrackerTimer = (struct _EX_TIMER *)ExAllocateTimer(ndisNblTrackerWatchdogTimer, 0LL, 8LL);
    if ( ndisNblTrackerTimer )
    {
      v6[0] = 0LL;
      v6[1] = -1LL;
      v5 = 10000LL * *(unsigned int *)ndisNblTrackerNblTimeoutMilliseconds;
      if ( v5 > 0x7FFFFFFF )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_i(*((_QWORD *)WPP_GLOBAL_Control + 8), v3, v5, v4);
        v5 = 0x7FFFFFFFLL;
      }
      ExSetTimer(ndisNblTrackerTimer, -(__int64)v5, v5, v6);
      if ( *(int *)ndisNblTrackerMode >= 3 )
      {
        ndisCalculateIdealNblTrackerHistoryBufferSize();
        ndisNblTrackerHistoryBuffer = (unsigned __int64 *)ExAllocatePool2(
                                                            64LL,
                                                            8LL * ndisNblTrackerHistorySize,
                                                            1802781774LL);
        if ( !ndisNblTrackerHistoryBuffer )
          *(_DWORD *)ndisNblTrackerMode = 2;
      }
    }
    else
    {
      *(_DWORD *)ndisNblTrackerMode = 1;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v3) = 3;
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v3,
          1,
          13,
          (struct _GUID *)&WPP_9b060fe0224b38c36bb70306e6018616_Traceguids);
      }
    }
  }
}
