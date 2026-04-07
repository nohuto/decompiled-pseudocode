/*
 * XREFs of ?create@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJW4EventOptions@2@PEBGPEAU_SECURITY_ATTRIBUTES@@PEA_N@Z @ 0x1800956F4
 * Callers:
 *     ??0HolographicDriverDetectedWatcher@Mirage@Windows@@QEAA@XZ @ 0x18009566C (--0HolographicDriverDetectedWatcher@Mirage@Windows@@QEAA@XZ.c)
 *     ?Initialize@CGraphicsDeviceManager@@IEAAJXZ @ 0x1800C40BC (-Initialize@CGraphicsDeviceManager@@IEAAJXZ.c)
 * Callees:
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180095768 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180097084 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 */

__int64 __fastcall _create___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z(
        __int64 a1,
        char a2)
{
  unsigned int v3; // ebx
  wil::details *v4; // rcx
  HANDLE Event; // rdi

  v3 = 0;
  Event = CreateEventExW(0LL, 0LL, a2 & 3, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
      a1,
      Event);
  }
  else
  {
    return (unsigned int)wil::details::GetLastErrorFailHr(v4);
  }
  return v3;
}
