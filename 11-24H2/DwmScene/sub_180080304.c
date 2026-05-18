/*
 * XREFs of sub_180080304 @ 0x180080304
 * Callers:
 *     sub_18004F064 @ 0x18004F064 (sub_18004F064.c)
 *     sub_1800B7C78 @ 0x1800B7C78 (sub_1800B7C78.c)
 * Callees:
 *     sub_18008176C @ 0x18008176C (sub_18008176C.c)
 */

_QWORD *__fastcall sub_180080304(_QWORD *a1)
{
  sub_18008176C(a1, 8LL, 6LL);
  *a1 = &Spectre::Engine::DeviceIndexBuffer::`vftable';
  return a1;
}
