/*
 * XREFs of NtUserAcquireInteractiveControlBackgroundAccess @ 0x14021DDC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140040874 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140074770 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x14012B408 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?AcquireDeviceBackgroundAccess@InteractiveControlManager@@QEAAJKIIPEAUtagWND@@@Z @ 0x14021D1AC (-AcquireDeviceBackgroundAccess@InteractiveControlManager@@QEAAJKIIPEAUtagWND@@@Z.c)
 */

_BOOL8 __fastcall NtUserAcquireInteractiveControlBackgroundAccess(int a1, unsigned int a2, __int64 a3)
{
  BOOL v6; // edi
  __int64 v7; // rbx
  __int64 v8; // rcx
  struct tagWND *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  InteractiveControlManager *v13; // rax
  __int64 v14; // r9
  __int64 v15; // r8
  int v16; // edi
  __int64 v17; // rdx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+30h] [rbp-18h] BYREF

  v6 = 0;
  v7 = EnterCrit(0LL, 0LL);
  if ( a3 )
  {
    v9 = (struct tagWND *)ValidateHwnd(a3);
    if ( !v9 )
      goto LABEL_11;
  }
  else
  {
    v9 = 0LL;
  }
  Win32HM_LockIntoThread<1>(v7, (__int64)v9, (__int64 *)BugCheckParameter3);
  if ( a2 && a2 - 744 > 0x11 )
  {
    UserSetLastError(87);
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v12);
  }
  else
  {
    v13 = InteractiveControlManager::Instance(v11, v10);
    v14 = 761LL;
    v15 = 744LL;
    if ( a2 )
    {
      v14 = a2;
      v15 = a2;
    }
    v16 = InteractiveControlManager::AcquireDeviceBackgroundAccess(v13, a1, v15, v14, v9);
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v17);
    v6 = v16 >= 0;
  }
LABEL_11:
  UserSessionSwitchLeaveCrit(v8);
  return v6;
}
