/*
 * XREFs of _NotifyOverlayWindow @ 0x14029030C
 * Callers:
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x14002E8AC (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 *     NtUserNotifyOverlayWindow @ 0x14029A110 (NtUserNotifyOverlayWindow.c)
 * Callees:
 *     xxxSendNotifyMessage @ 0x140119930 (xxxSendNotifyMessage.c)
 *     ?FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z @ 0x14028F6F0 (-FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z.c)
 *     DwmAsyncNotifyWindowShadowChange @ 0x140323B5C (DwmAsyncNotifyWindowShadowChange.c)
 */

__int64 __fastcall NotifyOverlayWindow(struct tagWND *a1, __int64 a2)
{
  unsigned int v2; // ebx
  int v3; // ebp
  __int64 UserSessionState; // rax
  __int64 v6; // rdx
  int v7; // esi
  __int64 v8; // rcx
  int v9; // r15d
  int v10; // eax
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // ecx
  bool v15; // zf
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // ecx
  void *v19; // rax

  v2 = 0;
  v3 = a2;
  if ( !a1 )
    return v2;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v7 = 0;
  v8 = 0LL;
  v9 = *(_DWORD *)(UserSessionState + 63456);
  v10 = *((_DWORD *)a1 + 95) & 0x10000;
  if ( !v3 )
  {
    if ( !v10 )
      return 1;
    v11 = W32GetUserSessionState(0LL, v6);
    v18 = *(_DWORD *)(W32GetUserSessionState(v17, v16) + 63456);
    if ( v18 )
    {
      v2 = 1;
      *(_DWORD *)(v11 + 63456) = v18 - 1;
      *((_DWORD *)a1 + 95) &= ~0x10000u;
      v15 = v9 == 1;
      goto LABEL_10;
    }
LABEL_11:
    *(_DWORD *)(v11 + 63456) = -1;
    goto LABEL_12;
  }
  if ( v10 )
  {
    v2 = 1;
    goto LABEL_13;
  }
  v11 = W32GetUserSessionState(0LL, v6);
  v14 = *(_DWORD *)(W32GetUserSessionState(v13, v12) + 63456);
  if ( v14 + 1 < v14 )
    goto LABEL_11;
  *(_DWORD *)(v11 + 63456) = v14 + 1;
  v2 = 1;
  *((_DWORD *)a1 + 95) |= 0x10000u;
  v15 = v9 == 0;
LABEL_10:
  LOBYTE(v7) = v15;
LABEL_12:
  v8 = v2;
LABEL_13:
  if ( v2 )
  {
    if ( (_DWORD)v8 )
      FixupOverlayWindowAttributes(a1);
    if ( v7 )
    {
      v19 = (void *)ReferenceDwmApiPort(v8, v6);
      DwmAsyncNotifyWindowShadowChange(v19);
      xxxSendNotifyMessage((struct tagWND *)0xFFFFFFFFFFFFFFFFLL, 0x1Au, 0x1025uLL, 0LL, 1);
    }
  }
  return v2;
}
