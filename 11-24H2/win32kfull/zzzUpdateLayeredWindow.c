/*
 * XREFs of zzzUpdateLayeredWindow @ 0x140035DCC
 * Callers:
 *     NtUserUpdateLayeredWindow @ 0x140034540 (NtUserUpdateLayeredWindow.c)
 *     xxxSetLayeredWindow @ 0x140090DC8 (xxxSetLayeredWindow.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1400949E4 (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 *     zzzMoveShadow @ 0x14015CE1C (zzzMoveShadow.c)
 *     zzzUpdateShadowAlpha @ 0x14015DFA4 (zzzUpdateShadowAlpha.c)
 *     ?zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z @ 0x1401E2B3C (-zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z.c)
 * Callees:
 *     DeleteOrSetRedirectionBitmap @ 0x14002D5F8 (DeleteOrSetRedirectionBitmap.c)
 *     UnsetRedirectedWindow @ 0x14002D720 (UnsetRedirectedWindow.c)
 *     OffsetChildren @ 0x140030CE0 (OffsetChildren.c)
 *     ?UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z @ 0x1400365E4 (-UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z.c)
 *     GetRedirectionFlags @ 0x140036778 (GetRedirectionFlags.c)
 *     RecreateRedirectionBitmap @ 0x140039394 (RecreateRedirectionBitmap.c)
 *     xxxWindowEvent @ 0x1400408B0 (xxxWindowEvent.c)
 *     DwmChildRectChange @ 0x140048630 (DwmChildRectChange.c)
 *     DirtyVisRgnTrackers @ 0x1400497E8 (DirtyVisRgnTrackers.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     GreClientRgnUpdated @ 0x140060F88 (GreClientRgnUpdated.c)
 *     GreUpdateSpriteVisRgn @ 0x1400617E0 (GreUpdateSpriteVisRgn.c)
 *     GetRedirectionBitmap @ 0x140063BA0 (GetRedirectionBitmap.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     UpdateSprite @ 0x1400CB4D8 (UpdateSprite.c)
 *     InvalidateGDIWindows @ 0x14026C3C4 (InvalidateGDIWindows.c)
 *     ?IsInterceptWindow@WindowActions@@YA_NPEBUtagWND@@@Z @ 0x14026C524 (-IsInterceptWindow@WindowActions@@YA_NPEBUtagWND@@@Z.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1402852E4 (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 */

