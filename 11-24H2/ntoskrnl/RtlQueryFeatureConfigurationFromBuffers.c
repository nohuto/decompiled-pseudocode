/*
 * XREFs of RtlQueryFeatureConfigurationFromBuffers @ 0x1405E66C4
 * Callers:
 *     wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers @ 0x140C4C474 (wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers.c)
 * Callees:
 *     RtlpFcConvertFeatureConfigurationsInternalToExternal @ 0x1404F8C78 (RtlpFcConvertFeatureConfigurationsInternalToExternal.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlpFcHasEffectiveStateInGovernedFeatureInfoTable @ 0x14078CF28 (RtlpFcHasEffectiveStateInGovernedFeatureInfoTable.c)
 *     RtlpFcQueryFeatureConfigurationFromBuffers @ 0x14078D260 (RtlpFcQueryFeatureConfigurationFromBuffers.c)
 */

__int64 __fastcall RtlQueryFeatureConfigurationFromBuffers(__int64 a1, unsigned int a2, unsigned int a3, _QWORD *a4)
{
  __int64 v5; // r9
  __int64 *v7; // rdx
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rdx
  _QWORD v12[3]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v13[3]; // [rsp+48h] [rbp-38h] BYREF
  __int128 v14; // [rsp+60h] [rbp-20h] BYREF

  v5 = *(_QWORD *)(a1 + 8);
  v7 = *(__int64 **)a1;
  v14 = 0LL;
  if ( a3 < 2 )
  {
    v9 = *v7;
    v8 = 0;
    v13[0] = 0LL;
    v12[0] = 0LL;
    v13[1] = v9;
    v13[2] = v7[1];
    v12[1] = v7[2];
    v12[2] = v7[3];
    if ( v5 )
      v10 = *(_QWORD *)(v5 + 32);
    else
      LODWORD(v10) = 0;
    if ( (unsigned __int8)RtlpFcHasEffectiveStateInGovernedFeatureInfoTable(a2, v10, a3, 0, (__int64)v12, (__int64)&v14)
      || (v8 = RtlpFcQueryFeatureConfigurationFromBuffers(a2, v13, v12, &v14)) == 0 )
    {
      RtlpFcConvertFeatureConfigurationsInternalToExternal((__int64 *)&v14, a4, 1LL);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v8;
}
