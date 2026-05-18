/*
 * XREFs of sub_18008184C @ 0x18008184C
 * Callers:
 *     sub_18004F410 @ 0x18004F410 (sub_18004F410.c)
 * Callees:
 *     sub_18001D480 @ 0x18001D480 (sub_18001D480.c)
 */

__int64 __fastcall sub_18008184C(_QWORD *a1)
{
  *a1 = &Spectre::Engine::ConstantBufferGeneric::`vftable';
  sub_18001D480((__int64)(a1 + 15));
  return sub_180090D8C(a1);
}
