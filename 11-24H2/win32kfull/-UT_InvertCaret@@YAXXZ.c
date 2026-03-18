/*
 * XREFs of ?UT_InvertCaret@@YAXXZ @ 0x140036838
 * Callers:
 *     zzzInternalHideCaret @ 0x1400357EC (zzzInternalHideCaret.c)
 *     zzzInternalShowCaret @ 0x140035B94 (zzzInternalShowCaret.c)
 *     zzzSetCaretPos @ 0x1400950F8 (zzzSetCaretPos.c)
 *     CaretBlinkProc @ 0x1401D36A0 (CaretBlinkProc.c)
 * Callees:
 *     GreBitBltInternal @ 0x14001970C (GreBitBltInternal.c)
 *     IsVisible @ 0x140036A48 (IsVisible.c)
 *     GreSaveDC @ 0x140036E78 (GreSaveDC.c)
 *     _ExcludeUpdateRgn @ 0x140036ED8 (_ExcludeUpdateRgn.c)
 *     GrePolyPatBlt @ 0x1400382E8 (GrePolyPatBlt.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

void UT_InvertCaret(void)
{
  __int64 v0; // rdi
  struct tagWND *v1; // rbx
  HDC DC; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  HDC v5; // rsi
  int v6; // ebp
  unsigned __int64 v7; // rbx
  __int64 UserSessionState; // rax
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  _DWORD v16[4]; // [rsp+60h] [rbp-28h] BYREF
  __int64 v17; // [rsp+70h] [rbp-18h]

  v0 = *((_QWORD *)PtiCurrent() + 59);
  v1 = *(struct tagWND **)(v0 + 344);
  if ( v1 && (unsigned int)IsVisible(*(_QWORD *)(v0 + 344)) )
  {
    DC = (HDC)_GetDC();
    v4 = *((_QWORD *)v1 + 5);
    v5 = DC;
    if ( *(_QWORD *)(v4 + 136) )
    {
      GreSaveDC(DC);
      ExcludeUpdateRgn(v5, v1);
      v6 = 1;
    }
    else
    {
      v6 = 0;
    }
    v7 = *(_QWORD *)(v0 + 384);
    if ( v7 > 1 )
    {
      UserSessionState = W32GetUserSessionState(v4, v3);
      v9 = GreSelectBitmap(*(_QWORD *)(UserSessionState + 43288), v7);
      v12 = W32GetUserSessionState(v11, v10);
      GreBitBltInternal(
        v5,
        *(_DWORD *)(v0 + 364),
        *(_DWORD *)(v0 + 368),
        *(_DWORD *)(v0 + 376),
        *(_DWORD *)(v0 + 372),
        *(HDC *)(v12 + 43288),
        0,
        0,
        0x660046u,
        0,
        0);
      v15 = W32GetUserSessionState(v14, v13);
      GreSelectBitmap(*(_QWORD *)(v15 + 43288), v9);
    }
    else
    {
      v16[0] = *(_DWORD *)(v0 + 364);
      v16[1] = *(_DWORD *)(v0 + 368);
      v16[2] = *(_DWORD *)(v0 + 376);
      v16[3] = *(_DWORD *)(v0 + 372);
      if ( v7 == 1 )
        v17 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v4, v3) + 19928) + 4944LL);
      else
        v17 = *(_QWORD *)(W32GetUserSessionState(v4, v3) + 43088);
      GrePolyPatBlt(v5, 0x5A0049u, (struct _POLYPATBLT *)v16, 1u);
    }
    if ( v6 )
      GreRestoreDC(v5, 0xFFFFFFFFLL);
    _ReleaseDC(v5);
  }
  else
  {
    *(_DWORD *)(v0 + 352) &= ~1u;
  }
}
