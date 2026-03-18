/*
 * XREFs of NtUserUnhookWindowsHook @ 0x1C01DEA20
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritByVelocity@@QEAA@W4CritOptType@@W4HandleToObjILCheck@@@Z @ 0x1C003F2AC (--0EnterLeaveCritByVelocity@@QEAA@W4CritOptType@@W4HandleToObjILCheck@@@Z.c)
 *     zzzUnhookWindowsHook @ 0x1C01BB48C (zzzUnhookWindowsHook.c)
 */

__int64 __fastcall NtUserUnhookWindowsHook(int a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  char v10; // [rsp+40h] [rbp+18h] BYREF

  EnterLeaveCritByVelocity::EnterLeaveCritByVelocity((__int64)&v10, 5u, 0);
  v4 = (int)zzzUnhookWindowsHook(a1, a2);
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v4;
}