__int64 __fastcall zzzUpdateLayeredWindow(
        struct tagWND *a1,
        __int64 a2,
        const struct tagPOINT *a3,
        const struct tagSIZE *a4,
        HDC a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        unsigned int a9,
        __int64 a10)
{
  __int64 v10; // rax
  HSURF v11; // rdi
  __int128 v15; // xmm1
  char v16; // si
  __int64 v17; // rcx
  char RedirectionFlags; // al
  const struct tagWND *v19; // rdx
  unsigned int v20; // r15d
  int v21; // r8d
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // r14d
  HDC v28; // r12
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  int updated; // r12d
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  int v36; // edi
  __int64 v38; // rdx
  __int64 v39; // rcx
  bool v40; // r14
  __int64 UserSessionState; // rax
  int v42; // r8d
  int v43; // edx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rax
  int v49; // eax
  int v50; // [rsp+68h] [rbp-39h] BYREF
  __int64 v51; // [rsp+70h] [rbp-31h] BYREF
  __int64 RedirectionBitmap; // [rsp+78h] [rbp-29h]
  __int128 v53; // [rsp+80h] [rbp-21h]
  __int128 v54; // [rsp+90h] [rbp-11h]
  int v55; // [rsp+E8h] [rbp+47h] BYREF
  __int64 v56; // [rsp+F0h] [rbp+4Fh]
  struct tagPOINT *v57; // [rsp+F8h] [rbp+57h]
  struct tagSIZE *v58; // [rsp+100h] [rbp+5Fh]

  v58 = (struct tagSIZE *)a4;
  v57 = (struct tagPOINT *)a3;
  v56 = a2;
  v10 = *((_QWORD *)a1 + 5);
  v11 = 0LL;
  v55 = 0;
  v50 = 0;
  v51 = 0LL;
  v15 = *(_OWORD *)(v10 + 104);
  v53 = *(_OWORD *)(v10 + 88);
  v54 = v15;
  W32GetUserSessionState(a1, a2);
  v16 = 1;
  if ( (unsigned int)IsWindowDesktopComposed(a1) && (*((_DWORD *)a1 + 95) & 0x8000) != 0 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 27LL) & 0x20) != 0 )
      UnsetRedirectedWindow(a1, 1);
    *((_DWORD *)a1 + 95) &= ~0x8000u;
  }
  v17 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v17 + 26) & 8) == 0 )
    return 3221225485LL;
  if ( (*(_DWORD *)(v17 + 232) & 2) != 0 )
    return 3221225485LL;
  RedirectionBitmap = GetRedirectionBitmap(a1);
  RedirectionFlags = GetRedirectionFlags(a1);
  if ( RedirectionBitmap )
  {
    if ( (RedirectionFlags & 8) == 0 )
      return 3221225485LL;
  }
  v20 = a9;
  v21 = a9 & 8;
  if ( (a9 & 8) != 0 || WindowActions::IsInterceptWindow(a1, v19) )
  {
    LOBYTE(v19) = a4
               && ((v19 = (const struct tagWND *)*((_QWORD *)a1 + 5),
                    a4->cx != *((_DWORD *)v19 + 24) - *((_DWORD *)v19 + 22))
                || a4->cy != *((_DWORD *)v19 + 25) - *((_DWORD *)v19 + 23));
    if ( v21 )
    {
      if ( (_BYTE)v19 )
      {
        UserSetLastError(1462LL);
        return 2151546881LL;
      }
      v20 &= ~8u;
    }
    if ( WindowActions::IsInterceptWindow(a1, v19) )
    {
      if ( (_BYTE)v38
        || a3 && ((v39 = *((_QWORD *)a1 + 5), a3->x != *(_DWORD *)(v39 + 88)) || a3->y != *(_DWORD *)(v39 + 92)) )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
          || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
        {
          v16 = 0;
        }
        v40 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v16 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v38);
          LOBYTE(v42) = v40;
          LOBYTE(v43) = v16;
          WPP_RECORDER_AND_TRACE_SF_q(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v43,
            v42,
            *(_QWORD *)(UserSessionState + 69416),
            3,
            4,
            10,
            (__int64)&WPP_b0f4d68f623e388aa0a251c43001270c_Traceguids,
            (char)a1);
        }
        return 3221225485LL;
      }
    }
  }
  UpdateWindowRects(a1, a3, a4, &v55, &v50);
  if ( RedirectionBitmap )
  {
    if ( v55 )
    {
      v49 = RecreateRedirectionBitmap(a1, 0, (__int64)&v51);
      v11 = (HSURF)v51;
      updated = v49;
      if ( v49 < 0 )
        goto LABEL_53;
    }
  }
  v24 = W32GetUserSessionState(v23, v22);
  GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(v24 + 57008) + 48LL));
  v27 = v50;
  if ( v55 || v50 )
  {
    if ( (unsigned int)IsWindowDesktopComposed(a1) )
    {
      DwmChildRectChange(a1);
      DirtyVisRgnTrackers(a1);
    }
    if ( *(_DWORD *)(W32GetUserSessionState(v45, v44) + 43312) )
    {
      InvalidateGDIWindows(a1);
      GreClientRgnUpdated(1LL);
    }
    v48 = W32GetUserSessionState(v47, v46);
    GreUpdateSpriteVisRgn(*(_QWORD *)(*(_QWORD *)(v48 + 57008) + 48LL), 0LL);
  }
  v28 = a5;
  if ( a5 )
    v20 |= 0x20000000u;
  v29 = W32GetUserSessionState(v26, v25);
  updated = UpdateSprite(*(HDEV *)(*(_QWORD *)(v29 + 57008) + 48LL), a1, v57, v58, v28, a6, a7, a8, v20, a10);
  if ( updated >= 0 && v27 )
    OffsetChildren(
      a1,
      *(_DWORD *)(*((_QWORD *)a1 + 5) + 88LL) - v53,
      *(_DWORD *)(*((_QWORD *)a1 + 5) + 92LL) - DWORD1(v53),
      0LL);
  v33 = W32GetUserSessionState(v31, v30);
  GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v33 + 57008) + 48LL));
  if ( updated < 0 )
  {
LABEL_53:
    *(_OWORD *)(*((_QWORD *)a1 + 5) + 88LL) = v53;
    *(_OWORD *)(*((_QWORD *)a1 + 5) + 104LL) = v54;
    if ( v11 && !(unsigned int)RestoreOldRedirectionBitmap(a1, (HBITMAP)v11) )
      DeleteOrSetRedirectionBitmap((__int64)a1, v11, 1);
  }
  else
  {
    if ( v11 )
      DeleteOrSetRedirectionBitmap((__int64)a1, v11, 1);
    if ( v55 || v27 )
      GenerateMouseMove(0LL);
    if ( (v20 & 0x20) == 0 || v55 || v27 )
    {
      v36 = 3;
      if ( !*(_DWORD *)(W32GetUserSessionState(v35, v34) + 70856) )
        v36 = 1;
      xxxWindowEvent(0x800Bu, v36);
    }
  }
  return (unsigned int)updated;
}
