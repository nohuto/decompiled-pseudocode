/*
 * XREFs of ??1?$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@QEAA@XZ @ 0x180658A2C
 * Callers:
 *     ?Release@?$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@AEAAKXZ @ 0x18065C088 (-Release@-$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@AEAAKXZ.c)
 * Callees:
 *     ?on_destroy@?$shared_data@$00$0A@$0A@@details@tip2@@IEAAXXZ @ 0x1802959E8 (-on_destroy@-$shared_data@$00$0A@$0A@@details@tip2@@IEAAXXZ.c)
 *     ??1_tip_RemoteSessionOnStateChangedTipTest@@QEAA@XZ @ 0x180658D30 (--1_tip_RemoteSessionOnStateChangedTipTest@@QEAA@XZ.c)
 */

void __fastcall tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>::~merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>(
        _QWORD *a1)
{
  *a1 = &tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>::`vftable';
  tip2::details::shared_data<1,0,0>::on_destroy((__int64)(a1 + 1));
  _tip_RemoteSessionOnStateChangedTipTest::~_tip_RemoteSessionOnStateChangedTipTest((_tip_RemoteSessionOnStateChangedTipTest *)(a1 + 32));
  tip2::details::shared_data<0,0,1>::~shared_data<0,0,1>((__int64)(a1 + 1));
}
