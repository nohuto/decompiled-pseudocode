/*
 * XREFs of FlushWEFCOMPOSITEDDCEBounds @ 0x140156C00
 * Callers:
 *     <none>
 * Callees:
 *     _GetProp @ 0x1400639A0 (_GetProp.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1400829D0 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     UnionRect @ 0x140156E48 (UnionRect.c)
 *     ?PostCOMPOSITEDInvalidateAPC@@YAHQEAUtagWND@@PEBUtagRECT@@@Z @ 0x140156EF8 (-PostCOMPOSITEDInvalidateAPC@@YAHQEAUtagWND@@PEBUtagRECT@@@Z.c)
 *     ?InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z @ 0x140157004 (-InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall FlushWEFCOMPOSITEDDCEBounds(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  __int64 Prop; // rax
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rdx
  bool v11; // al
  struct tagWND *v12; // rcx
  struct tagRECT v13; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v13 = 0LL;
  result = GreGetBounds(v2, &v13, 4LL);
  if ( (_DWORD)result )
  {
    UserSessionState = W32GetUserSessionState(v5, v4);
    Prop = GetProp(*(_QWORD *)(a1 + 96), *(unsigned __int16 *)(UserSessionState + 41422), 1u);
    v9 = *(_QWORD *)(a1 + 96);
    v10 = *(_QWORD *)(v9 + 40);
    if ( (*(_BYTE *)(v10 + 27) & 0x10) != 0 )
    {
      return UnionRect(Prop + 16, Prop + 16, &v13);
    }
    else
    {
      v11 = IS_USERCRIT_OWNED_EXCLUSIVE(v9, v10, v8);
      v12 = *(struct tagWND **)(a1 + 96);
      if ( v11 )
        return InvalidateWEFCOMPOSITEDWindow(v12, &v13);
      else
        return PostCOMPOSITEDInvalidateAPC(v12, &v13);
    }
  }
  return result;
}
