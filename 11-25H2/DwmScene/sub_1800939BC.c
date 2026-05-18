/*
 * XREFs of sub_1800939BC @ 0x1800939BC
 * Callers:
 *     ??_G_Condition_variable@details@Concurrency@@QEAAPEAXI@Z_1 @ 0x180093A00 (--_G_Condition_variable@details@Concurrency@@QEAAPEAXI@Z_1.c)
 *     sub_1800945C0 @ 0x1800945C0 (sub_1800945C0.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 */

void **__fastcall sub_1800939BC(_QWORD *a1)
{
  void **result; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx

  result = &Spectre::Engine::RenderStateState::`vftable';
  *a1 = &Spectre::Engine::RenderStateState::`vftable';
  v3 = a1[4];
  if ( v3 )
    result = (void **)sub_18001050C(v3);
  v4 = a1[2];
  if ( v4 )
    return (void **)sub_18001050C(v4);
  return result;
}
