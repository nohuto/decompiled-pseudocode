/*
 * XREFs of ??$make_shared@VSnapAssistState@@AEAUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@AEAV?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@AEBURect@Foundation@67@HAEAPEAUHWND__@@AEAPEAUHWND__@@AEAUISnapAssistCallback2@WindowSnapping@Shell@567@@std@@YA?AV?$shared_ptr@VSnapAssistState@@@0@AEAUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@AEAV?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@0@AEBURect@Foundation@67@$$QEAHAEAPEAUHWND__@@4AEAUISnapAssistCallback2@WindowSnapping@Shell@567@@Z @ 0x1806A66A4
 * Callers:
 *     ?Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18011CD10 (-Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z.c)
 * Callees:
 *     ??0SnapAssistState@@QEAA@AEBUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@AEBV?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@AEBURect@Foundation@56@HPEAUHWND__@@3AEBUISnapAssistCallback2@WindowSnapping@Shell@456@@Z @ 0x180286310 (--0SnapAssistState@@QEAA@AEBUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_shared<SnapAssistState,winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource &,std::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion> &,winrt::Windows::Foundation::Rect const &,int,HWND__ * &,HWND__ * &,winrt::Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2 &>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        _OWORD *a4,
        int *a5,
        __int64 *a6,
        __int64 *a7,
        _QWORD *a8)
{
  _DWORD *v13; // [rsp+70h] [rbp+8h]

  v13 = operator new(0xE8uLL);
  *(_OWORD *)v13 = 0LL;
  v13[2] = 1;
  v13[3] = 1;
  *(_QWORD *)v13 = &std::_Ref_count_obj2<SnapAssistState>::`vftable';
  SnapAssistState::SnapAssistState((__int64)(v13 + 4), a2, a3, a4, *a5, *a6, *a7, a8);
  *a1 = v13 + 4;
  a1[1] = v13;
  return a1;
}
