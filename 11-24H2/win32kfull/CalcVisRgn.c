/*
 * XREFs of CalcVisRgn @ 0x1400437F0
 * Callers:
 *     ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1400463C0 (-SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ?GetWindowRgn@@YAHPEAUtagWND@@PEAUHRGN__@@K@Z @ 0x14018295C (-GetWindowRgn@@YAHPEAUtagWND@@PEAUHRGN__@@K@Z.c)
 *     zzzResetSharedDesktops @ 0x14024E3F0 (zzzResetSharedDesktops.c)
 *     InvalidateGDIWindows @ 0x14026C3C4 (InvalidateGDIWindows.c)
 *     UserGetClientRgn @ 0x140285A48 (UserGetClientRgn.c)
 *     NtUserGetWindowRgnEx @ 0x140297EF0 (NtUserGetWindowRgnEx.c)
 * Callees:
 *     ?CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x140043A80 (-CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     GetRedirectionBitmap @ 0x140063BA0 (GetRedirectionBitmap.c)
 *     _IsDescendant @ 0x14017B3BC (_IsDescendant.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall CalcVisRgn(HRGN *a1, __int64 a2, const struct tagWND *a3, unsigned int a4)
{
  __int64 v4; // rbx
  __int64 v6; // rcx
  __int64 v9; // rdi
  char v10; // al
  __int64 v11; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbx
  int v17; // ecx
  __int64 v18; // rdi
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 UserSessionState; // rax
  __int128 v24; // [rsp+20h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a2 + 24);
  v6 = a2;
  v9 = a2;
  while ( v6 )
  {
    a2 = *(_QWORD *)(v6 + 40);
    v10 = *(_BYTE *)(a2 + 31);
    if ( (v10 & 0x10) == 0 || (v10 & 0x20) != 0 && v6 != v9 )
      goto LABEL_8;
    if ( (*(_WORD *)(a2 + 42) & 0x2FFF) == 0x29D )
      break;
    v6 = *(_QWORD *)(v6 + 104);
  }
  if ( v4 != *(_QWORD *)(W32GetUserSessionState(v6, a2) + 19200) && (a4 & 0x4000) == 0 )
  {
    v11 = v9;
    while ( 1 )
    {
      v13 = *(_QWORD *)(v11 + 40);
      if ( (*(_BYTE *)(v13 + 26) & 8) != 0 )
        break;
      v11 = *(_QWORD *)(v11 + 104);
      if ( !v11 )
        goto LABEL_8;
    }
    if ( v11 != v9 && (*(_WORD *)(v13 + 42) & 0x2FFF) == 0x29D
      || !v11
      || (a4 & 0x8000000) != 0 && !(unsigned int)IsWindowDesktopComposed(v9) )
    {
      goto LABEL_8;
    }
  }
  if ( (a4 & 0x4000) != 0 )
  {
    v11 = v9;
    while ( 1 )
    {
      v13 = *(_QWORD *)(v11 + 40);
      if ( (*(_BYTE *)(v13 + 27) & 0x20) != 0 )
        break;
      v11 = *(_QWORD *)(v11 + 104);
      if ( !v11 )
        goto LABEL_20;
    }
    if ( (v11 == v9 || (*(_WORD *)(v13 + 42) & 0x2FFF) != 0x29D) && v11 && !GetRedirectionBitmap(v11) )
      goto LABEL_8;
  }
LABEL_20:
  if ( *(_QWORD *)(W32GetUserSessionState(v11, v13) + 57016) )
  {
    if ( (a4 & 0x400) == 0 )
    {
      UserSessionState = W32GetUserSessionState(v15, v14);
      if ( (unsigned int)IsDescendant(*(_QWORD *)(UserSessionState + 57016), v9) )
        goto LABEL_8;
    }
  }
  if ( (unsigned int)UpdatesLockedForDwm() )
  {
    if ( (a4 & 0x4000) != 0 )
    {
LABEL_23:
      v16 = v9;
      while ( 1 )
      {
        v17 = *(_DWORD *)(*(_QWORD *)(v16 + 40) + 24LL);
        if ( (v17 & 0x80000) != 0 || (v17 & 0x20000000) != 0 )
          break;
        v16 = *(_QWORD *)(v16 + 104);
        if ( !v16 )
          return CalcVisRgnWorker(a3, a1, a4);
      }
      if ( v16 == v9 )
        goto LABEL_31;
      v20 = *(_QWORD *)(v16 + 24);
      v21 = 0LL;
      if ( v20 )
      {
        v22 = *(_QWORD *)(v20 + 8);
        if ( v22 )
          v21 = *(_QWORD *)(v22 + 24);
      }
      if ( v16 != v21 )
      {
LABEL_31:
        if ( v16 )
        {
          v18 = *(_QWORD *)(v16 + 40);
          if ( GetRedirectionBitmap(v16) )
          {
            if ( (*(_DWORD *)(v18 + 24) & 0x20000000) != 0 )
            {
              v19 = *(_DWORD *)(v18 + 232);
              if ( (v19 & 2) != 0 && (v19 & 1) == 0 && (*(_DWORD *)(v16 + 380) & 0x20000000) == 0 )
                a4 &= ~0x4000u;
            }
          }
        }
      }
      return CalcVisRgnWorker(a3, a1, a4);
    }
LABEL_8:
    v24 = 0LL;
    SetOrCreateRectRgnIndirectPublic(a1, &v24);
    return 0LL;
  }
  if ( (a4 & 0x4000) != 0 )
    goto LABEL_23;
  return CalcVisRgnWorker(a3, a1, a4);
}
