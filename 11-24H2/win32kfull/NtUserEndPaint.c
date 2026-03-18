/*
 * XREFs of NtUserEndPaint @ 0x140034A40
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x140034C70 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     xxxEndPaint @ 0x140035878 (xxxEndPaint.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     ?ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z @ 0x140291AF0 (-ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall NtUserEndPaint(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  struct tagWND *v6; // r14
  int v7; // edi
  ULONG_PTR BugCheckParameter3[4]; // [rsp+30h] [rbp-78h] BYREF
  _OWORD v10[4]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v11; // [rsp+90h] [rbp-18h]

  memset_0(v10, 0, 0x48uLL);
  v4 = EnterCrit(0LL, 0LL);
  v5 = ValidateReceivingHwnd(a1, 1LL);
  v6 = (struct tagWND *)v5;
  v7 = 0;
  if ( v5 )
  {
    Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, v4, v5);
    if ( a2 >= MmUserProbeAddress )
      a2 = MmUserProbeAddress;
    v10[0] = *(_OWORD *)a2;
    v10[1] = *(_OWORD *)(a2 + 16);
    v10[2] = *(_OWORD *)(a2 + 32);
    v10[3] = *(_OWORD *)(a2 + 48);
    v11 = *(_QWORD *)(a2 + 64);
    v7 = xxxEndPaint(v6);
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3);
  }
  UserSessionSwitchLeaveCrit();
  return v7;
}
