/*
 * XREFs of ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1402405A4
 * Callers:
 *     NtUserRegisterWindowArrangementCallout @ 0x140244F40 (NtUserRegisterWindowArrangementCallout.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     IAMThreadAccessGranted @ 0x1400F5BC0 (IAMThreadAccessGranted.c)
 *     IsShellProcess @ 0x1400F7338 (IsShellProcess.c)
 *     IsMessageOnlyWindow @ 0x140149C30 (IsMessageOnlyWindow.c)
 *     IsIAMThread @ 0x140156680 (IsIAMThread.c)
 *     ?_UnregisterHotKey@@YA_NPEAUtagWND@@H@Z @ 0x140158E6C (-_UnregisterHotKey@@YA_NPEAUtagWND@@H@Z.c)
 *     ?Registered@ShellWindowManagement@@YA_NXZ @ 0x1402141AC (-Registered@ShellWindowManagement@@YA_NXZ.c)
 *     ?SetWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z @ 0x140220244 (-SetWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z.c)
 */

__int64 __fastcall _RegisterWindowArrangementCallout(struct tagWND *a1, __int64 a2)
{
  int v2; // ebp
  __int64 *v4; // rdi
  ShellWindowManagement *v5; // rsi
  __int64 v6; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v8; // eax
  __int64 v9; // rdx
  ShellWindowManagement *v10; // rcx
  bool v11; // al
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // ecx
  int v15; // eax
  struct tagWND *v16; // r8
  struct tagDESKTOP *v17; // rdx

  v2 = a2;
  v4 = (__int64 *)PtiCurrent((__int64)a1, a2);
  v5 = (ShellWindowManagement *)v4[62];
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x80u) != 0 )
    goto LABEL_21;
  LOBYTE(v8) = IAMThreadAccessGranted((const struct tagTHREADINFO *)v4);
  if ( !v8 )
    goto LABEL_21;
  v11 = ShellWindowManagement::Registered(v10, v9);
  if ( !v2 )
  {
    if ( !v11 )
      return 1LL;
    if ( *(struct tagWND **)(*((_QWORD *)a1 + 3) + 328LL) == a1
      && *(__int64 **)(*(_QWORD *)(*((_QWORD *)PtiCurrent(v13, v12) + 62) + 328LL) + 16LL) == v4 )
    {
      _UnregisterHotKey(a1, 61536LL);
      v17 = 0LL;
LABEL_19:
      ShellWindowManagement::SetWindow(v5, v17, v16);
      return 1LL;
    }
LABEL_21:
    v14 = 5;
    goto LABEL_22;
  }
  if ( !v11 )
  {
    if ( *((__int64 **)a1 + 2) == v4 && (unsigned int)IsShellProcess(v4[58]) && IsIAMThread((__int64)v4) )
    {
      LOBYTE(v15) = IsMessageOnlyWindow((__int64)a1);
      if ( !v15 || (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) != 2 )
      {
        v14 = 87;
        goto LABEL_22;
      }
      v17 = a1;
      goto LABEL_19;
    }
    goto LABEL_21;
  }
  v14 = 1242;
LABEL_22:
  UserSetLastError(v14);
  return 0LL;
}
