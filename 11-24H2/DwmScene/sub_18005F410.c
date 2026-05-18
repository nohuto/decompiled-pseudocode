/*
 * XREFs of sub_18005F410 @ 0x18005F410
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 */

_QWORD *__fastcall sub_18005F410(_QWORD *a1, char a2)
{
  *a1 = &std::_Ref_count_obj2<Spectre::Engine::ImageProcessingEffectPlanarReflection>::`vftable';
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(a1);
  return a1;
}
