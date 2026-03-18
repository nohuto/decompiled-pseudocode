/*
 * XREFs of HalRequestDeferredRecoveryServiceInterrupt @ 0x140544180
 * Callers:
 *     WheaRequestDeferredRecovery @ 0x14065DC00 (WheaRequestDeferredRecovery.c)
 * Callees:
 *     HalpInterruptSendIpi @ 0x14031FDE0 (HalpInterruptSendIpi.c)
 */

__int64 HalRequestDeferredRecoveryServiceInterrupt()
{
  unsigned int v1[10]; // [rsp+20h] [rbp-28h] BYREF

  v1[0] = 5;
  *(_OWORD *)&v1[1] = 0LL;
  return HalpInterruptSendIpi(v1, 0xE3u);
}
