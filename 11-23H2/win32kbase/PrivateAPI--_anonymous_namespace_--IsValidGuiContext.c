/*
 * XREFs of PrivateAPI::_anonymous_namespace_::IsValidGuiContext @ 0x1C0048218
 * Callers:
 *     W32kEtwEnableCallback @ 0x1C00AF6CC (W32kEtwEnableCallback.c)
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C00B1AE4 (-Win32kNtUserCleanup@@YAHXZ.c)
 *     ChangeAcquireResourceType @ 0x1C00B84C0 (ChangeAcquireResourceType.c)
 *     W32CalloutDispatch @ 0x1C00DE800 (W32CalloutDispatch.c)
 *     ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x1C00E4D90 (-OnReadNotification@CBaseInput@@AEAAJXZ.c)
 *     NtMITSetInputDelegationMode @ 0x1C0141F20 (NtMITSetInputDelegationMode.c)
 *     NtUserGetInputContainerId @ 0x1C01447A0 (NtUserGetInputContainerId.c)
 *     NtUserSystemParametersInfo @ 0x1C014C2C0 (NtUserSystemParametersInfo.c)
 *     RIMOnAsyncPnpWorkNotification @ 0x1C0179C30 (RIMOnAsyncPnpWorkNotification.c)
 *     ?ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01ED9D0 (-ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManage.c)
 *     ?ivHandleKeyboardStatesPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01EDB40 (-ivHandleKeyboardStatesPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject.c)
 *     Win32kBaseDriverEntry @ 0x1C02DEBC0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     <none>
 */

bool __fastcall PrivateAPI::_anonymous_namespace_::IsValidGuiContext(__int64 a1)
{
  __int64 CurrentProcessWin32Process; // rax

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  return CurrentProcessWin32Process
      && *(_QWORD *)CurrentProcessWin32Process
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
      && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
      && (*((_DWORD *)gptiCurrent + 318) & 0x80) == 0;
}
