/*
 * XREFs of RtlpEtcGetDwordFromRegistry @ 0x1405EF278
 * Callers:
 *     RtlIsFeatureEnabledForEnterprise @ 0x1405EF030 (RtlIsFeatureEnabledForEnterprise.c)
 *     RtlpEtcGetDwordFromPersistedState @ 0x1405EF1AC (RtlpEtcGetDwordFromPersistedState.c)
 *     RtlpEtcIsValidFeatureId @ 0x1405EF2F4 (RtlpEtcIsValidFeatureId.c)
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     RtlQueryRegistryValuesEx @ 0x1409CC2F0 (RtlQueryRegistryValuesEx.c)
 */

__int64 __fastcall RtlpEtcGetDwordFromRegistry(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE v7[8]; // [rsp+30h] [rbp-78h] BYREF
  int v8; // [rsp+38h] [rbp-70h]
  __int64 v9; // [rsp+40h] [rbp-68h]
  __int64 v10; // [rsp+48h] [rbp-60h]
  int v11; // [rsp+50h] [rbp-58h]

  memset_0(v7, 0, 0x70uLL);
  v8 = 308;
  v9 = a2;
  v11 = 0x4000000;
  v10 = a3;
  return RtlQueryRegistryValuesEx(0LL, a1, v7, 0LL, 0LL);
}
