/*
 * XREFs of ??1?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@QEAA@XZ @ 0x18009F7C0
 * Callers:
 *     ?Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV?$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z @ 0x1800A0814 (-Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV-$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z.c)
 *     ??1event_watcher_state@details@wil@@QEAA@XZ @ 0x1800D1890 (--1event_watcher_state@details@wil@@QEAA@XZ.c)
 *     ?Initialize@MPCHeadUpdateListener@@AEAAXXZ @ 0x1800D1A34 (-Initialize@MPCHeadUpdateListener@@AEAAXXZ.c)
 *     ??0RotationWatcher@@AEAA@XZ @ 0x18010B394 (--0RotationWatcher@@AEAA@XZ.c)
 *     ??1?$wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@UEAA@XZ @ 0x18010B554 (--1-$wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@UEAA@XZ.c)
 *     ??1registry_watcher_state@details@wil@@QEAA@XZ @ 0x1801BA64C (--1registry_watcher_state@details@wil@@QEAA@XZ.c)
 *     _lambda_2ab80ba63dcc212dafbb4e4695138308_::operator() @ 0x1801BB384 (_lambda_2ab80ba63dcc212dafbb4e4695138308_--operator().c)
 *     _wil::details_abi::RawUsageIndex::Iterate_::_1_::dtor$0 @ 0x1801D3F08 (_wil--details_abi--RawUsageIndex--Iterate_--_1_--dtor$0.c)
 *     _MPCHeadUpdateListener::Initialize_::_1_::dtor$0 @ 0x1801D563C (_MPCHeadUpdateListener--Initialize_--_1_--dtor$0.c)
 *     _RotationWatcher::RotationWatcher_::_1_::dtor$3 @ 0x1801D6F9D (_RotationWatcher--RotationWatcher_--_1_--dtor$3.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wistd::function<void (enum wil::RegistryChangeKind)>::~function<void (enum wil::RegistryChangeKind)>(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 112);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 24LL))(v1);
  return result;
}
