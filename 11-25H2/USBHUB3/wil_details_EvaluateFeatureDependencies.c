/*
 * XREFs of wil_details_EvaluateFeatureDependencies @ 0x14007A488
 * Callers:
 *     wil_details_ReevaluateOnFeatureConfigurationChange @ 0x14007A6E0 (wil_details_ReevaluateOnFeatureConfigurationChange.c)
 *     wil_InitializeFeatureStaging @ 0x1400966B0 (wil_InitializeFeatureStaging.c)
 * Callees:
 *     wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState @ 0x14007A578 (wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState.c)
 */

volatile signed __int32 *wil_details_EvaluateFeatureDependencies()
{
  _QWORD *i; // r8
  volatile signed __int32 **v1; // rcx
  unsigned int v2; // r10d
  volatile signed __int32 *result; // rax
  volatile signed __int32 v4; // edx
  int v5; // r9d
  __int64 v6; // r11
  __int64 v7; // r8

  i = &wil_details_featureDescriptors_a;
  v1 = (volatile signed __int32 **)&wil_details_featureDescriptors_a;
  if ( &wil_details_featureDescriptors_a < (_UNKNOWN **)&wil_details_featureDescriptors_z )
  {
    while ( !*v1 )
    {
      if ( ++v1 >= (volatile signed __int32 **)&wil_details_featureDescriptors_z )
        goto LABEL_21;
    }
    if ( !v1 )
      goto LABEL_21;
    v2 = 0;
    do
    {
      result = *v1;
      v4 = **v1;
      if ( (v4 & 0x200) != 0 )
      {
        v5 = 0;
        if ( (v4 & 0x180) != 0 )
          LOBYTE(v5) = (**v1 & 0x180) == 256;
        else
          LOBYTE(v5) = *((_BYTE *)v1 + 31) != 0;
        v2 = v2 & 0xFFFFFFBF | (v5 << 6) ^ **v1 & 0x40;
        result = *v1;
        _InterlockedXor(*v1, v2);
      }
      for ( v1 += 7; ; ++v1 )
      {
        if ( v1 >= (volatile signed __int32 **)&wil_details_featureDescriptors_z )
          goto LABEL_21;
        if ( *v1 )
          break;
      }
    }
    while ( v1 );
LABEL_21:
    while ( i < (_QWORD *)&wil_details_featureDescriptors_z )
    {
      if ( *i )
      {
LABEL_28:
        if ( i )
        {
          result = (volatile signed __int32 *)wil_details_EvaluateFeatureDependencies_GetCachedFeatureEnabledState(
                                                *i,
                                                i);
          for ( i = (_QWORD *)(v7 + 56); i < (_QWORD *)&wil_details_featureDescriptors_z; ++i )
          {
            if ( *i != v6 )
              goto LABEL_28;
          }
        }
        return result;
      }
      ++i;
    }
  }
  return result;
}
