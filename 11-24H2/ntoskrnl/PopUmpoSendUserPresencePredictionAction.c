/*
 * XREFs of PopUmpoSendUserPresencePredictionAction @ 0x140ABC06C
 * Callers:
 *     PopEvaluateGlobalUserStatus @ 0x1409A35E8 (PopEvaluateGlobalUserStatus.c)
 *     PopUserPresencePredictionModeCallback @ 0x140A963A0 (PopUserPresencePredictionModeCallback.c)
 * Callees:
 *     PopUmpoSendPowerMessage @ 0x1402BB090 (PopUmpoSendPowerMessage.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall PopUmpoSendUserPresencePredictionAction(int a1)
{
  _DWORD Src[22]; // [rsp+20h] [rbp-58h] BYREF

  memset_0(Src, 0, 0x48uLL);
  Src[0] = 12;
  Src[2] = a1;
  return PopUmpoSendPowerMessage(Src, 0x48uLL, 0);
}
