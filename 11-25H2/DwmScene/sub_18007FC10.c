/*
 * XREFs of sub_18007FC10 @ 0x18007FC10
 * Callers:
 *     sub_18004EFC0 @ 0x18004EFC0 (sub_18004EFC0.c)
 *     sub_1800B7EAC @ 0x1800B7EAC (sub_1800B7EAC.c)
 * Callees:
 *     sub_18008160C @ 0x18008160C (sub_18008160C.c)
 */

_QWORD *__fastcall sub_18007FC10(_QWORD *a1)
{
  sub_18008160C(a1, 11LL, 5LL);
  *a1 = &Spectre::Engine::DeviceVertexBuffer::`vftable';
  return a1;
}
