/*
 * XREFs of CreateMonitorRegionForDpi @ 0x140045D90
 * Callers:
 *     CreateMonitorRegion @ 0x1400461D8 (CreateMonitorRegion.c)
 * Callees:
 *     GreCreateRectRgnIndirect @ 0x14002D480 (GreCreateRectRgnIndirect.c)
 *     GetMonitorRectForDpi @ 0x1400458A8 (GetMonitorRectForDpi.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

struct HOBJ__ *__fastcall CreateMonitorRegionForDpi(__int64 a1, unsigned __int16 a2)
{
  __int64 v2; // rcx
  struct HOBJ__ *RectRgnIndirect; // rsi
  bool v5; // bl
  bool v6; // di
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  unsigned __int64 v10; // [rsp+40h] [rbp-38h] BYREF
  __int128 v11; // [rsp+50h] [rbp-28h] BYREF

  v11 = *(_OWORD *)GetMonitorRectForDpi(&v10, a1, a2);
  RectRgnIndirect = GreCreateRectRgnIndirect((struct REGION_CORE *)&v11);
  if ( !RectRgnIndirect )
  {
    v5 = 0;
    if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
    {
      v2 = *((unsigned int *)WPP_GLOBAL_Control + 11);
      if ( (v2 & 4) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
        v5 = 1;
    }
    v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(v2);
      LOBYTE(v8) = v6;
      LOBYTE(v9) = v5;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v9,
        v8,
        *(_QWORD *)(UserSessionState + 69400),
        2,
        3,
        10,
        (__int64)&WPP_afab509720673455b572bcaf2565fff7_Traceguids);
    }
  }
  return RectRgnIndirect;
}
