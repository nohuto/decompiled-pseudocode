/*
 * XREFs of std::copy_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId______std::back_insert_iterator_std::vector_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId_std::allocator_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId_______lambda_9d734982820769c8d0ced5cfcfde410a___ @ 0x180769584
 * Callers:
 *     ?CreateSnapAssistControl@XamlSnapAssistViewHost@@AEAAPE$AAVSnapAssist@Switcher@Experiences@ComposableShell@WindowsInternal@@AEBURect@Foundation@Windows@winrt@@PEAUIImmersiveMonitor@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18076B524 (-CreateSnapAssistControl@XamlSnapAssistViewHost@@AEAAPE$AAVSnapAssist@Switcher@Experiences@Compo.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@?$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$allocator@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@QEAAPEAUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAU234567@AEBU234567@@Z @ 0x180669580 (--$_Emplace_reallocate@AEBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@-.c)
 *     ?DoesWindowOverlapPrimaryOrEmptyRegion@XamlSnapAssistViewHost@@AEAA_NPEAUHWND__@@@Z @ 0x18076C644 (-DoesWindowOverlapPrimaryOrEmptyRegion@XamlSnapAssistViewHost@@AEAA_NPEAUHWND__@@@Z.c)
 */

_QWORD *__fastcall std::copy_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId______std::back_insert_iterator_std::vector_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId_std::allocator_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId_______lambda_9d734982820769c8d0ced5cfcfde410a___(
        _QWORD *a1,
        _DWORD *a2,
        _DWORD *a3,
        __int64 a4,
        XamlSnapAssistViewHost *a5)
{
  _DWORD *i; // rsi
  _BYTE *v9; // rdx
  _QWORD *result; // rax

  for ( i = a2; i != a3; ++i )
  {
    if ( !XamlSnapAssistViewHost::DoesWindowOverlapPrimaryOrEmptyRegion(a5, (HWND)(unsigned int)*i) )
    {
      v9 = *(_BYTE **)(a4 + 8);
      if ( v9 == *(_BYTE **)(a4 + 16) )
      {
        std::vector<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>::_Emplace_reallocate<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId const &>(
          (const void **)a4,
          v9,
          i);
      }
      else
      {
        *(_DWORD *)v9 = *i;
        *(_QWORD *)(a4 + 8) += 4LL;
      }
    }
  }
  result = a1;
  *a1 = a4;
  return result;
}
