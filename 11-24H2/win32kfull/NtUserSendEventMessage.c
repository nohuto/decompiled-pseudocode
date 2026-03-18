/*
 * XREFs of NtUserSendEventMessage @ 0x1400F4020
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140061734 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     IAMThreadAccessGranted @ 0x1400F5BC0 (IAMThreadAccessGranted.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140118D30 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 */

__int64 __fastcall NtUserSendEventMessage(__int64 a1, unsigned int a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // edi
  struct tagTHREADINFO **v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct tagTHREADINFO *v15; // rax
  __int64 v17; // rdx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+40h] [rbp-28h] BYREF

  v8 = EnterCrit(0LL, 0LL);
  v9 = ValidateHwnd(a1);
  v11 = 0;
  v12 = (struct tagTHREADINFO **)v9;
  if ( v9 )
  {
    v10 = *(_QWORD *)(v9 + 40);
    if ( (((*(_WORD *)(v10 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      Win32HM_LockIntoThread<0>(v8, v9, BugCheckParameter3);
      if ( (unsigned int)IAMThreadAccessGranted(v8) )
      {
        v11 = PostEventMessageEx(v12[2], *((struct tagQ **)v12[2] + 59), 9u, (struct tagWND *)v12, a2, a3, a4, 0LL);
        v15 = PtiCurrent(v14, v13);
        Win32HM_UnlockFromThread<0>((ULONG_PTR)v15, BugCheckParameter3);
      }
      else
      {
        UserSetLastError(5);
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v17);
      }
    }
  }
  UserSessionSwitchLeaveCrit(v10);
  return v11;
}
