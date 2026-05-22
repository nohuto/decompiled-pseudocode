/*
 * XREFs of ?NavigationResume@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@@Z @ 0x18017B410
 * Callers:
 *     ?RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z @ 0x180176674 (-RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z.c)
 *     ?ResumeNavigation@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationOverrideProxy@@@Z @ 0x180176A9C (-ResumeNavigation@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationOverrideProxy@@@.c)
 * Callees:
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x180036308 (-UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 */

__int64 __fastcall ControllerProcessor::NavigationResume(
        ControllerProcessor *this,
        char a2,
        struct tagRECT *a3,
        struct tagPOINT a4)
{
  __int128 v4; // xmm0
  struct tagPOINT *v5; // r9
  struct tagRECT *v6; // r8
  struct tagPOINT v8; // [rsp+20h] [rbp-38h] BYREF
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF

  v4 = (__int128)*a3;
  v8 = a4;
  v9 = v4;
  if ( (a2 & 0x10) != 0 )
  {
    v5 = &v8;
    v6 = (struct tagRECT *)&v9;
  }
  else
  {
    v5 = 0LL;
    v6 = 0LL;
  }
  ControllerProcessor::UpdateNavigationState((__int64)this, 3, v6, v5);
  return 0LL;
}
