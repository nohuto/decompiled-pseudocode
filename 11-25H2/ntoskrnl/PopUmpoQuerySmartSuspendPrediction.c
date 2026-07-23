/*
 * XREFs of PopUmpoQuerySmartSuspendPrediction @ 0x14075066C
 * Callers:
 *     PopSmartSuspendMakePredictions @ 0x140AC3C7C (PopSmartSuspendMakePredictions.c)
 * Callees:
 *     PopUmpoSendPowerMessage @ 0x140426264 (PopUmpoSendPowerMessage.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall PopUmpoQuerySmartSuspendPrediction(__int64 a1, int a2)
{
  _DWORD Src[22]; // [rsp+20h] [rbp-58h] BYREF

  memset_0(Src, 0, 0x48uLL);
  Src[0] = 18;
  Src[2] = a2;
  return PopUmpoSendPowerMessage(Src, 0x48uLL, 1);
}
