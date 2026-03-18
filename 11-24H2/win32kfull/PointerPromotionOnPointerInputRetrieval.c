/*
 * XREFs of PointerPromotionOnPointerInputRetrieval @ 0x1400A7730
 * Callers:
 *     <none>
 * Callees:
 *     ?OnPointerInputRetrieval@PointerPromotion@@YAXGKUtagPOINT@@H@Z @ 0x1400A7748 (-OnPointerInputRetrieval@PointerPromotion@@YAXGKUtagPOINT@@H@Z.c)
 */

void __fastcall PointerPromotionOnPointerInputRetrieval(
        PointerPromotion *a1,
        unsigned __int16 a2,
        unsigned int a3,
        struct tagPOINT a4)
{
  int v4; // [rsp+20h] [rbp-8h]

  PointerPromotion::OnPointerInputRetrieval(a1, a2, a3, a4, v4);
}
