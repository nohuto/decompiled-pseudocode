/*
 * XREFs of sub_1800B7A1C @ 0x1800B7A1C
 * Callers:
 *     sub_1800BB730 @ 0x1800BB730 (sub_1800BB730.c)
 * Callees:
 *     sub_180027690 @ 0x180027690 (sub_180027690.c)
 */

__int64 __fastcall sub_1800B7A1C(_QWORD *a1)
{
  __int64 result; // rax

  sub_180027690();
  result = 0LL;
  *a1 = &Spectre::Engine::DeviceShaderPipeline::`vftable';
  a1[12] = 0LL;
  a1[13] = 0LL;
  a1[14] = 0LL;
  a1[15] = 0LL;
  a1[16] = 0LL;
  a1[17] = 0LL;
  a1[18] = 0LL;
  a1[19] = 0LL;
  a1[20] = 0LL;
  a1[21] = 0LL;
  return result;
}
