/*
 * XREFs of __tailMerge_api_ms_win_core_com_l1_1_0_dll @ 0x1800A90A8
 * Callers:
 *     __imp_load_CoTaskMemFree @ 0x1800A9127 (__imp_load_CoTaskMemFree.c)
 *     __imp_load_CoTaskMemAlloc @ 0x1800A9145 (__imp_load_CoTaskMemAlloc.c)
 *     __imp_load_CoCreateInstance @ 0x1800A9157 (__imp_load_CoCreateInstance.c)
 *     __imp_load_CoGetMalloc @ 0x1800A9169 (__imp_load_CoGetMalloc.c)
 *     __imp_load_CoCreateGuid @ 0x1800A9206 (__imp_load_CoCreateGuid.c)
 *     __imp_load_CoRevertToSelf @ 0x1800A9218 (__imp_load_CoRevertToSelf.c)
 *     __imp_load_CoInitializeEx @ 0x1800A9340 (__imp_load_CoInitializeEx.c)
 *     __imp_load_CoUninitialize @ 0x1800A9352 (__imp_load_CoUninitialize.c)
 *     __imp_load_StringFromCLSID @ 0x1800A9442 (__imp_load_StringFromCLSID.c)
 *     __imp_load_CLSIDFromString @ 0x1800A9466 (__imp_load_CLSIDFromString.c)
 *     __imp_load_CoGetPSClsid @ 0x1800A9478 (__imp_load_CoGetPSClsid.c)
 *     __imp_load_PropVariantClear @ 0x1800A948A (__imp_load_PropVariantClear.c)
 *     __imp_load_CoDisconnectContext @ 0x1800A972D (__imp_load_CoDisconnectContext.c)
 *     __imp_load_CoResumeClassObjects @ 0x1800A9904 (__imp_load_CoResumeClassObjects.c)
 *     __imp_load_CoReleaseServerProcess @ 0x1800A9916 (__imp_load_CoReleaseServerProcess.c)
 *     __imp_load_CoAddRefServerProcess @ 0x1800A9928 (__imp_load_CoAddRefServerProcess.c)
 *     __imp_load_CoRevokeClassObject @ 0x1800A993A (__imp_load_CoRevokeClassObject.c)
 *     __imp_load_CoRegisterClassObject @ 0x1800A994C (__imp_load_CoRegisterClassObject.c)
 *     __imp_load_CoDecrementMTAUsage @ 0x1800A995E (__imp_load_CoDecrementMTAUsage.c)
 *     __imp_load_CoIncrementMTAUsage @ 0x1800A9970 (__imp_load_CoIncrementMTAUsage.c)
 *     __imp_load_CoSetProxyBlanket @ 0x1800A99EE (__imp_load_CoSetProxyBlanket.c)
 *     __imp_load_PropVariantCopy @ 0x1800A9B94 (__imp_load_PropVariantCopy.c)
 *     __imp_load_StringFromGUID2 @ 0x1800A9BEE (__imp_load_StringFromGUID2.c)
 *     __imp_load_CoDisconnectObject @ 0x1800A9CB4 (__imp_load_CoDisconnectObject.c)
 *     __imp_load_CoCreateFreeThreadedMarshaler @ 0x1800A9D2C (__imp_load_CoCreateFreeThreadedMarshaler.c)
 *     __imp_load_StringFromIID @ 0x1800A9D3E (__imp_load_StringFromIID.c)
 *     __imp_load_IIDFromString @ 0x1800A9E6B (__imp_load_IIDFromString.c)
 *     __imp_load_CoGetApartmentType @ 0x1800AB762 (__imp_load_CoGetApartmentType.c)
 *     __imp_load_CoDisableCallCancellation @ 0x1800AB774 (__imp_load_CoDisableCallCancellation.c)
 *     __imp_load_CoCancelCall @ 0x1800AB811 (__imp_load_CoCancelCall.c)
 *     __imp_load_CoEnableCallCancellation @ 0x1800AB847 (__imp_load_CoEnableCallCancellation.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180088820 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_core_com_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_core_com_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
