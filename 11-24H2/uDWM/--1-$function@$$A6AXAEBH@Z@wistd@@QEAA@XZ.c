/*
 * XREFs of ??1?$function@$$A6AXAEBH@Z@wistd@@QEAA@XZ @ 0x180071454
 * Callers:
 *     ?RegisterTransparencySystemPolicyChangeEvent@CWindowList@@AEAAJXZ @ 0x18004A13C (-RegisterTransparencySystemPolicyChangeEvent@CWindowList@@AEAAJXZ.c)
 *     ?Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV?$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z @ 0x180070D90 (-Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV-$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z.c)
 *     ?CreateDetachWatcher@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJV?$function@$$A6AXXZ@wistd@@@Z @ 0x1800968A4 (-CreateDetachWatcher@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJV-$function@$$A6AXXZ@.c)
 *     ?CreateAttachWatcher@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJV?$function@$$A6AXXZ@wistd@@@Z @ 0x180096944 (-CreateAttachWatcher@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJV-$function@$$A6AXXZ@.c)
 *     ??1event_watcher_state@details@wil@@QEAA@XZ @ 0x1800A2E08 (--1event_watcher_state@details@wil@@QEAA@XZ.c)
 *     ??1?$wnf_subscription_state@H@details@wil@@UEAA@XZ @ 0x1800ED7F8 (--1-$wnf_subscription_state@H@details@wil@@UEAA@XZ.c)
 *     _wil::details_abi::RawUsageIndex::Iterate_::_1_::dtor$0 @ 0x1800F74C0 (_wil--details_abi--RawUsageIndex--Iterate_--_1_--dtor$0.c)
 *     _Windows::Mirage::HolographicDriverDetectedWatcher::CreateDetachWatcher_::_1_::dtor$0 @ 0x1800F7A43 (_Windows--Mirage--HolographicDriverDetectedWatcher--CreateDetachWatcher_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wistd::function<void (int const &)>::~function<void (int const &)>(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 112);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 24LL))(v1);
  return result;
}
