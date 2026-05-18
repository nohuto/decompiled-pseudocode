/*
 * XREFs of sub_180092990 @ 0x180092990
 * Callers:
 *     sub_1800929E0 @ 0x1800929E0 (sub_1800929E0.c)
 *     sub_1800945C0 @ 0x1800945C0 (sub_1800945C0.c)
 *     sub_1800DB84A @ 0x1800DB84A (sub_1800DB84A.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 */

void **__fastcall sub_180092990(_QWORD *a1)
{
  void **result; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  result = &Spectre::Engine::VertexLayoutState::`vftable';
  *a1 = &Spectre::Engine::VertexLayoutState::`vftable';
  v3 = a1[6];
  if ( v3 )
    result = (void **)sub_18001050C(v3);
  v4 = a1[4];
  if ( v4 )
    result = (void **)sub_18001050C(v4);
  v5 = a1[2];
  if ( v5 )
    return (void **)sub_18001050C(v5);
  return result;
}
