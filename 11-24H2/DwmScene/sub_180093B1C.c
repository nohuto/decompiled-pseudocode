/*
 * XREFs of sub_180093B1C @ 0x180093B1C
 * Callers:
 *     ??_G_Condition_variable@details@Concurrency@@QEAAPEAXI@Z_1 @ 0x180093B60 (--_G_Condition_variable@details@Concurrency@@QEAAPEAXI@Z_1.c)
 *     sub_180094720 @ 0x180094720 (sub_180094720.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 */

void **__fastcall sub_180093B1C(_QWORD *a1)
{
  void **result; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx

  result = &Spectre::Engine::RenderStateState::`vftable';
  *a1 = &Spectre::Engine::RenderStateState::`vftable';
  v3 = a1[4];
  if ( v3 )
    result = (void **)sub_18001060C(v3);
  v4 = a1[2];
  if ( v4 )
    return (void **)sub_18001060C(v4);
  return result;
}
