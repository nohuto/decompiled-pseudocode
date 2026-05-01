/*
 * XREFs of ?UpdateSuppressionRegions@TouchGestureComponent@@AEAAXXZ @ 0x18058B530
 * Callers:
 *     ?InputHostHiding@TouchGestureComponent@@UEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z @ 0x18058B450 (-InputHostHiding@TouchGestureComponent@@UEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z.c)
 *     ?OnRudeWindowStateChange@TouchGestureComponent@@UEAAJPEAUIImmersiveMonitor@@W4RudeWindowStateChangeFlags@@PEAUHWND__@@@Z @ 0x18058B470 (-OnRudeWindowStateChange@TouchGestureComponent@@UEAAJPEAUIImmersiveMonitor@@W4RudeWindowStateCha.c)
 *     ?perform_delayed_initialization@TouchGestureComponent@@UEAAXXZ @ 0x18058B800 (-perform_delayed_initialization@TouchGestureComponent@@UEAAXXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Emplace_one_at_back@URect@Foundation@Windows@winrt@@@?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@AEAAAEAURect@Foundation@Windows@winrt@@$$QEAU2345@@Z @ 0x1802CB270 (--$_Emplace_one_at_back@URect@Foundation@Windows@winrt@@@-$vector@URect@Foundation@Windows@winrt.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     CoTaskMemFree_0 @ 0x1802D2C01 (CoTaskMemFree_0.c)
 *     ?GetSuppressedDisplayRects@TouchGestureComponent@@AEAA?AV?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@XZ @ 0x18058B23C (-GetSuppressedDisplayRects@TouchGestureComponent@@AEAA-AV-$vector@URect@Foundation@Windows@winrt.c)
 *     ??$?0V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@URect@Foundation@Windows@winrt@@@std@@@std@@@std@@X@?$com_array@URect@Foundation@Windows@winrt@@@winrt@@QEAA@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@URect@Foundation@Windows@winrt@@@std@@@std@@@std@@0@Z @ 0x18058DC40 (--$-0V-$_Vector_const_iterator@V-$_Vector_val@U-$_Simple_types@URect@Foundation@Windows@winrt@@@.c)
 *     ?SetSuppressionRegions@TouchGestureProcessor@@QEAAXAEBV?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@@Z @ 0x180592338 (-SetSuppressionRegions@TouchGestureProcessor@@QEAAXAEBV-$vector@URect@Foundation@Windows@winrt@@.c)
 *     ?SuppressionRegions@?$consume_Windows_UI_Internal_Input_IInputGestureManager@UIInputGestureManager@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@U?$array_view@$$CBURect@Foundation@Windows@winrt@@@3@@Z @ 0x180594400 (-SuppressionRegions@-$consume_Windows_UI_Internal_Input_IInputGestureManager@UIInputGestureManag.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall TouchGestureComponent::UpdateSuppressionRegions(TouchGestureComponent *this)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rax
  int v5; // edx
  __int64 v6; // rcx
  __int128 v7; // [rsp+20h] [rbp-60h] BYREF
  int v8; // [rsp+30h] [rbp-50h] BYREF
  void *v9[3]; // [rsp+38h] [rbp-48h] BYREF
  LPVOID pv[2]; // [rsp+50h] [rbp-30h] BYREF
  RECT rc; // [rsp+60h] [rbp-20h] BYREF

  if ( *((_BYTE *)this + 408) )
  {
    TouchGestureComponent::GetSuppressedDisplayRects((__int64)this, v9);
    v2 = *((_QWORD *)this + 15);
    if ( v2 )
    {
      v3 = v2 + 200;
      if ( *(_QWORD *)(v2 + 200) )
      {
        v4 = winrt::com_array<winrt::Windows::Foundation::Rect>::com_array<winrt::Windows::Foundation::Rect>(
               pv,
               v9[0],
               v9[1]);
        v5 = *(_DWORD *)(v4 + 8);
        *(_QWORD *)&v7 = *(_QWORD *)v4;
        DWORD2(v7) = v5;
        winrt::impl::consume_Windows_UI_Internal_Input_IInputGestureManager<winrt::Windows::UI::Internal::Input::IInputGestureManager>::SuppressionRegions(
          v3,
          &v7);
        if ( pv[0] )
          CoTaskMemFree_0(pv[0]);
      }
    }
    v8 = 0;
    rc = 0LL;
    if ( (*(int (__fastcall **)(_QWORD, RECT *, int *))(**((_QWORD **)this + 17) + 40LL))(
           *((_QWORD *)this + 17),
           &rc,
           &v8) >= 0
      && !IsRectEmpty(&rc) )
    {
      *(float *)&v7 = (float)rc.left;
      *((float *)&v7 + 1) = (float)rc.top;
      *((float *)&v7 + 2) = (float)(rc.right - rc.left);
      *((float *)&v7 + 3) = (float)(rc.bottom - rc.top);
      std::vector<winrt::Windows::Foundation::Rect>::_Emplace_one_at_back<winrt::Windows::Foundation::Rect>(
        (__int64)v9,
        &v7);
    }
    v6 = *((_QWORD *)this + 13);
    if ( v6 )
      TouchGestureProcessor::SetSuppressionRegions(v6, v9);
    if ( v9[0] )
      std::_Deallocate<16,0>(
        v9[0],
        (const struct std::nothrow_t *)(((char *)v9[2] - (char *)v9[0]) & 0xFFFFFFFFFFFFFFF0uLL));
  }
}
