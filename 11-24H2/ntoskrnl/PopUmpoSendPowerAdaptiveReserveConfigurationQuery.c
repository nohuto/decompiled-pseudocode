/*
 * XREFs of PopUmpoSendPowerAdaptiveReserveConfigurationQuery @ 0x14075BF94
 * Callers:
 *     PopAdaptiveStandbyQueryReserveConfiguration @ 0x14076146C (PopAdaptiveStandbyQueryReserveConfiguration.c)
 * Callees:
 *     PopUmpoSendPowerMessage @ 0x1402BB090 (PopUmpoSendPowerMessage.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall PopUmpoSendPowerAdaptiveReserveConfigurationQuery(__int64 *a1)
{
  __int64 v2; // rax
  int Src; // [rsp+20h] [rbp-58h] BYREF
  __int64 v5; // [rsp+28h] [rbp-50h]

  memset_0(&Src, 0, 0x48uLL);
  v2 = *a1;
  Src = 20;
  v5 = v2;
  return PopUmpoSendPowerMessage(&Src, 0x48uLL, 0);
}
