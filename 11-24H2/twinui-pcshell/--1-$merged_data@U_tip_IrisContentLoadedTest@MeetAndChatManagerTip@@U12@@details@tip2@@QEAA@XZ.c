/*
 * XREFs of ??1?$merged_data@U_tip_IrisContentLoadedTest@MeetAndChatManagerTip@@U12@@details@tip2@@QEAA@XZ @ 0x1805F2D90
 * Callers:
 *     ?Release@?$merged_data@U_tip_IrisContentLoadedTest@MeetAndChatManagerTip@@U12@@details@tip2@@AEAAKXZ @ 0x1805F5BAC (-Release@-$merged_data@U_tip_IrisContentLoadedTest@MeetAndChatManagerTip@@U12@@details@tip2@@AEA.c)
 * Callees:
 *     ?on_destroy@?$shared_data@$0A@$0A@$0A@@details@tip2@@IEAAXXZ @ 0x18028A9DC (-on_destroy@-$shared_data@$0A@$0A@$0A@@details@tip2@@IEAAXXZ.c)
 */

void __fastcall tip2::details::merged_data<MeetAndChatManagerTip::_tip_IrisContentLoadedTest,MeetAndChatManagerTip::_tip_IrisContentLoadedTest>::~merged_data<MeetAndChatManagerTip::_tip_IrisContentLoadedTest,MeetAndChatManagerTip::_tip_IrisContentLoadedTest>(
        _QWORD *a1)
{
  __int64 v1; // rbx

  v1 = (__int64)(a1 + 1);
  *a1 = &tip2::details::merged_data<MeetAndChatManagerTip::_tip_IrisContentLoadedTest,MeetAndChatManagerTip::_tip_IrisContentLoadedTest>::`vftable';
  tip2::details::shared_data<0,0,0>::on_destroy((__int64)(a1 + 1));
  tip2::details::shared_data<0,0,1>::~shared_data<0,0,1>(v1);
}
