/*
 * XREFs of PopUmpoSendUserPresencePredictionAction @ 0x140AC0F0C
 * Callers:
 *     PopEvaluateGlobalUserStatus @ 0x1409BCF98 (PopEvaluateGlobalUserStatus.c)
 *     PopUserPresencePredictionModeCallback @ 0x140A9AE30 (PopUserPresencePredictionModeCallback.c)
 * Callees:
 *     PopUmpoSendPowerMessage @ 0x140331990 (PopUmpoSendPowerMessage.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall PopUmpoSendUserPresencePredictionAction(int a1)
{
  _DWORD Src[22]; // [rsp+20h] [rbp-58h] BYREF

  memset_0(Src, 0, 0x48uLL);
  Src[0] = 12;
  Src[2] = a1;
  return PopUmpoSendPowerMessage(Src, 0x48uLL, 0, 0LL);
}
