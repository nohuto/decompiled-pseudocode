/*
 * XREFs of ?MarkDirtyWorker@@YAXPEAUtagWND@@@Z @ 0x140167B88
 * Callers:
 *     DirtyVisRgnTrackers @ 0x1400497E8 (DirtyVisRgnTrackers.c)
 *     ?MarkDirtyWorker@@YAXPEAUtagWND@@@Z @ 0x140167B88 (-MarkDirtyWorker@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x140063B70 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     ?MarkDirtyWorker@@YAXPEAUtagWND@@@Z @ 0x140167B88 (-MarkDirtyWorker@@YAXPEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall MarkDirtyWorker(struct tagWND **a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  struct tagWND *v4; // rbx
  __int64 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  struct tagWND *v14; // rcx
  int v15; // esi
  tagObjLock **v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 Prop; // rbx
  _QWORD *v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rcx
  struct tagWND *i; // rbx
  __int128 v24; // [rsp+30h] [rbp-30h] BYREF
  char v25; // [rsp+40h] [rbp-20h]
  char v26; // [rsp+48h] [rbp-18h]

  if ( a1 )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    v4 = a1[18];
    v5 = *(unsigned __int16 *)(UserSessionState + 42324);
    v25 = 0;
    W32GetUserSessionState(v7, v6);
    v24 = 0LL;
    v26 = 0;
    if ( IS_USERCRIT_OWNED_SHAREDONLY(v9, v8, v10) )
    {
      v26 = 1;
      v13 = W32GetUserSessionState(v12, v11);
      v14 = 0LL;
      if ( v4 != (struct tagWND *)(v13 + 42520) )
        v14 = v4;
      *(_QWORD *)&v24 = v14;
      v15 = 0;
      v16 = (tagObjLock **)&v24;
      do
      {
        if ( *v16 )
          tagObjLock::LockExclusive(*v16);
        ++v15;
        ++v16;
      }
      while ( !v15 );
      v25 = 1;
    }
    Prop = RealGetProp(a1[18], v5, 1LL);
    if ( v25 && v26 )
    {
      v18 = v24;
      if ( (_QWORD)v24 )
        tagObjLock::UnLockExclusive((tagObjLock *)v24);
      v25 = 0;
    }
    if ( Prop && !*(_BYTE *)(Prop + 73) )
    {
      *(_BYTE *)(Prop + 73) = 1;
      v20 = (_QWORD *)(Prop + 24);
      v21 = W32GetUserSessionState(v18, v17) + 19728;
      v22 = *(_QWORD *)v21;
      if ( *(_QWORD *)(*(_QWORD *)v21 + 8LL) != v21 )
        __fastfail(3u);
      *v20 = v22;
      v20[1] = v21;
      *(_QWORD *)(v22 + 8) = v20;
      *(_QWORD *)v21 = v20;
    }
    for ( i = a1[14]; i; i = (struct tagWND *)*((_QWORD *)i + 11) )
      MarkDirtyWorker(i);
  }
}
