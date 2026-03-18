/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800C0D60
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1800BF8E4 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ??1CChannelContext@@EEAA@XZ @ 0x1800C0A5C (--1CChannelContext@@EEAA@XZ.c)
 *     ??1VisualCaptureBitsResponse@@UEAA@XZ @ 0x1800C0B6C (--1VisualCaptureBitsResponse@@UEAA@XZ.c)
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1800FDE14 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ??1SemaphoreValue@details_abi@wil@@QEAA@XZ @ 0x180232E78 (--1SemaphoreValue@details_abi@wil@@QEAA@XZ.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x1802340C4 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ??1CDisplayManager@@QEAA@XZ @ 0x1802573A8 (--1CDisplayManager@@QEAA@XZ.c)
 *     ??1?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAA@XZ @ 0x18025E520 (--1-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAA@XZ.c)
 *     ??1?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAA@XZ @ 0x18025E550 (--1-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAA@XZ.c)
 *     ??1CGlobalMit@@UEAA@XZ @ 0x180263960 (--1CGlobalMit@@UEAA@XZ.c)
 *     ??1CComposition@@MEAA@XZ @ 0x180264D94 (--1CComposition@@MEAA@XZ.c)
 *     ??1CKernelTransport@@UEAA@XZ @ 0x18026F1DC (--1CKernelTransport@@UEAA@XZ.c)
 *     ??1CComputeScribbleScheduler@@QEAA@XZ @ 0x180293054 (--1CComputeScribbleScheduler@@QEAA@XZ.c)
 *     ??1CComputeScribbleFramebuffer@@UEAA@XZ @ 0x180293B4C (--1CComputeScribbleFramebuffer@@UEAA@XZ.c)
 *     FlushAndWait @ 0x1802B8518 (FlushAndWait.c)
 *     ??1CKstBase@@QEAA@XZ @ 0x1802C0D80 (--1CKstBase@@QEAA@XZ.c)
 *     ??1CHolographicInteropTaskQueue@@EEAA@XZ @ 0x1802DD07C (--1CHolographicInteropTaskQueue@@EEAA@XZ.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800C0D80 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
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
