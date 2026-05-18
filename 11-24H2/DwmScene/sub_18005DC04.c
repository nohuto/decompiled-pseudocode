/*
 * XREFs of sub_18005DC04 @ 0x18005DC04
 * Callers:
 *     sub_18005E588 @ 0x18005E588 (sub_18005E588.c)
 * Callees:
 *     sub_18008D0F8 @ 0x18008D0F8 (sub_18008D0F8.c)
 */

__int64 __fastcall sub_18005DC04(__int64 a1)
{
  __int64 result; // rax

  sub_18008D0F8();
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
