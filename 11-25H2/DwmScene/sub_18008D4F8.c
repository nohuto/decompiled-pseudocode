/*
 * XREFs of sub_18008D4F8 @ 0x18008D4F8
 * Callers:
 *     sub_1800DA026 @ 0x1800DA026 (sub_1800DA026.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_18008D4F8(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Engine::ShaderDatabase::`vftable';
  *a1 = &Spectre::Engine::ShaderDatabase::`vftable';
  return result;
}
