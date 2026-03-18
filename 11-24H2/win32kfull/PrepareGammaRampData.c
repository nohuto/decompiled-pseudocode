/*
 * XREFs of PrepareGammaRampData @ 0x1401FEBF0
 * Callers:
 *     xxxSwitchDesktopWithFade @ 0x1401F6760 (xxxSwitchDesktopWithFade.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IsRemoteConnection @ 0x140131CF0 (IsRemoteConnection.c)
 */

__int64 __fastcall PrepareGammaRampData(unsigned int *a1, unsigned int **a2, _DWORD *a3)
{
  unsigned int v6; // ebx
  struct tagTHREADINFO *v7; // rax
  __int64 DCEx; // rax
  __int64 v9; // rdi
  unsigned int DeviceCaps; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 UserSessionState; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  int v18; // ecx
  unsigned int v19; // eax
  unsigned __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v25; // rcx
  unsigned int *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned int *v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  _QWORD *i; // r9
  __int64 DisplayDC; // rax

  v6 = 0;
  v7 = PtiCurrent((__int64)a1, (__int64)a2);
  DCEx = _GetDCEx(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 62) + 8LL) + 24LL), 0LL, 8388611LL);
  v9 = DCEx;
  if ( !DCEx )
    return 3221225495LL;
  DeviceCaps = GreGetDeviceCaps(DCEx, 116LL);
  *a1 = DeviceCaps;
  if ( DeviceCaps < 0x3C )
    *a1 = 60;
  _ReleaseDC(v9);
  UserSessionState = W32GetUserSessionState(v12, v11);
  GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(UserSessionState + 57008) + 48LL));
  v16 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v15, v14) + 57008) + 112LL);
  while ( v16 )
  {
    v17 = *(_QWORD *)(v16 + 40);
    v16 = *(_QWORD *)(v16 + 56);
    v18 = *(_DWORD *)(v17 + 24);
    v19 = v6 + 1;
    if ( (v18 & 1) == 0 )
      v19 = v6;
    v6 = v19;
  }
  v20 = 1544LL * v6;
  if ( v20 > 0xFFFFFFFF || (v25 = (unsigned int)(v20 + 1544), (unsigned int)v25 < 0x608) )
  {
    _ReleaseDC(v9);
    v23 = W32GetUserSessionState(v22, v21);
    GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v23 + 57008) + 48LL));
    return 3221225621LL;
  }
  v26 = (unsigned int *)Win32AllocPoolZInit(v25, 1835231559LL);
  v29 = v26;
  if ( !v26 )
  {
    _ReleaseDC(v9);
    v32 = W32GetUserSessionState(v31, v30);
    GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v32 + 57008) + 48LL));
    return 3221225495LL;
  }
  *v26 = v6;
  if ( !IsRemoteConnection(v28, v27) )
  {
    v34 = *(_QWORD *)(W32GetUserSessionState(v34, v33) + 57008);
    for ( i = *(_QWORD **)(v34 + 112); i; i = (_QWORD *)i[7] )
    {
      v34 = *(unsigned int *)(i[5] + 24LL);
      if ( (v34 & 1) != 0 )
      {
        DisplayDC = GreCreateDisplayDC(i[10], 0LL, 2LL);
        if ( DisplayDC )
          GreDeleteDC(DisplayDC);
        break;
      }
    }
  }
  *a3 = 0;
  *a2 = v29;
  v35 = W32GetUserSessionState(v34, v33);
  GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v35 + 57008) + 48LL));
  return 0LL;
}
