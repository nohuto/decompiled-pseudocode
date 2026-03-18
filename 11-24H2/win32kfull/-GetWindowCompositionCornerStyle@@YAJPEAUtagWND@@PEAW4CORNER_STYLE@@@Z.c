/*
 * XREFs of ?GetWindowCompositionCornerStyle@@YAJPEAUtagWND@@PEAW4CORNER_STYLE@@@Z @ 0x1401FC558
 * Callers:
 *     NtUserGetWindowCompositionAttribute @ 0x1402974D0 (NtUserGetWindowCompositionAttribute.c)
 * Callees:
 *     ?_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z @ 0x140046CE0 (-_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall GetWindowCompositionCornerStyle(struct tagTHREADINFO **a1, enum CORNER_STYLE *a2)
{
  unsigned int v3; // ebx
  _OWORD v5[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v6; // [rsp+40h] [rbp-28h]
  __int64 v7; // [rsp+50h] [rbp-18h]

  memset(v5, 0, sizeof(v5));
  v7 = 0LL;
  v3 = -1073741816;
  v6 = 0LL;
  if ( _GetWindowCompositionInfo(a1, (struct WINDOWCOMPOSITIONINFO *)v5) )
  {
    v3 = 0;
    *(_DWORD *)a2 = v6;
  }
  return v3;
}
