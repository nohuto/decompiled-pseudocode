/*
 * XREFs of ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x140063510
 * Callers:
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x14003F500 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     ?GetCompositeAppFrameWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1400671BC (-GetCompositeAppFrameWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     xxxSetWindowPos @ 0x140076C44 (xxxSetWindowPos.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140088950 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?GetWindowCloakStateComponentUIAware@@YA?AW4CloakState@@PEBUtagWND@@@Z @ 0x140093708 (-GetWindowCloakStateComponentUIAware@@YA-AW4CloakState@@PEBUtagWND@@@Z.c)
 *     ?IsPartOfCompositeApplication@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x140094C20 (-IsPartOfCompositeApplication@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     xxxTrackPopupMenuEx @ 0x140099644 (xxxTrackPopupMenuEx.c)
 *     ?IsWindowShellCloakedComponentUIAware@@YA_NPEBUtagWND@@_N@Z @ 0x14009A45C (-IsWindowShellCloakedComponentUIAware@@YA_NPEBUtagWND@@_N@Z.c)
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x14009A4C4 (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ValidateHwndIAMComponetUIAware @ 0x1400F5B08 (ValidateHwndIAMComponetUIAware.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1400F6DEC (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?SetCompositionInputWindowUIOwner@@YA_NPEAUtagWND@@0@Z @ 0x140110A8C (-SetCompositionInputWindowUIOwner@@YA_NPEAUtagWND@@0@Z.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1401C8A38 (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     ?IsHostOrComponentThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z @ 0x14020E33C (-IsHostOrComponentThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z.c)
 *     ?IsHostThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z @ 0x14020E3C4 (-IsHostThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x14023413C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     NtUserSetWindowCompositionAttribute @ 0x140246D90 (NtUserSetWindowCompositionAttribute.c)
 *     xxxRealDefWindowProc @ 0x140252B3C (xxxRealDefWindowProc.c)
 *     ?GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1402C8554 (-GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x140063B70 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall CoreWindowProp::IsComponent(const struct tagWND *a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v5; // rdi
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  tagObjLock **v13; // rdi
  int v14; // esi
  __int64 Prop; // rbx
  __int128 v16; // [rsp+30h] [rbp-38h] BYREF
  char v17; // [rsp+40h] [rbp-28h]
  char v18; // [rsp+48h] [rbp-20h]

  if ( !a1 || (*((_DWORD *)a1 + 95) & 0x1000) == 0 )
    return 0LL;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v5 = *((_QWORD *)a1 + 18);
  v6 = *(unsigned __int16 *)(UserSessionState + 42318);
  v17 = 0;
  W32GetUserSessionState(v8, v7);
  v16 = 0LL;
  v18 = 0;
  if ( IS_USERCRIT_OWNED_SHAREDONLY() )
  {
    v18 = 1;
    v11 = W32GetUserSessionState(v10, v9);
    v12 = 0LL;
    if ( v5 != v11 + 42520 )
      v12 = v5;
    *(_QWORD *)&v16 = v12;
    v13 = (tagObjLock **)&v16;
    v14 = 0;
    do
    {
      if ( *v13 )
        tagObjLock::LockExclusive(*v13);
      ++v14;
      ++v13;
    }
    while ( !v14 );
    v17 = 1;
  }
  Prop = RealGetProp(*((_QWORD *)a1 + 18), v6, 1LL);
  if ( v17 && v18 )
  {
    if ( (_QWORD)v16 )
      tagObjLock::UnLockExclusive((tagObjLock *)v16);
    v17 = 0;
  }
  if ( Prop )
    return *(unsigned int *)(Prop + 28);
  else
    return 0LL;
}
