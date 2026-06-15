/*
 * XREFs of ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCAPOEndpointNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCAPOEndpointNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCAPOEndpointNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x14006351C
 * Callers:
 *     ??1_Clear_guard@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCAPOEndpointNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCAPOEndpointNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x140061DDC (--1_Clear_guard@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x1400183CC (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?_Bump_erased@_Range_eraser@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCAPOEnvironmentStateChangedNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCAPOEnvironmentStateChangedNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@$0A@@std@@@std@@QEAAXXZ @ 0x140062F18 (-_Bump_erased@_Range_eraser@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<std::wstring,wil::com_ptr_t<CAPOEndpointNotificationsHandler,wil::err_returncode_policy>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,wil::com_ptr_t<CAPOEndpointNotificationsHandler,wil::err_returncode_policy>>>,0>>::_Unchecked_erase(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *v6; // r12
  _QWORD *v7; // r15
  __int64 v8; // rsi
  __int64 v9; // r8
  const unsigned __int8 *v10; // rdx
  __int64 appended; // rax
  _QWORD *v12; // r11
  __int64 v13; // r14
  _QWORD *v14; // rax
  bool v15; // bl
  __int64 v16; // rcx
  _QWORD *v17; // rax
  const unsigned __int8 *v19; // rdx
  __int64 v20; // rax
  _QWORD *v21; // rbp
  bool v22; // bl
  _QWORD *v23; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v24; // [rsp+28h] [rbp-50h]
  _QWORD *v25; // [rsp+30h] [rbp-48h]
  _QWORD *v26; // [rsp+88h] [rbp+10h]
  _QWORD *v27; // [rsp+90h] [rbp+18h]

  if ( a2 != a3 )
  {
    v6 = (_QWORD *)a2[1];
    v7 = (_QWORD *)a1[1];
    v8 = a1[3];
    v9 = a2[4];
    v25 = a2;
    v10 = (const unsigned __int8 *)(a2 + 2);
    v23 = a1 + 1;
    v24 = v6;
    if ( *((_QWORD *)v10 + 3) > 7uLL )
      v10 = *(const unsigned __int8 **)v10;
    appended = std::_Fnv1a_append_bytes((__int64)a1, v10, 2 * v9);
    v13 = 2 * (a1[6] & appended);
    v26 = *(_QWORD **)(v8 + 16 * (a1[6] & appended));
    v14 = *(_QWORD **)(v8 + 16 * (a1[6] & appended) + 8);
    v27 = v14;
    while ( 1 )
    {
      v15 = v12 == v14;
      std::_Hash<std::_Umap_traits<std::wstring,wil::com_ptr_t<CAPOEnvironmentStateChangedNotificationsHandler,wil::err_returncode_policy>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,wil::com_ptr_t<CAPOEnvironmentStateChangedNotificationsHandler,wil::err_returncode_policy>>>,0>>::_Range_eraser::_Bump_erased(&v23);
      if ( v15 )
        break;
      v12 = v25;
      v14 = v27;
      if ( v25 == a3 )
      {
        if ( v26 == a2 )
LABEL_8:
          *(_QWORD *)(v8 + 8 * v13) = v12;
        goto LABEL_9;
      }
    }
    if ( v26 == a2 )
    {
      *(_QWORD *)(v8 + 8 * v13) = v7;
      v6 = v7;
    }
    for ( *(_QWORD *)(v8 + 8 * v13 + 8) = v6; ; *(_QWORD *)(v8 + 8 * v13 + 8) = v7 )
    {
      v12 = v25;
      if ( v25 == a3 )
        break;
      v19 = (const unsigned __int8 *)(v25 + 2);
      if ( v25[5] > 7uLL )
        v19 = *(const unsigned __int8 **)v19;
      v20 = std::_Fnv1a_append_bytes(v16, v19, 2LL * v25[4]);
      v13 = 2 * (a1[6] & v20);
      v21 = *(_QWORD **)(v8 + 16 * (a1[6] & v20) + 8);
      while ( 1 )
      {
        v22 = v12 == v21;
        std::_Hash<std::_Umap_traits<std::wstring,wil::com_ptr_t<CAPOEnvironmentStateChangedNotificationsHandler,wil::err_returncode_policy>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,wil::com_ptr_t<CAPOEnvironmentStateChangedNotificationsHandler,wil::err_returncode_policy>>>,0>>::_Range_eraser::_Bump_erased(&v23);
        if ( v22 )
          break;
        v12 = v25;
        if ( v25 == a3 )
          goto LABEL_8;
      }
      *(_QWORD *)(v8 + 8 * v13) = v7;
    }
LABEL_9:
    v17 = v24;
    *v24 = v12;
    v12[1] = v17;
  }
  return a3;
}
