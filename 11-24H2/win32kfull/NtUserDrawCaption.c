/*
 * XREFs of NtUserDrawCaption @ 0x140293FD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x140034C70 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     xxxDrawCaptionTemp @ 0x14007B5FC (xxxDrawCaptionTemp.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     ?ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z @ 0x140291AF0 (-ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserDrawCaption(__int64 a1, HDC a2, _OWORD *a3, unsigned int a4)
{
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  struct tagWND *v11; // r14
  unsigned int v12; // edi
  __int64 v13; // rdx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v16[2]; // [rsp+68h] [rbp-50h] BYREF

  *(_OWORD *)v16 = 0LL;
  v8 = EnterCrit(0LL, 0LL);
  v9 = ValidateReceivingHwnd(a1, 1);
  v11 = (struct tagWND *)v9;
  v12 = 0;
  if ( v9 )
  {
    Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, v8, v9);
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      a3 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)v16 = *a3;
    v12 = xxxDrawCaptionTemp(v11, a2, (RECT *)v16, 0LL, 0LL, 0LL, a4);
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v13);
  }
  UserSessionSwitchLeaveCrit(v10);
  return v12;
}
