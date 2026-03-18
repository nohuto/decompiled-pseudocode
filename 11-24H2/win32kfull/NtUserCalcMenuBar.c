/*
 * XREFs of NtUserCalcMenuBar @ 0x1400337C0
 * Callers:
 *     <none>
 * Callees:
 *     xxxCalcMenuBar @ 0x1400338E4 (xxxCalcMenuBar.c)
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x140034C70 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ?ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z @ 0x140291AF0 (-ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z.c)
 */

__int64 __fastcall NtUserCalcMenuBar(__int64 a1, int a2, int a3, int a4, ULONG64 a5)
{
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rsi
  unsigned int v12; // edi
  __int128 *v13; // rdx
  __int128 v14; // xmm0
  ULONG_PTR BugCheckParameter3[2]; // [rsp+38h] [rbp-40h] BYREF
  __int128 v17; // [rsp+48h] [rbp-30h] BYREF

  v9 = EnterCrit(0LL, 0LL);
  v10 = ValidateReceivingHwnd(a1, 1LL);
  v11 = v10;
  v12 = 0;
  if ( v10 )
  {
    Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, v9, v10);
    if ( a2 < 0 || a3 < 0 || a4 < 0 )
    {
      UserSetLastError(87LL);
    }
    else
    {
      v13 = (__int128 *)a5;
      if ( a5 )
      {
        if ( a5 >= MmUserProbeAddress )
          v13 = (__int128 *)MmUserProbeAddress;
        v14 = *v13;
      }
      else
      {
        v14 = *(_OWORD *)(*(_QWORD *)(v11 + 40) + 88LL);
      }
      v17 = v14;
      v12 = xxxCalcMenuBar(v11, a2, a3, a4, (__int64)&v17);
    }
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3);
  }
  UserSessionSwitchLeaveCrit();
  return v12;
}
