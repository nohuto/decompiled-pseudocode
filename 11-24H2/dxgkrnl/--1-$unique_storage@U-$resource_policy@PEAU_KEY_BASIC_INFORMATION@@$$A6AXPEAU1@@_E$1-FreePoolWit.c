/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAU_KEY_BASIC_INFORMATION@@$$A6AXPEAU1@@_E$1?FreePoolWithTag@?$pool_helpers@PEAU_KEY_BASIC_INFORMATION@@$0ELGHHIEE@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140063114
 * Callers:
 *     AdjustCcdDatabasePermissions @ 0x14026C39C (AdjustCcdDatabasePermissions.c)
 *     DxgkHandleCcdDatabaseRequests @ 0x14026D3B4 (DxgkHandleCcdDatabaseRequests.c)
 *     CreateServiceSid @ 0x140406590 (CreateServiceSid.c)
 * Callees:
 *     ?FreePoolWithTag@?$pool_helpers@PEAU_ACL@@$0ELGHHIEE@@details@wil@@SAXPEAU_ACL@@@Z @ 0x140063140 (-FreePoolWithTag@-$pool_helpers@PEAU_ACL@@$0ELGHHIEE@@details@wil@@SAXPEAU_ACL@@@Z.c)
 */

__int64 __fastcall __1__unique_storage_U__resource_policy_PEAU_KEY_BASIC_INFORMATION____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_KEY_BASIC_INFORMATION___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAA_XZ(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return wil::details::pool_helpers<_ACL *,1265072196>::FreePoolWithTag();
  return result;
}
