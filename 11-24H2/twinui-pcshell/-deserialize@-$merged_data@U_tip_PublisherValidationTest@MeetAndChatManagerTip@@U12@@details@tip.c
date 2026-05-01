/*
 * XREFs of ?deserialize@?$merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@U12@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1805F9780
 * Callers:
 *     <none>
 * Callees:
 *     ?startNode@input_archive@tson@@QEAAXXZ @ 0x180183220 (-startNode@input_archive@tson@@QEAAXXZ.c)
 *     ??$serialize@Vinput_archive@tson@@@_tip_PublisherValidationTest@MeetAndChatManagerTip@@QEAAXAEAVinput_archive@tson@@@Z @ 0x1805F7DBC (--$serialize@Vinput_archive@tson@@@_tip_PublisherValidationTest@MeetAndChatManagerTip@@QEAAXAEAV.c)
 */

void __fastcall tip2::details::merged_data<MeetAndChatManagerTip::_tip_PublisherValidationTest,MeetAndChatManagerTip::_tip_PublisherValidationTest>::deserialize(
        __int64 a1,
        __int64 a2)
{
  *(_BYTE *)(a2 + 24) = 4;
  *(_QWORD *)(a2 + 16) = "test";
  tson::input_archive::startNode((tson::input_archive *)a2);
  MeetAndChatManagerTip::_tip_PublisherValidationTest::serialize<tson::input_archive>(
    (a1 + 256) & -(__int64)(a1 != 0),
    a2);
  tson::input_archive::finishNode((tson::input_archive *)a2);
}
