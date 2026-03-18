/*
 * XREFs of EngDeleteWnd @ 0x140301530
 * Callers:
 *     <none>
 * Callees:
 *     UserAssociateHwnd @ 0x1402859A0 (UserAssociateHwnd.c)
 *     GreDeleteWnd @ 0x140301670 (GreDeleteWnd.c)
 */

void __stdcall EngDeleteWnd(WNDOBJ *pwo)
{
  __int64 v2; // rcx

  if ( (unsigned int)UserIsUserCritSecIn(pwo) )
  {
    v2 = *(_QWORD *)&pwo[3].coClient.rclBounds.top;
    if ( v2 )
      UserAssociateHwnd(v2, 0LL);
    GreDeleteWnd((struct EWNDOBJ *)pwo);
  }
}
