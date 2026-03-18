/*
 * XREFs of NtUserSetParent @ 0x140088820
 * Callers:
 *     <none>
 * Callees:
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x1400416B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     _GetDesktopWindow @ 0x140046470 (_GetDesktopWindow.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140061734 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140074770 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140088950 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     GetMessageWindow @ 0x14008A42C (GetMessageWindow.c)
 */

__int64 __fastcall NtUserSetParent(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi
  struct tagWND *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct tagWND *v10; // rbp
  __int64 MessageWindow; // rax
  struct tagWND *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct tagTHREADINFO *v15; // rax
  struct tagTHREADINFO *v16; // rax
  ULONG_PTR v18[2]; // [rsp+20h] [rbp-28h] BYREF
  ULONG_PTR BugCheckParameter3[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = EnterCrit(0LL, 0LL);
  v5 = ValidateHwnd(a1);
  v6 = 0LL;
  v7 = (struct tagWND *)v5;
  if ( v5 && (((*(_WORD *)(*(_QWORD *)(v5 + 40) + 42LL) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0 )
  {
    Win32HM_LockIntoThread<0>(v4, v5, v18);
    if ( a2 )
    {
      if ( a2 != -3 )
      {
        v10 = (struct tagWND *)ValidateHwnd(a2);
        if ( !v10 )
        {
LABEL_12:
          v16 = PtiCurrent(v9, v8);
          Win32HM_UnlockFromThread<0>((ULONG_PTR)v16, v18);
          goto LABEL_13;
        }
LABEL_9:
        Win32HM_LockIntoThread<1>(v4, (__int64)v10, (__int64 *)BugCheckParameter3);
        v12 = xxxSetParentWorker(v7, v10, 0LL, 0);
        if ( v12 )
          v6 = *(_QWORD *)v12;
        v15 = PtiCurrent(v14, v13);
        Win32HM_UnlockFromThread<1>((ULONG_PTR)v15, BugCheckParameter3);
        goto LABEL_12;
      }
      MessageWindow = GetMessageWindow(v7);
    }
    else
    {
      MessageWindow = GetDesktopWindow((__int64)v7);
    }
    v10 = (struct tagWND *)MessageWindow;
    goto LABEL_9;
  }
LABEL_13:
  UserSessionSwitchLeaveCrit();
  return v6;
}
