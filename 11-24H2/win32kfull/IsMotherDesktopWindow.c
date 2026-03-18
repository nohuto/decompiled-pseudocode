/*
 * XREFs of IsMotherDesktopWindow @ 0x14018A580
 * Callers:
 *     ?xxxFreeWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x14002E770 (-xxxFreeWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     ?DwmNotifyWindowsMarginsChangeByTheme@@YAXXZ @ 0x14018A33C (-DwmNotifyWindowsMarginsChangeByTheme@@YAXXZ.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x14018A400 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     ?xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x14024F6E8 (-xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsMotherDesktopWindow(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 UserSessionState; // rax

  v3 = 0;
  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( a1 == *(_QWORD *)(UserSessionState + 68728) || a1 == *(_QWORD *)(UserSessionState + 68800) )
    return 1;
  return v3;
}
