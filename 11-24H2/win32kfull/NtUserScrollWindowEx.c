/*
 * XREFs of NtUserScrollWindowEx @ 0x14029C180
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x140034C70 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     xxxScrollWindowEx @ 0x140258878 (xxxScrollWindowEx.c)
 *     ?ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z @ 0x140291AF0 (-ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserScrollWindowEx(
        __int64 a1,
        unsigned int a2,
        LONG a3,
        struct tagRECT *a4,
        ULONG64 a5,
        __int64 a6,
        ULONG64 a7,
        __int16 a8)
{
  struct tagRECT *v8; // rsi
  __int128 *v12; // r14
  _OWORD *v13; // r15
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rcx
  struct tagWND *v17; // rdi
  unsigned int v18; // ebx
  ULONG64 v19; // rdx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+50h] [rbp-B8h] BYREF
  struct tagRECT *v22; // [rsp+68h] [rbp-A0h]
  __int128 *v23; // [rsp+70h] [rbp-98h]
  __int64 v24; // [rsp+78h] [rbp-90h]
  struct tagRECT v25; // [rsp+90h] [rbp-78h] BYREF
  __int128 v26; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v27; // [rsp+B0h] [rbp-58h] BYREF

  v8 = a4;
  v22 = a4;
  v12 = (__int128 *)a5;
  v23 = (__int128 *)a5;
  v24 = a6;
  v13 = (_OWORD *)a7;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v14 = EnterCrit(0LL, 0LL);
  v15 = ValidateReceivingHwnd(a1, 1);
  v17 = (struct tagWND *)v15;
  if ( v15 )
  {
    Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, v14, v15);
    if ( v8 )
    {
      if ( (unsigned __int64)v8 >= MmUserProbeAddress )
        v8 = (struct tagRECT *)MmUserProbeAddress;
      v25 = *v8;
      v8 = &v25;
      v22 = &v25;
    }
    if ( a5 )
    {
      if ( a5 >= MmUserProbeAddress )
        v12 = (__int128 *)MmUserProbeAddress;
      v26 = *v12;
      v12 = &v26;
      v23 = &v26;
    }
    if ( *((_QWORD *)v17 + 13) )
    {
      v18 = xxxScrollWindowEx(
              v17,
              a2,
              a3,
              v8,
              (__int64)v12,
              v24,
              (struct tagRECT *)((unsigned __int64)&v27 & -(__int64)(a7 != 0)),
              a8);
      if ( a7 )
      {
        v19 = MmUserProbeAddress;
        if ( a7 >= MmUserProbeAddress )
          v13 = (_OWORD *)MmUserProbeAddress;
        *v13 = v27;
      }
    }
    else
    {
      v18 = 0;
      UserSetLastError(87);
    }
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v19);
  }
  else
  {
    v18 = 0;
  }
  UserSessionSwitchLeaveCrit(v16);
  return v18;
}
