/*
 * XREFs of sub_18008D658 @ 0x18008D658
 * Callers:
 *     sub_1800DA186 @ 0x1800DA186 (sub_1800DA186.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_18008D658(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Engine::ShaderDatabase::`vftable';
  *a1 = &Spectre::Engine::ShaderDatabase::`vftable';
  return result;
}
