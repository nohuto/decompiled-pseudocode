/*
 * XREFs of _RegisterShellHookWindow @ 0x1C0095D74
 * Callers:
 *     NtUserRegisterShellHookWindow @ 0x1C0095CC0 (NtUserRegisterShellHookWindow.c)
 * Callees:
 *     ?VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z @ 0x1C0042BA8 (-VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z.c)
 *     SetOrClrWF @ 0x1C00B5D8C (SetOrClrWF.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall RegisterShellHookWindow(struct tagWND *a1)
{
  __int64 v1; // rax
  __int64 v3; // rcx

  v1 = *((_QWORD *)a1 + 5);
  if ( *(char *)(v1 + 20) < 0 || *(char *)(v1 + 19) < 0 )
  {
    UserSetLastError(87LL);
  }
  else
  {
    v3 = *((_QWORD *)a1 + 3);
    if ( v3 && (unsigned int)VWPLAddBase((struct tagVWPL **)(*(_QWORD *)(v3 + 8) + 240LL), 0LL, a1, 2u) )
    {
      SetOrClrWF(1LL, a1, 1856LL, 1LL);
      return 1LL;
    }
  }
  return 0LL;
}
