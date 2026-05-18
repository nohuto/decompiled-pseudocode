/*
 * XREFs of sub_18004A078 @ 0x18004A078
 * Callers:
 *     sub_18004AC58 @ 0x18004AC58 (sub_18004AC58.c)
 * Callees:
 *     sub_180080D78 @ 0x180080D78 (sub_180080D78.c)
 */

void **__fastcall sub_18004A078(_QWORD *a1)
{
  void **result; // rax

  sub_180080D78(a1, 3LL);
  result = &Spectre::Engine::DomainShader::`vftable';
  *a1 = &Spectre::Engine::DomainShader::`vftable';
  return result;
}
