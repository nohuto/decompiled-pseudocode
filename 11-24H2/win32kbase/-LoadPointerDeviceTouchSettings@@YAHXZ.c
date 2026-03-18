/*
 * XREFs of ?LoadPointerDeviceTouchSettings@@YAHXZ @ 0x1400A755C
 * Callers:
 *     GetTouchTimeFromCPLValue @ 0x1400A5960 (GetTouchTimeFromCPLValue.c)
 *     ReadPointerDeviceSettings @ 0x1401479D0 (ReadPointerDeviceSettings.c)
 * Callees:
 *     ApiSetEditionOverrideDefaultTouchGestureSettings @ 0x1400A69EC (ApiSetEditionOverrideDefaultTouchGestureSettings.c)
 *     ApiSetEditionGetPointerDeviceConfigurationKey @ 0x1400A8D38 (ApiSetEditionGetPointerDeviceConfigurationKey.c)
 *     ReadPointerDeviceCfgDWORDSetting @ 0x1400A8DC0 (ReadPointerDeviceCfgDWORDSetting.c)
 */

__int64 __fastcall LoadPointerDeviceTouchSettings(__int64 a1)
{
  __int64 UserSessionState; // rax
  __int64 v2; // rdx
  __int64 v3; // rbx
  __int64 v4; // rdi
  void *PointerDeviceConfigurationKey; // rbp
  _DWORD *v6; // rsi
  __int64 v7; // r14
  __int64 v8; // rsi
  void *v9; // rax
  void *v10; // rdi
  __int64 result; // rax

  UserSessionState = W32GetUserSessionState(a1);
  v3 = UserSessionState;
  if ( !*(_DWORD *)(UserSessionState + 17648) )
  {
    ApiSetEditionOverrideDefaultTouchGestureSettings(*(_QWORD *)(UserSessionState + 17656), v2);
    v4 = *(_QWORD *)(v3 + 17656);
    PointerDeviceConfigurationKey = (void *)ApiSetEditionGetPointerDeviceConfigurationKey(2LL, 131097LL);
    if ( !PointerDeviceConfigurationKey )
      return 0LL;
    v6 = (_DWORD *)(v4 + 12);
    v7 = 16LL;
    do
    {
      if ( (int)ReadPointerDeviceCfgDWORDSetting(PointerDeviceConfigurationKey) < 0 )
        *v6 = -1;
      v4 += 16LL;
      v6 += 4;
      --v7;
    }
    while ( v7 );
    ZwClose(PointerDeviceConfigurationKey);
  }
  if ( !*(_DWORD *)(v3 + 17680) )
  {
    v8 = *(_QWORD *)(v3 + 17688);
    v9 = (void *)ApiSetEditionGetPointerDeviceConfigurationKey(3LL, 131097LL);
    v10 = v9;
    if ( !v9 )
      return 0LL;
    if ( (int)ReadPointerDeviceCfgDWORDSetting(v9) < 0 )
      *(_DWORD *)(v8 + 12) = -1;
    ZwClose(v10);
  }
  *(_DWORD *)(v3 + 17648) = 1;
  result = 1LL;
  *(_DWORD *)(v3 + 17680) = 1;
  return result;
}
