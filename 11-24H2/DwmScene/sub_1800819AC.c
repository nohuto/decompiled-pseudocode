/*
 * XREFs of sub_1800819AC @ 0x1800819AC
 * Callers:
 *     sub_18004F570 @ 0x18004F570 (sub_18004F570.c)
 * Callees:
 *     sub_18001D5E0 @ 0x18001D5E0 (sub_18001D5E0.c)
 */

__int64 __fastcall sub_1800819AC(_QWORD *a1)
{
  *a1 = &Spectre::Engine::ConstantBufferGeneric::`vftable';
  sub_18001D5E0((__int64)(a1 + 15));
  return sub_180090EEC(a1);
}
