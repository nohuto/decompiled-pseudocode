/*
 * XREFs of NtUserSetWindowPlacement @ 0x1400861F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x140034C70 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     xxxSetWindowPlacement @ 0x140086334 (xxxSetWindowPlacement.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 */

__int64 __fastcall NtUserSetWindowPlacement(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  struct tagWND *v6; // rsi
  int v7; // edi
  __int64 v8; // rdx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+38h] [rbp-50h] BYREF
  __int128 v11; // [rsp+48h] [rbp-40h]
  __int128 v12; // [rsp+58h] [rbp-30h]
  __int64 v13; // [rsp+68h] [rbp-20h]
  int v14; // [rsp+70h] [rbp-18h]

  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0;
  v4 = EnterCrit(0LL, 0LL);
  v5 = ValidateHwnd(a1);
  v6 = (struct tagWND *)v5;
  v7 = 0;
  if ( v5 && (((*(_WORD *)(*(_QWORD *)(v5 + 40) + 42LL) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0 )
  {
    Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, v4, v5);
    if ( a2 >= MmUserProbeAddress )
      a2 = MmUserProbeAddress;
    v11 = *(_OWORD *)a2;
    v12 = *(_OWORD *)(a2 + 16);
    v13 = *(_QWORD *)(a2 + 32);
    v14 = *(_DWORD *)(a2 + 40);
    if ( (_DWORD)v11 == 44 || *(_WORD *)(v4 + 672) < 0x400u )
      v7 = xxxSetWindowPlacement(v6);
    else
      UserSetLastError(87);
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v8);
  }
  UserSessionSwitchLeaveCrit();
  return v7;
}
