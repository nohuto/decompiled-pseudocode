/*
 * XREFs of NtUserDisableImmersiveOwner @ 0x140293A90
 * Callers:
 *     <none>
 * Callees:
 *     _IsTopLevelWindow @ 0x140049A60 (_IsTopLevelWindow.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     IsWindowBeingDestroyed @ 0x1400911AC (IsWindowBeingDestroyed.c)
 *     IsImmersiveBandOrShellManaged @ 0x14014E58C (IsImmersiveBandOrShellManaged.c)
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x14014E68C (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     ?ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z @ 0x140291AF0 (-ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z.c)
 */

__int64 __fastcall NtUserDisableImmersiveOwner(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned int v5; // edi
  __int64 v6; // rsi
  __int64 v7; // rdx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = EnterCrit(0LL, 0LL);
  v3 = ValidateReceivingHwnd(a1, 0);
  v5 = 0;
  v6 = v3;
  if ( v3 )
  {
    Win32HM_LockIntoThread<0>(v2, v3, BugCheckParameter3);
    if ( (unsigned int)IsImmersiveBandOrShellManaged(v6)
      && IsTopLevelWindow(v6)
      && !(unsigned int)IsWindowBeingDestroyed(v6)
      && (*(_BYTE *)(*(_QWORD *)(v6 + 40) + 31LL) & 0x18) == 0x10
      && ((unsigned int)IsImmersiveBroker(*(_QWORD *)(v2 + 464))
       || *(_QWORD *)(v2 + 464) == *(_QWORD *)(*(_QWORD *)(v6 + 16) + 464LL))
      && !(unsigned int)xxxEnableWindowWorker((struct tagWND *)v6, 0LL) )
    {
      *(_DWORD *)(v6 + 380) |= 0x100u;
      v5 = 1;
    }
    else
    {
      UserSetLastError(5);
    }
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v7);
  }
  UserSessionSwitchLeaveCrit(v4);
  return v5;
}
