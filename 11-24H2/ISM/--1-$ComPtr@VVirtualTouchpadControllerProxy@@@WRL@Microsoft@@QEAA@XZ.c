/*
 * XREFs of ??1?$ComPtr@VVirtualTouchpadControllerProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x180063BF4
 * Callers:
 *     _DWMLegacyInputTarget::PopulateInputSiteFromWindowId_::_1_::dtor$1 @ 0x1801D0AD4 (_DWMLegacyInputTarget--PopulateInputSiteFromWindowId_--_1_--dtor$1.c)
 *     _DWMInputRouter::CheckForVirtualTouchpadFromInputSiteList_::_1_::dtor$0 @ 0x1801D35FD (_DWMInputRouter--CheckForVirtualTouchpadFromInputSiteList_--_1_--dtor$0.c)
 *     _ForegroundManager::SetInputDelegation_::_1_::dtor$1 @ 0x1801D48AA (_ForegroundManager--SetInputDelegation_--_1_--dtor$1.c)
 *     _CursorProcessor::GetWindowsMessageProcessAndThreadFromContext_::_1_::dtor$0 @ 0x1801D759E (_CursorProcessor--GetWindowsMessageProcessAndThreadFromContext_--_1_--dtor$0.c)
 *     _MagnifierProcessor::OnHitTest_::_1_::dtor$0 @ 0x1801D93B4 (_MagnifierProcessor--OnHitTest_--_1_--dtor$0.c)
 *     _MagnifierToggleTarget::RuntimeClassInitialize_::_1_::dtor$1 @ 0x1801D93D8 (_MagnifierToggleTarget--RuntimeClassInitialize_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::ComPtr<VirtualTouchpadControllerProxy>::~ComPtr<VirtualTouchpadControllerProxy>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(result + 16) + 8LL))(result + 16);
  }
  return result;
}
