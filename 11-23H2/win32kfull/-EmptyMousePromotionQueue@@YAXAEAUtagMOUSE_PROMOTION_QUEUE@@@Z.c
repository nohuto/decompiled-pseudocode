/*
 * XREFs of ?EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1C00723EC
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C0071B3C (-InitiateWin32kCleanup@@YAHXZ.c)
 *     ?OnPointerInputRetrieval@PointerPromotion@@YAXGKUtagPOINT@@H@Z @ 0x1C015586E (-OnPointerInputRetrieval@PointerPromotion@@YAXGKUtagPOINT@@H@Z.c)
 *     ?CancelAutoPromotion@@YAXXZ @ 0x1C01F7188 (-CancelAutoPromotion@@YAXXZ.c)
 *     ?PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x1C01F7978 (-PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z.c)
 *     ?ResetMousePromotionInfo@@YAXGG@Z @ 0x1C01F7BF8 (-ResetMousePromotionInfo@@YAXGG@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall EmptyMousePromotionQueue(struct tagMOUSE_PROMOTION_QUEUE *a1)
{
  _QWORD *i; // rcx

  for ( i = *(_QWORD **)a1; i; i = *(_QWORD **)a1 )
  {
    *(_QWORD *)a1 = *i;
    Win32FreePool(i);
  }
  *((_QWORD *)a1 + 1) = 0LL;
}
