/*
 * XREFs of ?SetWindowCompositionPartColor@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x140086B54
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x140246D90 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     ?_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z @ 0x140046CE0 (-_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     ?SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1400871BC (-SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     ?_DwmAsyncSetCompositionAttribute@@YAJPEBUtagWND@@W4WINDOWCOMPOSITIONATTRIB@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x140087234 (-_DwmAsyncSetCompositionAttribute@@YAJPEBUtagWND@@W4WINDOWCOMPOSITIONATTRIB@@PEBUtagWINDOWCOMPOS.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall SetWindowCompositionPartColor(
        struct tagWND *a1,
        const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *a2)
{
  __int64 v2; // rsi
  int v4; // edi
  unsigned int v6; // ebx
  _OWORD v8[2]; // [rsp+20h] [rbp-58h] BYREF
  __int128 v9; // [rsp+40h] [rbp-38h]
  __int64 v10; // [rsp+50h] [rbp-28h]

  v2 = *(int *)a2;
  v4 = *((_DWORD *)a2 + 1);
  if ( (unsigned int)v2 > 2 )
    return 3221225485LL;
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      if ( (unsigned int)v2 <= 1 )
        goto LABEL_5;
    }
    else if ( (v4 & 0xFF000000) == 0xFF000000 )
    {
      goto LABEL_5;
    }
    return 3221225485LL;
  }
LABEL_5:
  memset(v8, 0, sizeof(v8));
  v10 = 0LL;
  v6 = -1073741816;
  v9 = 0LL;
  if ( _GetWindowCompositionInfo((struct tagTHREADINFO **)a1, (struct WINDOWCOMPOSITIONINFO *)v8) )
  {
    if ( *((_DWORD *)&v9 + v2 + 1) == v4 )
    {
      return 0;
    }
    else
    {
      *((_DWORD *)&v9 + v2 + 1) = v4;
      if ( (unsigned int)SetWindowCompositionInfo(a1, (const struct WINDOWCOMPOSITIONINFO *)v8) )
        return (unsigned int)_DwmAsyncSetCompositionAttribute(a1, 28LL, a2);
      else
        return (unsigned int)-1073741801;
    }
  }
  return v6;
}
