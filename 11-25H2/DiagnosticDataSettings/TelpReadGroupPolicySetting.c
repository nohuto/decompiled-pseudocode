/*
 * XREFs of TelpReadGroupPolicySetting @ 0x180004A1C
 * Callers:
 *     TelpEvaluateWithoutLicenseCheck @ 0x180003338 (TelpEvaluateWithoutLicenseCheck.c)
 *     TelGetMaximumAllowedTelemetryLevel @ 0x180003B00 (TelGetMaximumAllowedTelemetryLevel.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000326C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     TelpReadRegistryDword @ 0x180003690 (TelpReadRegistryDword.c)
 *     TelpReadUsersPolicySetting @ 0x1800051AC (TelpReadUsersPolicySetting.c)
 */

__int64 __fastcall TelpReadGroupPolicySetting(_DWORD *a1, int *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // r8
  int v6; // ecx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int pvData; // [rsp+40h] [rbp+8h] BYREF
  int v11; // [rsp+50h] [rbp+18h] BYREF
  int v12; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 1;
  pvData = 3;
  v4 = TelpReadRegistryDword(
         &pvData,
         HKEY_LOCAL_MACHINE,
         L"Software\\Policies\\Microsoft\\Windows\\DataCollection",
         L"AllowTelemetry");
  if ( (int)(v4 + 0x80000000) >= 0 && v4 != -2147024894 )
    goto LABEL_6;
  v11 = 1;
  v12 = 3;
  v6 = TelpReadUsersPolicySetting(&v11, &v12, L"AllowTelemetry");
  if ( v6 < 0 && v11 )
  {
    v4 = v6;
LABEL_6:
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x3B8, v5, (const char *)v4);
    return v4;
  }
  if ( v4 != -2147024894 || v11 )
  {
    v7 = v12;
    if ( pvData < v12 )
      v7 = pvData;
    *a2 = v7;
  }
  else
  {
    *a1 = 0;
  }
  return 0;
}
