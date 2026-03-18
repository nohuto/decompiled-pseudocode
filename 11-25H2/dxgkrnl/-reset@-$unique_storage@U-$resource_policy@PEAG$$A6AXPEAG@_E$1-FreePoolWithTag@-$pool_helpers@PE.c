/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAG$$A6AXPEAG@_E$1?FreePoolWithTag@?$pool_helpers@PEAG$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x14004C954
 * Callers:
 *     DpiPdoHandleQueryDeviceText @ 0x1402BECA0 (DpiPdoHandleQueryDeviceText.c)
 *     DxgkDisplayConfigDeviceInfoForAdapter @ 0x140415E90 (DxgkDisplayConfigDeviceInfoForAdapter.c)
 * Callees:
 *     ??$invoke@P6AXPEAX@_EAEAPEAX@wistd@@YAX$$QEAP6AXPEAX@_EAEAPEAX@Z @ 0x14005739C (--$invoke@P6AXPEAX@_EAEAPEAX@wistd@@YAX$$QEAP6AXPEAX@_EAEAPEAX@Z.c)
 */

__int64 __fastcall _reset___unique_storage_U__resource_policy_PEAG__A6AXPEAG__E_1_FreePoolWithTag___pool_helpers_PEAG_0A__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAGPEAG_0A___T_details_wil___details_wil__QEAAXPEAG_Z(
        __int64 *a1,
        __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  void (__fastcall *v6)(void *); // [rsp+38h] [rbp+10h] BYREF

  result = *a1;
  if ( *a1 )
  {
    v5 = *a1;
    v6 = DXGQUOTAALLOCATOR<256,1835156294>::operator delete;
    result = ___invoke_P6AXPEAX__EAEAPEAX_wistd__YAX__QEAP6AXPEAX__EAEAPEAX_Z(&v6, &v5);
  }
  *a1 = a2;
  return result;
}
