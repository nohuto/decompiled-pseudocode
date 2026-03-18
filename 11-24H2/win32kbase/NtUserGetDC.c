/*
 * XREFs of NtUserGetDC @ 0x14016C9E0
 * Callers:
 *     <none>
 * Callees:
 *     GreSelectVisRgnShared @ 0x14000FDA0 (GreSelectVisRgnShared.c)
 *     EnterSharedCrit @ 0x140010CB0 (EnterSharedCrit.c)
 *     GreUnlockVisRgn @ 0x140021330 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x140021770 (GreLockVisRgn.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     GreCreateRectRgnIndirect @ 0x14002D480 (GreCreateRectRgnIndirect.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _GetDC @ 0x1400997F0 (_GetDC.c)
 *     ValidateHwndEx @ 0x1400B7530 (ValidateHwndEx.c)
 *     ?HasUILimit@tagPROCESSINFO@@QEBA_NK@Z @ 0x1401A3340 (-HasUILimit@tagPROCESSINFO@@QEBA_NK@Z.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x1401A9280 (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

HDC __fastcall NtUserGetDC(__int64 a1)
{
  BOOL v2; // esi
  __int64 v3; // rbx
  __int64 v4; // rdi
  HDC DC; // rdi
  __int64 v6; // rcx
  bool HasUILimit; // al
  __int64 v8; // rcx
  struct tagTHREADINFO *v9; // rcx
  __int64 *v10; // rcx
  __int64 v11; // rcx
  struct HOBJ__ *RectRgnIndirect; // rbx
  __int64 v13; // rcx
  __int64 UserSessionState; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int128 v18; // [rsp+20h] [rbp-38h] BYREF

  v2 = 1;
  v3 = EnterSharedCrit(0, 1u);
  if ( a1 )
  {
    v4 = ValidateHwndEx(a1, 1, 0);
    if ( !v4 )
    {
      DC = 0LL;
      goto LABEL_17;
    }
  }
  else
  {
    v4 = 0LL;
  }
  if ( (unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline() )
  {
    HasUILimit = tagPROCESSINFO::HasUILimit(*(tagPROCESSINFO **)(v3 + 464), 1u);
LABEL_9:
    if ( HasUILimit && !v4 )
    {
      v10 = *(__int64 **)(*(_QWORD *)(*((_QWORD *)PtiCurrent(v8) + 62) + 8LL) + 24LL);
      if ( v10 )
        v11 = *v10;
      else
        v11 = 0LL;
      v2 = ValidateHwndEx(v11, 1, 0) != 0;
    }
    goto LABEL_15;
  }
  v9 = PtiCurrent(v6);
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)v9 + 132, 0, 0) & 0x20000000) != 0 )
  {
    v8 = *((_QWORD *)PtiCurrent((__int64)v9) + 58);
    HasUILimit = *(_BYTE *)(*(_QWORD *)(v8 + 760) + 32LL) & 1;
    goto LABEL_9;
  }
LABEL_15:
  DC = (HDC)GetDC(v4);
  if ( !v2 )
  {
    v18 = 0LL;
    RectRgnIndirect = GreCreateRectRgnIndirect((struct REGION_CORE *)&v18);
    UserSessionState = W32GetUserSessionState(v13);
    GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(UserSessionState + 57008) + 48LL));
    GreSelectVisRgnShared(DC, (__int64)RectRgnIndirect, 1u);
    v16 = W32GetUserSessionState(v15);
    GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v16 + 57008) + 48LL));
  }
LABEL_17:
  UserSessionSwitchLeaveCritWithNonPaged();
  return DC;
}
