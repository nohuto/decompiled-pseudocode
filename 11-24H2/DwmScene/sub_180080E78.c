/*
 * XREFs of sub_180080E78 @ 0x180080E78
 * Callers:
 *     sub_1800B7BE8 @ 0x1800B7BE8 (sub_1800B7BE8.c)
 *     sub_1800B7C14 @ 0x1800B7C14 (sub_1800B7C14.c)
 *     sub_1800B7C4C @ 0x1800B7C4C (sub_1800B7C4C.c)
 *     sub_1800B7CB0 @ 0x1800B7CB0 (sub_1800B7CB0.c)
 *     sub_1800B8074 @ 0x1800B8074 (sub_1800B8074.c)
 * Callees:
 *     sub_1800277F0 @ 0x1800277F0 (sub_1800277F0.c)
 */

__int64 __fastcall sub_180080E78(__int64 a1)
{
  sub_1800277F0();
  *(_BYTE *)(a1 + 96) = 0;
  *(_QWORD *)a1 = &Spectre::Engine::DeviceShader::`vftable';
  return a1;
}
