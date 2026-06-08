/*
 * XREFs of GetRegistryDwordValueNoDefault @ 0x140047484
 * Callers:
 *     GetRegistryDwordValue @ 0x140028658 (GetRegistryDwordValue.c)
 *     InitDriver @ 0x14004903C (InitDriver.c)
 *     PopulateEnergyEstimationModel @ 0x14004B740 (PopulateEnergyEstimationModel.c)
 *     ReadEnergyEquation @ 0x14004B8A0 (ReadEnergyEquation.c)
 *     ReadPowerCurve @ 0x14004BAAC (ReadPowerCurve.c)
 * Callees:
 *     memset @ 0x140010340 (memset.c)
 */

__int64 __fastcall GetRegistryDwordValueNoDefault(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v7[14]; // [rsp+30h] [rbp-78h] BYREF

  memset(v7, 0, sizeof(v7));
  LODWORD(v7[1]) = 292;
  v7[2] = a2;
  v7[3] = a3;
  LODWORD(v7[4]) = 0x4000000;
  return RtlQueryRegistryValuesEx(0LL, a1, v7, 0LL, 0LL);
}
