/*
 * XREFs of ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x140255FF0
 * Callers:
 *     xxxSetWindowData @ 0x1402DD148 (xxxSetWindowData.c)
 * Callees:
 *     ?IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z @ 0x140048AF4 (-IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z.c)
 *     PostShellHookMessagesEx @ 0x140067280 (PostShellHookMessagesEx.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x140081090 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     ?PostIAMShellHookMessage@@YAXI_J@Z @ 0x140087614 (-PostIAMShellHookMessage@@YAXI_J@Z.c)
 *     DwmAsyncOwnerChange @ 0x14009188C (DwmAsyncOwnerChange.c)
 *     zzzAttachThreadInput @ 0x1401E1E5C (zzzAttachThreadInput.c)
 */

void __fastcall xxxHandleOwnerSwitch(struct tagWND *a1, struct tagWND *a2, struct tagWND *a3)
{
  __int64 v3; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rsi
  char v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // r15d
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rbx
  void *v24; // rax

  v3 = 0LL;
  if ( !a3 || (v7 = *((_QWORD *)a3 + 2), v8 = *((_QWORD *)a1 + 2), v7 == v8) )
  {
LABEL_7:
    if ( !a2 )
      goto LABEL_12;
    goto LABEL_8;
  }
  if ( !a2 || (v9 = *((_QWORD *)a2 + 2), v9 == v8) || v9 != v7 )
  {
    zzzAttachThreadInput(v8, v7, 0);
    goto LABEL_7;
  }
LABEL_8:
  v10 = *((_QWORD *)a2 + 2);
  v11 = *((_QWORD *)a1 + 2);
  if ( v10 != v11 && (!a3 || v10 != *((_QWORD *)a3 + 2)) )
    zzzAttachThreadInput(v11, v10, 1);
LABEL_12:
  v12 = 0LL;
  if ( a1 )
    v12 = *(_QWORD *)a1;
  v13 = IsTrayWindow(a1, 1LL);
  if ( !*(_QWORD *)(W32GetUserSessionState(v15, v14) + 18944)
    || (v18 = 1, *(struct tagWND **)(*(_QWORD *)(W32GetUserSessionState(v17, v16) + 18944) + 128LL) != a1) )
  {
    v18 = 0;
  }
  if ( !a3 )
  {
    if ( !a2 )
      goto LABEL_30;
    if ( v13 )
    {
      xxxCallHook(2LL, v12, 0LL, 10);
      PostShellHookMessagesEx((LastWokenThread *)2, v12);
    }
    v19 = v12;
    v20 = v18 != 0 ? 25 : 28;
    goto LABEL_29;
  }
  if ( a2 )
  {
    if ( a3 == a2 )
      goto LABEL_30;
    v19 = v12;
    if ( v18 )
      v20 = 27LL;
    else
      v20 = 30LL;
LABEL_29:
    PostIAMShellHookMessage(v20, v19);
    goto LABEL_30;
  }
  PostIAMShellHookMessage(v18 != 0 ? 26 : 29, v12);
  if ( v13 )
  {
    xxxCallHook(1LL, v12, 0LL, 10);
    PostShellHookMessagesEx((LastWokenThread *)1, v12);
  }
LABEL_30:
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    if ( a2 )
      v3 = *(_QWORD *)a2;
    v23 = *(_QWORD *)a1;
    v24 = (void *)ReferenceDwmApiPort(v22, v21);
    DwmAsyncOwnerChange(v24, v23, v3);
  }
}
