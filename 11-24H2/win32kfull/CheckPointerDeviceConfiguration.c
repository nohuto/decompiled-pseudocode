/*
 * XREFs of CheckPointerDeviceConfiguration @ 0x14020EF48
 * Callers:
 *     RawInputThread @ 0x140230DC0 (RawInputThread.c)
 * Callees:
 *     ?W32ReleasePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400A3E80 (-W32ReleasePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400A3FC0 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ReadTiltCalibrationData @ 0x14026F094 (ReadTiltCalibrationData.c)
 */

void CheckPointerDeviceConfiguration()
{
  int v0; // ebx
  __int64 v1; // rdx
  __int64 v2; // rcx
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rax
  struct W32_PUSH_LOCK *Lock; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct DEVICEINFO *i; // rdi
  _DWORD *v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rbp
  __int64 v20; // rdx
  __int128 v21; // [rsp+20h] [rbp-18h] BYREF
  int v22; // [rsp+40h] [rbp+8h] BYREF

  v0 = *(_DWORD *)UPDWORDPointer(8224LL);
  *(_DWORD *)(W32GetUserSessionState(v2, v1) + 332) = v0;
  v22 = 1;
  _GetPrecisionTouchPadConfiguration(0LL);
  AccessPTPEnabledStatus(0LL, 1LL, &v22);
  v3 = v22;
  *(_DWORD *)(W32GetUserSessionState(v5, v4) + 328) = v3;
  CPTPProcessor::EnvironmentChanged();
  UserSessionState = W32GetUserSessionState(v7, v6);
  Lock = CBaseInput::TmpGetLock(*(CBaseInput **)(UserSessionState + 16840));
  W32AcquirePushLockSharedEx(Lock, 0);
  v12 = W32GetUserSessionState(v11, v10);
  for ( i = CBaseInput::TmpGetDeviceList(*(CBaseInput **)(v12 + 16840)); i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
  {
    if ( *((_DWORD *)i + 12) == 3 && (*((_DWORD *)i + 42) & 0x1000) != 0 && !(unsigned int)IsPrecisionTouchPadEnabled() )
    {
      RIMRevokeConfigurationChange(i, 87LL);
      v16 = (_DWORD *)((char *)i + 184);
    }
    else
    {
      v16 = (_DWORD *)((char *)i + 184);
      if ( (*((_DWORD *)i + 46) & 0x80u) != 0 )
      {
        v17 = *((_QWORD *)i + 57);
        if ( *(_QWORD *)(v17 + 400) )
        {
          v21 = *((_OWORD *)i + 12);
          ReadTiltCalibrationData(v17, &v21);
        }
        else
        {
          PTPTelemetry::OnUserLogin();
        }
      }
    }
    if ( (*v16 & 0x80u) != 0 && *(_DWORD *)(*((_QWORD *)i + 57) + 24LL) == 7 )
    {
      v18 = W32GetUserSessionState(v14, v13);
      v19 = v18;
      if ( (*v16 & 0x400) != 0 )
      {
        if ( (*(_DWORD *)(v18 + 16784) & 2) != 0 )
          v20 = *(unsigned int *)(v18 + 16796);
        else
          v20 = 0LL;
        RIMConfigureDeviceFeedback(i, v20);
      }
      if ( (*v16 & 0x800) != 0 )
        RIMConfigureTouchpadClickForceSensitivity(i, *(unsigned int *)(v19 + 16800));
    }
  }
  W32ReleasePushLockSharedEx(Lock, 0LL);
}
