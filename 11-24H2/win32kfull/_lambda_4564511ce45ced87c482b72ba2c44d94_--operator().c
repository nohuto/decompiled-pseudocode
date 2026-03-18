/*
 * XREFs of _lambda_4564511ce45ced87c482b72ba2c44d94_::operator() @ 0x140275328
 * Callers:
 *     _lambda_4564511ce45ced87c482b72ba2c44d94_::_lambda_invoker_cdecl_ @ 0x140275110 (_lambda_4564511ce45ced87c482b72ba2c44d94_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?IsWindowActivateable@@YA_NPEBUtagWND@@@Z @ 0x1400F6BF4 (-IsWindowActivateable@@YA_NPEBUtagWND@@@Z.c)
 *     ?GetShellSpecialWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@W4SHELL_SPECIAL_WINDOW@@@Z @ 0x1402C00B4 (-GetShellSpecialWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@W4SHELL_SPECIAL_WIND.c)
 */

bool __fastcall lambda_4564511ce45ced87c482b72ba2c44d94_::operator()(__int64 a1, __int64 a2, _OWORD *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 UserSessionState; // rax
  const struct tagWND *ShellSpecialWindow; // rdi
  __int128 v10; // [rsp+20h] [rbp-18h]

  *a3 = 0LL;
  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18944) == *(_QWORD *)(*(_QWORD *)(a2 + 16) + 472LL) )
  {
    v6 = *(unsigned int *)(*(_QWORD *)(a2 + 40) + 236LL);
    if ( (_DWORD)v6 != 2 && (_DWORD)v6 != 16 )
    {
      UserSessionState = W32GetUserSessionState(v6, v5);
      ShellSpecialWindow = (const struct tagWND *)ShellWindowManagement::GetShellSpecialWindow(
                                                    *(_QWORD *)(UserSessionState + 19200),
                                                    0LL);
      if ( IsWindowActivateable(ShellSpecialWindow) )
      {
        *(_QWORD *)&v10 = ShellSpecialWindow;
        *((_QWORD *)&v10 + 1) = 5LL;
        *a3 = v10;
      }
    }
  }
  return *(_QWORD *)a3 != 0LL;
}
