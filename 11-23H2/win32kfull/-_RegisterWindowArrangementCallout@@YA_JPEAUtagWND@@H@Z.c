/*
 * XREFs of ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1C0072BD4
 * Callers:
 *     NtUserRegisterWindowArrangementCallout @ 0x1C0072B10 (NtUserRegisterWindowArrangementCallout.c)
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C0030E2C (IAMThreadAccessGranted.c)
 *     ?_UnregisterHotKey@@YAHPEAUtagWND@@H@Z @ 0x1C003EE94 (-_UnregisterHotKey@@YAHPEAUtagWND@@H@Z.c)
 *     ?_RegisterHotKey@@YAHPEAUtagWND@@P6AX_K_J@ZHIIPEAUHWND__@@@Z @ 0x1C0040AF8 (-_RegisterHotKey@@YAHPEAUtagWND@@P6AX_K_J@ZHIIPEAUHWND__@@@Z.c)
 *     ?SetWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z @ 0x1C0072D38 (-SetWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z.c)
 *     IsIAMThread @ 0x1C0072D9C (IsIAMThread.c)
 *     IsMessageOnlyWindow @ 0x1C0073600 (IsMessageOnlyWindow.c)
 *     IsShellProcess @ 0x1C00A688C (IsShellProcess.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall _RegisterWindowArrangementCallout(struct tagWND *a1, int a2)
{
  struct tagWND **v4; // rsi
  __int64 CurrentProcessWin32Process; // rax
  int v6; // eax
  struct tagWND *v7; // rcx
  __int64 v8; // rcx
  struct tagWND *v9; // r8
  struct tagWND *v10; // r8

  v4 = *(struct tagWND ***)(gptiCurrent + 456LL);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x80u) != 0 )
    goto LABEL_20;
  LOBYTE(v6) = IAMThreadAccessGranted(gptiCurrent);
  if ( !v6 )
    goto LABEL_20;
  v7 = v4[41];
  if ( !a2 )
  {
    if ( !v7 )
      return 1LL;
    if ( *(struct tagWND **)(*((_QWORD *)a1 + 3) + 328LL) == a1 && *((_QWORD *)v7 + 2) == gptiCurrent )
    {
      _UnregisterHotKey(a1, 61536);
      ShellWindowManagement::SetWindow((ShellWindowManagement *)v4, 0LL, v10);
      return 1LL;
    }
    goto LABEL_20;
  }
  if ( !v7 )
  {
    if ( *((_QWORD *)a1 + 2) == gptiCurrent
      && (unsigned int)IsShellProcess(*(_QWORD *)(gptiCurrent + 424LL))
      && (unsigned int)IsIAMThread(gptiCurrent) )
    {
      if ( !(unsigned int)IsMessageOnlyWindow(a1) || (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) != 2 )
      {
        v8 = 87LL;
        goto LABEL_21;
      }
      ShellWindowManagement::SetWindow((ShellWindowManagement *)v4, a1, v9);
      _RegisterHotKey(v4[41], 0LL, 4294967279LL, 24577, 0x73u, 0LL);
      return 1LL;
    }
LABEL_20:
    v8 = 5LL;
    goto LABEL_21;
  }
  v8 = 1242LL;
LABEL_21:
  UserSetLastError(v8);
  return 0LL;
}
