/*
 * XREFs of EtwpTimeProfileStart @ 0x1406F455C
 * Callers:
 *     EtwTimeProfileReset @ 0x1407A96EC (EtwTimeProfileReset.c)
 *     EtwpEnableKernelTrace @ 0x14085ADEC (EtwpEnableKernelTrace.c)
 * Callees:
 *     KeStartProfile @ 0x1404CFCE0 (KeStartProfile.c)
 *     KeInitializeProfileCallback @ 0x1406F45A0 (KeInitializeProfileCallback.c)
 *     KeSetIntervalProfile @ 0x140ABD6BC (KeSetIntervalProfile.c)
 */

__int64 EtwpTimeProfileStart()
{
  KeSetIntervalProfile((unsigned int)EtwpProfileInterval, 0LL);
  KeInitializeProfileCallback(&EtwpProfileObject, EtwpProfileInterrupt, 0LL, 0LL);
  return KeStartProfile((ULONG_PTR)&EtwpProfileObject);
}
