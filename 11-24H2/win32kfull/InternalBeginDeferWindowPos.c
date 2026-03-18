/*
 * XREFs of InternalBeginDeferWindowPos @ 0x1400F4B34
 * Callers:
 *     xxxProcessSetWindowPosEvent @ 0x1400F48B0 (xxxProcessSetWindowPosEvent.c)
 *     xxxSetWindowRgn @ 0x1400F4A4C (xxxSetWindowRgn.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x14014F0F0 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     xxxSetWindowPosAndBand @ 0x14022F1B8 (xxxSetWindowPosAndBand.c)
 *     ?xxxMoveSizeSetWindowPosOld@@YAXPEAUMOVESIZEDATA@@UtagRECT@@@Z @ 0x1402A8C4C (-xxxMoveSizeSetWindowPosOld@@YAXPEAUMOVESIZEDATA@@UtagRECT@@@Z.c)
 *     ?xxxUpdatePosAndStateForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1IW4MinMaxOptions@@_NPEAUtagRECT@@3AEBU5@PEAUWindowAction@1@@Z @ 0x1402D8B48 (-xxxUpdatePosAndStateForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1IW4MinMaxOptions@@_N.c)
 *     xxxArrangeIconicWindows @ 0x1402E9D44 (xxxArrangeIconicWindows.c)
 * Callees:
 *     AllocateCvr @ 0x1400F4CB0 (AllocateCvr.c)
 */

_OWORD *__fastcall InternalBeginDeferWindowPos(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 UserSessionState; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  _OWORD *v9; // rbx
  __int64 v11; // rax

  v2 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( (*(_DWORD *)(W32GetUserSessionState(v5, v4) + 67056) & 0x40000000) == 0
    && (signed int)v2 <= *(_DWORD *)(UserSessionState + 63328) )
  {
    v8 = W32GetUserSessionState(v7, v6);
    *(_DWORD *)(v8 + 67056) |= 0x40000000u;
    v9 = (_OWORD *)(UserSessionState + 63296);
    *v9 = 0LL;
    v9[1] = 0LL;
    return v9;
  }
  v11 = Win32AllocPoolWithQuotaZInit(48LL, 2004054869LL);
  v9 = (_OWORD *)v11;
  if ( v11 )
  {
    if ( (unsigned int)AllocateCvr(v11, v2) )
      return v9;
    Win32FreePool(v9);
  }
  return 0LL;
}
