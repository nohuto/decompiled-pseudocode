/*
 * XREFs of WdipSemWriteSemFailureEvent @ 0x1407A2F74
 * Callers:
 *     WdipSemDisableScenario @ 0x140A3D910 (WdipSemDisableScenario.c)
 *     WdipSemEnableScenario @ 0x140A3E10C (WdipSemEnableScenario.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     WdipSemWriteEvent @ 0x140A7DEF4 (WdipSemWriteEvent.c)
 */

__int64 __fastcall WdipSemWriteSemFailureEvent(__int64 a1, __int64 a2, __int16 a3, __int64 a4, char a5)
{
  _QWORD v6[6]; // [rsp+30h] [rbp-40h] BYREF
  __int16 v7; // [rsp+90h] [rbp+20h] BYREF

  v7 = a3;
  if ( !a1 || !a2 || !a4 )
    return 3221225485LL;
  v6[0] = a2;
  v6[1] = 16LL;
  v6[2] = &v7;
  v6[3] = 2LL;
  v6[4] = &a5;
  v6[5] = 4LL;
  return WdipSemWriteEvent(a1, a1, a4, 3LL, v6);
}
