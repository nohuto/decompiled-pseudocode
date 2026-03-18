/*
 * XREFs of NtUserNotifyWinEvent @ 0x14003F1C0
 * Callers:
 *     <none>
 * Callees:
 *     xxxWindowEvent @ 0x1400408B0 (xxxWindowEvent.c)
 *     WPP_RECORDER_AND_TRACE_SF_dq @ 0x1401C696C (WPP_RECORDER_AND_TRACE_SF_dq.c)
 *     ?ExtendedBehaviorEnabled@ShellWindowManagement@@YA_NK@Z @ 0x1401E3748 (-ExtendedBehaviorEnabled@ShellWindowManagement@@YA_NK@Z.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserNotifyWinEvent(unsigned int a1, __int64 a2, int a3, int a4)
{
  __int64 v8; // rax
  unsigned int v9; // edx
  __int64 v10; // rbx
  __int64 v12; // rdx
  char v13; // di
  bool v14; // si
  __int64 UserSessionState; // rax
  int v16; // r8d
  int v17; // edx
  __int64 v18; // [rsp+50h] [rbp-18h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v18, 1LL);
  v8 = ValidateHwnd(a2);
  v10 = 0LL;
  if ( v8 )
  {
    if ( a1 - 32770 > 1
      || a3
      || a4
      || !ShellWindowManagement::ExtendedBehaviorEnabled((ShellWindowManagement *)0x20000000, v9) )
    {
      xxxWindowEvent(a1, 1);
    }
    else
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x800) == 0
        || (v13 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v13 = 0;
      }
      v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v13 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v12);
        LOBYTE(v16) = v14;
        LOBYTE(v17) = v13;
        WPP_RECORDER_AND_TRACE_SF_dq(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v17,
          v16,
          *(_QWORD *)(UserSessionState + 69416));
      }
    }
    v10 = 1LL;
  }
  UserSessionSwitchLeaveCrit();
  return v10;
}
