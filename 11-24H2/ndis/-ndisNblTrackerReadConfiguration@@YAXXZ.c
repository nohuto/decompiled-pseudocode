/*
 * XREFs of ?ndisNblTrackerReadConfiguration@@YAXXZ @ 0x1400A1C64
 * Callers:
 *     ?ndisNblTrackerInitialize@@YAXXZ @ 0x14018C098 (-ndisNblTrackerInitialize@@YAXXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_DDD @ 0x14005FB00 (WPP_RECORDER_SF_DDD.c)
 *     ?ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z @ 0x1401394B4 (-ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z.c)
 *     ?ndisDriverVerifierNdisFlagEnabled@@YA_NXZ @ 0x140141E6C (-ndisDriverVerifierNdisFlagEnabled@@YA_NXZ.c)
 */

void __fastcall ndisNblTrackerReadConfiguration(
        __int64 a1,
        __int64 a2,
        unsigned __int8 (*a3)(void *, const struct KnobDescriptor *, unsigned __int64 *))
{
  struct _GUID *v3; // [rsp+20h] [rbp-28h]

  if ( (dword_14011D850 & 1) == 0 )
  {
    stru_14011A5D0.DefaultValue = 0LL;
    qword_14011A620 = 0LL;
    qword_14011A650 = 0LL;
    qword_14011A6A0 = 0LL;
    dword_14011D850 |= 1u;
    stru_14011A5D0.MaximumValue = 0LL;
    qword_14011A600 = (__int64)L"StuckNblReaction";
    qword_14011A608 = (__int64)ndisNblTrackerStuckNblDisposition;
    qword_14011A610 = 2LL;
    qword_14011A628 = 2LL;
    qword_14011A630 = (__int64)L"LeakedNblReaction";
    qword_14011A638 = (__int64)&ndisNblTrackerLeakedNblDisposition;
    qword_14011A660 = (__int64)L"NblTimeoutMs";
    qword_14011A668 = (__int64)ndisNblTrackerNblTimeoutMilliseconds;
    qword_14011A688 = 0LL;
    qword_14011A690 = (__int64)L"NblTrackerHistorySize";
    qword_14011A698 = (__int64)&ndisNblTrackerHistorySize;
    qword_14011A6B8 = 0LL;
    *(_OWORD *)&stru_14011A5D0.Flags = 0LL;
    dword_14011A618 = 32;
    qword_14011A640 = 5LL;
    dword_14011A648 = 32;
    qword_14011A658 = 5LL;
    qword_14011A670 = 60000LL;
    xmmword_14011A678 = 0LL;
    xmmword_14011A6A8 = 0LL;
  }
  ndisRegisterKnobs(&stru_14011A5D0, 5uLL, a3, 0LL, v3);
  if ( *(_DWORD *)ndisNblTrackerNblTimeoutMilliseconds )
  {
    if ( *(_DWORD *)ndisNblTrackerNblTimeoutMilliseconds < 0x64u )
      *(_DWORD *)ndisNblTrackerNblTimeoutMilliseconds = 100;
  }
  else
  {
    *(_DWORD *)ndisNblTrackerNblTimeoutMilliseconds = 60000;
  }
  if ( MmIsDriverVerifying((struct _DRIVER_OBJECT *)ndisDriverObject) )
  {
    if ( *(int *)ndisNblTrackerMode < 1 )
      *(_DWORD *)ndisNblTrackerMode = 1;
    if ( ndisDriverVerifierNdisFlagEnabled() && *(int *)ndisNblTrackerMode < 3 )
      *(_DWORD *)ndisNblTrackerMode = 3;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xAu,
      (struct _GUID *)&WPP_9b060fe0224b38c36bb70306e6018616_Traceguids,
      ndisNblTrackerMode[0],
      ndisNblTrackerStuckNblDisposition[0],
      *(_DWORD *)ndisNblTrackerNblTimeoutMilliseconds);
}
