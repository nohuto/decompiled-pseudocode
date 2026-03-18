/*
 * XREFs of NtUserShowWindow @ 0x1400879F0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140061734 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x140087B20 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall NtUserShowWindow(__int64 a1, unsigned int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  struct tagTHREADINFO *v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 UserSessionState; // rax
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct tagTHREADINFO **CurrentThreadNonPaged; // rax
  struct tagTHREADINFO *v15; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = EnterCrit(0LL, 0LL);
  v5 = ValidateHwnd(a1);
  v6 = 0LL;
  v7 = v5;
  if ( v5 && (((*(_WORD *)(*(_QWORD *)(v5 + 40) + 42LL) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0 )
  {
    BugCheckParameter3[0] = *(_QWORD *)(v4 + 456);
    *(_QWORD *)(v4 + 456) = BugCheckParameter3;
    BugCheckParameter3[1] = v5;
    HMLockObject(v5);
    if ( a2 > 0xB || *(char *)(*(_QWORD *)(v7 + 40) + 20LL) < 0 )
    {
      UserSetLastError(87);
      v11 = 0;
      v15 = PtiCurrent(v18, v17);
    }
    else
    {
      UserSessionState = W32GetUserSessionState(v9, v8);
      v11 = xxxShowWindowEx(
              v7,
              a2 | *(_DWORD *)(UserSessionState + 67056) & 0x10000,
              a2 & 0x10000 | *(_DWORD *)(UserSessionState + 67056) & 0x10000);
      CurrentThreadNonPaged = (struct tagTHREADINFO **)W32GetCurrentThreadNonPaged(v13, v12);
      if ( CurrentThreadNonPaged )
        v6 = *CurrentThreadNonPaged;
      v15 = v6;
    }
    Win32HM_UnlockFromThread<0>((ULONG_PTR)v15, BugCheckParameter3);
  }
  else
  {
    v11 = 0;
  }
  UserSessionSwitchLeaveCrit();
  return v11;
}
