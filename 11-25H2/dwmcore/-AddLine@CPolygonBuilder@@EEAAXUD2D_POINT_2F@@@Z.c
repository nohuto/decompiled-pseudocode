/*
 * XREFs of ?AddLine@CPolygonBuilder@@EEAAXUD2D_POINT_2F@@@Z @ 0x180264330
 * Callers:
 *     <none>
 * Callees:
 *     ?push_back@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEBUD2D_POINT_2F@@@Z @ 0x18006B4EC (-push_back@-$vector_facade@UD2D_POINT_2F@@V-$buffer_impl@UD2D_POINT_2F@@$0CI@$00Vliberal_expansi.c)
 */

void __fastcall CPolygonBuilder::AddLine(CPolygonBuilder *this, struct D2D_POINT_2F a2)
{
  struct D2D_POINT_2F v2; // [rsp+20h] [rbp-18h] BYREF

  v2 = a2;
  detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,40,1,detail::liberal_expansion_policy>>::push_back(
    (CPolygonBuilder *)((char *)this + 16),
    &v2);
}
