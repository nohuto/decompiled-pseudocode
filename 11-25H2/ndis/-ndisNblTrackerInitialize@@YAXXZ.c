/*
 * XREFs of ?ndisNblTrackerInitialize@@YAXXZ @ 0x1401970B8
 * Callers:
 *     DriverEntry @ 0x140196234 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140036F70 (WPP_RECORDER_SF_.c)
 *     ?ndisNblTrackerReadConfiguration@@YAXXZ @ 0x1400A9E14 (-ndisNblTrackerReadConfiguration@@YAXXZ.c)
 *     WPP_RECORDER_SF_i @ 0x1400AA36C (WPP_RECORDER_SF_i.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     ?ndisCalculateIdealNblTrackerHistoryBufferSize@@YAXXZ @ 0x1401434F0 (-ndisCalculateIdealNblTrackerHistoryBufferSize@@YAXXZ.c)
 */

void __fastcall ndisNblTrackerInitialize(
        __int64 a1,
        __int64 a2,
        unsigned __int8 (*a3)(void *, const struct KnobDescriptor *, unsigned __int64 *))
{
  __int64 v3; // rdx
  __int64 v4; // r9
  unsigned __int64 v5; // r8
  struct _GUID *v6; // [rsp+20h] [rbp-38h]
  __int64 v7; // [rsp+28h] [rbp-30h]
  _QWORD v8[2]; // [rsp+30h] [rbp-28h] BYREF

  ndisNblTrackerReadConfiguration(a1, a2, a3);
  qword_1401266A0 = (__int64)&ndisNblTrackerList;
  ndisNblTrackerList = (struct _NDIS_NBL_TRACKER *)&ndisNblTrackerList;
  KeInitializeSpinLock(&ndisNblTrackerListLock);
  if ( *(int *)ndisNblTrackerMode >= 2 )
  {
    ndisNblTrackerTimer = (struct _EX_TIMER *)ExAllocateTimer(ndisNblTrackerWatchdogTimer, 0LL, 8LL);
    if ( ndisNblTrackerTimer )
    {
      v8[0] = 0LL;
      v8[1] = -1LL;
      v5 = 10000LL * *(unsigned int *)ndisNblTrackerNblTimeoutMilliseconds;
      if ( v5 > 0x7FFFFFFF )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v7 = 10000LL * *(unsigned int *)ndisNblTrackerNblTimeoutMilliseconds;
          WPP_RECORDER_SF_i(*((_QWORD *)WPP_GLOBAL_Control + 8), v3, v5, v4, (int)v6);
        }
        v5 = 0x7FFFFFFFLL;
      }
      ExSetTimer(ndisNblTrackerTimer, -(__int64)v5, v5, v8, v6, v7);
      if ( *(int *)ndisNblTrackerMode >= 3 )
      {
        ndisCalculateIdealNblTrackerHistoryBufferSize();
        ndisNblTrackerHistoryBuffer = (unsigned __int64 *)ExAllocatePool2(
                                                            64LL,
                                                            8LL * ndisNblTrackerHistorySize,
                                                            1802781774);
        if ( !ndisNblTrackerHistoryBuffer )
          *(_DWORD *)ndisNblTrackerMode = 2;
      }
    }
    else
    {
      *(_DWORD *)ndisNblTrackerMode = 1;
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v3) = 3;
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v3,
          1,
          13,
          (struct _GUID *)&WPP_e8966b5fa8da3ad0ffd394b7d2fa950d_Traceguids);
      }
    }
  }
}
