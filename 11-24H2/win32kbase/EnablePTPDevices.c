/*
 * XREFs of EnablePTPDevices @ 0x1401B16B0
 * Callers:
 *     NtUserEnableTouchPad @ 0x1401BA850 (NtUserEnableTouchPad.c)
 * Callees:
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140069000 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     AccessPTPEnabledStatus @ 0x1400A8AA0 (AccessPTPEnabledStatus.c)
 *     RIMDeliverConfigRequest @ 0x1400A90C8 (RIMDeliverConfigRequest.c)
 *     UpdateInputSettingWnfState @ 0x14012FC70 (UpdateInputSettingWnfState.c)
 *     ?PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z @ 0x140142810 (-PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z.c)
 *     EtwTraceTouchPadEnabledStatusChangeStart @ 0x1401B4F40 (EtwTraceTouchPadEnabledStatusChangeStart.c)
 *     EtwTraceTouchPadEnabledStatusChangeStop @ 0x1401B4F70 (EtwTraceTouchPadEnabledStatusChangeStop.c)
 */

_BOOL8 __fastcall EnablePTPDevices(int a1)
{
  __int64 v2; // rcx
  struct W32_PUSH_LOCK *v3; // rbx
  __int64 v4; // rcx
  __int64 i; // rdi
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  BOOL v9; // ebx

  EtwTraceTouchPadEnabledStatusChangeStart();
  v3 = *(struct W32_PUSH_LOCK **)(*(_QWORD *)(W32GetUserSessionState(v2) + 16840) + 1232LL);
  W32AcquirePushLockSharedEx(v3, 0);
  for ( i = **(_QWORD **)(*(_QWORD *)(W32GetUserSessionState(v4) + 16840) + 1240LL); i; i = *(_QWORD *)(i + 56) )
  {
    if ( *(_DWORD *)(i + 48) == 3 && (v6 = *(_QWORD *)(i + 440), *(_WORD *)(v6 + 42) == 13) && *(_WORD *)(v6 + 40) == 14 )
    {
      RIMDeliverConfigRequest((struct RIMDEV *)i, v6, 0x57u, a1 != 0);
    }
    else if ( (*(_DWORD *)(i + 184) & 0x80u) != 0 )
    {
      v7 = *(_QWORD *)(i + 456);
      if ( *(_DWORD *)(v7 + 24) == 7 )
        *(_DWORD *)(v7 + 368) = (a1 << 11) ^ (*(_DWORD *)(v7 + 368) ^ (a1 << 11)) & 0xFFFFF7FF;
    }
  }
  ExReleasePushLockSharedEx(v3, 0LL);
  KeLeaveCriticalRegion();
  *(_DWORD *)(W32GetUserSessionState(v8) + 328) = a1;
  v9 = AccessPTPEnabledStatus(a1, 0, 0LL);
  if ( v9 )
  {
    PTPTelemetry::PTPConfigUpdateEx(0LL);
    UpdateInputSettingWnfState(175LL);
  }
  EtwTraceTouchPadEnabledStatusChangeStop();
  return v9;
}
