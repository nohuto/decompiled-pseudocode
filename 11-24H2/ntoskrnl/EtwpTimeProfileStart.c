/*
 * XREFs of EtwpTimeProfileStart @ 0x1406F655C
 * Callers:
 *     EtwTimeProfileReset @ 0x1407A95AC (EtwTimeProfileReset.c)
 *     EtwpEnableKernelTrace @ 0x1408E95BC (EtwpEnableKernelTrace.c)
 * Callees:
 *     KeStartProfile @ 0x1404D6890 (KeStartProfile.c)
 *     KeInitializeProfileCallback @ 0x1406F65A0 (KeInitializeProfileCallback.c)
 *     KeSetIntervalProfile @ 0x140AC23D4 (KeSetIntervalProfile.c)
 */

__int64 EtwpTimeProfileStart()
{
  KeSetIntervalProfile((unsigned int)EtwpProfileInterval, 0LL);
  KeInitializeProfileCallback(&EtwpProfileObject, EtwpProfileInterrupt, 0LL, 0LL);
  return KeStartProfile((ULONG_PTR)&EtwpProfileObject);
}
