/*
 * XREFs of CmQuerySingleFeatureConfiguration @ 0x1406F7E98
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 * Callees:
 *     RtlQueryFeatureConfiguration @ 0x140496030 (RtlQueryFeatureConfiguration.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall CmQuerySingleFeatureConfiguration(__int64 *a1, int a2, __int64 a3, int a4, _DWORD *a5)
{
  unsigned int v6; // ecx
  __int64 v7; // rdx
  NTSTATUS v8; // eax
  ULONGLONG ChangeStamp; // [rsp+28h] [rbp-50h] BYREF
  __int64 v12; // [rsp+30h] [rbp-48h]
  _RTL_FEATURE_CONFIGURATION FeatureConfiguration; // [rsp+50h] [rbp-28h] BYREF

  v12 = 0LL;
  ChangeStamp = 0LL;
  if ( a2 != 8 )
    return (unsigned int)-1073741820;
  v7 = *a1;
  v12 = *a1;
  if ( a4 != 24 )
  {
    v6 = -1073741820;
LABEL_5:
    *a5 = 24;
    return v6;
  }
  *(_QWORD *)&FeatureConfiguration.FeatureId = 0LL;
  FeatureConfiguration.VariantPayload = 0;
  v8 = RtlQueryFeatureConfiguration(
         HIDWORD(v7),
         (RTL_FEATURE_CONFIGURATION_TYPE)v7,
         &ChangeStamp,
         &FeatureConfiguration);
  v6 = v8;
  if ( v8 >= 0 )
  {
    *(_OWORD *)a3 = 0LL;
    *(_QWORD *)(a3 + 16) = 0LL;
    *(_QWORD *)a3 = ChangeStamp;
    *(_RTL_FEATURE_CONFIGURATION *)(a3 + 8) = FeatureConfiguration;
    *a5 = 24;
    return 0;
  }
  if ( v8 == -1073741275 || v8 == -2147483614 )
  {
    *(_OWORD *)a3 = 0LL;
    *(_QWORD *)(a3 + 16) = 0LL;
    *(_QWORD *)a3 = ChangeStamp;
    goto LABEL_5;
  }
  return v6;
}
