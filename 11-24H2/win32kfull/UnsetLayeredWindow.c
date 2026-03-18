/*
 * XREFs of UnsetLayeredWindow @ 0x14002FF88
 * Callers:
 *     CleanupWindowRedirection @ 0x14002FEE4 (CleanupWindowRedirection.c)
 *     ComposeWindow @ 0x1400316A8 (ComposeWindow.c)
 *     xxxSetWindowStyle @ 0x1400318F0 (xxxSetWindowStyle.c)
 *     DeleteFadeSprite @ 0x1401EE600 (DeleteFadeSprite.c)
 * Callees:
 *     UnsetRedirectedWindow @ 0x14002D720 (UnsetRedirectedWindow.c)
 *     RedirectDCEs @ 0x14002F358 (RedirectDCEs.c)
 *     GetStyleWindow @ 0x14002F5E0 (GetStyleWindow.c)
 *     GreDeleteSprite @ 0x140030374 (GreDeleteSprite.c)
 *     RemoveVisRgnTracker @ 0x1400308C8 (RemoveVisRgnTracker.c)
 *     DwmAsyncChildStyleChange @ 0x140032044 (DwmAsyncChildStyleChange.c)
 *     SetOrClrWF @ 0x140049160 (SetOrClrWF.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x140061FD0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     UpdateSprite @ 0x1400CB4D8 (UpdateSprite.c)
 *     _SetLayeredWindowAttributes @ 0x14015DCB4 (_SetLayeredWindowAttributes.c)
 */

__int64 __fastcall UnsetLayeredWindow(struct tagWND *a1, char a2)
{
  __int64 UserSessionState; // rax
  int v5; // ebp
  __int64 v6; // rax
  int v7; // eax
  HWND v8; // rdi
  int v9; // ebx
  __int64 v10; // rax
  int v11; // r14d
  void *v12; // rax
  struct tagWND *StyleWindow; // rax
  __int64 v14; // rcx
  void *v16; // rax
  __int64 v17; // rax
  _BYTE v18[16]; // [rsp+60h] [rbp-18h] BYREF

  UserSessionState = W32GetUserSessionState();
  v5 = GreIsDynamicModeChangeLocked(*(_QWORD *)(*(_QWORD *)(UserSessionState + 57008) + 48LL));
  v6 = W32GetUserSessionState();
  if ( v5 )
    GreLockVisRgnWithDmcLockAcquiredEx(*(_QWORD *)(*(_QWORD *)(v6 + 57008) + 48LL));
  else
    GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(v6 + 57008) + 48LL));
  if ( (a2 & 1) == 0
    && (unsigned int)IsWindowDesktopComposed(a1)
    && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0
    && (v11 = SetLayeredWindowAttributes(a1), v11 >= 0) )
  {
    *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) |= 2u;
    v16 = (void *)ReferenceDwmApiPort();
    DwmAsyncChildStyleChange(v16);
  }
  else
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
    {
      v17 = W32GetUserSessionState();
      UpdateSprite(*(HDEV *)(*(_QWORD *)(v17 + 57008) + 48LL), a1, 0LL, 0LL, 0LL, 0LL, 0, 0LL, 0x80000000, 0LL);
    }
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 27LL) & 0x20) != 0 )
      UnsetRedirectedWindow(a1, 1);
    *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) &= ~2u;
    *((_DWORD *)a1 + 95) &= ~0x8000u;
    v7 = IsWindowDesktopComposed(a1);
    v8 = *(HWND *)a1;
    v9 = v7;
    v10 = W32GetUserSessionState();
    v11 = GreDeleteSprite(*(HDEV *)(*(_QWORD *)(v10 + 57008) + 48LL), v8, 0LL, v9);
    SetOrClrWF(0LL, a1, 2568LL, 1LL);
    RemoveVisRgnTracker(a1, 1LL);
    v12 = (void *)ReferenceDwmApiPort();
    DwmAsyncChildStyleChange(v12);
    StyleWindow = (struct tagWND *)GetStyleWindow((__int64)a1, 2848);
    if ( StyleWindow && StyleWindow != a1 )
      RedirectDCEs((__int64)a1);
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
    {
      AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v18);
      zzzLockDisplayAreaAndInvalidateDCCache(a1, 17LL);
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v18);
    }
  }
  v14 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState() + 57008) + 48LL);
  if ( v5 )
    GreUnlockVisRgnWithDmcLockAcquiredEx(v14);
  else
    GreUnlockVisRgn(v14);
  return (unsigned int)v11;
}
