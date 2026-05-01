/*
 * XREFs of ?IsTrustedPublisher@ProtocolLauncher@Utils@@CA_NAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x180057700
 * Callers:
 *     ?ValidateTrusted@ProtocolLauncher@Utils@@CA?AV?$unique_ptr@VProtocolLauncher@Utils@@U?$default_delete@VProtocolLauncher@Utils@@@std@@@std@@$$QEAV34@V?$tip_test@V?$merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@U12@@details@tip2@@@tip2@@@Z @ 0x18028C2E8 (-ValidateTrusted@ProtocolLauncher@Utils@@CA-AV-$unique_ptr@VProtocolLauncher@Utils@@U-$default_d.c)
 * Callees:
 *     ??$_Traits_compare@U?$char_traits@G@std@@@std@@YAHQEBG_K01@Z @ 0x180057764 (--$_Traits_compare@U-$char_traits@G@std@@@std@@YAHQEBG_K01@Z.c)
 */

char __fastcall Utils::ProtocolLauncher::IsTrustedPublisher(_QWORD *a1)
{
  wchar_t **i; // r11
  wchar_t *v3; // r8
  __int64 v4; // r9
  __int64 v5; // r11

  for ( i = off_18070DCA8; i != (wchar_t **)&off_18070DCB8; i = (wchar_t **)(v5 + 8) )
  {
    v3 = *i;
    v4 = -1LL;
    do
      ++v4;
    while ( v3[v4] );
    if ( !(unsigned int)std::_Traits_compare<std::char_traits<unsigned short>>(*a1, a1[1], v3, v4) )
      return 1;
  }
  return 0;
}
