/*
 * XREFs of ?StartSearchHomeRenderTest@UndockedSearchAppExperienceManager@@AEAAXW4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x1803C0380
 * Callers:
 *     ?Show@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x180246C70 (-Show@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experie.c)
 * Callees:
 *     ?start@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA?AU_GUID@@XZ @ 0x18028BA2C (-start@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA-AU_GUID@@XZ.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x180295BA8 (-complete@-$tip_test@V-$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@ti.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ @ 0x1802A9934 (--B-$tip_test@V-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ.c)
 *     ?has_ever_started@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802CDF64 (-has_ever_started@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1803B57B4 (--1-$test_data_control@V-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEAA@.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@1@XZ @ 0x1803B5F68 (--C-$tip_test@V-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1803C2920 (-ensure_data@-$tip_test@V-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@AEBA.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1803C41A0 (-reset@-$com_ptr_t@V-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@Uerr_returncode_.c)
 */

__int64 __fastcall UndockedSearchAppExperienceManager::StartSearchHomeRenderTest(__int64 a1, int a2)
{
  __int64 *v2; // rbx
  __int64 v4; // rax
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF
  void *v7; // [rsp+40h] [rbp+8h] BYREF

  v2 = (__int64 *)(a1 + 872);
  if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool((__int64 *)(a1 + 872)) )
  {
    *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator->(
                  (__int64)v2,
                  (__int64 *)&v7)
             + 272) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::~test_data_control<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>(&v7);
    tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::complete(v2);
  }
  wil::com_ptr_t<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>,wil::err_returncode_policy>::reset(v2);
  if ( *v2 && tip2::details::shared_data<1,0,0>::has_ever_started(*v2 + 8) )
    wil::com_ptr_t<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>,wil::err_returncode_policy>::reset(v2);
  v4 = tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::ensure_data(v2);
  *(_DWORD *)(*(_QWORD *)v4 + 72LL) |= 0x800u;
  tip2::details::shared_data<1,0,0>::start(*(_QWORD *)v4 + 8LL, &v6);
  *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator->(
                 (__int64)v2,
                 (__int64 *)&v7)
            + 276) = a2;
  return tip2::test_data_control<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::~test_data_control<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>(&v7);
}
