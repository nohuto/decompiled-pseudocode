/*
 * XREFs of NtUserSetLayeredWindowAttributes @ 0x14015DB60
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140061734 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     _SetLayeredWindowAttributes @ 0x14015DCB4 (_SetLayeredWindowAttributes.c)
 *     WindowHasShadow @ 0x14015DF38 (WindowHasShadow.c)
 *     zzzUpdateShadowAlpha @ 0x14015DFA4 (zzzUpdateShadowAlpha.c)
 *     UserSetLastStatus @ 0x14015E5E8 (UserSetLastStatus.c)
 *     ?ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z @ 0x140291AF0 (-ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z.c)
 */

__int64 __fastcall NtUserSetLayeredWindowAttributes(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdi
  struct tagWND *v10; // rsi
  NTSTATUS v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct tagTHREADINFO *v14; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct tagTHREADINFO *v18; // rax
  ULONG_PTR BugCheckParameter3[5]; // [rsp+20h] [rbp-28h] BYREF

  v6 = EnterCrit(0LL, 0LL);
  v7 = ValidateReceivingHwnd(a1, 1LL);
  v9 = 0LL;
  v10 = (struct tagWND *)v7;
  if ( !v7 )
    goto LABEL_10;
  BugCheckParameter3[0] = *(_QWORD *)(v6 + 456);
  *(_QWORD *)(v6 + 456) = BugCheckParameter3;
  BugCheckParameter3[1] = v7;
  HMLockObject(v7);
  if ( (a4 & 0xFFFFFFFC) != 0
    || (unsigned int)IsWindowDesktopComposed(v10) && (*(_DWORD *)(*((_QWORD *)v10 + 5) + 232LL) & 2) != 0 )
  {
    UserSetLastError(87);
    goto LABEL_12;
  }
  v11 = SetLayeredWindowAttributes(v10);
  if ( v11 < 0 )
  {
    UserSetLastStatus(v11);
LABEL_12:
    v18 = PtiCurrent(v17, v16);
    Win32HM_UnlockFromThread<0>((ULONG_PTR)v18, BugCheckParameter3);
    goto LABEL_10;
  }
  if ( (a4 & 2) != 0 && (unsigned int)WindowHasShadow(v10) )
    zzzUpdateShadowAlpha(v10);
  v14 = PtiCurrent(v13, v12);
  Win32HM_UnlockFromThread<0>((ULONG_PTR)v14, BugCheckParameter3);
  v9 = 1LL;
LABEL_10:
  UserSessionSwitchLeaveCrit(v8);
  return v9;
}
