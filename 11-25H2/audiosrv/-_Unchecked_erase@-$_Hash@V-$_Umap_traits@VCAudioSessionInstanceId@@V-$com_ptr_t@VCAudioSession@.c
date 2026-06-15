/*
 * XREFs of ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x1800C7810
 * Callers:
 *     ?clear@?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x180080BCC (-clear@-$_Hash@V-$_Umap_traits@VCAudioSessionInstanceId@@V-$com_ptr_t@VCAudioSession@@Uerr_retur.c)
 * Callees:
 *     ??$?RVCAudioSessionInstanceId@@@?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@QEBA_KAEBVCAudioSessionInstanceId@@@Z @ 0x18001A720 (--$-RVCAudioSessionInstanceId@@@-$_Uhash_compare@VCAudioSessionInstanceId@@U-$hash@VCAudioSessio.c)
 *     ?_Bump_erased@_Range_eraser@?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x1800C75F4 (-_Bump_erased@_Range_eraser@-$_Hash@V-$_Umap_traits@VCAudioSessionInstanceId@@V-$com_ptr_t@VCAud.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>::_Unchecked_erase(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v5; // r12
  _QWORD *v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // r13
  bool v12; // bl
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v16; // rax
  __int64 v17; // r12
  _QWORD *v18; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v19; // [rsp+28h] [rbp-50h]
  __int64 v20; // [rsp+30h] [rbp-48h]
  __int64 v22; // [rsp+88h] [rbp+10h]

  if ( a2 != a3 )
  {
    v5 = *(_QWORD **)(a2 + 8);
    v6 = (_QWORD *)a1[1];
    v7 = a2;
    v8 = a1[3];
    v20 = a2;
    v18 = a1 + 1;
    v19 = v5;
    v9 = 2
       * (std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>::operator()<CAudioSessionInstanceId>(
            (__int64)a1,
            a2 + 16) & a1[6]);
    v10 = *(_QWORD *)(v8 + 8 * v9 + 8);
    v11 = *(_QWORD *)(v8 + 8 * v9);
    v22 = v10;
    while ( 1 )
    {
      v12 = v7 == v10;
      std::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>::_Range_eraser::_Bump_erased(&v18);
      if ( v12 )
        break;
      v7 = v20;
      v10 = v22;
      if ( v20 == a3 )
      {
        if ( v11 == a2 )
LABEL_6:
          *(_QWORD *)(v8 + 8 * v9) = v7;
        goto LABEL_7;
      }
    }
    if ( v11 == a2 )
    {
      *(_QWORD *)(v8 + 8 * v9) = v6;
      v5 = v6;
    }
    for ( *(_QWORD *)(v8 + 8 * v9 + 8) = v5; ; *(_QWORD *)(v8 + 8 * v9 + 8) = v6 )
    {
      v7 = v20;
      if ( v20 == a3 )
        break;
      v16 = std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>::operator()<CAudioSessionInstanceId>(
              v13,
              v20 + 16);
      v9 = 2 * (a1[6] & v16);
      v17 = *(_QWORD *)(v8 + 16 * (a1[6] & v16) + 8);
      while ( 1 )
      {
        std::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>::_Range_eraser::_Bump_erased(&v18);
        if ( v7 == v17 )
          break;
        v7 = v20;
        if ( v20 == a3 )
          goto LABEL_6;
      }
      *(_QWORD *)(v8 + 8 * v9) = v6;
    }
LABEL_7:
    v14 = v19;
    *v19 = v7;
    *(_QWORD *)(v7 + 8) = v14;
  }
  return a3;
}
