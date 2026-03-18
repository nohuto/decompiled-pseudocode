/*
 * XREFs of xxxBroadcastDisplaySettingsChange @ 0x140116AE0
 * Callers:
 *     xxxSwitchDesktop @ 0x1401F69E4 (xxxSwitchDesktop.c)
 *     xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x140226CB0 (xxxDesktopsRecalcAndBroadcastDisplayChange.c)
 *     xxxBroadcastModernAppRedraw @ 0x1402ADA10 (xxxBroadcastModernAppRedraw.c)
 * Callees:
 *     xxxBroadcastMessageEx @ 0x1401177BC (xxxBroadcastMessageEx.c)
 */

__int64 __fastcall xxxBroadcastDisplaySettingsChange(__int64 a1, int a2, int a3, unsigned int a4)
{
  __int64 v5; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 UserSessionState; // rax
  __int64 result; // rax

  v5 = a3;
  EtwTraceChangeDisplayModeBroadcast(0LL);
  UserSessionState = W32GetUserSessionState(v9, v8);
  result = xxxBroadcastMessageEx(
             *(struct tagWND **)(*(_QWORD *)(a1 + 8) + 24LL),
             0x7Eu,
             *(unsigned __int16 *)(*(_QWORD *)(UserSessionState + 19928) + 6996LL),
             v5,
             1u,
             0LL,
             1,
             a4);
  if ( a2 )
  {
    xxxBroadcastMessageEx(*(struct tagWND **)(*(_QWORD *)(a1 + 8) + 24LL), 0x1Au, 0LL, 0LL, 1u, 0LL, 1, a4);
    return xxxBroadcastMessageEx(*(struct tagWND **)(*(_QWORD *)(a1 + 8) + 24LL), 0x15u, 0LL, 0LL, 1u, 0LL, 1, a4);
  }
  return result;
}
