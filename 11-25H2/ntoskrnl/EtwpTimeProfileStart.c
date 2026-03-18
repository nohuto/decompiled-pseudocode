/*
 * XREFs of EtwpTimeProfileStart @ 0x1406EACF8
 * Callers:
 *     EtwTimeProfileReset @ 0x14079A1DC (EtwTimeProfileReset.c)
 *     EtwpEnableKernelTrace @ 0x1408DA1EC (EtwpEnableKernelTrace.c)
 * Callees:
 *     KeStartProfile @ 0x1404D7A60 (KeStartProfile.c)
 *     KeInitializeProfileCallback @ 0x1406EAD3C (KeInitializeProfileCallback.c)
 *     KeSetIntervalProfile @ 0x140ABE5E4 (KeSetIntervalProfile.c)
 */

__int64 EtwpTimeProfileStart()
{
  KeSetIntervalProfile((unsigned int)EtwpProfileInterval, 0LL);
  KeInitializeProfileCallback(&EtwpProfileObject, EtwpProfileInterrupt, 0LL, 0LL);
  return KeStartProfile((ULONG_PTR)&EtwpProfileObject);
}
