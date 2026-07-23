/*
 * XREFs of wil_details_UpdateFeatureConfiguredStates @ 0x140A9FE68
 * Callers:
 *     wil_details_ReevaluateOnFeatureConfigurationChange @ 0x1407D6650 (wil_details_ReevaluateOnFeatureConfigurationChange.c)
 * Callees:
 *     RtlQueryFeatureConfiguration @ 0x140496030 (RtlQueryFeatureConfiguration.c)
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x1404B90F4 (wil_details_FeatureDescriptors_SkipPadding.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 *wil_details_UpdateFeatureConfiguredStates()
{
  __int64 *i; // rcx
  RTL_FEATURE_ID v1; // ecx
  NTSTATUS v2; // eax
  __int16 v3; // dx
  __int16 v4; // dx
  __int64 *result; // rax
  volatile signed __int32 **v6; // rbx
  ULONGLONG ChangeStamp; // [rsp+20h] [rbp-28h] BYREF
  _RTL_FEATURE_CONFIGURATION FeatureConfiguration; // [rsp+28h] [rbp-20h] BYREF

  for ( i = (__int64 *)&wil_details_featureDescriptors_a; ; i = (__int64 *)(v6 + 7) )
  {
    result = wil_details_FeatureDescriptors_SkipPadding(i);
    v6 = (volatile signed __int32 **)result;
    if ( !result )
      break;
    if ( !*((_BYTE *)result + 29) && !*((_BYTE *)result + 30) && !*((_BYTE *)result + 28) )
    {
      v1 = *((_DWORD *)result + 6);
      ChangeStamp = 0LL;
      *(_QWORD *)&FeatureConfiguration.FeatureId = 0LL;
      FeatureConfiguration.VariantPayload = 0;
      v2 = RtlQueryFeatureConfiguration(v1, RtlFeatureConfigurationRuntime, &ChangeStamp, &FeatureConfiguration);
      if ( v2 == -2147483614 || v2 == -1073741275 )
        goto LABEL_12;
      if ( v2 )
      {
        if ( v2 == 279 )
        {
          v3 = *((_BYTE *)&FeatureConfiguration + 4) & 0x80;
          goto LABEL_11;
        }
LABEL_12:
        v4 = 518;
      }
      else
      {
        v3 = *((_BYTE *)&FeatureConfiguration + 4) & 0xB0 | (4 * (*((_BYTE *)&FeatureConfiguration + 4) & 0x40));
LABEL_11:
        v4 = (8 * v3) | 0x206;
      }
      _InterlockedXor(*v6, ((unsigned __int16)v4 ^ (unsigned __int16)**v6) & 0xF80);
      continue;
    }
  }
  return result;
}
