/*
 * XREFs of sub_180092B00 @ 0x180092B00
 * Callers:
 *     ??_G_Condition_variable@details@Concurrency@@QEAAPEAXI@Z_0 @ 0x180092B50 (--_G_Condition_variable@details@Concurrency@@QEAAPEAXI@Z_0.c)
 *     sub_1800945C0 @ 0x1800945C0 (sub_1800945C0.c)
 *     sub_1800DB7BE @ 0x1800DB7BE (sub_1800DB7BE.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 */

void **__fastcall sub_180092B00(_QWORD *a1)
{
  void **result; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  result = &Spectre::Engine::ShaderState::`vftable';
  *a1 = &Spectre::Engine::ShaderState::`vftable';
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
