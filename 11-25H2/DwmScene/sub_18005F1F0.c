/*
 * XREFs of sub_18005F1F0 @ 0x18005F1F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 */

_QWORD *__fastcall sub_18005F1F0(_QWORD *a1, char a2)
{
  *a1 = &std::_Ref_count_obj2<Spectre::Engine::ColorTransform>::`vftable';
  if ( (a2 & 1) != 0 )
    sub_18000B77C(a1);
  return a1;
}
