/*
 * XREFs of PpmConvertTimeFrom @ 0x140437360
 * Callers:
 *     PpmApplyIdlePolicy @ 0x1404372F8 (PpmApplyIdlePolicy.c)
 *     PpmRegisterPerfStates @ 0x14074E1F4 (PpmRegisterPerfStates.c)
 *     PopIdleWakeConvertIntervalBucketsFrom @ 0x14075DE8C (PopIdleWakeConvertIntervalBucketsFrom.c)
 *     PopIdleWakeInitialize @ 0x14075DFA8 (PopIdleWakeInitialize.c)
 *     PpmHvEnableQosEnlightenment @ 0x140AC9098 (PpmHvEnableQosEnlightenment.c)
 *     PopInitDripsWakeAccounting @ 0x140C2F2EC (PopInitDripsWakeAccounting.c)
 *     PpmInitIdlePolicy @ 0x140C2F5F4 (PpmInitIdlePolicy.c)
 * Callees:
 *     PpmConvertTime @ 0x140437380 (PpmConvertTime.c)
 */

__int64 __fastcall PpmConvertTimeFrom(__int64 a1, __int64 a2)
{
  return PpmConvertTime(a1, a2, PopQpcFrequency);
}
