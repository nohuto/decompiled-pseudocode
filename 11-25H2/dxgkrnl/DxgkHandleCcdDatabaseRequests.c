/*
 * XREFs of DxgkHandleCcdDatabaseRequests @ 0x1402664B4
 * Callers:
 *     DxgkEscape @ 0x14041D630 (DxgkEscape.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_KEY_BASIC_INFORMATION@@$$A6AXPEAU1@@_E$1?FreePoolWithTag@?$pool_helpers@PEAU_KEY_BASIC_INFORMATION@@$0ELGHHIEE@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140062824 (--1-$unique_storage@U-$resource_policy@PEAU_KEY_BASIC_INFORMATION@@$$A6AXPEAU1@@_E$1-FreePoolWit.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     DxgkInvalidateQdcCacheOnlyDatabase @ 0x14018A5FC (DxgkInvalidateQdcCacheOnlyDatabase.c)
 *     AdjustCcdDatabasePermissions @ 0x14026549C (AdjustCcdDatabasePermissions.c)
 *     CheckCallerMatchesSid @ 0x140265D20 (CheckCallerMatchesSid.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     CreateServiceSid @ 0x14040D708 (CreateServiceSid.c)
 */

__int64 __fastcall DxgkHandleCcdDatabaseRequests(int a1, unsigned int a2, __int64 a3)
{
  PSID v6; // rbx
  unsigned int v7; // ebx
  struct DXGPROCESS *Current; // rax
  char v9; // cl
  unsigned int v10; // eax
  int v11; // eax
  unsigned int v12; // edi
  int v13; // eax
  int v14; // eax
  PSID Sid; // [rsp+20h] [rbp-30h] BYREF
  _DWORD v17[6]; // [rsp+28h] [rbp-28h] BYREF

  v17[0] = 80;
  v17[1] = -123880637;
  v17[2] = 1617898341;
  v17[3] = -1424805804;
  v17[4] = 1466607281;
  v17[5] = 2109097600;
  CreateServiceSid(&Sid, v17);
  v6 = Sid;
  if ( !Sid )
  {
    v7 = -1073741670;
    WdLogSingleEntry1(2LL, -1073741670LL);
    WdLogGlobalForLineNumber = 2778;
LABEL_20:
    __1__unique_storage_U__resource_policy_PEAU_KEY_BASIC_INFORMATION____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_KEY_BASIC_INFORMATION___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAA_XZ(&Sid);
    return v7;
  }
  Current = DXGPROCESS::GetCurrent();
  if ( !Current || (v9 = 1, (*((_DWORD *)Current + 102) & 4) == 0) )
    v9 = 0;
  v10 = a1 & 0xC0000000;
  if ( (a1 & 0xC0000000) != 0x80000000 )
  {
    if ( v10 != -1073741824 )
    {
      if ( v10 == 0x40000000 && !v9 )
      {
        v7 = -1073741790;
        WdLogSingleEntry1(2LL, -1073741790LL);
        WdLogGlobalForLineNumber = 2789;
        goto LABEL_20;
      }
      goto LABEL_15;
    }
    if ( v9 )
      goto LABEL_15;
  }
  v11 = CheckCallerMatchesSid(v6);
  v12 = v11;
  if ( v11 < 0 )
  {
    WdLogSingleEntry1(2LL, v11);
    WdLogGlobalForLineNumber = 2800;
LABEL_14:
    v7 = v12;
    goto LABEL_20;
  }
LABEL_15:
  if ( a1 == 0x80000000 )
  {
    v13 = AdjustCcdDatabasePermissions(
            0,
            L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Connectivity\\",
            0,
            v6);
    v12 = v13;
    if ( v13 < 0 )
    {
      WdLogSingleEntry1(2LL, v13);
      WdLogGlobalForLineNumber = 2807;
      goto LABEL_14;
    }
    v14 = AdjustCcdDatabasePermissions(
            0,
            L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\",
            0,
            v6);
    v7 = v14;
    if ( v14 < 0 )
    {
      WdLogSingleEntry1(2LL, v14);
      WdLogGlobalForLineNumber = 2808;
      goto LABEL_20;
    }
    goto LABEL_26;
  }
  if ( a1 == -2147483647 )
  {
    DxgkInvalidateQdcCacheOnlyDatabase();
LABEL_26:
    __1__unique_storage_U__resource_policy_PEAU_KEY_BASIC_INFORMATION____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_KEY_BASIC_INFORMATION___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAA_XZ(&Sid);
    return 0LL;
  }
  if ( a1 == 0x40000000 && a2 >= 0x18 )
  {
    DisplayScenarioSetCCDRetrievalForActivity(a3 + 4, *(unsigned int *)(a3 + 20));
    goto LABEL_26;
  }
  __1__unique_storage_U__resource_policy_PEAU_KEY_BASIC_INFORMATION____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_KEY_BASIC_INFORMATION___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAA_XZ(&Sid);
  return 3221225485LL;
}
