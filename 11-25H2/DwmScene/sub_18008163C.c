/*
 * XREFs of sub_18008163C @ 0x18008163C
 * Callers:
 *     sub_18004F4A0 @ 0x18004F4A0 (sub_18004F4A0.c)
 *     sub_18004F4F0 @ 0x18004F4F0 (sub_18004F4F0.c)
 *     sub_1800B86D8 @ 0x1800B86D8 (sub_1800B86D8.c)
 *     sub_1800C6080 @ 0x1800C6080 (sub_1800C6080.c)
 * Callees:
 *     sub_180037090 @ 0x180037090 (sub_180037090.c)
 */

__int64 __fastcall sub_18008163C(_QWORD *a1)
{
  *a1 = &Spectre::Engine::DeviceArrayBuffer::`vftable';
  sub_180037090(a1 + 12);
  return sub_18002655C((__int64)a1);
}
