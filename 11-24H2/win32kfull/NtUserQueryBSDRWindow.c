/*
 * XREFs of NtUserQueryBSDRWindow @ 0x14029A400
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 NtUserQueryBSDRWindow()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 *v3; // rcx
  __int64 v4; // rbx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v6, 1LL);
  v4 = 0LL;
  if ( *(_QWORD *)(W32GetUserSessionState(v1, v0) + 63512) )
  {
    v3 = *(__int64 **)(W32GetUserSessionState(v3, v2) + 63512);
    v4 = *v3;
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
