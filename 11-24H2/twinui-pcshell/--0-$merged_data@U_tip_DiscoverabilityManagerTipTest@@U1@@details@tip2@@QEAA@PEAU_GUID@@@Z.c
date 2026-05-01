/*
 * XREFs of ??0?$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@QEAA@PEAU_GUID@@@Z @ 0x18028A240
 * Callers:
 *     ??$tip_make_shared_nothrow@V?$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@AEAPEAU_GUID@@@details@tip2@@YA?AV?$com_ptr_t@V?$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@AEAPEAU_GUID@@@Z @ 0x180289AE4 (--$tip_make_shared_nothrow@V-$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@.c)
 * Callees:
 *     ?open_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@IEAAXPEAU_GUID@@@Z @ 0x18028A320 (-open_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@IEAAXPEAU_GUID@@@Z.c)
 *     ??0?$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z @ 0x18028B2D8 (--0-$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z.c)
 *     ??0_tip_DiscoverabilityManagerTipTest@@QEAA@XZ @ 0x18028B518 (--0_tip_DiscoverabilityManagerTipTest@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>(
        __int64 a1,
        __int64 a2)
{
  __int128 v5; // [rsp+20h] [rbp-60h]
  _OWORD v6[3]; // [rsp+50h] [rbp-30h] BYREF

  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  *(_QWORD *)&v5 = 0x401502B4E2C5LL;
  *((_QWORD *)&v5 + 1) = "DiscoverabilityManagerTipTest";
  v6[0] = v5;
  v6[1] = 0x101uLL;
  v6[2] = 0uLL;
  tip2::details::shared_data<1,0,0>::shared_data<1,0,0>(a1 + 8, a1, v6);
  _tip_DiscoverabilityManagerTipTest::_tip_DiscoverabilityManagerTipTest((_tip_DiscoverabilityManagerTipTest *)(a1 + 256));
  *(_QWORD *)a1 = &tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>::`vftable';
  *(_DWORD *)(a1 + 328) = 1;
  *(_QWORD *)(a1 + 264) = a1 + 16;
  tip2::details::shared_data<1,0,0>::open_without_lock(a1 + 8, a2);
  return a1;
}
