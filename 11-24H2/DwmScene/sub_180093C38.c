/*
 * XREFs of sub_180093C38 @ 0x180093C38
 * Callers:
 *     sub_180093C90 @ 0x180093C90 (sub_180093C90.c)
 *     sub_180094720 @ 0x180094720 (sub_180094720.c)
 *     sub_1800DB991 @ 0x1800DB991 (sub_1800DB991.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 */

void **__fastcall sub_180093C38(_QWORD *a1)
{
  void **result; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  result = &Spectre::Engine::IndexBufferState::`vftable';
  *a1 = &Spectre::Engine::IndexBufferState::`vftable';
  v3 = a1[6];
  if ( v3 )
    result = (void **)sub_18001060C(v3);
  v4 = a1[4];
  if ( v4 )
    result = (void **)sub_18001060C(v4);
  v5 = a1[2];
  if ( v5 )
    return (void **)sub_18001060C(v5);
  return result;
}
