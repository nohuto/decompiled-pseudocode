/*
 * XREFs of __tailMerge_ext_ms_win_ntuser_rim_l1_1_0_dll @ 0x18009E186
 * Callers:
 *     __imp_load_RIMGetDeviceProperties @ 0x18009E205 (__imp_load_RIMGetDeviceProperties.c)
 *     __imp_load_RIMFreeInputBuffer @ 0x18009E217 (__imp_load_RIMFreeInputBuffer.c)
 *     __imp_load_RIMUnregisterForInput @ 0x18009E229 (__imp_load_RIMUnregisterForInput.c)
 *     __imp_load_RIMReadInput @ 0x18009E2C6 (__imp_load_RIMReadInput.c)
 *     __imp_load_RIMOnPnpNotification @ 0x18009E2D8 (__imp_load_RIMOnPnpNotification.c)
 *     __imp_load_RIMGetDevicePreparsedData @ 0x18009E2FC (__imp_load_RIMGetDevicePreparsedData.c)
 *     __imp_load_InitializeInputDeviceInjection @ 0x18009EBFC (__imp_load_InitializeInputDeviceInjection.c)
 *     __imp_load_InjectPointerInput @ 0x18009EC0E (__imp_load_InjectPointerInput.c)
 *     __imp_load_InitializePointerDeviceInjection @ 0x18009EC20 (__imp_load_InitializePointerDeviceInjection.c)
 *     __imp_load_RemoveInjectionDevice @ 0x18009EC32 (__imp_load_RemoveInjectionDevice.c)
 *     __imp_load_InjectDeviceInput @ 0x18009EC44 (__imp_load_InjectDeviceInput.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x18007F5C0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_ntuser_rim_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_ntuser_rim_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
