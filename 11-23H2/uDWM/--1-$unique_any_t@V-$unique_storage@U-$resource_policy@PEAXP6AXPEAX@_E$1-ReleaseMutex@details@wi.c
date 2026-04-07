/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?ReleaseMutex@details@wil@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18009A5F4
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180024D44 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     _wil::details_abi::ProcessLocalStorageData_wil::details_abi::FeatureStateData_::Acquire_::_1_::dtor$1 @ 0x180067516 (_wil--details_abi--ProcessLocalStorageData_wil--details_abi--FeatureStateData_--Acq_ea_180067516.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18009AB5C (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     _wil::details_abi::ProcessLocalStorageData_wil::details_abi::ProcessLocalData_::Acquire_::_1_::dtor$1 @ 0x18009ACED (_wil--details_abi--ProcessLocalStorageData_wil--details_abi--ProcessLocalData_--Acq_ea_18009ACED.c)
 * Callees:
 *     ?ReleaseMutex@details@wil@@YAXPEAX@Z @ 0x180021DD0 (-ReleaseMutex@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall __1__unique_any_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_ReleaseMutex_details_wil__YAX0_ZU__integral_constant__K_01_wistd__PEAXPEAX_0A___T_details_wil___details_wil___wil__QEAA_XZ(
        wil::details **a1,
        void *a2)
{
  wil::details *v2; // rcx

  v2 = *a1;
  if ( v2 )
    wil::details::ReleaseMutex(v2, a2);
}
