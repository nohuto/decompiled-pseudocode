/*
 * XREFs of NtUserForceWindowToDpiForTest @ 0x1402954F0
 * Callers:
 *     <none>
 * Callees:
 *     _IsTopLevelWindow @ 0x140049A60 (_IsTopLevelWindow.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxForceWindowToDpiForTest @ 0x140282104 (xxxForceWindowToDpiForTest.c)
 *     IsDpiValidPlateau @ 0x1402F19FC (IsDpiValidPlateau.c)
 */

_BOOL8 __fastcall NtUserForceWindowToDpiForTest(__int64 a1, unsigned int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  BOOL v7; // edi
  struct tagWND *v8; // rsi
  __int64 v9; // rdx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = EnterCrit(0LL, 0LL);
  v5 = ValidateHwnd(a1);
  v7 = 0;
  v8 = (struct tagWND *)v5;
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 40);
    if ( (((*(_WORD *)(v6 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      Win32HM_LockIntoThread<0>(v4, v5, BugCheckParameter3);
      if ( (*(_DWORD *)(*((_QWORD *)v8 + 5) + 288LL) & 0xF) == 2
        && IsTopLevelWindow((__int64)v8)
        && (unsigned __int8)IsDpiValidPlateau(a2) )
      {
        v7 = xxxForceWindowToDpiForTest(v8, a2);
      }
      else
      {
        UserSetLastError(87);
      }
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v9);
    }
  }
  UserSessionSwitchLeaveCrit(v6);
  return v7;
}
