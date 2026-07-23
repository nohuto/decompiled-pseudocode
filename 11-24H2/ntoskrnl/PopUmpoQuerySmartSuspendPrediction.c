/*
 * XREFs of PopUmpoQuerySmartSuspendPrediction @ 0x14075BF3C
 * Callers:
 *     PopSmartSuspendMakePredictions @ 0x140ABAB98 (PopSmartSuspendMakePredictions.c)
 * Callees:
 *     PopUmpoSendPowerMessage @ 0x1402BB090 (PopUmpoSendPowerMessage.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall PopUmpoQuerySmartSuspendPrediction(__int64 a1, int a2)
{
  _DWORD Src[22]; // [rsp+20h] [rbp-58h] BYREF

  memset_0(Src, 0, 0x48uLL);
  Src[0] = 18;
  Src[2] = a2;
  return PopUmpoSendPowerMessage(Src, 0x48uLL, 1);
}
