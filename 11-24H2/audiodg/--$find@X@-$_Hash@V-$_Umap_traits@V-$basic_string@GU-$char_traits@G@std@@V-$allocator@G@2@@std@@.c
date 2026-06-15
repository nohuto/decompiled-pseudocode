/*
 * XREFs of ??$find@X@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCAPOEndpointNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCAPOEndpointNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCAPOEndpointNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x140018008
 * Callers:
 *     ?OnPropertyValueChanged@CAPOProcessingHost@@UEAAJPEBGU_tagpropertykey@@@Z @ 0x140017BA0 (-OnPropertyValueChanged@CAPOProcessingHost@@UEAAJPEBGU_tagpropertykey@@@Z.c)
 *     ?GetEndpointNotificationHandler@CAPOProcessingHost@@AEAAJPEAUIMMDevice@@PEAPEAVCAPOEndpointNotificationsHandler@@@Z @ 0x140017CC8 (-GetEndpointNotificationHandler@CAPOProcessingHost@@AEAAJPEAUIMMDevice@@PEAPEAVCAPOEndpointNotif.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x1400180CC (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<std::wstring,wil::com_ptr_t<CAPOEndpointNotificationsHandler,wil::err_returncode_policy>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,wil::com_ptr_t<CAPOEndpointNotificationsHandler,wil::err_returncode_policy>>>,0>>::find<void>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v4; // rsi
  const unsigned __int8 *v5; // rdx
  unsigned __int64 appended; // rax
  char *v8; // r11
  __int64 v9; // rdx
  __int64 v10; // rax
  _QWORD *v11; // rcx
  _QWORD *v12; // r10
  _QWORD *v13; // rdx
  char *v14; // r8
  __int64 v15; // r9
  signed __int64 v16; // r8
  _QWORD *result; // rax

  v4 = *(_QWORD *)(a3 + 16);
  v5 = (const unsigned __int8 *)a3;
  if ( *(_QWORD *)(a3 + 24) > 7uLL )
    v5 = *(const unsigned __int8 **)a3;
  appended = std::_Fnv1a_append_bytes((unsigned __int64)a1, v5, 2 * v4);
  v9 = a1[3];
  v10 = 2 * (a1[6] & appended);
  v11 = *(_QWORD **)(v9 + 8 * v10 + 8);
  if ( v11 == (_QWORD *)a1[1] )
  {
LABEL_14:
    v11 = 0LL;
  }
  else
  {
    v12 = *(_QWORD **)(v9 + 8 * v10);
    while ( 1 )
    {
      v13 = v11 + 2;
      if ( v11[5] > 7uLL )
        v13 = (_QWORD *)*v13;
      v14 = v8;
      if ( *((_QWORD *)v8 + 3) > 7uLL )
        v14 = *(char **)v8;
      if ( v4 == v11[4] )
        break;
LABEL_18:
      if ( v11 == v12 )
        goto LABEL_14;
      v11 = (_QWORD *)v11[1];
    }
    v15 = v4;
    v16 = v14 - (char *)v13;
    while ( v15 )
    {
      if ( *(_WORD *)((char *)v13 + v16) != *(_WORD *)v13 )
        goto LABEL_18;
      --v15;
      v13 = (_QWORD *)((char *)v13 + 2);
    }
  }
  result = a2;
  if ( !v11 )
    v11 = (_QWORD *)a1[1];
  *a2 = v11;
  return result;
}
