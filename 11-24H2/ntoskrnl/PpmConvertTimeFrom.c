/*
 * XREFs of PpmConvertTimeFrom @ 0x14032D050
 * Callers:
 *     PpmApplyIdlePolicy @ 0x14032CFE8 (PpmApplyIdlePolicy.c)
 *     PpmRegisterPerfStates @ 0x14074FED4 (PpmRegisterPerfStates.c)
 *     PopIdleWakeConvertIntervalBucketsFrom @ 0x14075EEEC (PopIdleWakeConvertIntervalBucketsFrom.c)
 *     PopIdleWakeInitialize @ 0x14075F008 (PopIdleWakeInitialize.c)
 *     PpmHvEnableQosEnlightenment @ 0x140ACB488 (PpmHvEnableQosEnlightenment.c)
 *     PopInitDripsWakeAccounting @ 0x140C2D1CC (PopInitDripsWakeAccounting.c)
 *     PpmInitIdlePolicy @ 0x140C2D4D4 (PpmInitIdlePolicy.c)
 * Callees:
 *     PpmConvertTime @ 0x14032D070 (PpmConvertTime.c)
 */

__int64 __fastcall PpmConvertTimeFrom(__int64 a1, __int64 a2)
{
  return PpmConvertTime(a1, a2, PopQpcFrequency);
}
