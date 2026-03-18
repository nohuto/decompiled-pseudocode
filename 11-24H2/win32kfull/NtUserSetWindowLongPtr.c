/*
 * XREFs of NtUserSetWindowLongPtr @ 0x14015F4F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140061734 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z @ 0x14015F628 (-xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z.c)
 *     DesktopVerifyHeapRange @ 0x140184348 (DesktopVerifyHeapRange.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 */

unsigned __int64 __fastcall NtUserSetWindowLongPtr(__int64 a1, int a2, unsigned __int64 a3, int a4)
{
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  ULONG_PTR v11; // rdi
  struct tagWND *v12; // rsi
  unsigned __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  ULONG_PTR *CurrentThreadNonPaged; // rax
  __int64 v18; // rdx
  ULONG_PTR BugCheckParameter3[5]; // [rsp+30h] [rbp-28h] BYREF

  v8 = EnterCrit(0LL, 0LL);
  v9 = ValidateHwndEx(a1, 1LL, 1LL);
  v11 = 0LL;
  v12 = (struct tagWND *)v9;
  if ( v9 )
  {
    BugCheckParameter3[0] = *(_QWORD *)(v8 + 456);
    *(_QWORD *)(v8 + 456) = BugCheckParameter3;
    BugCheckParameter3[1] = v9;
    HMLockObject(v9);
    if ( (unsigned int)PsGetWin32KFilterSet() == 5 )
    {
      if ( a2 != -21 )
      {
        v13 = 0LL;
        UserSetLastError(87);
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v18);
        goto LABEL_6;
      }
      DesktopVerifyHeapRange(*((_QWORD *)v12 + 3), *((_QWORD *)v12 + 5), 344LL);
    }
    v13 = xxxSetWindowLongPtr(v12, a2, a3, a4, 1);
    CurrentThreadNonPaged = (ULONG_PTR *)W32GetCurrentThreadNonPaged(v15, v14);
    if ( CurrentThreadNonPaged )
      v11 = *CurrentThreadNonPaged;
    Win32HM_UnlockFromThread<0>(v11, BugCheckParameter3);
  }
  else
  {
    v13 = 0LL;
  }
LABEL_6:
  UserSessionSwitchLeaveCrit(v10);
  return v13;
}
