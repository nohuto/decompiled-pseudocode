/*
 * XREFs of ??1?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@QEAA@XZ @ 0x1803B56B8
 * Callers:
 *     ?Release@?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@AEAAKXZ @ 0x1803BE310 (-Release@-$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@AEAAKXZ.c)
 * Callees:
 *     ?on_destroy@?$shared_data@$0A@$0A@$0A@@details@tip2@@IEAAXXZ @ 0x18028A9DC (-on_destroy@-$shared_data@$0A@$0A@$0A@@details@tip2@@IEAAXXZ.c)
 *     ??1_tip_SearchWebProviderInstallTest@@QEAA@XZ @ 0x1803B5D64 (--1_tip_SearchWebProviderInstallTest@@QEAA@XZ.c)
 */

void __fastcall tip2::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>::~merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>(
        _QWORD *a1)
{
  *a1 = &tip2::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>::`vftable';
  tip2::details::shared_data<0,0,0>::on_destroy((__int64)(a1 + 1));
  _tip_SearchWebProviderInstallTest::~_tip_SearchWebProviderInstallTest((_tip_SearchWebProviderInstallTest *)(a1 + 32));
  tip2::details::shared_data<0,0,1>::~shared_data<0,0,1>((__int64)(a1 + 1));
}
