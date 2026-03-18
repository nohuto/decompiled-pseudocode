/*
 * XREFs of zzzCalcStartCursorHide @ 0x14023E640
 * Callers:
 *     zzzWakeInputIdle @ 0x1400647B0 (zzzWakeInputIdle.c)
 *     xxxRealInternalGetMessage @ 0x140107DFC (xxxRealInternalGetMessage.c)
 *     ?xxxSetProcessInitState@@YAJPEAU_EPROCESS@@W4PROCESS_INIT_HINT@@@Z @ 0x1401897BC (-xxxSetProcessInitState@@YAJPEAU_EPROCESS@@W4PROCESS_INIT_HINT@@@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x14022D690 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?OnHideAppStartCursor@@YAXXZ @ 0x1402713D0 (-OnHideAppStartCursor@@YAXXZ.c)
 *     zzzShowStartGlass @ 0x1402883D4 (zzzShowStartGlass.c)
 * Callees:
 *     zzzUpdateCursorImage @ 0x140075AF0 (zzzUpdateCursorImage.c)
 *     ?IsSessionGlobalsAreaAllocatedAndFullyInitialized@Umfd@Gre@@YA_NXZ @ 0x14016F0DC (-IsSessionGlobalsAreaAllocatedAndFullyInitialized@Umfd@Gre@@YA_NXZ.c)
 *     ?IsProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NPEAU_EPROCESS@@@Z @ 0x14016F11C (-IsProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NPEAU_EPROCESS@@@Z.c)
 */

void __fastcall zzzCalcStartCursorHide(__int64 a1, __int64 a2)
{
  unsigned __int64 i; // rcx
  int v4; // ebp
  unsigned __int64 v5; // rsi
  struct _EPROCESS *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 *v12; // rcx
  __int64 *v13; // rdi
  __int64 v14; // rbx
  __int64 UserSessionState; // rax
  __int64 v16; // rcx
  unsigned int v17; // ebp
  __int64 v18; // rdx
  __int64 v19; // rcx

  i = 0xFFFFF78000000004uLL;
  v4 = a2;
  v5 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( a1 )
  {
    v6 = *(struct _EPROCESS **)a1;
    if ( Gre::Umfd::IsSessionGlobalsAreaAllocatedAndFullyInitialized((Gre::Umfd *)0xFFFFF78000000004LL, a2)
      && UmfdHostLifeTimeManager::IsProcessUmfdHost(v6, a2) )
    {
      __debugbreak();
    }
    if ( (*(_DWORD *)(a1 + 12) & 4) == 0 )
    {
      for ( i = *(_QWORD *)(W32GetUserSessionState(i, a2) + 36288); i; i = *(_QWORD *)(i + 32) )
      {
        if ( i == a1 )
          goto LABEL_11;
      }
      v7 = *(_QWORD *)(W32GetUserSessionState(0LL, a2) + 36288);
      *(_QWORD *)(a1 + 32) = v7;
      *(_QWORD *)(W32GetUserSessionState(v7, v8) + 36288) = a1;
    }
LABEL_11:
    *(_DWORD *)(a1 + 12) |= 4u;
    *(_DWORD *)(a1 + 24) = v5 + v4;
  }
  *(_DWORD *)(W32GetUserSessionState(i, a2) + 36304) = 0;
  v13 = (__int64 *)(W32GetUserSessionState(v10, v9) + 36288);
  v14 = *v13;
  while ( v14 )
  {
    v12 = (__int64 *)*(unsigned int *)(v14 + 12);
    LOBYTE(v12) = (unsigned __int8)v12 & 6;
    if ( (_BYTE)v12 == 4 )
    {
      UserSessionState = W32GetUserSessionState(v12, v11);
      v17 = *(_DWORD *)(v14 + 24);
      if ( *(_DWORD *)(UserSessionState + 36304) < v17 )
        *(_DWORD *)(W32GetUserSessionState(v16, v11) + 36304) = v17;
      v12 = (__int64 *)(v14 + 32);
      if ( (int)v5 - *(_DWORD *)(v14 + 24) > 0 )
      {
        *(_DWORD *)(v14 + 12) &= ~4u;
        v14 = *v12;
        goto LABEL_20;
      }
      v14 = *v12;
      v13 = v12;
    }
    else
    {
      v14 = *(_QWORD *)(v14 + 32);
LABEL_20:
      *v13 = v14;
    }
  }
  if ( *(_DWORD *)(W32GetUserSessionState(v12, v11) + 36304) <= (unsigned int)v5 )
    *(_DWORD *)(W32GetUserSessionState(v19, v18) + 36304) = 0;
  zzzUpdateCursorImage(v19, v18);
}
