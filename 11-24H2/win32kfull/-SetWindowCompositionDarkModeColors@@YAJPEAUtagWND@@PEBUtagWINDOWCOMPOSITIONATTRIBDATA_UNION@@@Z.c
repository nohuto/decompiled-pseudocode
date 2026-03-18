/*
 * XREFs of ?SetWindowCompositionDarkModeColors@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x140086EA8
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x140246D90 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     ?_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z @ 0x140046CE0 (-_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     ?SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1400871BC (-SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     ?_DwmAsyncSetCompositionAttribute@@YAJPEBUtagWND@@W4WINDOWCOMPOSITIONATTRIB@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x140087234 (-_DwmAsyncSetCompositionAttribute@@YAJPEBUtagWND@@W4WINDOWCOMPOSITIONATTRIB@@PEBUtagWINDOWCOMPOS.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall SetWindowCompositionDarkModeColors(
        struct tagWND *a1,
        const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *a2)
{
  unsigned int v4; // ebx
  int v5; // ecx
  _OWORD v7[3]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v8; // [rsp+50h] [rbp-18h]

  memset(v7, 0, sizeof(v7));
  v4 = -1073741816;
  v8 = 0LL;
  if ( _GetWindowCompositionInfo((struct tagTHREADINFO **)a1, (struct WINDOWCOMPOSITIONINFO *)v7) )
  {
    v5 = *(_DWORD *)a2 != 0;
    if ( -__CFSHR__(v7[0], 17) == v5 )
    {
      return 0;
    }
    else
    {
      LODWORD(v7[0]) = v7[0] & 0xFFFEFFFF | (v5 << 16);
      if ( (unsigned int)SetWindowCompositionInfo(a1, (const struct WINDOWCOMPOSITIONINFO *)v7) )
        return (unsigned int)_DwmAsyncSetCompositionAttribute(a1, 26LL, a2);
      else
        return (unsigned int)-1073741801;
    }
  }
  return v4;
}
