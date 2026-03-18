/*
 * XREFs of NtUserGetRequiredCursorSizes @ 0x1C0084C50
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0049CA8 (HMValidateHandle.c)
 *     ?HandleRequestCursorSizesRequest@CCursorSizes@@QEBAXPEAUtagCURSORSIZEINFO@@@Z @ 0x1C0084CFC (-HandleRequestCursorSizesRequest@CCursorSizes@@QEBAXPEAUtagCURSORSIZEINFO@@@Z.c)
 */

__int64 __fastcall NtUserGetRequiredCursorSizes(__int64 a1, volatile void *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdi
  int v10; // ebx
  __int64 CurrentProcessWow64Process; // rax
  CCursorSizes *v12; // rcx

  EnterCrit(0LL, 0LL);
  v4 = HMValidateHandle(a1, 3u);
  v9 = v4;
  v10 = 0;
  if ( v4 && *(_QWORD *)(v4 + 48) == v4 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v6, v5, v7);
    ProbeForWrite(a2, 0x28uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
    CCursorSizes::HandleRequestCursorSizesRequest(v12, (struct tagCURSORSIZEINFO *)a2);
    *(_DWORD *)(v9 + 80) |= 0x4000u;
    v10 = 1;
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v10;
}
