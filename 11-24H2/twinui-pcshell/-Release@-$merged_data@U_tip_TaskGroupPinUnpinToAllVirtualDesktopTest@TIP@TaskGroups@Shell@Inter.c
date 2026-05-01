/*
 * XREFs of ?Release@?$merged_data@U_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@U1234567@@details@tip2@@AEAAKXZ @ 0x1806B4DD8
 * Callers:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@U1234567@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1806B0D54 (--1-$com_ptr_t@V-$merged_data@U_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups@Shel.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@U1234567@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@U1234567@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1806B8D3C (-ensure_data@-$tip_test@V-$merged_data@U_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGr.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@U1234567@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1806B92F4 (-reset@-$com_ptr_t@V-$merged_data@U_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups@.c)
 * Callees:
 *     ??1?$merged_data@U_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@U1234567@@details@tip2@@QEAA@XZ @ 0x1806B0DBC (--1-$merged_data@U_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Wi.c)
 */

__int64 __fastcall tip2::details::merged_data<winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupPinUnpinToAllVirtualDesktopTest,winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupPinUnpinToAllVirtualDesktopTest>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 78);
  if ( !v2 )
  {
    tip2::details::merged_data<winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupPinUnpinToAllVirtualDesktopTest,winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupPinUnpinToAllVirtualDesktopTest>::~merged_data<winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupPinUnpinToAllVirtualDesktopTest,winrt::Windows::Internal::Shell::TaskGroups::TIP::_tip_TaskGroupPinUnpinToAllVirtualDesktopTest>((__int64)pv);
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
