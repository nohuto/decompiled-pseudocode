/*
 * XREFs of GetpwndNotifypMenuState @ 0x14006CDCC
 * Callers:
 *     xxxMNInvertItem @ 0x14006BB74 (xxxMNInvertItem.c)
 *     IsModelessMenuNotificationWindow @ 0x14006CD9C (IsModelessMenuNotificationWindow.c)
 *     xxxGetSystemMenu @ 0x1402C8A74 (xxxGetSystemMenu.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall GetpwndNotifypMenuState(__int64 a1)
{
  _QWORD *result; // rax

  for ( result = *(_QWORD **)(*(_QWORD *)(a1 + 16) + 648LL);
        result && *(_QWORD *)(*result + 8LL) != a1;
        result = (_QWORD *)result[6] )
  {
    ;
  }
  return result;
}
