/*
 * XREFs of ??$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z @ 0x140031054
 * Callers:
 *     RemoveVisRgnTracker @ 0x1400308C8 (RemoveVisRgnTracker.c)
 *     CreateVisRgnTracker @ 0x140030A08 (CreateVisRgnTracker.c)
 *     OffsetWindow @ 0x140030E80 (OffsetWindow.c)
 *     DirtyVisRgnTrackers @ 0x1400497E8 (DirtyVisRgnTrackers.c)
 *     zzzComposeDesktop @ 0x140168F78 (zzzComposeDesktop.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x140063B70 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall CWindowProp::GetProp<CVisRgnTrackerProp>(__int64 a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // r12
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 UserSessionState; // rax
  __int64 v11; // rcx
  int v12; // esi
  tagObjLock **v13; // rdi
  __int64 Prop; // rdi
  __int128 v16; // [rsp+30h] [rbp-30h] BYREF
  char v17; // [rsp+40h] [rbp-20h]
  char v18; // [rsp+48h] [rbp-18h]

  v4 = ((__int64 (*)(void))W32GetUserSessionState)();
  v5 = *(_QWORD *)(a1 + 144);
  v6 = *(unsigned __int16 *)(v4 + 42324);
  v7 = 0;
  ((__int64 (*)(void))W32GetUserSessionState)();
  v16 = 0LL;
  v17 = 0;
  v18 = 0;
  if ( IS_USERCRIT_OWNED_SHAREDONLY() )
  {
    v18 = 1;
    UserSessionState = W32GetUserSessionState(v9, v8);
    v11 = 0LL;
    if ( v5 != UserSessionState + 42520 )
      v11 = v5;
    *(_QWORD *)&v16 = v11;
    v12 = 0;
    v13 = (tagObjLock **)&v16;
    do
    {
      if ( *v13 )
        tagObjLock::LockExclusive(*v13);
      ++v12;
      ++v13;
    }
    while ( !v12 );
    v17 = 1;
  }
  Prop = RealGetProp(*(_QWORD *)(a1 + 144), v6, 1LL);
  if ( v17 && v18 && (_QWORD)v16 )
    tagObjLock::UnLockExclusive((tagObjLock *)v16);
  *a2 = Prop;
  LOBYTE(v7) = Prop != 0;
  return v7;
}
