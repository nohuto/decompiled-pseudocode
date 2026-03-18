/*
 * XREFs of ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1401D1FA4
 * Callers:
 *     xxxRealDefWindowProc @ 0x140252B3C (xxxRealDefWindowProc.c)
 * Callees:
 *     ?SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z @ 0x14002F994 (-SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z.c)
 *     SetRedrawProp @ 0x140031254 (SetRedrawProp.c)
 *     SetOrClrWF @ 0x140049160 (SetOrClrWF.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x140061FD0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     SpbCheckPwnd @ 0x140098004 (SpbCheckPwnd.c)
 */

void __fastcall xxxDWP_SetRedraw(struct tagWND *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx

  v2 = *((_QWORD *)a1 + 5);
  if ( (_DWORD)a2 )
  {
    if ( (*(_BYTE *)(v2 + 31) & 0x10) == 0 )
    {
      SetRedrawProp((__int64)a1, 0);
      SetVisible((__int64)a1, 1u);
      v7 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 57008);
      if ( *(_QWORD *)(v7 + 40) )
        SpbCheckPwnd(a1, v7);
      zzzLockDisplayAreaAndInvalidateDCCache((__int64)a1, 1LL, 0LL);
      SetOrClrWF(1, a1, 0x108u, 1);
    }
  }
  else if ( (*(_BYTE *)(v2 + 31) & 0x10) != 0 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 57008) + 40LL) )
      SpbCheckPwnd(a1, v4);
    SetRedrawProp((__int64)a1, 1);
    SetVisible((__int64)a1, 2u);
    zzzLockDisplayAreaAndInvalidateDCCache((__int64)a1, 1LL, 0LL);
  }
}
