/*
 * XREFs of ??0?$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@QEAA@PEAU_GUID@@@Z @ 0x180658048
 * Callers:
 *     ??$tip_make_shared_nothrow@V?$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@AEAPEAU_GUID@@@details@tip2@@YA?AV?$com_ptr_t@V?$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@AEAPEAU_GUID@@@Z @ 0x180657DB8 (--$tip_make_shared_nothrow@V-$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2.c)
 * Callees:
 *     ?open_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@IEAAXPEAU_GUID@@@Z @ 0x18028A320 (-open_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@IEAAXPEAU_GUID@@@Z.c)
 *     ??0?$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z @ 0x18028B2D8 (--0-$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_RemoteSessionActivationTipTest,_tip_RemoteSessionActivationTipTest>::merged_data<_tip_RemoteSessionActivationTipTest,_tip_RemoteSessionActivationTipTest>(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // r8

  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  tip2::details::shared_data<1,0,0>::shared_data<1,0,0>(a1 + 8, a1);
  *(_WORD *)(a1 + 272) = 0;
  *(_BYTE *)(a1 + 274) = 0;
  *(_OWORD *)(a1 + 280) = 0LL;
  *(_QWORD *)(a1 + 304) = 7LL;
  *(_QWORD *)(a1 + 296) = 0LL;
  *(_WORD *)(a1 + 280) = 0;
  *(_OWORD *)(a1 + 312) = 0LL;
  *(_QWORD *)(a1 + 336) = 7LL;
  *(_QWORD *)(a1 + 328) = 0LL;
  *(_WORD *)(a1 + 312) = 0;
  *(_OWORD *)(a1 + 344) = 0LL;
  *(_QWORD *)(a1 + 368) = 7LL;
  *(_QWORD *)(a1 + 360) = 0LL;
  *(_WORD *)(a1 + 344) = 0;
  *(_OWORD *)(a1 + 376) = 0LL;
  *(_QWORD *)(a1 + 400) = 7LL;
  *(_QWORD *)(a1 + 392) = 0LL;
  *(_WORD *)(a1 + 376) = 0;
  *(_QWORD *)a1 = &tip2::details::merged_data<_tip_RemoteSessionActivationTipTest,_tip_RemoteSessionActivationTipTest>::`vftable';
  *(_QWORD *)(a1 + 264) = a1 + 16;
  *(_DWORD *)(a1 + 408) = 1;
  tip2::details::shared_data<1,0,0>::open_without_lock(a1 + 8, a2, v4);
  return a1;
}
