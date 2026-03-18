/*
 * XREFs of ?_GhostWindowFromHungWindow@@YAPEAUtagWND@@PEBU1@@Z @ 0x140062E78
 * Callers:
 *     UserVisrgnFromHwnd @ 0x140045834 (UserVisrgnFromHwnd.c)
 *     ?UpdateTrackerRegion@CVisRgnTrackerProp@@AEAAXKI@Z @ 0x140049F70 (-UpdateTrackerRegion@CVisRgnTrackerProp@@AEAAXKI@Z.c)
 *     GreUpdateSpriteVisRgn @ 0x1400617E0 (GreUpdateSpriteVisRgn.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x140061FD0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ?GetVisRgn@@YA_NPEAUtagWND@@KPEAUHRGN__@@@Z @ 0x14018287C (-GetVisRgn@@YA_NPEAUtagWND@@KPEAUHRGN__@@@Z.c)
 *     NtUserGhostWindowFromHungWindow @ 0x1401AA300 (NtUserGhostWindowFromHungWindow.c)
 *     DWP_GetEnabledPopup @ 0x1401BFF68 (DWP_GetEnabledPopup.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x140276AB0 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x140063B70 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     IsWindowBeingDestroyed @ 0x1400911AC (IsWindowBeingDestroyed.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

struct tagWND *__fastcall _GhostWindowFromHungWindow(const struct tagWND *a1)
{
  __int64 v2; // rsi
  __int16 *v3; // rdx
  __int16 v4; // bx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 UserSessionState; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // edi
  tagObjLock **v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 Prop; // rdi
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // r15
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  int v31; // edi
  tagObjLock **v32; // rbx
  bool v33; // zf
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 *v46; // r14
  __int128 v47; // [rsp+30h] [rbp-29h] BYREF
  char v48; // [rsp+40h] [rbp-19h]
  char v49; // [rsp+48h] [rbp-11h]
  __int64 v50; // [rsp+50h] [rbp-9h]
  char v51; // [rsp+58h] [rbp-1h]
  __int128 v52; // [rsp+60h] [rbp+7h] BYREF
  char v53; // [rsp+70h] [rbp+17h]
  char v54; // [rsp+78h] [rbp+1Fh]

  v2 = 0LL;
  v3 = *(__int16 **)(*((_QWORD *)a1 + 17) + 8LL);
  v4 = *v3;
  v5 = *(_QWORD *)(W32GetUserSessionState(a1, v3) + 19928);
  if ( v4 != *(_WORD *)(v5 + 900) )
  {
    UserSessionState = W32GetUserSessionState(v6, v5);
    v8 = *((_QWORD *)a1 + 18);
    v9 = *(_QWORD *)(UserSessionState + 19928);
    v10 = *(unsigned __int16 *)(v9 + 900);
    v48 = 0;
    W32GetUserSessionState(v9, v11);
    v47 = 0LL;
    v49 = 0;
    if ( IS_USERCRIT_OWNED_SHAREDONLY() )
    {
      v49 = 1;
      v14 = W32GetUserSessionState(v13, v12);
      v15 = 0LL;
      if ( v8 != v14 + 42520 )
        v15 = v8;
      *(_QWORD *)&v47 = v15;
      v16 = 0;
      v17 = (tagObjLock **)&v47;
      do
      {
        if ( *v17 )
          tagObjLock::LockExclusive(*v17);
        ++v16;
        ++v17;
      }
      while ( !v16 );
      v48 = 1;
    }
    Prop = RealGetProp(*((_QWORD *)a1 + 18), v10, 1LL);
    if ( v48 && v49 )
    {
      v19 = v47;
      if ( (_QWORD)v47 )
        tagObjLock::UnLockExclusive((tagObjLock *)v47);
      v48 = 0;
    }
    if ( Prop )
    {
      v33 = Prop == -1;
    }
    else
    {
      v21 = W32GetUserSessionState(v19, v18);
      v22 = *((_QWORD *)a1 + 18);
      v23 = *(_QWORD *)(v21 + 19928);
      v24 = *(unsigned __int16 *)(v23 + 1378);
      v26 = W32GetUserSessionState(v23, v25);
      v51 = 0;
      v53 = 0;
      v50 = v26 + 42424;
      v52 = 0LL;
      v54 = 0;
      if ( IS_USERCRIT_OWNED_SHAREDONLY() )
      {
        v54 = 1;
        v29 = W32GetUserSessionState(v28, v27);
        v30 = 0LL;
        if ( v22 != v29 + 42520 )
          v30 = v22;
        *(_QWORD *)&v52 = v30;
        if ( !v53 )
        {
          v31 = 0;
          v32 = (tagObjLock **)&v52;
          do
          {
            if ( *v32 )
              tagObjLock::LockExclusive(*v32);
            ++v31;
            ++v32;
          }
          while ( !v31 );
          v53 = 1;
        }
      }
      Prop = RealGetProp(*((_QWORD *)a1 + 18), v24, 1LL);
      if ( v53 && v54 )
      {
        v19 = v52;
        if ( (_QWORD)v52 )
          tagObjLock::UnLockExclusive((tagObjLock *)v52);
        v53 = 0;
      }
      v33 = Prop == 0;
    }
    if ( !v33 )
    {
      W32GetCurrentThreadNonPaged(v19, v18);
      v38 = *(_QWORD *)(W32GetUserSessionState(v36, v35) + 19928);
      if ( (unsigned __int64)(unsigned __int16)Prop < *(_QWORD *)(v38 + 8) )
      {
        v39 = W32GetUserSessionState(v38, v37);
        v42 = *(_DWORD *)(W32GetUserSessionState(v41, v40) + 19952) * (unsigned int)(unsigned __int16)Prop
            + *(_QWORD *)(v39 + 19944);
        v46 = (__int64 *)HMPkheFromPhe(v42);
        LOWORD(Prop) = WORD1(Prop) & 0x7FFF;
        if ( ((WORD1(Prop) & 0x7FFF) == *(_WORD *)(v42 + 26)
           || (_WORD)Prop == 0x7FFF
           || !(_WORD)Prop && PsGetCurrentProcessWow64Process(v44, v43, v45))
          && (*(_BYTE *)(v42 + 25) & 1) == 0
          && *(_BYTE *)(v42 + 24) == 1 )
        {
          v2 = *v46;
        }
      }
      if ( v2 && (unsigned int)IsWindowBeingDestroyed(v2) )
        return 0LL;
    }
  }
  return (struct tagWND *)v2;
}
