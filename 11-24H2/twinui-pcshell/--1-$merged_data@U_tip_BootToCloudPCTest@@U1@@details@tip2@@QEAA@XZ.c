/*
 * XREFs of ??1?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@QEAA@XZ @ 0x18063ED90
 * Callers:
 *     ?Release@?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@AEAAKXZ @ 0x180641EEC (-Release@-$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@AEAAKXZ.c)
 * Callees:
 *     ?on_destroy@?$shared_data@$00$0A@$0A@@details@tip2@@IEAAXXZ @ 0x1802959E8 (-on_destroy@-$shared_data@$00$0A@$0A@@details@tip2@@IEAAXXZ.c)
 *     ??1_tip_BootToCloudPCTest@@QEAA@XZ @ 0x18063F0B8 (--1_tip_BootToCloudPCTest@@QEAA@XZ.c)
 */

void __fastcall tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>::~merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>(
        _QWORD *a1)
{
  *a1 = &tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>::`vftable';
  tip2::details::shared_data<1,0,0>::on_destroy((__int64)(a1 + 1));
  _tip_BootToCloudPCTest::~_tip_BootToCloudPCTest((_tip_BootToCloudPCTest *)(a1 + 32));
  tip2::details::shared_data<0,0,1>::~shared_data<0,0,1>((__int64)(a1 + 1));
}
