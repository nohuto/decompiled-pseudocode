/*
 * XREFs of NtUserGetTitleBarInfo @ 0x140242EA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x140034C70 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x140074CFC (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetTitleBarInfo(__int64 a1, ULONG64 a2)
{
  int v4; // esi
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  struct tagWND *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  int v13; // r8d
  int v14; // r9d
  _BYTE *v15; // rdx
  __int64 v16; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v18; // rdx
  ULONG_PTR BugCheckParameter3[4]; // [rsp+48h] [rbp-70h] BYREF
  _OWORD v22[3]; // [rsp+68h] [rbp-50h] BYREF

  memset(v22, 0, 44);
  v4 = 1;
  v5 = EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v8 = (struct tagWND *)v6;
  if ( v6 )
  {
    Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, v5, v6);
    v12 = -PsGetCurrentProcessWow64Process(v10, v9, v11);
    v15 = (_BYTE *)a2;
    if ( ((v12 != 0 ? 0 : 3) & (unsigned int)a2) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a2 >= MmUserProbeAddress )
      v15 = (_BYTE *)MmUserProbeAddress;
    *v15 = *v15;
    v15[43] = v15[43];
    LODWORD(v22[0]) = *(_DWORD *)a2;
    if ( LODWORD(v22[0]) == 44 )
    {
      memset((char *)&v22[1] + 4, 0, 24);
      xxxCommonGetTitleBarInfo(v8, (struct tagTITLEBARINFO *)v22, v13, v14);
    }
    else
    {
      UserSetLastError(87);
      v4 = 0;
    }
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v16);
    if ( (unsigned __int8)ShouldVirtualizeWindowRect(v8, CurrentThreadDpiAwarenessContext) )
      TransformRectBetweenCoordinateSpaces((char *)v22 + 4, (char *)v22 + 4, 0LL, v8);
    if ( v4 )
    {
      *(_OWORD *)a2 = v22[0];
      *(_OWORD *)(a2 + 16) = v22[1];
      *(_QWORD *)(a2 + 32) = *(_QWORD *)&v22[2];
      *(_DWORD *)(a2 + 40) = DWORD2(v22[2]);
    }
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v18);
  }
  else
  {
    v4 = 0;
  }
  UserSessionSwitchLeaveCrit(v7);
  return v4;
}
