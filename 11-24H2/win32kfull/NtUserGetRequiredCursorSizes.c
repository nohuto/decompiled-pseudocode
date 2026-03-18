/*
 * XREFs of NtUserGetRequiredCursorSizes @ 0x140079B80
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleWithDescriptor @ 0x140077C08 (HMValidateHandleWithDescriptor.c)
 *     ?HandleRequestCursorSizesRequest@CCursorSizes@@QEBAXPECUtagCURSORSIZEINFO@@@Z @ 0x14027130C (-HandleRequestCursorSizesRequest@CCursorSizes@@QEBAXPECUtagCURSORSIZEINFO@@@Z.c)
 */

__int64 __fastcall NtUserGetRequiredCursorSizes(__int64 a1, volatile void *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdi
  int v10; // ebx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 UserSessionState; // rax

  EnterCrit(0LL, 0LL);
  LOBYTE(v4) = 3;
  v5 = HMValidateHandleWithDescriptor(a1, v4);
  v9 = v5;
  v10 = 0;
  if ( v5 && *(_QWORD *)(v5 + 48) == v5 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v7, v6, v8);
    ProbeForWrite(a2, 0x28uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
    UserSessionState = W32GetUserSessionState(v13, v12);
    CCursorSizes::HandleRequestCursorSizesRequest(
      *(CCursorSizes **)(UserSessionState + 36400),
      (volatile struct tagCURSORSIZEINFO *)a2);
    *(_DWORD *)(v9 + 80) |= 0x4000u;
    v10 = 1;
  }
  UserSessionSwitchLeaveCrit();
  return v10;
}
