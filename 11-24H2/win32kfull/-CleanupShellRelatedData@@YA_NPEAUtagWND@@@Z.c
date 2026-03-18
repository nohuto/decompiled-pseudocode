/*
 * XREFs of ?CleanupShellRelatedData@@YA_NPEAUtagWND@@@Z @ 0x1402B4154
 * Callers:
 *     ?xxxFreeWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x14002E770 (-xxxFreeWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     SetOrClrWF @ 0x140049160 (SetOrClrWF.c)
 *     DwmAsyncShellWindowChange @ 0x14016A814 (DwmAsyncShellWindowChange.c)
 *     _DeregisterShellHookWindow @ 0x140196710 (_DeregisterShellHookWindow.c)
 *     UpdatePointerRedirIsAlive @ 0x14019FE7C (UpdatePointerRedirIsAlive.c)
 *     _FindActivationFilterWindow @ 0x1401AA41C (_FindActivationFilterWindow.c)
 *     CleanupIAMAccess @ 0x140212B70 (CleanupIAMAccess.c)
 *     ?SetWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z @ 0x140220244 (-SetWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z.c)
 *     ?GetShellSpecialWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@W4SHELL_SPECIAL_WINDOW@@@Z @ 0x1402C00B4 (-GetShellSpecialWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@W4SHELL_SPECIAL_WIND.c)
 *     ?SetShellSpecialWindow@ShellWindowManagement@@YAXPEAUtagDESKTOP@@PEAUtagWND@@W4SHELL_SPECIAL_WINDOW@@@Z @ 0x1402C09C8 (-SetShellSpecialWindow@ShellWindowManagement@@YAXPEAUtagDESKTOP@@PEAUtagWND@@W4SHELL_SPECIAL_WIN.c)
 */

bool __fastcall CleanupShellRelatedData(struct tagWND *a1, __int64 a2, struct tagWND *a3)
{
  __int64 v3; // rax
  bool v4; // si
  struct tagWND **v6; // rax
  struct tagWND **v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 **v11; // rcx
  __int64 v12; // rbx
  void *v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // r8
  int v16; // r9d
  __int64 v17; // rcx
  char *ActivationFilterWindow; // rax
  char *v20; // rbx
  _QWORD *v21; // rcx
  void **v22; // rax

  v3 = *((_QWORD *)a1 + 3);
  v4 = 0;
  if ( v3 )
  {
    v6 = *(struct tagWND ***)(v3 + 8);
    if ( v6[23] == a1 )
    {
      *((_QWORD *)*v6 + 4) = 0LL;
      HMAssignmentUnlock(v6 + 23);
    }
    v7 = *(struct tagWND ***)(*((_QWORD *)a1 + 3) + 8LL);
    if ( v7[24] == a1 )
    {
      *((_QWORD *)*v7 + 5) = 0LL;
      HMAssignmentUnlock(v7 + 24);
    }
    v8 = *((_QWORD *)a1 + 3);
    if ( a1 == *(struct tagWND **)(*(_QWORD *)(v8 + 8) + 168LL) )
    {
      CleanupIAMAccess((struct tagDESKTOP *)v8, a2);
      v9 = *(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL);
      *(_QWORD *)(*(_QWORD *)v9 + 24LL) = 0LL;
      HMAssignmentUnlock(v9 + 168);
      if ( (unsigned int)IsWindowDesktopComposed(a1) )
      {
        v11 = *(__int64 ***)(*((_QWORD *)a1 + 3) + 8LL);
        v12 = **v11;
        v13 = (void *)ReferenceDwmApiPort(v11, v10);
        DwmAsyncShellWindowChange(v13, 0LL, v12);
      }
      v4 = (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)a1 + 3) + 8LL) + 64LL) & 2) != 0;
    }
    else if ( *(struct tagWND **)(v8 + 304) == a1 )
    {
      HMAssignmentUnlock(v8 + 304);
    }
    else if ( *(struct tagWND **)(v8 + 328) == a1 )
    {
      ShellWindowManagement::SetWindow((ShellWindowManagement *)v8, 0LL, a3);
    }
    else if ( a1 == (struct tagWND *)ShellWindowManagement::GetShellSpecialWindow(v8, 0LL) )
    {
      ShellWindowManagement::SetShellSpecialWindow(*((_QWORD *)a1 + 3), 0LL, 0LL);
    }
    else
    {
      ActivationFilterWindow = (char *)FindActivationFilterWindow((__int64)a1);
      v20 = ActivationFilterWindow;
      if ( ActivationFilterWindow )
      {
        v21 = *(_QWORD **)ActivationFilterWindow;
        if ( *(char **)(*(_QWORD *)ActivationFilterWindow + 8LL) != ActivationFilterWindow
          || (v22 = (void **)*((_QWORD *)ActivationFilterWindow + 1), *v22 != v20) )
        {
          __fastfail(3u);
        }
        *v22 = v21;
        v21[1] = v22;
        HMAssignmentUnlock(v20 + 16);
        Win32FreePool(v20);
      }
    }
    UpdatePointerRedirIsAlive(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL));
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 23LL) & 0x40) != 0 )
      DeregisterShellHookWindow(a1, v14, v15, v16);
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 0x20) != 0 )
    {
      v17 = **(_QWORD **)(*((_QWORD *)a1 + 3) + 8LL);
      --*(_DWORD *)(v17 + 48);
      SetOrClrWF(0, a1, 0x20u, 1);
    }
  }
  return v4;
}
