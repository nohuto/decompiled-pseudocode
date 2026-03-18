/*
 * XREFs of ?RecalcDCVisRgn@@YAXPEAUHDC__@@@Z @ 0x1402E8FE0
 * Callers:
 *     xxxMNInvertItem @ 0x14006BB74 (xxxMNInvertItem.c)
 *     xxxMenuBarDraw @ 0x1401FBF4C (xxxMenuBarDraw.c)
 * Callees:
 *     RevalidateDCE @ 0x14002F640 (RevalidateDCE.c)
 */

void __fastcall RecalcDCVisRgn(HDC a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(UserSessionState + 57008) + 48LL));
  v4 = LookupDC(a1, 1LL);
  if ( v4 )
    RevalidateDCE(v4);
  v7 = W32GetUserSessionState(v6, v5);
  GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v7 + 57008) + 48LL));
}
