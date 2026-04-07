/*
 * XREFs of ?AddApproximateAtlasSize@CAtlasButton@@MEAAXPEAI@Z @ 0x180066CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddApproximateAtlasSize@CAtlasedImage@@MEAAXPEAI@Z @ 0x180066D40 (-AddApproximateAtlasSize@CAtlasedImage@@MEAAXPEAI@Z.c)
 *     ?AddNineGridAtlasSize@CAtlasedImage@@MEAAXAEBU_MARGINS@@PEAI@Z @ 0x180066D70 (-AddNineGridAtlasSize@CAtlasedImage@@MEAAXAEBU_MARGINS@@PEAI@Z.c)
 */

void __fastcall CAtlasButton::AddApproximateAtlasSize(const struct _MARGINS **this, unsigned int *a2)
{
  const struct _MARGINS *v4; // rdx

  CAtlasedImage::AddApproximateAtlasSize((CAtlasedImage *)this, a2);
  v4 = this[16];
  if ( v4 )
    CAtlasedImage::AddNineGridAtlasSize((CAtlasedImage *)this, v4 + 2, a2);
}
