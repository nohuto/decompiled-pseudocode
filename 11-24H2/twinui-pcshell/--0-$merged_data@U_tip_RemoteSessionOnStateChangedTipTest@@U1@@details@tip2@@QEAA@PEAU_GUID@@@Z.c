/*
 * XREFs of ??0?$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@QEAA@PEAU_GUID@@@Z @ 0x18066C84C
 * Callers:
 *     ??$tip_make_shared_nothrow@V?$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@AEAPEAU_GUID@@@details@tip2@@YA?AV?$com_ptr_t@V?$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@AEAPEAU_GUID@@@Z @ 0x18066C700 (--$tip_make_shared_nothrow@V-$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@.c)
 * Callees:
 *     ?open_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@IEAAXPEAU_GUID@@@Z @ 0x18028A320 (-open_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@IEAAXPEAU_GUID@@@Z.c)
 *     ??0?$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z @ 0x18028B2D8 (--0-$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z.c)
 *     ??0_tip_RemoteSessionOnStateChangedTipTest@@QEAA@XZ @ 0x1806587CC (--0_tip_RemoteSessionOnStateChangedTipTest@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // r8

  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  tip2::details::shared_data<1,0,0>::shared_data<1,0,0>(a1 + 8, a1);
  _tip_RemoteSessionOnStateChangedTipTest::_tip_RemoteSessionOnStateChangedTipTest((_tip_RemoteSessionOnStateChangedTipTest *)(a1 + 256));
  *(_QWORD *)a1 = &tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>::`vftable';
  *(_DWORD *)(a1 + 384) = 1;
  *(_QWORD *)(a1 + 264) = a1 + 16;
  tip2::details::shared_data<1,0,0>::open_without_lock(a1 + 8, a2, v4);
  return a1;
}
