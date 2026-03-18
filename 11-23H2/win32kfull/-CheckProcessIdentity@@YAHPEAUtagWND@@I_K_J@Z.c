/*
 * XREFs of ?CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z @ 0x1C0099398
 * Callers:
 *     ?xxxWrapDesktopWndProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C0099340 (-xxxWrapDesktopWndProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     ?xxxWrapMenuWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C0150AE0 (-xxxWrapMenuWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     ?xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C01B7FA0 (-xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     ?xxxWrapSBWndProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C01B8160 (-xxxWrapSBWndProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     ?xxxWrapSwitchWndProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C01B81C0 (-xxxWrapSwitchWndProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C0034EAC (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     ?GetWindowMessageFilter@@YAPEAPEAXPEAUtagWND@@@Z @ 0x1C0035844 (-GetWindowMessageFilter@@YAPEAPEAXPEAUtagWND@@@Z.c)
 *     ?IsMessageAllowedByFilterEx@@YAHPEBQEAXIPEAPEAPEAX1@Z @ 0x1C003732C (-IsMessageAllowedByFilterEx@@YAHPEBQEAXIPEAPEAPEAX1@Z.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall CheckProcessIdentity(struct tagWND *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 CurrentProcessWin32Process; // rax
  _QWORD *v9; // rbx
  __int64 v10; // rsi
  void *const *WindowMessageFilter; // rax
  __int64 v13; // rdx
  int v14; // [rsp+50h] [rbp+8h] BYREF
  int v15; // [rsp+54h] [rbp+Ch]

  if ( a1 == (struct tagWND *)-1LL )
    goto LABEL_22;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v9 = (_QWORD *)CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v9 = (_QWORD *)(-(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process);
  v10 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
  if ( (_QWORD *)v10 == v9 )
    return 1LL;
  if ( a2 != 717 )
  {
    if ( (unsigned int)IsMessageAllowedByFilterEx(*(void *const **)(v10 + 872), a2, 0LL, 0LL) )
      return 1LL;
    WindowMessageFilter = GetWindowMessageFilter(a1);
    if ( (unsigned int)IsMessageAllowedByFilterEx(WindowMessageFilter, a2, 0LL, 0LL)
      || (unsigned int)IsMessageAlwaysAllowedAcrossIL(a2)
      || a2 == 274 && ((a3 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) == 0 && a3 != 61792 )
    {
      return 1LL;
    }
    if ( *(_QWORD *)v10 == gpepCSRSS )
    {
      v15 = 0;
      v14 = 0x2000;
    }
    else
    {
      v14 = *(_DWORD *)(v10 + 896);
      v15 = *(_DWORD *)(v10 + 900);
    }
    if ( (unsigned __int8)CheckAccess(v9 + 112, &v14) )
      return 1LL;
    if ( a2 == 793 )
    {
      v13 = *((_QWORD *)a1 + 2);
      if ( *(struct tagWND **)(v13 + 1432) == a1 && *(_QWORD *)(v13 + 432) == *(_QWORD *)(gptiCurrent + 432LL) )
        return 1LL;
    }
    EtwTraceUIPIMsgError(v9, v10, a2, a3, a4);
    UserSetLastError(5LL);
  }
  if ( *v9 == gpepCSRSS )
    return 1LL;
LABEL_22:
  UserSetLastError(5LL);
  return 0LL;
}
