/*
 * XREFs of unknown_libname_95 @ 0x1800B87D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 */

// Microsoft VisualC v14 64bit runtime
_QWORD *__fastcall unknown_libname_95(_QWORD *a1, char a2)
{
  *a1 = &std::_Ref_count_obj2<Spectre::Engine::D3D11::CommandListD3D11>::`vftable';
  if ( (a2 & 1) != 0 )
    sub_18000B77C(a1);
  return a1;
}
