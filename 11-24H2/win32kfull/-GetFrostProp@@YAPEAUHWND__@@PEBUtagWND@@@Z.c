/*
 * XREFs of ?GetFrostProp@@YAPEAUHWND__@@PEBUtagWND@@@Z @ 0x140064ACC
 * Callers:
 *     ?xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z @ 0x140064910 (-xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z.c)
 *     ?_ShouldGhostWindow@@YA_NPEBUtagWND@@@Z @ 0x140148DBC (-_ShouldGhostWindow@@YA_NPEBUtagWND@@@Z.c)
 *     ?IsWindowGhosted@@YA_NPEBUtagWND@@@Z @ 0x14017CCA8 (-IsWindowGhosted@@YA_NPEBUtagWND@@@Z.c)
 *     ?_HungWindowFromGhostWindow@@YAPEAUtagWND@@PEBU1@@Z @ 0x1401AACAC (-_HungWindowFromGhostWindow@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     ?SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1402ACF68 (-SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     ?_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z @ 0x1402AD240 (-_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxFrostCrashedWindow@@YAPEAUHWND__@@PEAUtagWND@@PEAU1@@Z @ 0x1402AD36C (-xxxFrostCrashedWindow@@YAPEAUHWND__@@PEAUtagWND@@PEAU1@@Z.c)
 *     ?xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z @ 0x1402AD4EC (-xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x140063B70 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall GetFrostProp(const struct tagWND *a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // edi
  tagObjLock **v16; // rbx
  __int64 Prop; // rbx
  __int128 v19; // [rsp+30h] [rbp-30h] BYREF
  char v20; // [rsp+40h] [rbp-20h]
  char v21; // [rsp+48h] [rbp-18h]

  UserSessionState = W32GetUserSessionState(a1, a2);
  v4 = *((_QWORD *)a1 + 18);
  v5 = *(_QWORD *)(UserSessionState + 19928);
  v6 = *(unsigned __int16 *)(v5 + 1378);
  v20 = 0;
  W32GetUserSessionState(v7, v5);
  v19 = 0LL;
  v21 = 0;
  if ( IS_USERCRIT_OWNED_SHAREDONLY(v9, v8, v10) )
  {
    v21 = 1;
    v13 = W32GetUserSessionState(v12, v11);
    v14 = 0LL;
    if ( v4 != v13 + 42520 )
      v14 = v4;
    *(_QWORD *)&v19 = v14;
    v15 = 0;
    v16 = (tagObjLock **)&v19;
    do
    {
      if ( *v16 )
        tagObjLock::LockExclusive(*v16);
      ++v15;
      ++v16;
    }
    while ( !v15 );
    v20 = 1;
  }
  Prop = RealGetProp(*((_QWORD *)a1 + 18), v6, 1LL);
  if ( v20 && v21 && (_QWORD)v19 )
    tagObjLock::UnLockExclusive((tagObjLock *)v19);
  return Prop;
}
