/*
 * XREFs of SafeDisableMDEV @ 0x140156D70
 * Callers:
 *     UpdateGraphicsDeviceList @ 0x14004CAB0 (UpdateGraphicsDeviceList.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1400E5504 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     xxxUserSetDisplayConfig @ 0x1401636C0 (xxxUserSetDisplayConfig.c)
 *     xxxVideoPortCalloutThread @ 0x1401B08D4 (xxxVideoPortCalloutThread.c)
 * Callees:
 *     DrvDisableMDEV @ 0x140089260 (DrvDisableMDEV.c)
 */

__int64 __fastcall SafeDisableMDEV(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rcx
  __int64 UserSessionState; // rax
  __int64 v4; // rcx

  v1 = a1;
  if ( *(_DWORD *)(W32GetUserSessionState(a1) + 43316) )
    return 1LL;
  UserSessionState = W32GetUserSessionState(v2);
  if ( !(unsigned int)DrvDisableMDEV(*(HDEV **)(*(_QWORD *)(UserSessionState + 57008) + 16LL), 1, v1) )
    return 0LL;
  _InterlockedExchange((volatile __int32 *)(W32GetUserSessionState(v4) + 43316), 1);
  return 1LL;
}
