/*
 * XREFs of ??1?$function@$$A6AXAEBUWNF_AUDIO_ORIENTATION_STATE@@@Z@wistd@@QEAA@XZ @ 0x14005C2B0
 * Callers:
 *     ??1?$wnf_subscription_state@UWNF_AUDIO_ORIENTATION_STATE@@@details@wil@@UEAA@XZ @ 0x14005C360 (--1-$wnf_subscription_state@UWNF_AUDIO_ORIENTATION_STATE@@@details@wil@@UEAA@XZ.c)
 *     ?RegisterDeviceOrientationNotification@CDeviceOrientationNotificationsHandler@@AEAAJXZ @ 0x14005DA94 (-RegisterDeviceOrientationNotification@CDeviceOrientationNotificationsHandler@@AEAAJXZ.c)
 *     ?Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV?$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z @ 0x14007CAD0 (-Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV-$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z.c)
 *     _wil::details_abi::RawUsageIndex::Iterate_::_1_::dtor$0 @ 0x140097095 (_wil--details_abi--RawUsageIndex--Iterate_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wistd::function<void (WNF_AUDIO_ORIENTATION_STATE const &)>::~function<void (WNF_AUDIO_ORIENTATION_STATE const &)>(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 112);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 24LL))(v1);
  return result;
}
