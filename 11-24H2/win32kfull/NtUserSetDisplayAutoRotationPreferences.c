/*
 * XREFs of NtUserSetDisplayAutoRotationPreferences @ 0x140226F60
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     xxxRefreshDisplayOrientation @ 0x1402690E0 (xxxRefreshDisplayOrientation.c)
 *     ?IsActivePpi@CRotationMgr@@SA_NPEAUtagPROCESSINFO@@@Z @ 0x140270290 (-IsActivePpi@CRotationMgr@@SA_NPEAUtagPROCESSINFO@@@Z.c)
 */

__int64 __fastcall NtUserSetDisplayAutoRotationPreferences(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct tagTHREADINFO *v4; // rax
  struct tagPROCESSINFO *v5; // rcx
  __int64 v6; // rbx

  UserSessionSwitchEnterCrit();
  v4 = PtiCurrent(v3, v2);
  if ( (a1 & 0x3FFFFFF0) != 0 )
  {
    UserSetLastError(87);
    v6 = 0LL;
  }
  else
  {
    v5 = (struct tagPROCESSINFO *)*((_QWORD *)v4 + 58);
    *((_DWORD *)v5 + 228) = a1;
    if ( CRotationMgr::IsActivePpi(v5) )
      xxxRefreshDisplayOrientation();
    v6 = 1LL;
  }
  LeaveCrit();
  return v6;
}
