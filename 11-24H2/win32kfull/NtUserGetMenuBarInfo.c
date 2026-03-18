/*
 * XREFs of NtUserGetMenuBarInfo @ 0x1401B0300
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x140034C70 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     xxxGetMenuBarInfo @ 0x1401B04B0 (xxxGetMenuBarInfo.c)
 *     ?ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z @ 0x140291AF0 (-ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetMenuBarInfo(__int64 a1, unsigned int a2, unsigned int a3, ULONG64 a4)
{
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  _BYTE *v12; // rdx
  int MenuBarInfo; // ebx
  __int64 v14; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v16; // rdx
  ULONG_PTR BugCheckParameter3[4]; // [rsp+40h] [rbp-88h] BYREF
  __int128 v20; // [rsp+60h] [rbp-68h] BYREF
  __int128 v21; // [rsp+70h] [rbp-58h]
  __int128 v22; // [rsp+80h] [rbp-48h]

  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v8 = EnterCrit(0LL, 0LL);
  v9 = ValidateReceivingHwnd(a1, 1LL);
  v11 = v9;
  if ( v9 )
  {
    Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, v8, v9);
    v12 = (_BYTE *)a4;
    if ( (a4 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a4 >= MmUserProbeAddress )
      v12 = (_BYTE *)MmUserProbeAddress;
    *v12 = *v12;
    v12[47] = v12[47];
    LODWORD(v20) = *(_DWORD *)a4;
    MenuBarInfo = xxxGetMenuBarInfo(v11, a2, a3, &v20);
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v14);
    if ( (unsigned __int8)ShouldVirtualizeWindowRect(v11, CurrentThreadDpiAwarenessContext) )
      TransformRectBetweenCoordinateSpaces((char *)&v20 + 4, (char *)&v20 + 4, 0LL, v11);
    if ( MenuBarInfo )
    {
      DWORD1(v21) = 0;
      *((_QWORD *)&v22 + 1) = BYTE8(v22) & 3;
      *(_OWORD *)a4 = v20;
      *(_OWORD *)(a4 + 16) = v21;
      *(_OWORD *)(a4 + 32) = v22;
    }
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v16);
  }
  else
  {
    MenuBarInfo = 0;
  }
  UserSessionSwitchLeaveCrit(v10);
  return MenuBarInfo;
}
