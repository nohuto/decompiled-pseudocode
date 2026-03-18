/*
 * XREFs of ?IsCompositionInputWindowForHitTest@@YA_NPEAUtagWND@@@Z @ 0x1400651C0
 * Callers:
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x14003F500 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     ?RestoreLogicalPoint@@YAXPEAUtagWND@@PEAUtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x140153DE0 (-RestoreLogicalPoint@@YAXPEAUtagWND@@PEAUtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027AA48 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x140063B70 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

bool __fastcall IsCompositionInputWindowForHitTest(struct tagWND *a1, __int64 a2)
{
  struct tagWND *v2; // rbx
  struct tagWND *v3; // rax
  int v4; // eax
  int v6; // edi
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  tagObjLock **v19; // rsi
  __int64 v20; // rbx
  __int64 UserSessionState; // rax
  __int64 v22; // rsi
  __int64 v23; // r15
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  int v33; // r14d
  tagObjLock **v34; // rsi
  __int64 Prop; // rsi
  __int128 v36; // [rsp+30h] [rbp-30h] BYREF
  char v37; // [rsp+40h] [rbp-20h]
  char v38; // [rsp+48h] [rbp-18h]

  v2 = a1;
  v3 = a1;
  if ( a1 )
  {
    while ( 1 )
    {
      a2 = *((_QWORD *)v3 + 13);
      if ( !a2 )
        break;
      a1 = (struct tagWND *)*((_QWORD *)v3 + 3);
      if ( a1 )
      {
        a1 = (struct tagWND *)*((_QWORD *)a1 + 1);
        if ( a1 )
        {
          if ( a2 == *((_QWORD *)a1 + 3) )
            goto LABEL_5;
        }
      }
      v3 = (struct tagWND *)*((_QWORD *)v3 + 13);
    }
  }
  else
  {
LABEL_5:
    if ( v3 )
    {
      a1 = (struct tagWND *)*((_QWORD *)v3 + 5);
      if ( *((char *)a1 + 233) < 0 )
        return 1;
    }
  }
  v4 = *((_DWORD *)v2 + 95);
  if ( (v4 & 0x40000000) == 0 )
    return 0;
  v6 = 0;
  if ( (v4 & 0x1000) != 0 )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    v22 = *((_QWORD *)v2 + 18);
    v23 = *(unsigned __int16 *)(UserSessionState + 42318);
    v37 = 0;
    W32GetUserSessionState(v25, v24);
    v36 = 0LL;
    v38 = 0;
    if ( IS_USERCRIT_OWNED_SHAREDONLY(v27, v26, v28) )
    {
      v38 = 1;
      v31 = W32GetUserSessionState(v30, v29);
      v32 = 0LL;
      if ( v22 != v31 + 42520 )
        v32 = v22;
      *(_QWORD *)&v36 = v32;
      v33 = 0;
      v34 = (tagObjLock **)&v36;
      do
      {
        if ( *v34 )
          tagObjLock::LockExclusive(*v34);
        ++v33;
        ++v34;
      }
      while ( !v33 );
      v37 = 1;
    }
    Prop = RealGetProp(*((_QWORD *)v2 + 18), v23, 1LL);
    if ( v37 && v38 )
    {
      a1 = (struct tagWND *)v36;
      if ( (_QWORD)v36 )
        tagObjLock::UnLockExclusive((tagObjLock *)v36);
      v37 = 0;
    }
    if ( Prop && *(_DWORD *)(Prop + 28) )
      return 1;
  }
  if ( (*((_DWORD *)v2 + 95) & 0x1000) != 0 )
    return 0;
  v7 = W32GetUserSessionState(a1, a2);
  v8 = *((_QWORD *)v2 + 18);
  v9 = *(unsigned __int16 *)(v7 + 42320);
  W32GetUserSessionState(v11, v10);
  v37 = 0;
  v36 = 0LL;
  v38 = 0;
  if ( IS_USERCRIT_OWNED_SHAREDONLY(v13, v12, v14) )
  {
    v38 = 1;
    v17 = W32GetUserSessionState(v16, v15);
    v18 = 0LL;
    if ( v8 != v17 + 42520 )
      v18 = v8;
    *(_QWORD *)&v36 = v18;
    if ( !v37 )
    {
      v19 = (tagObjLock **)&v36;
      do
      {
        if ( *v19 )
          tagObjLock::LockExclusive(*v19);
        ++v6;
        ++v19;
      }
      while ( !v6 );
      v37 = 1;
    }
  }
  v20 = RealGetProp(*((_QWORD *)v2 + 18), v9, 1LL);
  if ( v37 && v38 )
  {
    if ( (_QWORD)v36 )
      tagObjLock::UnLockExclusive((tagObjLock *)v36);
    v37 = 0;
  }
  if ( !v20 )
    return 1;
  return (*(_DWORD *)(v20 + 52) & 2) == 0;
}
