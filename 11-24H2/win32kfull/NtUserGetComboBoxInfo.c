/*
 * XREFs of NtUserGetComboBoxInfo @ 0x1401C3780
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x140034C70 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     xxxGetComboBoxInfo @ 0x1401C3970 (xxxGetComboBoxInfo.c)
 *     ?ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z @ 0x140291AF0 (-ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall NtUserGetComboBoxInfo(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  _BYTE *v12; // rdx
  int ComboBoxInfo; // ebx
  __int64 v14; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v16; // rdx
  ULONG_PTR BugCheckParameter3[5]; // [rsp+48h] [rbp-80h] BYREF
  __int128 v20; // [rsp+70h] [rbp-58h] BYREF
  _OWORD v21[3]; // [rsp+80h] [rbp-48h] BYREF

  memset_0(&v20, 0, 0x40uLL);
  v4 = EnterCrit(0LL, 0LL);
  v5 = ValidateReceivingHwnd(a1, 1LL);
  v7 = v5;
  if ( v5 )
  {
    Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(BugCheckParameter3, v4, v5);
    v11 = -PsGetCurrentProcessWow64Process(v9, v8, v10);
    v12 = (_BYTE *)a2;
    if ( ((v11 != 0 ? 0 : 3) & (unsigned int)a2) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a2 >= MmUserProbeAddress )
      v12 = (_BYTE *)MmUserProbeAddress;
    *v12 = *v12;
    v12[63] = v12[63];
    LODWORD(v20) = *(_DWORD *)a2;
    ComboBoxInfo = xxxGetComboBoxInfo(v7, &v20);
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v14);
    if ( (unsigned __int8)ShouldVirtualizeWindowRect(v7, CurrentThreadDpiAwarenessContext) )
    {
      TransformRectBetweenCoordinateSpaces((char *)v21 + 4, (char *)v21 + 4, 0LL, v7);
      TransformRectBetweenCoordinateSpaces((char *)&v20 + 4, (char *)&v20 + 4, 0LL, v7);
    }
    if ( ComboBoxInfo )
    {
      *(_OWORD *)a2 = v20;
      *(_OWORD *)(a2 + 16) = v21[0];
      *(_OWORD *)(a2 + 32) = v21[1];
      *(_OWORD *)(a2 + 48) = v21[2];
    }
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v16);
  }
  else
  {
    ComboBoxInfo = 0;
  }
  UserSessionSwitchLeaveCrit(v6);
  return ComboBoxInfo;
}
