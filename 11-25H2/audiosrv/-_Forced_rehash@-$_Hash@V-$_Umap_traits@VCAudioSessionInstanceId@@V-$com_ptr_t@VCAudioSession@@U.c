/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800C7624
 * Callers:
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@IEAAXXZ @ 0x1800C77E4 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@VCAudioSessionInstanceId@@V-$com_ptr_t@VCAudioSession@@Ue.c)
 * Callees:
 *     ??$?RVCAudioSessionInstanceId@@@?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@QEBA_KAEBVCAudioSessionInstanceId@@@Z @ 0x18001A720 (--$-RVCAudioSessionInstanceId@@@-$_Uhash_compare@VCAudioSessionInstanceId@@U-$hash@VCAudioSessio.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@2@@Z @ 0x1800211D8 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ??$?RVCAudioSessionInstanceId@@V0@@?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@QEBA_NAEBVCAudioSessionInstanceId@@0@Z @ 0x1800564F0 (--$-RVCAudioSessionInstanceId@@V0@@-$_Uhash_compare@VCAudioSessionInstanceId@@U-$hash@VCAudioSes.c)
 *     ??1_Clear_guard@?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA@XZ @ 0x1800C6990 (--1_Clear_guard@-$_Hash@V-$_Umap_traits@VCAudioSessionInstanceId@@V-$com_ptr_t@VCAudioSession@@U.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>::_Forced_rehash(
        _QWORD *a1,
        unsigned __int64 a2)
{
  _QWORD *v2; // rsi
  unsigned __int64 v3; // rcx
  __int64 v4; // rbp
  __int64 *v5; // r15
  unsigned __int64 v6; // rcx
  __int64 v7; // rbx
  _QWORD *v8; // rcx
  _QWORD *v9; // rbx
  _QWORD *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // r14
  _QWORD *v14; // rsi
  __int64 v15; // r8
  _QWORD *v16; // rdx
  _QWORD *v17; // rax
  _QWORD *v18; // r13
  __int64 v19; // r8
  _QWORD *v20; // rdx
  _QWORD *v21; // rax
  _QWORD *v22; // rdx
  _QWORD *v23; // rax
  _QWORD *v26; // [rsp+68h] [rbp+10h] BYREF

  LODWORD(v26) = 0;
  v2 = a1;
  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  LODWORD(v26) = 0;
  v4 = v2[1];
  v5 = v2 + 3;
  _BitScanReverse64(&v6, (a2 - 1) | 1);
  v7 = 1LL << ((unsigned __int8)v6 + 1);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>>>>>::_Assign_grow(
    v2 + 3,
    2 * v7,
    v4);
  v2[7] = v7;
  v2[6] = v7 - 1;
  v9 = *(_QWORD **)v2[1];
  v10 = v9;
  while ( v9 != (_QWORD *)v4 )
  {
    v10 = (_QWORD *)*v10;
    v11 = std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>::operator()<CAudioSessionInstanceId>(
            (__int64)v8,
            (__int64)(v9 + 2));
    v12 = *v5;
    v13 = 2 * (v2[6] & v11);
    if ( *(_QWORD *)(v12 + 16 * (v2[6] & v11)) == v4 )
    {
      *(_QWORD *)(v12 + 16 * (v2[6] & v11)) = v9;
      *(_QWORD *)(v12 + 8 * v13 + 8) = v9;
    }
    else
    {
      v14 = *(_QWORD **)(v12 + 16 * (v2[6] & v11) + 8);
      if ( std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>::operator()<CAudioSessionInstanceId,CAudioSessionInstanceId>(
             (__int64)v8,
             (__int64)(v9 + 2),
             (__int64)(v14 + 2)) )
      {
        v18 = v14;
        while ( *(_QWORD **)(v12 + 8 * v13) != v18 )
        {
          v14 = (_QWORD *)v14[1];
          v18 = v14;
          if ( !std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>::operator()<CAudioSessionInstanceId,CAudioSessionInstanceId>(
                  (__int64)v8,
                  (__int64)(v9 + 2),
                  (__int64)(v14 + 2)) )
          {
            v19 = *v14;
            v20 = (_QWORD *)v9[1];
            *v20 = v10;
            v8 = (_QWORD *)v10[1];
            *v8 = v19;
            v21 = *(_QWORD **)(v19 + 8);
            *v21 = v9;
            *(_QWORD *)(v19 + 8) = v8;
            v10[1] = v20;
            v9[1] = v21;
            goto LABEL_16;
          }
        }
        v22 = (_QWORD *)v9[1];
        *v22 = v10;
        v8 = (_QWORD *)v10[1];
        *v8 = v14;
        v23 = (_QWORD *)v14[1];
        *v23 = v9;
        v14[1] = v8;
        v10[1] = v22;
        v9[1] = v23;
        *(_QWORD *)(v12 + 8 * v13) = v9;
      }
      else
      {
        v15 = *v14;
        if ( (_QWORD *)*v14 != v9 )
        {
          v16 = (_QWORD *)v9[1];
          *v16 = v10;
          v8 = (_QWORD *)v10[1];
          *v8 = v15;
          v17 = *(_QWORD **)(v15 + 8);
          *v17 = v9;
          *(_QWORD *)(v15 + 8) = v8;
          v10[1] = v16;
          v9[1] = v17;
        }
        *(_QWORD *)(v12 + 8 * v13 + 8) = v9;
      }
LABEL_16:
      v2 = a1;
    }
    v9 = v10;
    v5 = v2 + 3;
  }
  v26 = 0LL;
  return std::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>::_Clear_guard::~_Clear_guard(&v26);
}
