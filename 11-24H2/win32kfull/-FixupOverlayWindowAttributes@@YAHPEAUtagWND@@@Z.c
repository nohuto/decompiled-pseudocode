/*
 * XREFs of ?FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z @ 0x14028F6F0
 * Callers:
 *     _NotifyOverlayWindow @ 0x14029030C (_NotifyOverlayWindow.c)
 * Callees:
 *     BuildHwndList @ 0x140047FC0 (BuildHwndList.c)
 *     FreeHwndList @ 0x140048500 (FreeHwndList.c)
 *     _GetTopLevelWindow @ 0x140049F30 (_GetTopLevelWindow.c)
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     ?SetWindowCompositionVideoOverlayActive@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1402AE56C (-SetWindowCompositionVideoOverlayActive@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION.c)
 */

__int64 __fastcall FixupOverlayWindowAttributes(struct tagWND *a1)
{
  unsigned int v1; // ebx
  __int64 TopLevelWindow; // rax
  struct tagWND *v3; // rsi
  int v4; // eax
  int v5; // edi
  BOOL v6; // ebp
  struct tagBWL *v7; // rax
  __int64 v8; // rdx
  struct tagBWL *v9; // r14
  __int64 *i; // rdi
  __int64 v11; // rax
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+30h] [rbp-18h]

  v1 = 0;
  TopLevelWindow = GetTopLevelWindow((__int64)a1);
  v3 = (struct tagWND *)TopLevelWindow;
  if ( TopLevelWindow )
  {
    v4 = *(_DWORD *)(TopLevelWindow + 380);
    v5 = 0;
    v6 = (v4 & 0x10000) != 0;
    if ( (v4 & 0x10000) != 0 )
    {
      v5 = 1;
    }
    else
    {
      v7 = BuildHwndList(v3, 1LL, 0LL, 1);
      v9 = v7;
      if ( v7 )
      {
        for ( i = (__int64 *)((char *)v7 + 32); *i != 1; ++i )
        {
          LOBYTE(v8) = 1;
          v11 = HMValidateHandleNoSecure(*i, v8);
          if ( v11 && (*(_DWORD *)(v11 + 380) & 0x10000) != 0 )
          {
            v6 = 1;
            break;
          }
        }
        v5 = 1;
        FreeHwndList(v9, v8);
      }
    }
    if ( v5 )
    {
      v13 = 0LL;
      LODWORD(v13) = v6;
      v14 = 0LL;
      LOBYTE(v1) = (int)SetWindowCompositionVideoOverlayActive(
                          v3,
                          (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v13) >= 0;
    }
  }
  return v1;
}
