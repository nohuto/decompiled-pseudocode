/*
 * XREFs of CreateCacheDC @ 0x14000E010
 * Callers:
 *     _GetDCEx @ 0x140099850 (_GetDCEx.c)
 *     GetMonitorDC @ 0x14009B3A0 (GetMonitorDC.c)
 *     InitUserScreen @ 0x140162CD0 (InitUserScreen.c)
 * Callees:
 *     GreCreateDisplayDC @ 0x14000E640 (GreCreateDisplayDC.c)
 *     ?SetPwndOrg@tagDCE@@QEAAXPEAUtagWND@@@Z @ 0x14000EF9C (-SetPwndOrg@tagDCE@@QEAAXPEAUtagWND@@@Z.c)
 *     ?SetPwndRedirect@tagDCE@@QEAAXPEAUtagWND@@@Z @ 0x14000F010 (-SetPwndRedirect@tagDCE@@QEAAXPEAUtagWND@@@Z.c)
 *     ?SetPwndClip@tagDCE@@QEAAXPEAUtagWND@@@Z @ 0x14000F084 (-SetPwndClip@tagDCE@@QEAAXPEAUtagWND@@@Z.c)
 *     GreSetDCOwnerEx @ 0x14000F100 (GreSetDCOwnerEx.c)
 *     IsGetStyleWindowSupported @ 0x14000F1C4 (IsGetStyleWindowSupported.c)
 *     GetStyleWindow @ 0x14000F1FC (GetStyleWindow.c)
 *     GreGetBounds @ 0x14000FF10 (GreGetBounds.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CreateCacheDC(struct tagWND *a1, unsigned int a2, __int64 a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  _QWORD *v8; // rax
  HDEV v9; // rcx
  struct HOBJ__ *DisplayDC; // r14
  struct tagWND *StyleWindow; // rsi
  unsigned int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 UserSessionState; // rax
  __int64 v17; // rdx
  int (*v18)(void); // rax
  void (__fastcall *v19)(_QWORD *); // rax
  int (*v20)(void); // rax
  void (__fastcall *v21)(_QWORD *, _QWORD); // rax

  v6 = Win32AllocPoolZInitImpl(0x100uLL, 0x98uLL, 0x63647355u);
  v7 = v6;
  if ( !v6 )
    return 0LL;
  v6[1] = v6;
  *v6 = v6;
  v8 = v6 + 13;
  v8[1] = v8;
  *v8 = v8;
  v7[16] = v7 + 15;
  v7[15] = v7 + 15;
  v7[18] = v7 + 17;
  v7[17] = v7 + 17;
  if ( a3 )
    v9 = *(HDEV *)(a3 + 80);
  else
    v9 = *(HDEV *)(*(_QWORD *)(W32GetUserSessionState() + 57008) + 48LL);
  DisplayDC = (struct HOBJ__ *)GreCreateDisplayDC(v9, 0);
  if ( !DisplayDC )
  {
    GreDeleteFastMutex(v7);
    return 0LL;
  }
  if ( (a2 & 0x4000) != 0 )
  {
    if ( (int)IsGetStyleWindowSupported() < 0 )
      StyleWindow = 0LL;
    else
      StyleWindow = (struct tagWND *)GetStyleWindow(a1);
    v12 = a2 & 0xFFFFBFFF;
    if ( StyleWindow )
      v12 = a2;
    a2 = v12;
  }
  else
  {
    StyleWindow = 0LL;
  }
  v13 = *(_QWORD *)(W32GetUserSessionState() + 57008) + 24LL;
  v14 = *(_QWORD *)v13;
  if ( *(_QWORD *)(*(_QWORD *)v13 + 8LL) != v13 )
    __fastfail(3u);
  v7[1] = v13;
  *v7 = v14;
  *(_QWORD *)(v14 + 8) = v7;
  *(_QWORD *)v13 = v7;
  v7[2] = DisplayDC;
  *((_DWORD *)v7 + 12) = a2;
  tagDCE::SetPwndOrg((tagDCE *)v7, a1);
  tagDCE::SetPwndClip((tagDCE *)v7, a1);
  tagDCE::SetPwndRedirect((tagDCE *)v7, StyleWindow);
  v7[3] = 0LL;
  v7[4] = 0LL;
  v7[5] = 0LL;
  v7[8] = 0LL;
  v7[9] = a3;
  if ( (a2 & 0x8000) != 0 )
  {
    GreSetDCOwnerEx(DisplayDC, 0x80000002, 0, 0);
    v7[7] = PtiCurrent();
    *((_QWORD *)a1 + 31) = v7;
    if ( (a2 & 0x4000) != 0 )
    {
      v20 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 2688LL);
      if ( v20 )
      {
        if ( v20() >= 0 )
        {
          v21 = *(void (__fastcall **)(_QWORD *, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 2696LL);
          if ( v21 )
            v21(v7, 0LL);
        }
      }
    }
  }
  else
  {
    GreSetDCOwnerEx(DisplayDC, 0x80000012, 0, 0);
    v7[7] = 0LL;
    UserSessionState = W32GetUserSessionState();
    ++*(_DWORD *)(UserSessionState + 19716);
  }
  if ( (a2 & 2) == 0 )
  {
    v17 = *((_QWORD *)a1 + 17);
    if ( (*(_BYTE *)(*(_QWORD *)(v17 + 8) + 8LL) & 0x40) != 0 )
      *(_QWORD *)(v17 + 40) = v7;
    *((_DWORD *)v7 + 12) |= 0x1000u;
    v18 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 2672LL);
    if ( v18 )
    {
      if ( v18() >= 0 )
      {
        v19 = *(void (__fastcall **)(_QWORD *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 2680LL);
        if ( v19 )
          v19(v7);
      }
    }
  }
  if ( *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState() + 57008) + 40LL) )
    GreGetBounds((HDC)v7[2]);
  return v7[2];
}
