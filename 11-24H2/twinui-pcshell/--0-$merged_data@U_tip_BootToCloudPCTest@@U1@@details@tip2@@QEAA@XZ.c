/*
 * XREFs of ??0?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@QEAA@XZ @ 0x18063E6E8
 * Callers:
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1806428B0 (-ensure_data@-$tip_test@V-$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@AEBAAEA.c)
 * Callees:
 *     ??0?$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z @ 0x18028B2D8 (--0-$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z.c)
 *     ??0_tip_BootToCloudPCTest@@QEAA@XZ @ 0x18063ECDC (--0_tip_BootToCloudPCTest@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>(
        __int64 a1)
{
  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  tip2::details::shared_data<1,0,0>::shared_data<1,0,0>(a1 + 8, a1);
  _tip_BootToCloudPCTest::_tip_BootToCloudPCTest((_tip_BootToCloudPCTest *)(a1 + 256));
  *(_QWORD *)a1 = &tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>::`vftable';
  *(_DWORD *)(a1 + 368) = 1;
  *(_QWORD *)(a1 + 264) = a1 + 16;
  return a1;
}
