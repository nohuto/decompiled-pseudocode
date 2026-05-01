/*
 * XREFs of ?SetSuppressionRegions@TouchGestureProcessor@@QEAAXAEBV?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@@Z @ 0x180592338
 * Callers:
 *     ?UpdateSuppressionRegions@TouchGestureComponent@@AEAAXXZ @ 0x18058B530 (-UpdateSuppressionRegions@TouchGestureComponent@@AEAAXXZ.c)
 * Callees:
 *     CoTaskMemFree_0 @ 0x1802D2C01 (CoTaskMemFree_0.c)
 *     ??$?0V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@URect@Foundation@Windows@winrt@@@std@@@std@@@std@@X@?$com_array@URect@Foundation@Windows@winrt@@@winrt@@QEAA@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@URect@Foundation@Windows@winrt@@@std@@@std@@@std@@0@Z @ 0x18058DC40 (--$-0V-$_Vector_const_iterator@V-$_Vector_val@U-$_Simple_types@URect@Foundation@Windows@winrt@@@.c)
 *     ?SuppressionRegions@?$consume_Windows_UI_Internal_Input_IShellGesturesController2@UShellGesturesController@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@U?$array_view@$$CBURect@Foundation@Windows@winrt@@@3@@Z @ 0x18059271C (-SuppressionRegions@-$consume_Windows_UI_Internal_Input_IShellGesturesController2@UShellGestures.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TouchGestureProcessor::SetSuppressionRegions(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  int v4; // edx
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+28h] [rbp-20h]
  LPVOID pv[3]; // [rsp+30h] [rbp-18h] BYREF

  v2 = a1 + 24;
  if ( *(_QWORD *)(a1 + 24) )
  {
    v3 = winrt::com_array<winrt::Windows::Foundation::Rect>::com_array<winrt::Windows::Foundation::Rect>(
           (__int64)pv,
           *(const void **)a2,
           *(_QWORD *)(a2 + 8));
    v4 = *(_DWORD *)(v3 + 8);
    v5 = *(_QWORD *)v3;
    v6 = v4;
    winrt::impl::consume_Windows_UI_Internal_Input_IShellGesturesController2<winrt::Windows::UI::Internal::Input::ShellGesturesController>::SuppressionRegions(
      v2,
      &v5);
    if ( pv[0] )
      CoTaskMemFree_0(pv[0]);
  }
}
