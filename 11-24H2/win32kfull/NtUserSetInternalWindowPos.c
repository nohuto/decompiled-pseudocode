/*
 * XREFs of NtUserSetInternalWindowPos @ 0x14029DC10
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x140034C70 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     xxxSetInternalWindowPos @ 0x1402AB2DC (xxxSetInternalWindowPos.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserSetInternalWindowPos(__int64 a1, int a2, __int128 *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  struct tagWND *v9; // rsi
  int v10; // edi
  __int64 v11; // rdx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+28h] [rbp-60h] BYREF
  __int128 v14; // [rsp+40h] [rbp-48h]

  v6 = EnterCrit(0LL, 0LL);
  v7 = ValidateHwnd(a1);
  v9 = (struct tagWND *)v7;
  v10 = 0;
  if ( v7 )
  {
    v8 = (*(_WORD *)(*(_QWORD *)(v7 + 40) + 42LL) & 0x2FFFu) - 669;
    if ( (v8 & 0xFFFFFFFD) != 0 )
    {
      Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, v6, v7);
      if ( (a2 & 0xFFFFFFF0) != 0 )
      {
        UserSetLastError(1004);
      }
      else
      {
        if ( (unsigned __int64)a3 >= MmUserProbeAddress )
          a3 = (__int128 *)MmUserProbeAddress;
        v14 = *a3;
        v10 = xxxSetInternalWindowPos(v9);
      }
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v11);
    }
  }
  UserSessionSwitchLeaveCrit(v8);
  return v10;
}
