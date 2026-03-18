/*
 * XREFs of NtUserInvalidateRect @ 0x1402995B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14003F108 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140040874 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     xxxInvalidateRect @ 0x1402BD274 (xxxInvalidateRect.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserInvalidateRect(__int64 a1, __int128 *a2, unsigned int a3)
{
  __int64 v7; // rdi
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+40h] [rbp-48h] BYREF
  __int128 v13; // [rsp+50h] [rbp-38h] BYREF

  if ( !a1 )
    return 1LL;
  v13 = 0LL;
  EnterCrit(0LL, 0LL);
  v7 = ValidateHwnd(a1);
  if ( a2 )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (__int128 *)MmUserProbeAddress;
    v13 = *a2;
    a2 = &v13;
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(MmUserProbeAddress);
    if ( (unsigned __int8)ShouldVirtualizeWindowRect(v7, CurrentThreadDpiAwarenessContext) )
      TransformRectBetweenCoordinateSpaces(&v13, &v13, 0LL, v7);
  }
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, v7);
  v9 = xxxInvalidateRect(v7, a2, a3);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v10);
  UserSessionSwitchLeaveCrit(v11);
  return v9;
}
