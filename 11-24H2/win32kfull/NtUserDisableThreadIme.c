/*
 * XREFs of NtUserDisableThreadIme @ 0x1401FC340
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ?UserDisableImeForThread@@YAXPEAUtagTHREADINFO@@_N@Z @ 0x1401FE2A4 (-UserDisableImeForThread@@YAXPEAUtagTHREADINFO@@_N@Z.c)
 *     ?UserDisableImeForProcess@@YAXPEAUtagPROCESSINFO@@@Z @ 0x14023843C (-UserDisableImeForProcess@@YAXPEAUtagPROCESSINFO@@@Z.c)
 */

__int64 __fastcall NtUserDisableThreadIme(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  _DWORD *v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rbx
  struct tagTHREADINFO *v9; // rax
  struct tagTHREADINFO *v10; // rdi
  bool v11; // dl
  struct tagTHREADINFO *v12; // rcx
  __int64 v13; // rax

  EnterCrit(0LL, 0LL);
  v4 = *(_DWORD **)(W32GetUserSessionState(v3, v2) + 19928);
  if ( (*v4 & 4) == 0 )
  {
    UserSetLastError(120);
    v7 = 0LL;
    goto LABEL_3;
  }
  v9 = PtiCurrent(v5, (__int64)v4);
  v10 = v9;
  if ( a1 == -1 )
  {
    UserDisableImeForProcess(*((struct tagPROCESSINFO **)v9 + 58));
LABEL_12:
    v7 = 1LL;
    goto LABEL_3;
  }
  v7 = 0LL;
  if ( !a1 )
  {
    v11 = 1;
    v12 = v9;
LABEL_11:
    UserDisableImeForThread(v12, v11);
    goto LABEL_12;
  }
  v13 = PtiFromThreadId(a1);
  if ( v13 )
  {
    v6 = *((_QWORD *)v10 + 58);
    if ( *(_QWORD *)(v13 + 464) == v6 )
    {
      v12 = (struct tagTHREADINFO *)v13;
      v11 = v13 == (_QWORD)v10;
      goto LABEL_11;
    }
  }
LABEL_3:
  UserSessionSwitchLeaveCrit(v6);
  return v7;
}
