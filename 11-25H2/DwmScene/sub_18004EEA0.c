/*
 * XREFs of sub_18004EEA0 @ 0x18004EEA0
 * Callers:
 *     sub_18004FB20 @ 0x18004FB20 (sub_18004FB20.c)
 * Callees:
 *     sub_18008180C @ 0x18008180C (sub_18008180C.c)
 */

__int64 __fastcall sub_18004EEA0(_QWORD *a1)
{
  __int64 result; // rax

  sub_18008180C();
  *a1 = &Spectre::Engine::ConstantBufferGeneric::`vftable';
  result = 0LL;
  a1[15] = 0LL;
  a1[16] = 0LL;
  a1[17] = 0LL;
  return result;
}
