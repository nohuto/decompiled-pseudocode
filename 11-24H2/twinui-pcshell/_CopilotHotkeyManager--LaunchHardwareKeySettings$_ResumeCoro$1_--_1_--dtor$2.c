/*
 * XREFs of _CopilotHotkeyManager::LaunchHardwareKeySettings$_ResumeCoro$1_::_1_::dtor$2 @ 0x18070107D
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CopilotHotkeyManager::LaunchHardwareKeySettings__ResumeCoro_1_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 64) = *(_QWORD *)(a2 + 192) + 56LL;
  *(_DWORD *)(a2 + 72) = **(_DWORD **)(a2 + 64);
  if ( (*(_DWORD *)(a2 + 72) & 2) != 0 )
  {
    *(_QWORD *)(a2 + 80) = *(_QWORD *)(a2 + 192) + 56LL;
    *(_QWORD *)(a2 + 88) = *(_QWORD *)(a2 + 192) + 56LL;
    *(_DWORD *)(a2 + 72) = **(_DWORD **)(a2 + 88);
    *(_DWORD *)(a2 + 96) = *(_DWORD *)(a2 + 72) & 0xFFFFFFFD;
    **(_DWORD **)(a2 + 80) = *(_DWORD *)(a2 + 96);
    *(_QWORD *)(a2 + 104) = *(_QWORD *)(a2 + 192) + 16LL;
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(*(__int64 **)(a2 + 104));
  }
}
