/*
 * XREFs of ?IsRectEqual@KeyboardHosting@@YA_NAEBURect@Foundation@Windows@@0@Z @ 0x180186FDC
 * Callers:
 *     ?HandleEditControlPositionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x180255650 (-HandleEditControlPositionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Win.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeyboardHosting::IsRectEqual(
        KeyboardHosting *this,
        const struct Windows::Foundation::Rect *a2,
        const struct Windows::Foundation::Rect *a3)
{
  return *(float *)this == *(float *)a2
      && *((float *)this + 1) == *((float *)a2 + 1)
      && *((float *)this + 2) == *((float *)a2 + 2)
      && *((float *)this + 3) == *((float *)a2 + 3);
}
