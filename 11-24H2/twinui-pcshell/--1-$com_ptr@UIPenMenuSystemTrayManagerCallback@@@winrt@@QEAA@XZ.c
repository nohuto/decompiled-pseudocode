/*
 * XREFs of ??1?$com_ptr@UIPenMenuSystemTrayManagerCallback@@@winrt@@QEAA@XZ @ 0x18020016C
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager::PenMenuSystemTrayManager_::_1_::dtor$4 @ 0x1806E7443 (_winrt--Windows--Internal--Shell--implementation--PenMenuSystemTrayManager--PenMenu_ea_1806E7443.c)
 *     __anonymous_namespace_::CreateGraphicsCaptureItem_::_1_::dtor$0 @ 0x1806F26FF (__anonymous_namespace_--CreateGraphicsCaptureItem_--_1_--dtor$0.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ @ 0x180200188 (-unconditional_release_ref@-$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall winrt::com_ptr<IPenMenuSystemTrayManagerCallback>::~com_ptr<IPenMenuSystemTrayManagerCallback>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<IGraphicsCaptureItemInterop>::unconditional_release_ref(a1);
  return result;
}
