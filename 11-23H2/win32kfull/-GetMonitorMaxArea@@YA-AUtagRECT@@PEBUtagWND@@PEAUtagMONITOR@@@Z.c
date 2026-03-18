/*
 * XREFs of ?GetMonitorMaxArea@@YA?AUtagRECT@@PEBUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C00E82C4
 * Callers:
 *     CkptUpdate @ 0x1C00E1E24 (CkptUpdate.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00EA700 (xxxInitSendValidateMinMaxInfoEx.c)
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x1C005E89C (GetMonitorWorkRectForWindow.c)
 *     ExpandMonitorSpaceVertex @ 0x1C00AF3A8 (ExpandMonitorSpaceVertex.c)
 *     ScaleDPIRect @ 0x1C00B1710 (ScaleDPIRect.c)
 *     ?_HungWindowFromGhostWindow@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C00E8394 (-_HungWindowFromGhostWindow@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     ?GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z @ 0x1C00EB200 (-GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z.c)
 */

__m128i *__fastcall GetMonitorMaxArea(__m128i *__return_ptr retstr, const struct tagWND *a2, struct tagMONITOR *a3)
{
  struct tagWND *v6; // rax
  const struct tagWND *v7; // r9
  __int64 v8; // rcx
  unsigned int WindowCompositedDpiContext; // eax
  __int64 v10; // rcx
  unsigned __int16 v11; // dx
  unsigned __int16 v12; // si
  unsigned __int16 v13; // di
  __int64 v14; // rax

  v6 = _HungWindowFromGhostWindow(a2);
  v7 = a2;
  if ( v6 )
    v7 = v6;
  v8 = *((_QWORD *)v7 + 5);
  if ( (*(_BYTE *)(v8 + 30) & 1) != 0 && (*(_BYTE *)(v8 + 16) & 8) != 0 && !*(_WORD *)(gpDispInfo + 160LL) )
  {
    GetMonitorWorkRectForWindow((__int64)retstr, (__int64)a3, a2);
  }
  else
  {
    WindowCompositedDpiContext = GetWindowCompositedDpiContext(a2);
    v10 = *((_QWORD *)a3 + 5);
    v11 = *(_WORD *)(v10 + 62);
    v12 = *(_WORD *)(v10 + 60);
    *retstr = *(__m128i *)(v10 + 28);
    v13 = (WindowCompositedDpiContext >> 8) & 0x1FF;
    if ( v13 )
    {
      v14 = ExpandMonitorSpaceVertex(v13, v11, retstr->m128i_i64[0]);
      ScaleDPIRect(retstr, retstr, v13, v12, v14, retstr->m128i_i64[0]);
    }
  }
  return retstr;
}
