/*
 * XREFs of KIsUnlockSettingEnabled @ 0x140A564D4
 * Callers:
 *     KIsDeveloperModeEnabled @ 0x140A56484 (KIsDeveloperModeEnabled.c)
 * Callees:
 *     CmIsStateSeparationEnabled @ 0x1404996EC (CmIsStateSeparationEnabled.c)
 *     KGetAppModelStateSeparatedRegKeyPath @ 0x1409B1E98 (KGetAppModelStateSeparatedRegKeyPath.c)
 *     KGetUnlockSetting @ 0x140A56640 (KGetUnlockSetting.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KIsUnlockSettingEnabled(__int64 a1, _DWORD *a2)
{
  int v4; // ebx
  _QWORD v6[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v7[2]; // [rsp+30h] [rbp-30h] BYREF
  PVOID P[2]; // [rsp+40h] [rbp-20h] BYREF
  PVOID v9[2]; // [rsp+50h] [rbp-10h] BYREF

  v7[0] = 9830548LL;
  v6[0] = 7733364LL;
  v6[1] = L"\\Registry\\Machine\\SOFTWARE\\Policies\\Microsoft\\Windows\\Appx";
  *a2 = 0xFFFF;
  v7[1] = L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\AppModelUnlock";
  *(_OWORD *)P = 0LL;
  *(_OWORD *)v9 = 0LL;
  v4 = KGetAppModelStateSeparatedRegKeyPath(
         L"AppxPolicies",
         L"\\Registry\\Machine\\SOFTWARE\\Policies\\Microsoft\\Windows\\Appx",
         (PUNICODE_STRING)v9);
  if ( v4 >= 0 )
  {
    v4 = KGetUnlockSetting(v9, a1, a2);
    if ( v4 >= 0 )
    {
      if ( !CmIsStateSeparationEnabled() || *a2 == 0xFFFF && (v4 = KGetUnlockSetting(v6, a1, a2), v4 >= 0) )
      {
        if ( *a2 == 0xFFFF )
        {
          v4 = KGetAppModelStateSeparatedRegKeyPath(
                 L"AppModelUnlock",
                 L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\AppModelUnlock",
                 (PUNICODE_STRING)P);
          if ( v4 >= 0 )
          {
            v4 = KGetUnlockSetting(P, a1, a2);
            if ( v4 >= 0 && CmIsStateSeparationEnabled() && *a2 == 0xFFFF )
              v4 = KGetUnlockSetting(v7, a1, a2);
          }
        }
      }
    }
  }
  if ( P[1] )
  {
    ExFreePoolWithTag(P[1], 0x4D707041u);
    *(_OWORD *)P = 0LL;
  }
  if ( v9[1] )
    ExFreePoolWithTag(v9[1], 0x4D707041u);
  return (unsigned int)v4;
}
