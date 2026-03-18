/*
 * XREFs of NtUserGetAppImeLevel @ 0x140295680
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     _GetProp @ 0x1400639A0 (_GetProp.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserGetAppImeLevel(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int Prop; // ebx
  __int64 v6; // rdi
  __int64 v7; // rdx
  _DWORD *v8; // rcx
  struct tagTHREADINFO *v9; // rax
  __int64 v10; // rdx
  __int64 UserSessionState; // rax
  __int64 v13; // [rsp+38h] [rbp+10h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v13, 1LL);
  v2 = ValidateHwnd(a1);
  Prop = 0;
  v6 = v2;
  if ( v2 )
  {
    v8 = *(_DWORD **)(W32GetUserSessionState(v4, v3) + 19928);
    if ( (*v8 & 4) != 0 )
    {
      v9 = PtiCurrent((__int64)v8, v7);
      v4 = *(_QWORD *)(v6 + 16);
      if ( *(_QWORD *)(v4 + 464) == *((_QWORD *)v9 + 58) )
      {
        UserSessionState = W32GetUserSessionState(v4, v10);
        Prop = GetProp(v6, *(unsigned __int16 *)(UserSessionState + 41408), 1u);
      }
    }
    else
    {
      UserSetLastError(120);
    }
  }
  UserSessionSwitchLeaveCrit(v4);
  return Prop;
}
