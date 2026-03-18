/*
 * XREFs of GetRedirectionBitmap @ 0x140063BA0
 * Callers:
 *     UnsetRedirectedWindow @ 0x14002D720 (UnsetRedirectedWindow.c)
 *     UpdateRedirectedDCE @ 0x14002F480 (UpdateRedirectedDCE.c)
 *     zzzUpdateLayeredWindow @ 0x140035DCC (zzzUpdateLayeredWindow.c)
 *     RecreateRedirectionBitmap @ 0x140039394 (RecreateRedirectionBitmap.c)
 *     CalcVisRgn @ 0x1400437F0 (CalcVisRgn.c)
 *     UserVisrgnFromHwnd @ 0x140045834 (UserVisrgnFromHwnd.c)
 *     ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1400463C0 (-SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     GreUpdateSpriteVisRgn @ 0x1400617E0 (GreUpdateSpriteVisRgn.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x140061FD0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x14008B5E8 (zzzUpdateWindowsAfterModeChange.c)
 *     SetRedirectedWindow @ 0x1400B67B4 (SetRedirectedWindow.c)
 *     _SetLayeredWindowAttributes @ 0x14015DCB4 (_SetLayeredWindowAttributes.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x14022C6A8 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     ChangeWindowBitmapOwner @ 0x140285530 (ChangeWindowBitmapOwner.c)
 *     UserRecreateRedirectionBitmap @ 0x140285640 (UserRecreateRedirectionBitmap.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x140063B70 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall GetRedirectionBitmap(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 UserSessionState; // rax
  __int64 v5; // rdi
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // esi
  tagObjLock **v17; // rdi
  __int64 Prop; // rdi
  __int128 v20; // [rsp+30h] [rbp-30h] BYREF
  char v21; // [rsp+40h] [rbp-20h]
  char v22; // [rsp+48h] [rbp-18h]

  v3 = 0LL;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v5 = *(_QWORD *)(a1 + 144);
  v6 = *(unsigned __int16 *)(UserSessionState + 41422);
  v21 = 0;
  W32GetUserSessionState(v8, v7);
  v20 = 0LL;
  v22 = 0;
  if ( IS_USERCRIT_OWNED_SHAREDONLY(v10, v9, v11) )
  {
    v22 = 1;
    v14 = W32GetUserSessionState(v13, v12);
    v15 = 0LL;
    if ( v5 != v14 + 42520 )
      v15 = v5;
    *(_QWORD *)&v20 = v15;
    v16 = 0;
    v17 = (tagObjLock **)&v20;
    do
    {
      if ( *v17 )
        tagObjLock::LockExclusive(*v17);
      ++v16;
      ++v17;
    }
    while ( !v16 );
    v21 = 1;
  }
  Prop = RealGetProp(*(_QWORD *)(a1 + 144), v6, 1LL);
  if ( v21 && v22 )
  {
    if ( (_QWORD)v20 )
      tagObjLock::UnLockExclusive((tagObjLock *)v20);
    v21 = 0;
  }
  if ( Prop )
    return *(_QWORD *)Prop;
  return v3;
}
