/*
 * XREFs of HUBFDO_RegisterSleepstudyBlockerReason @ 0x14008039C
 * Callers:
 *     HUBFDO_RegisterSleepstudyBlockerReasons @ 0x1400804F0 (HUBFDO_RegisterSleepstudyBlockerReasons.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     RtlUnicodeStringPrintf @ 0x14000F93C (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x140045CC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 *     SleepstudyHelper_RegisterComponentEx @ 0x140093984 (SleepstudyHelper_RegisterComponentEx.c)
 */

__int64 __fastcall HUBFDO_RegisterSleepstudyBlockerReason(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        __int128 *a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v10; // r13
  NTSTATUS v11; // ebx
  unsigned __int16 v12; // r9
  __int128 v13; // xmm1
  __int64 v14; // rcx
  NTSTATUS v16; // [rsp+28h] [rbp-D8h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v18; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v19; // [rsp+50h] [rbp-B0h] BYREF
  char v20; // [rsp+60h] [rbp-A0h] BYREF

  DestinationString.Buffer = (wchar_t *)&v20;
  *(_QWORD *)&DestinationString.Length = 0x2000000LL;
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          WdfDriverGlobals->Driver,
          off_14006C1E8);
  v11 = RtlUnicodeStringPrintf(&DestinationString, L"%wZ (%s)", a3, a5);
  if ( v11 >= 0 )
  {
    v13 = *a2;
    v14 = *(_QWORD *)(v10 + 96);
    v18 = *a4;
    v19 = v13;
    v11 = SleepstudyHelper_RegisterComponentEx(
            v14,
            (unsigned int)&v19,
            (unsigned int)&v18,
            (unsigned int)&DestinationString,
            a6);
    if ( v11 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = 113;
      goto LABEL_7;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v12 = 112;
LABEL_7:
    v16 = v11;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2528),
      2u,
      2u,
      v12,
      (__int64)&WPP_15d974077bc73d0eebd93ea2bffbd60f_Traceguids,
      v16);
  }
  return (unsigned int)v11;
}
