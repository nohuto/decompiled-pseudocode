/*
 * XREFs of CmpInvalidateAllHigherLayerKcbsPostCallback @ 0x1407E1780
 * Callers:
 *     <none>
 * Callees:
 *     CmpInvalidateSubtree @ 0x1407DB530 (CmpInvalidateSubtree.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14086D654 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpMarkKeyUnbacked @ 0x14087F7A8 (CmpMarkKeyUnbacked.c)
 *     CmpDiscardKcb @ 0x140965058 (CmpDiscardKcb.c)
 */

__int64 __fastcall CmpInvalidateAllHigherLayerKcbsPostCallback(ULONG_PTR a1, __int64 a2, unsigned int *a3)
{
  CmpInvalidateSubtree(a1, *a3, a3[1], a2, 0LL);
  if ( (a3[1] & 2) != 0 )
  {
    CmpMarkKeyUnbacked(a1, a2);
    CmpFlushNotifiesOnKeyBodyList(a1, *a3, a2);
    CmpDiscardKcb(a1);
  }
  return 0LL;
}
