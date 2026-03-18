/*
 * XREFs of ?IsWinstaLessSession@@YA_NXZ @ 0x1400247B0
 * Callers:
 *     VKFromVSC @ 0x1401157C0 (VKFromVSC.c)
 * Callees:
 *     ApiSetEditionGetProcessWindowStation @ 0x140023A28 (ApiSetEditionGetProcessWindowStation.c)
 */

bool IsWinstaLessSession(void)
{
  return ApiSetEditionGetProcessWindowStation() == 0;
}
