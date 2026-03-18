/*
 * XREFs of ?xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x14024F6E8
 * Callers:
 *     xxxDestroyWindow @ 0x14015EF90 (xxxDestroyWindow.c)
 * Callees:
 *     ?SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z @ 0x14002F994 (-SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x140042064 (xxxSendTransformableMessageTimeout.c)
 *     xxxRedrawWindow @ 0x140042630 (xxxRedrawWindow.c)
 *     ?IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z @ 0x140048AF4 (-IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z.c)
 *     SetOrClrWF @ 0x140049160 (SetOrClrWF.c)
 *     _IsTopLevelWindow @ 0x140049A60 (_IsTopLevelWindow.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x140061FD0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     PostShellHookMessagesEx @ 0x140067280 (PostShellHookMessagesEx.c)
 *     ?IsInsideUserApiHook@@YAHXZ @ 0x140068C50 (-IsInsideUserApiHook@@YAHXZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSetWindowPos @ 0x140076C44 (xxxSetWindowPos.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x140087B20 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x14009A5A4 (--1MenuStateOwnerLockxxxUnlock@@QEAA@XZ.c)
 *     ?xxxHandleGhostRelatedWindowDestruction@@YAXPEAUtagWND@@@Z @ 0x14017CC60 (-xxxHandleGhostRelatedWindowDestruction@@YAXPEAUtagWND@@@Z.c)
 *     IsMotherDesktopWindow @ 0x14018A580 (IsMotherDesktopWindow.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1401D109C (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     zzzAttachThreadInput @ 0x1401E1E5C (zzzAttachThreadInput.c)
 *     ?PostUnownedNotification@@YAXPEAUtagWND@@@Z @ 0x14024F684 (-PostUnownedNotification@@YAXPEAUtagWND@@@Z.c)
 *     xxxFlushPalette @ 0x1402BCC90 (xxxFlushPalette.c)
 *     xxxEndMenu @ 0x1402E8608 (xxxEndMenu.c)
 */

void __fastcall xxxDestroyWindow_Phase1(struct tagWND *a1, struct tagTHREADINFO *a2, int a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 i; // rbx
  __int64 UserSessionState; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-28h] BYREF
  char v24; // [rsp+80h] [rbp+8h] BYREF

  if ( IsInsideUserApiHook((__int64)a1, (__int64)a2) )
    xxxSendTransformableMessageTimeout((struct tagTHREADINFO **)a1, 144LL, 0LL, 0LL, 0, 0, 0LL, 1, 1);
  v8 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 648LL);
  if ( v8 )
  {
    if ( a1 == *(struct tagWND **)(*(_QWORD *)v8 + 8LL) )
    {
      v9 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 648LL);
      do
      {
        *(_DWORD *)(v8 + 8) &= ~4u;
        v8 = *(_QWORD *)(v8 + 48);
      }
      while ( v8 );
      if ( (*(_DWORD *)(v9 + 8) & 0x100) == 0 )
      {
        MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
          (MenuStateOwnerLockxxxUnlock *)&v24,
          (struct tagTHREADINFO **)v9);
        xxxEndMenu(v9);
        MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v24);
      }
    }
  }
  v10 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v10 + 31) & 0x40) == 0 && !*((_QWORD *)a1 + 15) && (*(_BYTE *)(v10 + 18) & 0x20) != 0 )
    xxxFlushPalette(a1, v8, v6, v7);
  v11 = *((_QWORD *)a1 + 17);
  if ( **(_WORD **)(v11 + 8) != *(_WORD *)(*(_QWORD *)(W32GetUserSessionState(v10, v8) + 19928) + 898LL)
    && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
  {
    v13 = *((_QWORD *)a1 + 15);
    if ( v13 )
    {
      v12 = *(_QWORD *)(v13 + 16);
      v14 = *((_QWORD *)a1 + 2);
      if ( v12 != v14 )
        zzzAttachThreadInput(v14, v12, 0);
    }
  }
  v15 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v15 + 31) & 0x40) != 0 && (*(_BYTE *)(v15 + 24) & 4) == 0 && !IsTopLevelWindow((__int64)a1) )
  {
    v12 = *((_QWORD *)a1 + 13);
    if ( v12 )
    {
      Win32HM_LockIntoThread<0>((__int64)a2, v12, BugCheckParameter3);
      xxxSendTransformableMessageTimeout(
        *((struct tagTHREADINFO ***)a1 + 13),
        528LL,
        (*(unsigned __int16 *)(*((_QWORD *)a1 + 5) + 320LL) << 16) | 2,
        *(struct tagDRAWITEMSTRUCT **)a1,
        0,
        0,
        0LL,
        1,
        0);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v16);
    }
  }
  if ( !(unsigned int)IsMotherDesktopWindow((__int64)a1, v12) )
    SetOrClrWF(1, a1, 0x480u, 1);
  if ( !a3 )
  {
    xxxHandleGhostRelatedWindowDestruction(a1);
    if ( IsTopLevelWindow((__int64)a1) )
    {
      v18 = *(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL);
      for ( i = *(_QWORD *)(*(_QWORD *)(v18 + 24) + 112LL); i; i = *(_QWORD *)(i + 88) )
      {
        if ( *(struct tagWND **)(i + 120) == a1 && a2 != *(struct tagTHREADINFO **)(i + 16) )
          PostUnownedNotification((struct tagWND *)i, v17);
      }
    }
  }
  LOBYTE(v18) = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
  if ( (v18 & 0x10) != 0 )
  {
    if ( (v18 & 0x40) != 0 )
    {
      UserSessionState = W32GetUserSessionState(v18, v17);
      xxxShowWindowEx(
        a1,
        *(_DWORD *)(UserSessionState + 67056) & 0x10000,
        *(_DWORD *)(UserSessionState + 67056) & 0x10000);
    }
    else
    {
      xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, a3 != 0 ? 8343 : 151);
    }
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
    {
      SetVisible((__int64)a1, 0);
      v21 = *((_QWORD *)a2 + 62);
      if ( v21 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(v21 + 8) + 24LL) )
        {
          v22 = *((_QWORD *)a1 + 13);
          if ( v22 )
            zzzLockDisplayAreaAndInvalidateDCCache(v22, 16LL, 0LL);
          xxxRedrawWindow(0LL, *((_QWORD *)a1 + 5) + 88LL, 0LL, 133);
        }
      }
    }
  }
  else if ( IsTrayWindow(a1, 1LL) && (*(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) & 0x2FFF) != 0x2AA )
  {
    PostShellHookMessagesEx((LastWokenThread *)2, *(_QWORD *)a1);
  }
}
