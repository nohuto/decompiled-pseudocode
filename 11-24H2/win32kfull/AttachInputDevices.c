/*
 * XREFs of AttachInputDevices @ 0x140279200
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x14020C860 (xxxUpdatePerUserSystemParameters.c)
 *     xxxRemoteReconnect @ 0x14024FFF8 (xxxRemoteReconnect.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AttachInputDevices(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 UserSessionState; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax

  if ( (_DWORD)a1 )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    CBaseInput::HandleTSRequest(*(_QWORD *)(UserSessionState + 3104), 2LL);
    v13 = W32GetUserSessionState(v12, v11);
    CBaseInput::HandleTSRequest(*(_QWORD *)(v13 + 12928), 2LL);
    v16 = W32GetUserSessionState(v15, v14);
    v8 = 2LL;
    v9 = *(_QWORD *)(v16 + 16840);
  }
  else
  {
    *(_DWORD *)(W32GetUserSessionState(a1, a2) + 19328) = 1;
    v4 = W32GetUserSessionState(v3, v2);
    CBaseInput::HandleTSRequest(*(_QWORD *)(v4 + 3104), 0LL);
    v7 = W32GetUserSessionState(v6, v5);
    v8 = 0LL;
    v9 = *(_QWORD *)(v7 + 12928);
  }
  CBaseInput::HandleTSRequest(v9, v8);
  return ForceUpdatePointerDeviceSystemMetrics();
}
