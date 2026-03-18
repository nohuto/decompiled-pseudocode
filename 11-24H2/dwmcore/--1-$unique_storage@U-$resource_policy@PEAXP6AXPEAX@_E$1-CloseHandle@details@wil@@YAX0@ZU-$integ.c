/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18018D230
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1800EEEC0 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ??1CChannelContext@@EEAA@XZ @ 0x18018CF2C (--1CChannelContext@@EEAA@XZ.c)
 *     ??1VisualCaptureBitsResponse@@UEAA@XZ @ 0x18018D03C (--1VisualCaptureBitsResponse@@UEAA@XZ.c)
 *     ??1SemaphoreValue@details_abi@wil@@QEAA@XZ @ 0x1802275E8 (--1SemaphoreValue@details_abi@wil@@QEAA@XZ.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x180228784 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1802289CC (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ??1CDisplayManager@@QEAA@XZ @ 0x18024BFD8 (--1CDisplayManager@@QEAA@XZ.c)
 *     ??1?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAA@XZ @ 0x180252EF0 (--1-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAA@XZ.c)
 *     ??1?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAA@XZ @ 0x180252F20 (--1-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAA@XZ.c)
 *     ??1CGlobalMit@@UEAA@XZ @ 0x180258A20 (--1CGlobalMit@@UEAA@XZ.c)
 *     ??1CComposition@@MEAA@XZ @ 0x180259E9C (--1CComposition@@MEAA@XZ.c)
 *     ??1CKernelTransport@@UEAA@XZ @ 0x18026318C (--1CKernelTransport@@UEAA@XZ.c)
 *     ??1CComputeScribbleScheduler@@QEAA@XZ @ 0x180287AB4 (--1CComputeScribbleScheduler@@QEAA@XZ.c)
 *     ??1CComputeScribbleFramebuffer@@UEAA@XZ @ 0x180288908 (--1CComputeScribbleFramebuffer@@UEAA@XZ.c)
 *     FlushAndWait @ 0x1802AE928 (FlushAndWait.c)
 *     ??1CKstBase@@QEAA@XZ @ 0x1802B7740 (--1CKstBase@@QEAA@XZ.c)
 *     ??1CHolographicInteropTaskQueue@@EEAA@XZ @ 0x1802D3DDC (--1CHolographicInteropTaskQueue@@EEAA@XZ.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18018D250 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
        wil::details **a1,
        void *a2)
{
  wil::details *v2; // rcx

  v2 = *a1;
  if ( v2 )
    wil::details::CloseHandle(v2, a2);
}
