/*
 * XREFs of __tailMerge_api_ms_win_devices_config_l1_1_1_dll @ 0x1802D35CB
 * Callers:
 *     __imp_load_CM_Register_Notification @ 0x1802D364A (__imp_load_CM_Register_Notification.c)
 *     __imp_load_CM_MapCrToWin32Err @ 0x1802D365C (__imp_load_CM_MapCrToWin32Err.c)
 *     __imp_load_CM_Get_Device_Interface_List_SizeW @ 0x1802D366E (__imp_load_CM_Get_Device_Interface_List_SizeW.c)
 *     __imp_load_CM_Get_Device_Interface_ListW @ 0x1802D3680 (__imp_load_CM_Get_Device_Interface_ListW.c)
 *     __imp_load_CM_Unregister_Notification @ 0x1802D369E (__imp_load_CM_Unregister_Notification.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1801C0930 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_devices_config_l1_1_1_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_devices_config_l1_1_1_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
