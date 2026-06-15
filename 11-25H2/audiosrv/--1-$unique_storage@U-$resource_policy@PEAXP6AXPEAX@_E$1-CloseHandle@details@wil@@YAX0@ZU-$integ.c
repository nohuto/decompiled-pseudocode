/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18002741C
 * Callers:
 *     ??1CSharedStreamGroupProxy@@MEAA@XZ @ 0x18002666C (--1CSharedStreamGroupProxy@@MEAA@XZ.c)
 *     ??1CAudioStream@@UEAA@XZ @ 0x18006D94C (--1CAudioStream@@UEAA@XZ.c)
 *     ??1AudioModeEffectsWatcher@@UEAA@XZ @ 0x1800A33AC (--1AudioModeEffectsWatcher@@UEAA@XZ.c)
 *     ??1?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAA@XZ @ 0x1800AC29C (--1-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAA@XZ.c)
 *     ??1SemaphoreValue@details_abi@wil@@QEAA@XZ @ 0x1800AC440 (--1SemaphoreValue@details_abi@wil@@QEAA@XZ.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1800AC4FC (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x1800ADAF8 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ??1AudioEffectsWatcher@@UEAA@XZ @ 0x1800B43F0 (--1AudioEffectsWatcher@@UEAA@XZ.c)
 *     ??1CMMNotificationDelegator@AudioEffectsWatcher@@UEAA@XZ @ 0x1800B44D4 (--1CMMNotificationDelegator@AudioEffectsWatcher@@UEAA@XZ.c)
 *     ??1CAudioDGProcess@@QEAA@XZ @ 0x1800CC294 (--1CAudioDGProcess@@QEAA@XZ.c)
 *     ??1CStandardEvent@@UEAA@XZ @ 0x180105724 (--1CStandardEvent@@UEAA@XZ.c)
 *     ??1registry_watcher_state@details@wil@@QEAA@XZ @ 0x18010F84C (--1registry_watcher_state@details@wil@@QEAA@XZ.c)
 *     ??1CWorkFifo@@QEAA@XZ @ 0x180118040 (--1CWorkFifo@@QEAA@XZ.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800ADE38 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
        void **a1)
{
  void *v1; // rcx
  unsigned int v2; // r8d
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *a1;
  if ( v1 )
  {
    if ( !CloseHandle(v1) )
      wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x9CD, v2, v3);
  }
}
