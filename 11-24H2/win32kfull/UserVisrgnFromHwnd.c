/*
 * XREFs of UserVisrgnFromHwnd @ 0x140045834
 * Callers:
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1400D48D8 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 * Callees:
 *     ?CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x140043A80 (-CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     GetLayeredOrRedirectedParent @ 0x140045C50 (GetLayeredOrRedirectedParent.c)
 *     ?_GhostWindowFromHungWindow@@YAPEAUtagWND@@PEBU1@@Z @ 0x140062E78 (-_GhostWindowFromHungWindow@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     IsWindowContentProtected @ 0x1400631DC (IsWindowContentProtected.c)
 *     GetRedirectionBitmap @ 0x140063BA0 (GetRedirectionBitmap.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall UserVisrgnFromHwnd(HRGN *a1, __int64 a2, int a3)
{
  int v4; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 UserSessionState; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  const struct tagWND **v16; // rsi
  __int64 v17; // r8
  unsigned int v18; // edi
  const struct tagWND *v19; // rbx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r14
  const struct tagWND *v24; // rsi
  int v25; // eax
  int v26; // ebp
  char v27; // al
  __int64 v28; // rax
  struct tagWND *v29; // rbx
  struct tagWND *v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 LayeredOrRedirectedParent; // rax
  __int64 v34; // rsi
  __int64 v35; // r14
  int v36; // eax
  __int128 v37; // [rsp+28h] [rbp-40h] BYREF

  v4 = a2;
  W32GetCurrentThreadNonPaged(a1, a2);
  v9 = *(_QWORD *)(W32GetUserSessionState(v7, v6) + 19928);
  if ( (unsigned __int64)(unsigned __int16)v4 >= *(_QWORD *)(v9 + 8) )
    return 0LL;
  UserSessionState = W32GetUserSessionState(v9, v8);
  v13 = *(_DWORD *)(W32GetUserSessionState(v12, v11) + 19952) * (unsigned int)(unsigned __int16)v4
      + *(_QWORD *)(UserSessionState + 19944);
  v16 = (const struct tagWND **)HMPkheFromPhe(v13);
  LOWORD(v4) = HIWORD(v4) & 0x7FFF;
  if ( (HIWORD(v4) & 0x7FFF) != *(_WORD *)(v13 + 26)
    && (_WORD)v4 != 0x7FFF
    && ((_WORD)v4 || !PsGetCurrentProcessWow64Process(v15, v14, v17)) )
  {
    return 0LL;
  }
  v18 = 1;
  if ( (*(_BYTE *)(v13 + 25) & 1) != 0 )
    return 0LL;
  if ( *(_BYTE *)(v13 + 24) != 1 )
    return 0LL;
  v19 = *v16;
  if ( !*v16 )
    return 0LL;
  v21 = *(unsigned int *)(*((_QWORD *)v19 + 5) + 232LL);
  if ( (v21 & 2) != 0 && !_GhostWindowFromHungWindow(*v16) && !(unsigned int)IsWindowContentProtected(v19) )
  {
    v22 = *((_QWORD *)v19 + 5);
    goto LABEL_14;
  }
  v22 = *((_QWORD *)v19 + 5);
  LOBYTE(v21) = *(_BYTE *)(v22 + 31);
  if ( (*(_BYTE *)(v22 + 26) & 0x20) == 0 )
  {
    v23 = *((_QWORD *)v19 + 3);
    v24 = v19;
    v25 = a3 != 0 ? 17409 : 134218753;
    v26 = v25 | 0x10;
    if ( (v21 & 4) == 0 )
      v26 = v25;
    while ( v19 )
    {
      v21 = *((_QWORD *)v19 + 5);
      v27 = *(_BYTE *)(v21 + 31);
      if ( (v27 & 0x10) == 0 || (v27 & 0x20) != 0 && v19 != v24 )
        goto LABEL_26;
      if ( (*(_WORD *)(v21 + 42) & 0x2FFF) == 0x29D )
        break;
      v19 = (const struct tagWND *)*((_QWORD *)v19 + 13);
    }
    v29 = v24;
    if ( v23 != *(_QWORD *)(W32GetUserSessionState(v21, v22) + 19200) && (v26 & 0x4000) == 0 )
    {
      while ( 1 )
      {
        v28 = *((_QWORD *)v24 + 5);
        if ( (*(_BYTE *)(v28 + 26) & 8) != 0 )
          break;
        v24 = (const struct tagWND *)*((_QWORD *)v24 + 13);
        if ( !v24 )
          goto LABEL_26;
      }
      v31 = *(_WORD *)(v28 + 42) & 0x2FFF;
      if ( v24 != v29 && (_DWORD)v31 == 669 )
        goto LABEL_26;
      if ( (v26 & 0x8000000) != 0 && !(unsigned int)IsWindowDesktopComposed(v29) )
        goto LABEL_26;
    }
    if ( (v26 & 0x4000) != 0 )
    {
      v30 = v29;
      while ( 1 )
      {
        v32 = *((_QWORD *)v30 + 5);
        if ( (*(_BYTE *)(v32 + 27) & 0x20) != 0 )
          break;
        v30 = (struct tagWND *)*((_QWORD *)v30 + 13);
        if ( !v30 )
          goto LABEL_39;
      }
      v31 = *(_WORD *)(v32 + 42) & 0x2FFF;
      if ( (v30 == v29 || (_DWORD)v31 != 669) && !GetRedirectionBitmap(v30) )
      {
LABEL_26:
        v37 = 0LL;
        SetOrCreateRectRgnIndirectPublic(a1, &v37);
        return 0;
      }
    }
LABEL_39:
    W32GetUserSessionState(v31, v30);
    if ( (unsigned int)UpdatesLockedForDwm() )
    {
      if ( (v26 & 0x4000) == 0 )
        goto LABEL_26;
    }
    else if ( (v26 & 0x4000) == 0 )
    {
      return (unsigned int)CalcVisRgnWorker(v29, a1, v26);
    }
    LayeredOrRedirectedParent = GetLayeredOrRedirectedParent(v29);
    v34 = LayeredOrRedirectedParent;
    if ( LayeredOrRedirectedParent )
    {
      v35 = *(_QWORD *)(LayeredOrRedirectedParent + 40);
      if ( GetRedirectionBitmap(LayeredOrRedirectedParent) )
      {
        if ( _bittest((const signed __int32 *)(v35 + 24), 0x1Du) )
        {
          v36 = *(_DWORD *)(v35 + 232);
          if ( (v36 & 2) != 0 && (v36 & 1) == 0 && !_bittest((const signed __int32 *)(v34 + 380), 0x1Du) )
            v26 &= ~0x4000u;
        }
      }
    }
    return (unsigned int)CalcVisRgnWorker(v29, a1, v26);
  }
  if ( (v21 & 0x10) == 0 )
    return 0;
LABEL_14:
  SetRectRgnIndirect(*a1, v22 + 88);
  return v18;
}
