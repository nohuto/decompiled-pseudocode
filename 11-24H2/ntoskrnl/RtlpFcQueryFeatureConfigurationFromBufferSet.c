/*
 * XREFs of RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x1406F7B64
 * Callers:
 *     RtlQueryFeatureConfiguration @ 0x140496030 (RtlQueryFeatureConfiguration.c)
 *     RtlQueryInternalFeatureConfiguration @ 0x1405E67B0 (RtlQueryInternalFeatureConfiguration.c)
 * Callees:
 *     RtlpFcValidateFeatureConfigurationType @ 0x1404BB750 (RtlpFcValidateFeatureConfigurationType.c)
 *     RtlpFcHasEffectiveStateInGovernedFeatureInfoTable @ 0x14078CF28 (RtlpFcHasEffectiveStateInGovernedFeatureInfoTable.c)
 *     RtlpFcQueryFeatureConfigurationFromBuffers @ 0x14078D260 (RtlpFcQueryFeatureConfigurationFromBuffers.c)
 */

__int64 __fastcall RtlpFcQueryFeatureConfigurationFromBufferSet(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4)
{
  int v7; // ebx
  int v8; // r8d
  __int64 v9; // rax
  _QWORD *i; // r10
  __int64 v11; // rdx
  __int64 v12; // rsi
  _DWORD v14[10]; // [rsp+30h] [rbp-28h]

  v7 = RtlpFcValidateFeatureConfigurationType(a3);
  if ( v7 >= 0 )
  {
    v9 = 0LL;
    for ( i = (_QWORD *)(a1 + 8); ; i += 3 )
    {
      if ( v9 >= 4 )
        return (unsigned int)-2147483614;
      if ( *i )
        break;
      ++v9;
    }
    v14[0] = 0;
    v11 = *(_QWORD *)(a1 + 80);
    v14[1] = 1;
    v12 = (int)v14[v8];
    if ( !(unsigned __int8)RtlpFcHasEffectiveStateInGovernedFeatureInfoTable(a2, v11, v8, v14[v8], a1 + 48, a4) )
      return (unsigned int)RtlpFcQueryFeatureConfigurationFromBuffers(a2, a1 + 24 * v12, a1 + 48, a4);
  }
  return (unsigned int)v7;
}
