/*
 * XREFs of sub_180014020 @ 0x180014020
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 */

_QWORD *__fastcall sub_180014020(_QWORD *a1, char a2)
{
  *a1 = &std::_Ref_count_obj2<Spectre::Engine::MeshInstance>::`vftable';
  if ( (a2 & 1) != 0 )
    sub_18000B77C(a1);
  return a1;
}
