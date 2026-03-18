/*
 * XREFs of ?IsWinstaLessSession@@YA_NXZ @ 0x1C0069B98
 * Callers:
 *     _GetKeyboardLayout @ 0x1C0069AE0 (_GetKeyboardLayout.c)
 *     VKFromVSC @ 0x1C01EB350 (VKFromVSC.c)
 * Callees:
 *     ApiSetEditionGetProcessWindowStation @ 0x1C0069BB4 (ApiSetEditionGetProcessWindowStation.c)
 */

bool __fastcall IsWinstaLessSession(__int64 a1)
{
  return ApiSetEditionGetProcessWindowStation(a1) == 0;
}
