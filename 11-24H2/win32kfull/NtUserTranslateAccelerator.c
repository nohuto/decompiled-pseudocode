/*
 * XREFs of NtUserTranslateAccelerator @ 0x14009CCF0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x140034C70 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     HMValidateHandleWithDescriptor @ 0x140077C08 (HMValidateHandleWithDescriptor.c)
 *     xxxTranslateAccelerator @ 0x14009CDF0 (xxxTranslateAccelerator.c)
 *     ??1?$Win32HMThreadLockAlways@UtagACCELTABLE@@@@QEAA@XZ @ 0x14009D200 (--1-$Win32HMThreadLockAlways@UtagACCELTABLE@@@@QEAA@XZ.c)
 */

__int64 __fastcall NtUserTranslateAccelerator(__int64 a1, __int64 a2, __int128 *a3)
{
  __int64 v6; // rdx
  struct tagWND *v7; // rdi
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rsi
  struct tagTHREADINFO *v12; // rbx
  __int64 v13; // rdx
  ULONG_PTR v15[2]; // [rsp+28h] [rbp-60h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+38h] [rbp-50h] BYREF
  __int128 v17; // [rsp+48h] [rbp-40h]
  __int128 v18; // [rsp+58h] [rbp-30h]
  __int128 v19; // [rsp+68h] [rbp-20h]

  EnterCrit(0LL, 0LL);
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (__int128 *)MmUserProbeAddress;
  v17 = *a3;
  v18 = a3[1];
  v19 = a3[2];
  v7 = (struct tagWND *)ValidateHwnd(a1);
  v8 = 0;
  if ( v7 )
  {
    LOBYTE(v6) = 8;
    v11 = HMValidateHandleWithDescriptor(a2, v6);
    if ( v11 )
    {
      v12 = PtiCurrent(v10, v9);
      Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, (__int64)v12, (__int64)v7);
      Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(v15, (__int64)v12, v11);
      v8 = xxxTranslateAccelerator(v7);
      Win32HMThreadLockAlways<tagACCELTABLE>::~Win32HMThreadLockAlways<tagACCELTABLE>(v15);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v13);
    }
  }
  UserSessionSwitchLeaveCrit();
  return v8;
}
