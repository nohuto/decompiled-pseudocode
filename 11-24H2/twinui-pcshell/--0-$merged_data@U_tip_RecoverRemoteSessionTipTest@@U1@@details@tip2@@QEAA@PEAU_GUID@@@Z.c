/*
 * XREFs of ??0?$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@QEAA@PEAU_GUID@@@Z @ 0x1802898B8
 * Callers:
 *     ??$tip_make_shared_nothrow@V?$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@AEAPEAU_GUID@@@details@tip2@@YA?AV?$com_ptr_t@V?$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@AEAPEAU_GUID@@@Z @ 0x180289588 (--$tip_make_shared_nothrow@V-$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@A.c)
 * Callees:
 *     ?open_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@IEAAXPEAU_GUID@@@Z @ 0x18028A320 (-open_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@IEAAXPEAU_GUID@@@Z.c)
 *     ??0?$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z @ 0x18028B2D8 (--0-$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_RecoverRemoteSessionTipTest,_tip_RecoverRemoteSessionTipTest>::merged_data<_tip_RecoverRemoteSessionTipTest,_tip_RecoverRemoteSessionTipTest>(
        __int64 a1,
        __int64 a2)
{
  __int128 v5; // [rsp+20h] [rbp-60h]
  _OWORD v6[3]; // [rsp+50h] [rbp-30h] BYREF

  *(_QWORD *)&v5 = 0x4015028D7C74LL;
  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  *((_QWORD *)&v5 + 1) = "RecoverRemoteSessionTipTest";
  v6[0] = v5;
  v6[1] = 0x201uLL;
  v6[2] = 0uLL;
  tip2::details::shared_data<1,0,0>::shared_data<1,0,0>(a1 + 8, a1, v6);
  *(_OWORD *)(a1 + 272) = 0LL;
  *(_QWORD *)(a1 + 296) = 7LL;
  *(_QWORD *)(a1 + 288) = 0LL;
  *(_WORD *)(a1 + 272) = 0;
  *(_OWORD *)(a1 + 304) = 0LL;
  *(_QWORD *)(a1 + 328) = 7LL;
  *(_QWORD *)(a1 + 320) = 0LL;
  *(_WORD *)(a1 + 304) = 0;
  *(_QWORD *)(a1 + 336) = 0LL;
  *(_QWORD *)(a1 + 344) = 0LL;
  *(_QWORD *)(a1 + 352) = 0LL;
  *(_QWORD *)(a1 + 360) = 0LL;
  *(_BYTE *)(a1 + 368) = 1;
  *(_QWORD *)a1 = &tip2::details::merged_data<_tip_RecoverRemoteSessionTipTest,_tip_RecoverRemoteSessionTipTest>::`vftable';
  *(_QWORD *)(a1 + 264) = a1 + 16;
  *(_DWORD *)(a1 + 376) = 1;
  tip2::details::shared_data<1,0,0>::open_without_lock(a1 + 8, a2);
  return a1;
}
