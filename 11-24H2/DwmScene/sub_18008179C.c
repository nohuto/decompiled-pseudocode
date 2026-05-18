/*
 * XREFs of sub_18008179C @ 0x18008179C
 * Callers:
 *     sub_18004F600 @ 0x18004F600 (sub_18004F600.c)
 *     sub_18004F650 @ 0x18004F650 (sub_18004F650.c)
 *     sub_1800B8838 @ 0x1800B8838 (sub_1800B8838.c)
 *     sub_1800C61E0 @ 0x1800C61E0 (sub_1800C61E0.c)
 * Callees:
 *     sub_1800371F0 @ 0x1800371F0 (sub_1800371F0.c)
 */

__int64 __fastcall sub_18008179C(_QWORD *a1)
{
  *a1 = &Spectre::Engine::DeviceArrayBuffer::`vftable';
  sub_1800371F0(a1 + 12);
  return sub_1800266BC((__int64)a1);
}
