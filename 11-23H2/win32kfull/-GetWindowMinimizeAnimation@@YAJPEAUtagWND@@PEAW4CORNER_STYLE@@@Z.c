/*
 * XREFs of ?GetWindowMinimizeAnimation@@YAJPEAUtagWND@@PEAW4CORNER_STYLE@@@Z @ 0x1C01F65CC
 * Callers:
 *     NtUserGetWindowCompositionAttribute @ 0x1C00ECC50 (NtUserGetWindowCompositionAttribute.c)
 * Callees:
 *     ?_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C00EC894 (-_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 */

__int64 __fastcall GetWindowMinimizeAnimation(struct tagWND *a1, enum CORNER_STYLE *a2)
{
  unsigned int v4; // edi
  __int64 v5; // r8
  __int64 v6; // r9
  _BYTE v8[40]; // [rsp+20h] [rbp-58h] BYREF
  int v9; // [rsp+48h] [rbp-30h]

  v4 = -1073741816;
  memset_0(v8, 0, 0x40uLL);
  if ( (unsigned int)_GetWindowCompositionInfo(a1, (struct WINDOWCOMPOSITIONINFO *)v8, v5, v6) )
  {
    v4 = 0;
    *(_DWORD *)a2 = v9;
  }
  return v4;
}
