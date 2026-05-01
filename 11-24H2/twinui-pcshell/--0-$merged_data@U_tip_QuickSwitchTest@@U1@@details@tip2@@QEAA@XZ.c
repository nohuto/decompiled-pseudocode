/*
 * XREFs of ??0?$merged_data@U_tip_QuickSwitchTest@@U1@@details@tip2@@QEAA@XZ @ 0x18049BE2C
 * Callers:
 *     ?start@?$tip_test@V?$merged_data@U_tip_QuickSwitchTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x1804A0784 (-start@-$tip_test@V-$merged_data@U_tip_QuickSwitchTest@@U1@@details@tip2@@@tip2@@QEAA-AU_GUID@@X.c)
 * Callees:
 *     ??0?$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z @ 0x18028B2D8 (--0-$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_QuickSwitchTest,_tip_QuickSwitchTest>::merged_data<_tip_QuickSwitchTest,_tip_QuickSwitchTest>(
        __int64 a1)
{
  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  tip2::details::shared_data<1,0,0>::shared_data<1,0,0>(a1 + 8, a1);
  *(_DWORD *)(a1 + 272) = 1;
  *(_QWORD *)a1 = &tip2::details::merged_data<_tip_QuickSwitchTest,_tip_QuickSwitchTest>::`vftable';
  *(_QWORD *)(a1 + 264) = a1 + 16;
  return a1;
}
