/*
 * XREFs of ?zzzImeSetOwnerWindow@@YAXPEAUtagWND@@0@Z @ 0x1C00A6F64
 * Callers:
 *     NtUserSetImeOwnerWindow @ 0x1C00A6B90 (NtUserSetImeOwnerWindow.c)
 * Callees:
 *     ?GetWindowCloakStateComponentUIAware@@YAKQEAUtagWND@@@Z @ 0x1C004533C (-GetWindowCloakStateComponentUIAware@@YAKQEAUtagWND@@@Z.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@PEAX@Z @ 0x1C00A70B8 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@.c)
 *     GetNonChildAncestor @ 0x1C00A70E4 (GetNonChildAncestor.c)
 *     DwmAsyncOwnerChange @ 0x1C00AA8FC (DwmAsyncOwnerChange.c)
 *     SetWindowGroupBand @ 0x1C00AD874 (SetWindowGroupBand.c)
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z @ 0x1C00B5610 (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

void __fastcall zzzImeSetOwnerWindow(struct tagWND *a1, struct tagWND *a2)
{
  __int64 v3; // rcx
  __int64 NonChildAncestor; // rax
  __int16 v5; // r9
  struct tagWND *v6; // r8
  struct tagWND *v7; // rbx
  unsigned int WindowCloakStateComponentUIAware; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  void *v11; // rax
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v13[24]; // [rsp+30h] [rbp-18h] BYREF

  v3 = *(_QWORD *)(*((_QWORD *)a2 + 17) + 8LL);
  if ( (*(_BYTE *)(v3 + 10) & 1) == 0 && *(_WORD *)v3 != *(_WORD *)(gpsi + 898LL) )
  {
    NonChildAncestor = GetNonChildAncestor(a2, a2, gpsi);
    v6 = (struct tagWND *)NonChildAncestor;
    if ( NonChildAncestor )
    {
      do
      {
        if ( **(_WORD **)(*(_QWORD *)(NonChildAncestor + 136) + 8LL) == v5 )
        {
LABEL_17:
          v7 = 0LL;
          goto LABEL_11;
        }
        NonChildAncestor = *(_QWORD *)(NonChildAncestor + 120);
      }
      while ( NonChildAncestor );
      v7 = v6;
      do
      {
        if ( a1 == v6 )
        {
          UserSetLastError(87LL);
          goto LABEL_17;
        }
        v6 = (struct tagWND *)*((_QWORD *)v6 + 13);
      }
      while ( v6 );
      if ( *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL) != *(_DWORD *)(*((_QWORD *)v7 + 5) + 236LL) )
        SetWindowGroupBand(a1);
    }
    else
    {
      v7 = 0LL;
    }
LABEL_11:
    v12 = *(_OWORD *)LockPointer(v13, (char *)a1 + 120, v7);
    HMAssignmentLock(&v12, 1LL);
    if ( v7 )
    {
      WindowCloakStateComponentUIAware = GetWindowCloakStateComponentUIAware(v7);
      zzzSetWindowCompositionCloak(a1, 0LL, WindowCloakStateComponentUIAware);
    }
    if ( (unsigned int)IsWindowDesktopComposed(a1) )
    {
      v11 = (void *)ReferenceDwmApiPort(v10, v9);
      DwmAsyncOwnerChange(v11);
    }
  }
}
