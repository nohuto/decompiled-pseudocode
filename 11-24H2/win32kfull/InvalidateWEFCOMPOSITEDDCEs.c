/*
 * XREFs of InvalidateWEFCOMPOSITEDDCEs @ 0x140156CBC
 * Callers:
 *     xxxSystemTimerProc @ 0x14023EF10 (xxxSystemTimerProc.c)
 * Callees:
 *     _GetProp @ 0x1400639A0 (_GetProp.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1400829D0 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     UnionRect @ 0x140156E48 (UnionRect.c)
 *     ?PostCOMPOSITEDInvalidateAPC@@YAHQEAUtagWND@@PEBUtagRECT@@@Z @ 0x140156EF8 (-PostCOMPOSITEDInvalidateAPC@@YAHQEAUtagWND@@PEBUtagRECT@@@Z.c)
 *     ?InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z @ 0x140157004 (-InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall InvalidateWEFCOMPOSITEDDCEs(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 *i; // rbx
  __int64 v8; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 Prop; // rax
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rdx
  bool v16; // al
  struct tagWND *v17; // rcx
  struct tagRECT v18; // [rsp+20h] [rbp-28h] BYREF

  UserSessionState = W32GetUserSessionState(a1, a2);
  GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(UserSessionState + 57008) + 48LL));
  v6 = *(_QWORD *)(W32GetUserSessionState(v4, v3) + 57008);
  for ( i = *(__int64 **)(v6 + 24); ; i = (__int64 *)*i )
  {
    v6 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 57008) + 24LL;
    if ( i == (__int64 *)v6 )
      break;
    if ( (i[6] & 0x4400800) == 0 )
    {
      if ( i[10] )
      {
        if ( !(unsigned int)GreIsRendering(i[2]) && (i[6] & 0x5000) == 0x5000 )
        {
          v6 = *(_QWORD *)(i[12] + 40);
          if ( (*(_BYTE *)(v6 + 27) & 2) != 0 )
          {
            v10 = i[2];
            v18 = 0LL;
            if ( (unsigned int)GreGetBounds(v10, &v18, 4LL) )
            {
              v11 = W32GetUserSessionState(v6, v5);
              Prop = GetProp(i[12], *(unsigned __int16 *)(v11 + 41422), 1u);
              v14 = i[12];
              v15 = *(_QWORD *)(v14 + 40);
              if ( (*(_BYTE *)(v15 + 27) & 0x10) != 0 )
              {
                UnionRect(Prop + 16, Prop + 16, &v18);
              }
              else
              {
                v16 = IS_USERCRIT_OWNED_EXCLUSIVE(v14, v15, v13);
                v17 = (struct tagWND *)i[12];
                if ( v16 )
                  InvalidateWEFCOMPOSITEDWindow(v17, &v18);
                else
                  PostCOMPOSITEDInvalidateAPC(v17, &v18);
              }
            }
          }
        }
      }
    }
  }
  v8 = W32GetUserSessionState(v6, v5);
  return GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v8 + 57008) + 48LL));
}
