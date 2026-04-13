/*
 * XREFs of TelEvaluateActiveSettingAuthority @ 0x1800038C0
 * Callers:
 *     TelGetAllAllowedTelemetryTypes @ 0x1800039F0 (TelGetAllAllowedTelemetryTypes.c)
 *     TelGetMaximumAllowedTelemetryLevel @ 0x180003B00 (TelGetMaximumAllowedTelemetryLevel.c)
 *     TelGetWerTelemetryMode @ 0x1800043B0 (TelGetWerTelemetryMode.c)
 *     TelSetLocalTelemetrySetting @ 0x180004850 (TelSetLocalTelemetrySetting.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000326C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     TelpEvaluateWithoutLicenseCheck @ 0x180003338 (TelpEvaluateWithoutLicenseCheck.c)
 *     TelIsRestrictivePolicySet @ 0x180004720 (TelIsRestrictivePolicySet.c)
 *     TelpReadLocalSetting @ 0x180004AE8 (TelpReadLocalSetting.c)
 */

__int64 __fastcall TelEvaluateActiveSettingAuthority(int *a1, int *a2, __int64 a3)
{
  int v5; // ebx
  __int64 v6; // rdx
  int v7; // eax
  unsigned int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  int v14; // [rsp+60h] [rbp+30h] BYREF
  int v15; // [rsp+70h] [rbp+40h] BYREF
  int v16; // [rsp+78h] [rbp+48h] BYREF

  if ( !a1 )
  {
    v5 = -2147024809;
    v6 = 1355LL;
LABEL_23:
    wil::details::in1diag3::Return_Hr(retaddr, (void *)v6, a3, (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v15 = 2;
  v14 = 1;
  v7 = TelpEvaluateWithoutLicenseCheck(&v14, &v15, a3);
  v8 = v15;
  v5 = v7;
  if ( a2 )
    *a2 = v15;
  if ( v7 < 0 )
  {
    *a1 = 0;
    goto LABEL_22;
  }
  v9 = v14;
  if ( v14 == 2 )
  {
    v9 = 1;
    v14 = 1;
  }
  *a1 = v9;
  if ( v8 <= 1 && !(unsigned int)TelIsRestrictivePolicySet(L"ConfigureTelemetryOptInSettingsUx") )
  {
    v16 = 3;
    v15 = 1;
    v5 = TelpReadLocalSetting(&v15, &v16);
    if ( v5 < 0 )
    {
LABEL_22:
      v6 = 1403LL;
      goto LABEL_23;
    }
    if ( v15 )
    {
      v10 = v16;
      if ( v16 == 2 )
        v10 = 1;
      v11 = v14;
      if ( v10 < v14 )
        v11 = v10;
      *a1 = v11;
    }
  }
  if ( v5 < 0 )
    goto LABEL_22;
  if ( !*a1 )
  {
    v15 = 0;
    v16 = 4;
    NtQueryLicenseValue(aB_0, 0LL, &v15);
    if ( v15 != 1 )
      *a1 = 1;
  }
  return (unsigned int)v5;
}
