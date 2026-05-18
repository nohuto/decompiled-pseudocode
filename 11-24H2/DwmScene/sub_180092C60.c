/*
 * XREFs of sub_180092C60 @ 0x180092C60
 * Callers:
 *     ??_G_Condition_variable@details@Concurrency@@QEAAPEAXI@Z_0 @ 0x180092CB0 (--_G_Condition_variable@details@Concurrency@@QEAAPEAXI@Z_0.c)
 *     sub_180094720 @ 0x180094720 (sub_180094720.c)
 *     sub_1800DB91E @ 0x1800DB91E (sub_1800DB91E.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 */

void **__fastcall sub_180092C60(_QWORD *a1)
{
  void **result; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  result = &Spectre::Engine::ShaderState::`vftable';
  *a1 = &Spectre::Engine::ShaderState::`vftable';
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
