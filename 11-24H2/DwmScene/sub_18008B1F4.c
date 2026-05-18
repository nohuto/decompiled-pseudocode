/*
 * XREFs of sub_18008B1F4 @ 0x18008B1F4
 * Callers:
 *     sub_18005DBF8 @ 0x18005DBF8 (sub_18005DBF8.c)
 * Callees:
 *     sub_18008D0F8 @ 0x18008D0F8 (sub_18008D0F8.c)
 */

__int64 __fastcall sub_18008B1F4(__int64 a1)
{
  __int64 result; // rax

  sub_18008D0F8();
  *(_QWORD *)a1 = &Spectre::Engine::ImageProcessingEffectBloom::`vftable';
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_QWORD *)(a1 + 224) = 0LL;
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  *(_QWORD *)(a1 + 256) = 0LL;
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)(a1 + 272) = 0LL;
  result = a1;
  *(_DWORD *)(a1 + 280) = 1056964608;
  return result;
}
