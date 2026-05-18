/*
 * XREFs of sub_18005DAA4 @ 0x18005DAA4
 * Callers:
 *     sub_18005E428 @ 0x18005E428 (sub_18005E428.c)
 * Callees:
 *     sub_18008CF98 @ 0x18008CF98 (sub_18008CF98.c)
 */

__int64 __fastcall sub_18005DAA4(__int64 a1)
{
  __int64 result; // rax

  sub_18008CF98();
  *(_BYTE *)(a1 + 232) = 1;
  *(_QWORD *)a1 = &Spectre::Engine::ImageProcessingEffectPlanarReflection::`vftable';
  result = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_QWORD *)(a1 + 224) = 0LL;
  return result;
}
