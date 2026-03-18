/*
 * XREFs of NtUserGetDisplayAutoRotationPreferences @ 0x1401C82A0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserGetDisplayAutoRotationPreferences(_DWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // r8d
  _DWORD *v5; // rdx
  char v7; // [rsp+58h] [rbp+10h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v7, 1LL);
  v4 = *(_DWORD *)(*((_QWORD *)PtiCurrent(v3, v2) + 58) + 912LL);
  v5 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v5 = (_DWORD *)MmUserProbeAddress;
  *v5 = *v5;
  *a1 = v4;
  UserSessionSwitchLeaveCrit(MmUserProbeAddress);
  return 1LL;
}
