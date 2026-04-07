/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180078F28
 * Callers:
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x1800754C0 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180081018 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ??1HolographicDriverDetectedWatcher@Mirage@Windows@@QEAA@XZ @ 0x180095F20 (--1HolographicDriverDetectedWatcher@Mirage@Windows@@QEAA@XZ.c)
 *     ??1?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@QEAA@XZ @ 0x18009B308 (--1-$unique_any_t@V-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@.c)
 *     ??1?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAA@XZ @ 0x18009DE9C (--1-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAA@XZ.c)
 *     ??1?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAA@XZ @ 0x18009DECC (--1-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAA@XZ.c)
 *     ??1SemaphoreValue@details_abi@wil@@QEAA@XZ @ 0x18009E084 (--1SemaphoreValue@details_abi@wil@@QEAA@XZ.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18009E220 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ??1event_watcher_state@details@wil@@QEAA@XZ @ 0x1800A2E08 (--1event_watcher_state@details@wil@@QEAA@XZ.c)
 *     ??1CGraphicsDeviceManager@@MEAA@XZ @ 0x1800C3FC4 (--1CGraphicsDeviceManager@@MEAA@XZ.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180079228 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
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
