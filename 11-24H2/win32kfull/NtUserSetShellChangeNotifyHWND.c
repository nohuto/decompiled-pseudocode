/*
 * XREFs of NtUserSetShellChangeNotifyHWND @ 0x140218F90
 * Callers:
 *     <none>
 * Callees:
 *     ?_SetShellChangeNotifyHWND@@YAHPEAUHWND__@@@Z @ 0x140218FD0 (-_SetShellChangeNotifyHWND@@YAHPEAUHWND__@@@Z.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserSetShellChangeNotifyHWND(HWND a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  char v5; // [rsp+38h] [rbp+10h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v5, 1LL);
  v2 = (int)_SetShellChangeNotifyHWND(a1);
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
