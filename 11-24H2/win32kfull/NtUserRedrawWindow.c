/*
 * XREFs of NtUserRedrawWindow @ 0x14003F320
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$Win32HMOptionalThreadLock@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x14003F454 (--0-$Win32HMOptionalThreadLock@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140040874 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxRedrawWindow @ 0x140042630 (xxxRedrawWindow.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserRedrawWindow(__int64 a1, __int128 *a2, __int64 a3, int a4)
{
  __int64 v7; // rbx
  int v8; // edi
  struct tagWND *v9; // r14
  ULONG_PTR BugCheckParameter3[3]; // [rsp+38h] [rbp-70h] BYREF
  __int128 v12; // [rsp+50h] [rbp-58h]

  v12 = 0LL;
  v7 = EnterCrit(0LL, 0LL);
  v8 = 0;
  if ( a1 )
  {
    v9 = (struct tagWND *)ValidateHwnd(a1);
    if ( !v9 )
      goto LABEL_7;
  }
  else
  {
    v9 = 0LL;
  }
  Win32HMOptionalThreadLock<tagWND>::Win32HMOptionalThreadLock<tagWND>(BugCheckParameter3, v7, v9);
  if ( a2 )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (__int128 *)MmUserProbeAddress;
    v12 = *a2;
  }
  if ( (a4 & 0xFFFFF000) != 0 )
    UserSetLastError(1004LL);
  else
    v8 = xxxRedrawWindow(v9);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3);
LABEL_7:
  UserSessionSwitchLeaveCrit();
  return v8;
}
