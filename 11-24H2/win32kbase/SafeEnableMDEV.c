/*
 * XREFs of SafeEnableMDEV @ 0x140147E70
 * Callers:
 *     UpdateGraphicsDeviceList @ 0x14004CAB0 (UpdateGraphicsDeviceList.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1400E5504 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     xxxUserSetDisplayConfig @ 0x1401636C0 (xxxUserSetDisplayConfig.c)
 *     xxxVideoPortCalloutThread @ 0x1401B08D4 (xxxVideoPortCalloutThread.c)
 * Callees:
 *     DrvEnableMDEV @ 0x140012A70 (DrvEnableMDEV.c)
 */

__int64 __fastcall SafeEnableMDEV(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax
  __int64 v5; // rcx

  v1 = a1;
  if ( *(_DWORD *)(W32GetUserSessionState(a1) + 43316) )
  {
    if ( !*(_DWORD *)(W32GetUserGdiSessionState(v2) + 28) )
      return 0LL;
    UserSessionState = W32GetUserSessionState(v3);
    if ( !(unsigned int)DrvEnableMDEV(*(_QWORD *)(*(_QWORD *)(UserSessionState + 57008) + 16LL), 1, v1) )
      return 0LL;
    _InterlockedExchange((volatile __int32 *)(W32GetUserSessionState(v5) + 43316), 0);
  }
  return 1LL;
}
