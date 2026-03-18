/*
 * XREFs of NtUserPaintMonitor @ 0x14029A240
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x140034C70 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     ??0?$Win32HMOptionalThreadLock@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x14003F454 (--0-$Win32HMOptionalThreadLock@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140040874 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLockAlways@UtagACCELTABLE@@@@QEAA@XZ @ 0x14009D200 (--1-$Win32HMThreadLockAlways@UtagACCELTABLE@@@@QEAA@XZ.c)
 *     xxxDesktopPaintCallback @ 0x1401FA6B0 (xxxDesktopPaintCallback.c)
 */

_BOOL8 __fastcall NtUserPaintMonitor(__int64 a1, HDC a2, RECT *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r14
  BOOL v9; // esi
  struct tagTHREADINFO *v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int128 v14; // [rsp+28h] [rbp-50h] BYREF
  RECT v15; // [rsp+38h] [rbp-40h] BYREF
  ULONG_PTR v16[2]; // [rsp+48h] [rbp-30h] BYREF
  ULONG_PTR BugCheckParameter3[3]; // [rsp+58h] [rbp-20h] BYREF

  v14 = 0LL;
  EnterCrit(0LL, 0LL);
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (RECT *)MmUserProbeAddress;
  v15 = *a3;
  v8 = ValidateHmonitor(a1);
  v9 = 0;
  if ( v8 )
  {
    v10 = PtiCurrent(v7, v6);
    v11 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v10 + 62) + 8LL) + 24LL);
    Win32HMOptionalThreadLock<tagWND>::Win32HMOptionalThreadLock<tagWND>(BugCheckParameter3, (__int64)v10, v11);
    Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(v16, (__int64)v10, v8);
    v14 = (unsigned __int64)v11;
    v9 = xxxDesktopPaintCallback(v8, a2, &v15, (__int64)&v14);
    Win32HMThreadLockAlways<tagACCELTABLE>::~Win32HMThreadLockAlways<tagACCELTABLE>((ULONG_PTR)v16);
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v12);
  }
  UserSessionSwitchLeaveCrit(v7);
  return v9;
}
