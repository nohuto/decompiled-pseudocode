/*
 * XREFs of sub_1800B7B7C @ 0x1800B7B7C
 * Callers:
 *     sub_1800BB890 @ 0x1800BB890 (sub_1800BB890.c)
 * Callees:
 *     sub_1800277F0 @ 0x1800277F0 (sub_1800277F0.c)
 */

__int64 __fastcall sub_1800B7B7C(_QWORD *a1)
{
  __int64 result; // rax

  sub_1800277F0();
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
