/*
 * XREFs of GetRegistryDwordValueNoDefault @ 0x140024384
 * Callers:
 *     GetRegistryDwordValue @ 0x140024360 (GetRegistryDwordValue.c)
 *     PopulateEnergyEstimationModel @ 0x14004527C (PopulateEnergyEstimationModel.c)
 *     ReadEnergyEquation @ 0x1400453DC (ReadEnergyEquation.c)
 *     ReadPowerCurve @ 0x1400455E8 (ReadPowerCurve.c)
 * Callees:
 *     memset @ 0x14000E780 (memset.c)
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
