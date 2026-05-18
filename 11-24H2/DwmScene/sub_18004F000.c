/*
 * XREFs of sub_18004F000 @ 0x18004F000
 * Callers:
 *     sub_18004FC80 @ 0x18004FC80 (sub_18004FC80.c)
 * Callees:
 *     sub_18008196C @ 0x18008196C (sub_18008196C.c)
 */

__int64 __fastcall sub_18004F000(_QWORD *a1)
{
  __int64 result; // rax

  sub_18008196C();
  *a1 = &Spectre::Engine::ConstantBufferGeneric::`vftable';
  result = 0LL;
  a1[15] = 0LL;
  a1[16] = 0LL;
  a1[17] = 0LL;
  return result;
}
