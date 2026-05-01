/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@VFtmBase@23@@WRL@Microsoft@@UEAA@XZ @ 0x18018F764
 * Callers:
 *     _UwpAppStateManager::UwpAppStateManager_::_1_::dtor$0 @ 0x1806CB678 (_UwpAppStateManager--UwpAppStateManager_--_1_--dtor$0.c)
 *     _Win32AppStateManager::Win32AppStateManager_::_1_::dtor$0 @ 0x1806D4CFC (_Win32AppStateManager--Win32AppStateManager_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::FamilySafety::AppLimits::IAppStateManager,Microsoft::WRL::FtmBase>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::FamilySafety::AppLimits::IAppStateManager,Microsoft::WRL::FtmBase>(
        __int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  *(_DWORD *)(a1 + 44) = -1073741823;
  v1 = *(_QWORD *)(a1 + 32);
  if ( v1 )
  {
    *(_QWORD *)(a1 + 32) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  }
  return result;
}
