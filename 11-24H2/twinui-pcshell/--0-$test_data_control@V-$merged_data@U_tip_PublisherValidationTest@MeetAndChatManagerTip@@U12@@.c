/*
 * XREFs of ??0?$test_data_control@V?$merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@U12@@details@tip2@@@tip2@@IEAA@AEBV?$com_ptr_t@V?$merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18028B958
 * Callers:
 *     ?TryGetForUriScheme@ProtocolLauncher@Utils@@SA?AV?$unique_ptr@VProtocolLauncher@Utils@@U?$default_delete@VProtocolLauncher@Utils@@@std@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@4@@Z @ 0x180284034 (-TryGetForUriScheme@ProtocolLauncher@Utils@@SA-AV-$unique_ptr@VProtocolLauncher@Utils@@U-$defaul.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@U12@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@U12@@details@tip2@@@1@XZ @ 0x18028BDB0 (--C-$tip_test@V-$merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@U12@@details@t.c)
 * Callees:
 *     ?begin_update@?$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ @ 0x18028B450 (-begin_update@-$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ.c)
 */

__int64 *__fastcall tip2::test_data_control<tip2::details::merged_data<MeetAndChatManagerTip::_tip_PublisherValidationTest,MeetAndChatManagerTip::_tip_PublisherValidationTest>>::test_data_control<tip2::details::merged_data<MeetAndChatManagerTip::_tip_PublisherValidationTest,MeetAndChatManagerTip::_tip_PublisherValidationTest>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // rax

  v2 = *a2;
  *a1 = *a2;
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 280));
  tip2::details::shared_data<0,0,1>::begin_update(*a1 + 8);
  return a1;
}
