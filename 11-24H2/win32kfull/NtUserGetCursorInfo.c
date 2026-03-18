/*
 * XREFs of NtUserGetCursorInfo @ 0x140242130
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     CheckWinstaAttributeAccess @ 0x140093660 (CheckWinstaAttributeAccess.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     ?_GetCursorInfo@@YAXPEAUtagCURSORINFO@@@Z @ 0x14022F290 (-_GetCursorInfo@@YAXPEAUtagCURSORINFO@@@Z.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserGetCursorInfo(ULONG64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // ebx
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  _BYTE *v10; // rdx
  ULONG64 v11; // rcx
  __int128 v13; // [rsp+40h] [rbp-38h] BYREF
  __int64 v14; // [rsp+50h] [rbp-28h]
  __int64 v16; // [rsp+88h] [rbp+10h] BYREF
  unsigned __int64 v17; // [rsp+90h] [rbp+18h]

  v13 = 0LL;
  v14 = 0LL;
  EnterLeaveCritShared::EnterLeaveCritShared(&v16, 1LL);
  v4 = 0;
  if ( (unsigned int)CheckWinstaAttributeAccess(2LL)
    && ((v5 = v16, !*(_QWORD *)(v16 + 496))
     || *(_QWORD *)(v5 + 496) == *(_QWORD *)(W32GetUserSessionState(v3, v2) + 19200)) )
  {
    _GetCursorInfo((struct tagCURSORINFO *)&v13);
    v9 = -PsGetCurrentProcessWow64Process(v7, v6, v8);
    v17 = (-(__int64)(v9 != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 4;
    v10 = (_BYTE *)a1;
    if ( ((v9 != 0 ? 0 : 3) & (unsigned int)a1) != 0 )
      ExRaiseDatatypeMisalignment();
    v11 = MmUserProbeAddress;
    if ( a1 >= MmUserProbeAddress )
      v10 = (_BYTE *)MmUserProbeAddress;
    *v10 = *v10;
    v10[23] = v10[23];
    if ( *(_DWORD *)a1 == 24 )
    {
      *(_OWORD *)a1 = v13;
      *(_QWORD *)(a1 + 16) = v14;
      v4 = 1;
    }
    else
    {
      UserSetLastError(87);
    }
  }
  else
  {
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCrit(v11);
  return v4;
}
