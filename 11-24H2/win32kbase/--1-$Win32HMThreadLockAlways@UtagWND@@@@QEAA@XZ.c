/*
 * XREFs of ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14019F5FC
 * Callers:
 *     xxxDestroyThreadInfo @ 0x14015F444 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ @ 0x1400963B8 (--1-$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ.c)
 */

__int64 __fastcall Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(ULONG_PTR a1)
{
  return Win32HMThreadLockBase<tagKL,0,0>::~Win32HMThreadLockBase<tagKL,0,0>(a1);
}
