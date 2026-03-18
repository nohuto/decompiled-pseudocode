/*
 * XREFs of ?CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z @ 0x1401D4DD0
 * Callers:
 *     _ExcludeUpdateRgn @ 0x140036ED8 (_ExcludeUpdateRgn.c)
 * Callees:
 *     GetScreenRectForDpi @ 0x14002622C (GetScreenRectForDpi.c)
 *     GetMonitorRectForDpi @ 0x140026844 (GetMonitorRectForDpi.c)
 *     ?GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z @ 0x140026B70 (-GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall CalcVirtualScreenClipRegion(HRGN a1, struct tagWND *a2)
{
  HRGN v3; // rsi
  __int64 v4; // rax
  unsigned __int16 v5; // di
  __int64 UserSessionState; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  _DWORD **v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 EmptyRgn; // rbp
  __int64 i; // rbx
  __int64 DispInfo; // rax
  __m128i *MonitorRectForDpi; // rax
  __m128i *v19; // rdx
  unsigned int WindowCompositedDpiContext; // eax
  __m128i v21; // [rsp+20h] [rbp-48h] BYREF
  __m128i v22; // [rsp+30h] [rbp-38h] BYREF

  v3 = a1;
  v4 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 496LL);
  if ( !v4
    || (a1 = **(HRGN **)(v4 + 8), ((_DWORD)a1[16] & 1) == 0)
    || (v5 = (*(_DWORD *)(*((_QWORD *)a2 + 5) + 288LL) >> 8) & 0x1FF) == 0 )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    GreCombineRgn(v3, *(_QWORD *)(*(_QWORD *)(UserSessionState + 57008) + 128LL), 0LL, 5LL);
    return;
  }
  SetEmptyRgn(v3);
  v10 = *(_DWORD ***)(W32GetUserSessionState(v8, v7) + 57008);
  if ( **v10 == 1 )
  {
    DispInfo = GetDispInfo(v10, v9);
    MonitorRectForDpi = GetMonitorRectForDpi(&v22, *(_QWORD *)(DispInfo + 104), v5);
    v19 = &v21;
    v21 = *MonitorRectForDpi;
LABEL_14:
    SetRectRgnIndirect(v3, v19);
    return;
  }
  EmptyRgn = CreateEmptyRgn(v10, v9, v11, v12);
  if ( !EmptyRgn )
  {
    WindowCompositedDpiContext = GetWindowCompositedDpiContext(a2);
    GetScreenRectForDpi(&v21, (WindowCompositedDpiContext >> 8) & 0x1FF);
    v19 = &v22;
    v22 = v21;
    goto LABEL_14;
  }
  for ( i = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v14, v13) + 57008) + 112LL); i; i = *(_QWORD *)(i + 56) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(i + 40) + 24LL) & 1) != 0 )
    {
      v21 = *GetMonitorRectForDpi(&v22, i, v5);
      SetRectRgnIndirect(EmptyRgn, &v21);
      GreCombineRgn(v3, v3, EmptyRgn, 2LL);
    }
  }
  GreDeleteObject(EmptyRgn);
}
