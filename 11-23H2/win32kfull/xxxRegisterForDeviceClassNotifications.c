/*
 * XREFs of xxxRegisterForDeviceClassNotifications @ 0x1C009C0FC
 * Callers:
 *     RawInputThread @ 0x1C00D6580 (RawInputThread.c)
 * Callees:
 *     RegisterCDROMNotify @ 0x1C009C24C (RegisterCDROMNotify.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxRegisterForDeviceClassNotifications(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  unsigned int i; // ebx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  CBaseInput *v9; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx

  v4 = -1073741811;
  for ( i = 1; i <= 2; ++i )
  {
    if ( !gpWin32kDriverObject )
      continue;
    UserSessionSwitchLeaveCrit(a1, a2, a3, a4);
    if ( i != 2 )
    {
      if ( i != 1 )
        goto LABEL_7;
      v11 = SGDGetUserSessionState(v6);
      v4 = CBaseInput::InitializeSensor(*(CBaseInput **)(v11 + 12672));
      if ( v4 < 0 )
        goto LABEL_7;
      v9 = *(CBaseInput **)(SGDGetUserSessionState(v12) + 12672);
      goto LABEL_6;
    }
    v7 = SGDGetUserSessionState(v6);
    v4 = CBaseInput::InitializeSensor(*(CBaseInput **)(v7 + 16840));
    if ( v4 >= 0 )
    {
      v9 = *(CBaseInput **)(SGDGetUserSessionState(v8) + 16840);
LABEL_6:
      v4 = CBaseInput::Read(v9);
    }
LABEL_7:
    EnterCrit(1LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(a1, a2, a3, a4);
  if ( !gbFirstConnectionDone && gpWin32kDriverObject )
  {
    if ( !gProtocolType )
      RegisterCDROMNotify();
    gbFirstConnectionDone = 1;
  }
  EnterCrit(1LL, 0LL);
  return (unsigned int)v4;
}
