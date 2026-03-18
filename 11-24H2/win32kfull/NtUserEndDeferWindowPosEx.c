/*
 * XREFs of NtUserEndDeferWindowPosEx @ 0x140076E80
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140061734 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x140076014 (xxxEndDeferWindowPosEx.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     HMValidateHandleWithDescriptor @ 0x140077C08 (HMValidateHandleWithDescriptor.c)
 */

__int64 __fastcall NtUserEndDeferWindowPosEx(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // rax
  int v8; // edi
  struct tagSMWP *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct tagTHREADINFO *v12; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = EnterCrit(0LL, 0LL);
  LOBYTE(v5) = 4;
  v6 = v4;
  v7 = HMValidateHandleWithDescriptor(a1, v5);
  v8 = 0;
  v9 = (struct tagSMWP *)v7;
  if ( v7 )
  {
    if ( (*(_DWORD *)(v7 + 24) & 4) != 0 )
    {
      UserSetLastError(1405);
    }
    else
    {
      Win32HM_LockIntoThread<0>(v6, v7, BugCheckParameter3);
      v8 = xxxEndDeferWindowPosEx(v9, a2);
      v12 = PtiCurrent(v11, v10);
      Win32HM_UnlockFromThread<0>((ULONG_PTR)v12, BugCheckParameter3);
    }
  }
  UserSessionSwitchLeaveCrit();
  return v8;
}
