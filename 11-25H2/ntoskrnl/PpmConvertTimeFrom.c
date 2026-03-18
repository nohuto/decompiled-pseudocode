/*
 * XREFs of PpmConvertTimeFrom @ 0x1403E7C34
 * Callers:
 *     PpmApplyIdlePolicy @ 0x1403E7BC8 (PpmApplyIdlePolicy.c)
 *     PpmRegisterPerfStates @ 0x140743E04 (PpmRegisterPerfStates.c)
 *     PopIdleWakeConvertIntervalBucketsFrom @ 0x1407524BC (PopIdleWakeConvertIntervalBucketsFrom.c)
 *     PopIdleWakeInitialize @ 0x1407525E0 (PopIdleWakeInitialize.c)
 *     PpmHvEnableQosEnlightenment @ 0x140AC46CC (PpmHvEnableQosEnlightenment.c)
 *     PopInitDripsWakeAccounting @ 0x140C1C0C8 (PopInitDripsWakeAccounting.c)
 *     PpmInitIdlePolicy @ 0x140C1C3D8 (PpmInitIdlePolicy.c)
 * Callees:
 *     PpmConvertTime @ 0x1403E7C50 (PpmConvertTime.c)
 */

__int64 __fastcall PpmConvertTimeFrom(__int64 a1, __int64 a2)
{
  return PpmConvertTime(a1, a2, PopQpcFrequency);
}
