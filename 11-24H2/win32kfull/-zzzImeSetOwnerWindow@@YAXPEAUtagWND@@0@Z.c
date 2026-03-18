/*
 * XREFs of ?zzzImeSetOwnerWindow@@YAXPEAUtagWND@@0@Z @ 0x140091D68
 * Callers:
 *     NtUserSetImeOwnerWindow @ 0x140246430 (NtUserSetImeOwnerWindow.c)
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     DwmAsyncOwnerChange @ 0x14009188C (DwmAsyncOwnerChange.c)
 *     GetNonChildAncestor @ 0x140091F0C (GetNonChildAncestor.c)
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakState@@@Z @ 0x140092EAC (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakState@@@Z.c)
 *     ?GetWindowCloakStateComponentUIAware@@YA?AW4CloakState@@PEBUtagWND@@@Z @ 0x140093708 (-GetWindowCloakStateComponentUIAware@@YA-AW4CloakState@@PEBUtagWND@@@Z.c)
 *     SetWindowGroupBand @ 0x1401571C4 (SetWindowGroupBand.c)
 */

void __fastcall zzzImeSetOwnerWindow(struct tagWND *a1, struct tagWND *a2)
{
  __int16 *v4; // rbx
  __int16 v5; // bx
  __int64 NonChildAncestor; // rbp
  __int64 *v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int16 *v10; // rdx
  __int16 v11; // bx
  __int64 *i; // rax
  __int64 v13; // rdx
  unsigned int WindowCloakStateComponentUIAware; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  void *v18; // rax
  _QWORD v19[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = *(__int16 **)(*((_QWORD *)a2 + 17) + 8LL);
  if ( (v4[5] & 1) == 0 )
  {
    v5 = *v4;
    if ( v5 != *(_WORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 19928) + 898LL) )
    {
      NonChildAncestor = GetNonChildAncestor(a2);
      v7 = (__int64 *)NonChildAncestor;
      v8 = 0LL;
      while ( NonChildAncestor )
      {
        v9 = *(_QWORD *)(NonChildAncestor + 136);
        v10 = *(__int16 **)(v9 + 8);
        v11 = *v10;
        if ( v11 == *(_WORD *)(*(_QWORD *)(W32GetUserSessionState(v9, v10) + 19928) + 898LL) )
        {
          v7 = 0LL;
          break;
        }
        NonChildAncestor = *(_QWORD *)(NonChildAncestor + 120);
      }
      for ( i = v7; i; i = (__int64 *)i[13] )
      {
        if ( a1 == (struct tagWND *)i )
        {
          UserSetLastError(87);
          v7 = 0LL;
          goto LABEL_15;
        }
      }
      if ( v7 && *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL) != *(_DWORD *)(v7[5] + 236) )
        SetWindowGroupBand(a1);
LABEL_15:
      if ( v7 )
        v13 = v7[6];
      else
        v13 = 0LL;
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 64LL) = v13;
      v19[0] = (char *)a1 + 120;
      v19[1] = v7;
      HMAssignmentLock(v19, 1LL);
      if ( v7 )
      {
        WindowCloakStateComponentUIAware = GetWindowCloakStateComponentUIAware(v7);
        zzzSetWindowCompositionCloak(a1, WindowCloakStateComponentUIAware);
      }
      if ( (unsigned int)IsWindowDesktopComposed(a1) )
      {
        if ( v7 )
          v8 = *v7;
        v17 = *(_QWORD *)a1;
        v18 = (void *)ReferenceDwmApiPort(v16, v15);
        DwmAsyncOwnerChange(v18, v17, v8);
      }
    }
  }
}
