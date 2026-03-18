/*
 * XREFs of CmpFlushNotifiesPostCallback @ 0x1407D18C0
 * Callers:
 *     <none>
 * Callees:
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14086DF70 (CmpFlushNotifiesOnKeyBodyList.c)
 */

__int64 __fastcall CmpFlushNotifiesPostCallback(__int64 a1, __int64 a2, unsigned int *a3)
{
  CmpFlushNotifiesOnKeyBodyList(a1, *a3, a2);
  return 0LL;
}
