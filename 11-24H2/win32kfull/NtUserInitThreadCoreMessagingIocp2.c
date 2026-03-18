/*
 * XREFs of NtUserInitThreadCoreMessagingIocp2 @ 0x1401C5FD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x140034C70 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     _InitThreadCoreMessagingIocp2 @ 0x1401C60DC (_InitThreadCoreMessagingIocp2.c)
 *     ?ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z @ 0x140291AF0 (-ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z.c)
 *     RtlCopyVolatileMemory @ 0x140340280 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserInitThreadCoreMessagingIocp2(__int64 a1, void *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 inited; // rbx
  ULONG_PTR BugCheckParameter3[4]; // [rsp+38h] [rbp-20h] BYREF
  int Src; // [rsp+70h] [rbp+18h] BYREF

  v4 = EnterCrit(0LL, 0LL);
  v5 = ValidateReceivingHwnd(a1, 0LL);
  v7 = v5;
  if ( v5 )
  {
    Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, v4, v5);
    if ( a2 )
    {
      Src = 0;
      inited = InitThreadCoreMessagingIocp2(v7, &Src);
      if ( inited )
      {
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (void *)MmUserProbeAddress;
        RtlCopyVolatileMemory(a2, &Src, 4uLL);
      }
    }
    else
    {
      UserSetLastError(87);
      inited = 0LL;
    }
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v8);
  }
  else
  {
    inited = 0LL;
  }
  UserSessionSwitchLeaveCrit(v6);
  return inited;
}
