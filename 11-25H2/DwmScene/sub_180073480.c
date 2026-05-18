/*
 * XREFs of sub_180073480 @ 0x180073480
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 */

_QWORD *__fastcall sub_180073480(_QWORD *a1, char a2)
{
  *a1 = std::_Ref_count_obj2<Spectre::Engine::ShaderRegistration::`anonymous namespace'::EmbeddedShaderDatabase>::`vftable';
  if ( (a2 & 1) != 0 )
    sub_18000B77C(a1);
  return a1;
}
