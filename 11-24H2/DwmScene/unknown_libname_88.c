/*
 * XREFs of unknown_libname_88 @ 0x18004BA10
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 */

// Microsoft VisualC v14 64bit runtime
_QWORD *__fastcall unknown_libname_88(_QWORD *a1, char a2)
{
  *a1 = &std::_Ref_count_obj2<Spectre::Engine::DomainShader>::`vftable';
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(a1);
  return a1;
}
