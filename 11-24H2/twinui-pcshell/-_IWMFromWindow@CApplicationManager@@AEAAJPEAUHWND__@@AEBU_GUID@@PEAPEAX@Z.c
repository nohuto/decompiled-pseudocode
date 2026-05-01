/*
 * XREFs of ?_IWMFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x1801C18B4
 * Callers:
 *     ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x180043214 (-_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z.c)
 *     ?PrivateQueryService@CApplicationManager@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1801BD180 (-PrivateQueryService@CApplicationManager@@UEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     ?ClearMonitorOverride@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x1802E4740 (-ClearMonitorOverride@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?CreateNewGlom@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAPEAU3@@Z @ 0x1802E4D50 (-CreateNewGlom@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@PEAUIPro.c)
 *     ?DisableApplicationVisibilityOverride@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x1802E5090 (-DisableApplicationVisibilityOverride@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@@Z.c)
 *     ?RestoreApplicationVisibilityOverride@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x1802EB360 (-RestoreApplicationVisibilityOverride@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@@Z.c)
 *     ?SetMonitorOverride@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x1802EB9D0 (-SetMonitorOverride@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CApplicationManager::_IWMFromWindow(
        CApplicationManager *this,
        HWND a2,
        const struct _GUID *a3,
        void **a4)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct _GUID *, void **))(**((_QWORD **)this + 72) + 32LL))(
           *((_QWORD *)this + 72),
           0LL,
           a3,
           a4);
}
