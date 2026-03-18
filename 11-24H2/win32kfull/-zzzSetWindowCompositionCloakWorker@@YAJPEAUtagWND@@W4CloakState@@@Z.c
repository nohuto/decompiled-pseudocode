/*
 * XREFs of ?zzzSetWindowCompositionCloakWorker@@YAJPEAUtagWND@@W4CloakState@@@Z @ 0x14009377C
 * Callers:
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakState@@@Z @ 0x140092EAC (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakState@@@Z.c)
 *     ?zzzSetWindowCompositionCloakWorker@@YAJPEAUtagWND@@W4CloakState@@@Z @ 0x14009377C (-zzzSetWindowCompositionCloakWorker@@YAJPEAUtagWND@@W4CloakState@@@Z.c)
 *     ?zzzUpdateWindowCloak@@YAXPEAUtagWND@@W4CloakState@@1@Z @ 0x1400943FC (-zzzUpdateWindowCloak@@YAXPEAUtagWND@@W4CloakState@@1@Z.c)
 * Callees:
 *     ?zzzSetWindowCompositionCloakWorker@@YAJPEAUtagWND@@W4CloakState@@@Z @ 0x14009377C (-zzzSetWindowCompositionCloakWorker@@YAJPEAUtagWND@@W4CloakState@@@Z.c)
 *     ?_GetWindowCloakState@@YA?AW4CloakState@@PEBUtagWND@@@Z @ 0x1400938F0 (-_GetWindowCloakState@@YA-AW4CloakState@@PEBUtagWND@@@Z.c)
 *     ?IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1400943C8 (-IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?zzzUpdateWindowCloak@@YAXPEAUtagWND@@W4CloakState@@1@Z @ 0x1400943FC (-zzzUpdateWindowCloak@@YAXPEAUtagWND@@W4CloakState@@1@Z.c)
 *     NextOwnedWindow @ 0x140146EE0 (NextOwnedWindow.c)
 *     ?GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@0@Z @ 0x1402C84E4 (-GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@0@Z.c)
 */

__int64 __fastcall zzzSetWindowCompositionCloakWorker(const struct tagWND *a1, unsigned int a2)
{
  int v4; // esi
  unsigned int WindowCloakState; // eax
  struct tagWND *NextComponentWindow; // rbx
  __int64 v8; // r8
  struct tagWND *v9; // rdx
  __int64 i; // rcx
  const struct tagWND *j; // rbx
  const struct tagWND *v12; // rcx
  const struct tagWND *v13; // rax
  bool k; // zf
  const struct tagWND *v15; // rcx
  const struct tagWND *v16; // rax
  bool m; // zf
  __int64 OwnedWindow; // rax
  __int64 v19; // rbp

  v4 = 0;
  WindowCloakState = _GetWindowCloakState(a1);
  if ( a2 != WindowCloakState )
  {
    zzzUpdateWindowCloak(a1, WindowCloakState, a2);
    if ( !(unsigned int)CoreWindowProp::IsHost(a1) )
      goto LABEL_7;
    NextComponentWindow = CoreWindowProp::GetNextComponentWindow(a1, 0LL);
    if ( !NextComponentWindow )
      goto LABEL_7;
    do
    {
      v8 = *((_QWORD *)NextComponentWindow + 13);
      v9 = NextComponentWindow;
      for ( i = 0LL; ; i = v19 )
      {
        OwnedWindow = NextOwnedWindow(i, v9, v8);
        v19 = OwnedWindow;
        if ( !OwnedWindow )
          break;
        v4 = zzzSetWindowCompositionCloakWorker(OwnedWindow, a2);
        if ( v4 < 0 )
          break;
        v8 = *((_QWORD *)a1 + 13);
        v9 = a1;
      }
      NextComponentWindow = CoreWindowProp::GetNextComponentWindow(a1, NextComponentWindow);
    }
    while ( NextComponentWindow );
    if ( v4 >= 0 )
    {
LABEL_7:
      for ( j = *(const struct tagWND **)(*((_QWORD *)a1 + 13) + 112LL); j; j = (const struct tagWND *)*((_QWORD *)j + 11) )
      {
        v12 = (const struct tagWND *)*((_QWORD *)j + 15);
        v13 = j;
        for ( k = j == v12; !k; k = v12 == *((const struct tagWND **)j + 13) )
        {
          v13 = v12;
          if ( !v12 )
            break;
          v12 = (const struct tagWND *)*((_QWORD *)v12 + 13);
        }
        if ( a1 == v13 )
          break;
      }
LABEL_13:
      if ( j )
      {
        v4 = zzzSetWindowCompositionCloakWorker(j, a2);
        if ( v4 >= 0 )
        {
          while ( 1 )
          {
            j = (const struct tagWND *)*((_QWORD *)j + 11);
            if ( !j )
              break;
            v15 = (const struct tagWND *)*((_QWORD *)j + 15);
            v16 = j;
            for ( m = j == v15; !m; m = v15 == *((const struct tagWND **)j + 13) )
            {
              v16 = v15;
              if ( !v15 )
                break;
              v15 = (const struct tagWND *)*((_QWORD *)v15 + 13);
            }
            if ( a1 == v16 )
              goto LABEL_13;
          }
        }
      }
    }
  }
  return (unsigned int)v4;
}
