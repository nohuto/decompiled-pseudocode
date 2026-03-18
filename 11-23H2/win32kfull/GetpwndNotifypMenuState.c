/*
 * XREFs of GetpwndNotifypMenuState @ 0x1C00E14CC
 * Callers:
 *     IsModelessMenuNotificationWindow @ 0x1C00E14A8 (IsModelessMenuNotificationWindow.c)
 *     xxxGetSystemMenu @ 0x1C00E2BDC (xxxGetSystemMenu.c)
 *     xxxMNInvertItem @ 0x1C0234DB0 (xxxMNInvertItem.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall GetpwndNotifypMenuState(__int64 a1)
{
  _QWORD *result; // rax

  for ( result = *(_QWORD **)(*(_QWORD *)(a1 + 16) + 608LL);
        result && *(_QWORD *)(*result + 8LL) != a1;
        result = (_QWORD *)result[6] )
  {
    ;
  }
  return result;
}
