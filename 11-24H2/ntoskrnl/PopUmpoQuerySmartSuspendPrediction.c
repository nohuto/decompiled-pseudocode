/*
 * XREFs of PopUmpoQuerySmartSuspendPrediction @ 0x14075CF9C
 * Callers:
 *     PopSmartSuspendMakePredictions @ 0x140ABFAB8 (PopSmartSuspendMakePredictions.c)
 * Callees:
 *     PopUmpoSendPowerMessage @ 0x140331990 (PopUmpoSendPowerMessage.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall PopUmpoQuerySmartSuspendPrediction(__int64 a1, int a2)
{
  _DWORD Src[22]; // [rsp+20h] [rbp-58h] BYREF

  memset_0(Src, 0, 0x48uLL);
  Src[0] = 18;
  Src[2] = a2;
  return PopUmpoSendPowerMessage(Src, 0x48uLL, 1, a1);
}
