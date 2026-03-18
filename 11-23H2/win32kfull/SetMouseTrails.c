/*
 * XREFs of SetMouseTrails @ 0x1C00D8380
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C00D433C (xxxUpdatePerUserSystemParameters.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00D9A30 (xxxSystemParametersInfoWorker.c)
 *     xxxRemoteReconnect @ 0x1C0131F08 (xxxRemoteReconnect.c)
 * Callees:
 *     SetPointer @ 0x1C002D490 (SetPointer.c)
 *     FindTimer @ 0x1C003DA48 (FindTimer.c)
 *     _PostMessage @ 0x1C00983E0 (_PostMessage.c)
 */

__int64 __fastcall SetMouseTrails(int a1)
{
  __int64 v2; // rcx
  int v3; // ebx
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // rbx
  __int64 v7; // rcx
  _BOOL8 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx

  SetPointer(0LL);
  v3 = a1 - 1;
  if ( !a1 )
    v3 = 0;
  *(_DWORD *)(SGDGetUserSessionState(v2) + 15936) = v3;
  SetPointer(1LL);
  result = gProtocolType;
  if ( !gProtocolType )
  {
    v6 = *(_QWORD *)(SGDGetUserSessionState(v4) + 15944);
    v8 = *(_DWORD *)(SGDGetUserSessionState(v7) + 15936) != 0;
    result = v6 != 0;
    if ( v8 != (_DWORD)result )
    {
      if ( *(_DWORD *)(SGDGetUserSessionState(v8) + 15936) )
      {
        return PostMessage(*(struct tagWND **)(*(_QWORD *)(gTermIO[2] + 464LL) + 24LL), 0x401u, 0LL, 0LL);
      }
      else
      {
        v10 = SGDGetUserSessionState(v9);
        FindTimer(0LL, *(_QWORD *)(v10 + 15944), 4u, 1, 0LL);
        result = SGDGetUserSessionState(v11);
        *(_QWORD *)(result + 15944) = 0LL;
      }
    }
  }
  return result;
}
