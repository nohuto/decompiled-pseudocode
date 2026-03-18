/*
 * XREFs of NtUserIsMouseInputEnabled @ 0x140299790
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 NtUserIsMouseInputEnabled()
{
  __int64 v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v0 = 1LL;
  EnterLeaveCritShared::EnterLeaveCritShared(&v6, 1LL);
  if ( *(_DWORD *)(W32GetUserSessionState(v2, v1) + 36396) == 1
    || *(_DWORD *)(W32GetUserSessionState(v4, v3) + 36396) == 5 )
  {
    v0 = 0LL;
  }
  UserSessionSwitchLeaveCrit(v4);
  return v0;
}
