/*
 * XREFs of RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x180170730
 * Callers:
 *     RtlQueryFeatureConfiguration @ 0x1800D1600 (RtlQueryFeatureConfiguration.c)
 *     RtlQueryInternalFeatureConfiguration @ 0x18011AA20 (RtlQueryInternalFeatureConfiguration.c)
 * Callees:
 *     RtlpFcValidateFeatureConfigurationType @ 0x1800F2B74 (RtlpFcValidateFeatureConfigurationType.c)
 *     RtlpFcHasEffectiveStateInGovernedFeatureInfoTable @ 0x1801700F0 (RtlpFcHasEffectiveStateInGovernedFeatureInfoTable.c)
 *     RtlpFcQueryFeatureConfigurationFromBuffers @ 0x1801707F0 (RtlpFcQueryFeatureConfigurationFromBuffers.c)
 */

__int64 __fastcall RtlpFcQueryFeatureConfigurationFromBufferSet(__int64 a1, unsigned int a2, unsigned int a3, int *a4)
{
  int v7; // ebx
  __int64 v8; // r8
  __int64 v9; // r10
  _QWORD *i; // rax
  unsigned __int16 *v11; // rdx
  __int64 v12; // rsi
  _DWORD v14[10]; // [rsp+30h] [rbp-28h]

  v7 = RtlpFcValidateFeatureConfigurationType(a3);
  if ( v7 >= 0 )
  {
    v9 = 0LL;
    for ( i = (_QWORD *)(a1 + 8); !*i; i += 3 )
    {
      if ( ++v9 >= 4 )
        return (unsigned int)-2147483614;
    }
    v14[0] = 0;
    v11 = *(unsigned __int16 **)(a1 + 80);
    v14[1] = 1;
    v12 = (int)v14[(int)v8];
    if ( !RtlpFcHasEffectiveStateInGovernedFeatureInfoTable(a2, v11, v8, v14[(int)v8], a1 + 48, a4) )
      return (unsigned int)RtlpFcQueryFeatureConfigurationFromBuffers(a2, a1 + 24 * v12, a1 + 48, a4);
  }
  return (unsigned int)v7;
}
