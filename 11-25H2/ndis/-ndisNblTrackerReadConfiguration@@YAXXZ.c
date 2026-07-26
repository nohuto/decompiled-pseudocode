/*
 * XREFs of ?ndisNblTrackerReadConfiguration@@YAXXZ @ 0x1400A9E14
 * Callers:
 *     ?ndisNblTrackerInitialize@@YAXXZ @ 0x1401970B8 (-ndisNblTrackerInitialize@@YAXXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_DDD @ 0x14007B380 (WPP_RECORDER_SF_DDD.c)
 *     ?ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z @ 0x14014439C (-ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z.c)
 *     ?ndisDriverVerifierNdisFlagEnabled@@YA_NXZ @ 0x14014CB3C (-ndisDriverVerifierNdisFlagEnabled@@YA_NXZ.c)
 */

void __fastcall ndisNblTrackerReadConfiguration(
        __int64 a1,
        __int64 a2,
        unsigned __int8 (*a3)(void *, const struct KnobDescriptor *, unsigned __int64 *))
{
  struct _GUID *v3; // [rsp+20h] [rbp-28h]

  if ( (dword_1401278F4 & 1) == 0 )
  {
    stru_1401245D0.DefaultValue = 0LL;
    qword_140124620 = 0LL;
    qword_140124650 = 0LL;
    qword_1401246A0 = 0LL;
    dword_1401278F4 |= 1u;
    stru_1401245D0.MaximumValue = 0LL;
    qword_140124600 = (__int64)L"StuckNblReaction";
    qword_140124608 = (__int64)ndisNblTrackerStuckNblDisposition;
    qword_140124610 = 2LL;
    qword_140124628 = 2LL;
    qword_140124630 = (__int64)L"LeakedNblReaction";
    qword_140124638 = (__int64)&ndisNblTrackerLeakedNblDisposition;
    qword_140124660 = (__int64)L"NblTimeoutMs";
    qword_140124668 = (__int64)ndisNblTrackerNblTimeoutMilliseconds;
    qword_140124688 = 0LL;
    qword_140124690 = (__int64)L"NblTrackerHistorySize";
    qword_140124698 = (__int64)&ndisNblTrackerHistorySize;
    qword_1401246B8 = 0LL;
    *(_OWORD *)&stru_1401245D0.Flags = 0LL;
    dword_140124618 = 32;
    qword_140124640 = 5LL;
    dword_140124648 = 32;
    qword_140124658 = 5LL;
    qword_140124670 = 60000LL;
    xmmword_140124678 = 0LL;
    xmmword_1401246A8 = 0LL;
  }
  ndisRegisterKnobs(&stru_1401245D0, 5uLL, a3, 0LL, v3);
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
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xAu,
      (struct _GUID *)&WPP_e8966b5fa8da3ad0ffd394b7d2fa950d_Traceguids,
      ndisNblTrackerMode[0],
      ndisNblTrackerStuckNblDisposition[0],
      *(_DWORD *)ndisNblTrackerNblTimeoutMilliseconds);
}
