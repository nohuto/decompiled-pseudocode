/*
 * XREFs of ??$_Find_last@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCMicBoostNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCMicBoostNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCMicBoostNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@_K@Z @ 0x1400172CC
 * Callers:
 *     ??$emplace@PEAGAEAPEAVCMicBoostNotificationsHandler@@@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCMicBoostNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCMicBoostNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCMicBoostNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@$$QEAPEAGAEAPEAVCMicBoostNotificationsHandler@@@Z @ 0x1400613B8 (--$emplace@PEAGAEAPEAVCMicBoostNotificationsHandler@@@-$_Hash@V-$_Umap_traits@V-$basic_string@GU.c)
 *     ?GetMicBoostNotificationHandler@CAPOProcessingHost@@AEAAJPEAUIMMDevice@@PEAPEAVCMicBoostNotificationsHandler@@@Z @ 0x14006230C (-GetMicBoostNotificationHandler@CAPOProcessingHost@@AEAAJPEAUIMMDevice@@PEAPEAVCMicBoostNotifica.c)
 * Callees:
 *     ??$?RV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V01@@?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEBA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@0@Z @ 0x140017348 (--$-RV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V01@@-$_Uhash_compare@V-$basi.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<std::wstring,wil::com_ptr_t<CMicBoostNotificationsHandler,wil::err_returncode_policy>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,wil::com_ptr_t<CMicBoostNotificationsHandler,wil::err_returncode_policy>>>,0>>::_Find_last<std::wstring>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v4; // r10
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v8; // r11
  _QWORD *v9; // rbx
  _QWORD *v10; // r11

  v4 = a2;
  v5 = a1[3];
  v6 = a1[1];
  v8 = *(_QWORD *)(v5 + 16 * (a4 & a1[6]) + 8);
  if ( v8 == v6 )
  {
    *v4 = v6;
LABEL_6:
    v4[1] = 0LL;
  }
  else
  {
    v9 = *(_QWORD **)(v5 + 16 * (a4 & a1[6]));
    while ( (unsigned __int8)std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>::operator()<std::wstring,std::wstring>(
                               a1,
                               a3,
                               v8 + 16) )
    {
      if ( v10 == v9 )
      {
        *v4 = v10;
        goto LABEL_6;
      }
      v8 = v10[1];
    }
    *v4 = *v10;
    v4[1] = v10;
  }
  return v4;
}
