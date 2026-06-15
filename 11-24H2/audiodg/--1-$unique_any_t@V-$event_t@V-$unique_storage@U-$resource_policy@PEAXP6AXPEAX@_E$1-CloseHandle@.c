/*
 * XREFs of ??1?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@QEAA@XZ @ 0x14004B21C
 * Callers:
 *     _CAudioDGModule::CAudioDGModule_::_1_::dtor$1 @ 0x140094B6A (_CAudioDGModule--CAudioDGModule_--_1_--dtor$1.c)
 *     _CAudioDGModule::CAudioDGModule_::_1_::dtor$2 @ 0x140094B80 (_CAudioDGModule--CAudioDGModule_--_1_--dtor$2.c)
 *     _CAudioDGModule::CAudioDGModule_::_1_::dtor$4 @ 0x140094BB2 (_CAudioDGModule--CAudioDGModule_--_1_--dtor$4.c)
 *     _CAudioPump::CAudioPump_::_1_::dtor$7 @ 0x14009546E (_CAudioPump--CAudioPump_--_1_--dtor$7.c)
 *     _CAudioPump::CAudioPump_::_1_::dtor$8 @ 0x140095487 (_CAudioPump--CAudioPump_--_1_--dtor$8.c)
 *     _CAudioPump::CAudioPump_::_1_::dtor$9 @ 0x1400954A0 (_CAudioPump--CAudioPump_--_1_--dtor$9.c)
 *     _CAudioPump::CAudioPump_::_1_::dtor$11 @ 0x1400954D2 (_CAudioPump--CAudioPump_--_1_--dtor$11.c)
 *     _CAudioPump::CAudioPump_::_1_::dtor$14 @ 0x14009551D (_CAudioPump--CAudioPump_--_1_--dtor$14.c)
 *     _CAudioPump::CAudioPump_::_1_::dtor$16 @ 0x14009554F (_CAudioPump--CAudioPump_--_1_--dtor$16.c)
 * Callees:
 *     <none>
 */

void __fastcall __1__unique_any_t_V__event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil___wil__QEAA_XZ(
        wil::details **a1,
        void *a2)
{
  wil::details *v2; // rcx

  v2 = *a1;
  if ( v2 )
    wil::details::CloseHandle(v2, a2);
}
