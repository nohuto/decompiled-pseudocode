/*
 * XREFs of sub_180080D18 @ 0x180080D18
 * Callers:
 *     sub_1800B7A88 @ 0x1800B7A88 (sub_1800B7A88.c)
 *     sub_1800B7AB4 @ 0x1800B7AB4 (sub_1800B7AB4.c)
 *     sub_1800B7AEC @ 0x1800B7AEC (sub_1800B7AEC.c)
 *     sub_1800B7B50 @ 0x1800B7B50 (sub_1800B7B50.c)
 *     sub_1800B7F14 @ 0x1800B7F14 (sub_1800B7F14.c)
 * Callees:
 *     sub_180027690 @ 0x180027690 (sub_180027690.c)
 */

__int64 __fastcall sub_180080D18(__int64 a1)
{
  sub_180027690();
  *(_BYTE *)(a1 + 96) = 0;
  *(_QWORD *)a1 = &Spectre::Engine::DeviceShader::`vftable';
  return a1;
}
