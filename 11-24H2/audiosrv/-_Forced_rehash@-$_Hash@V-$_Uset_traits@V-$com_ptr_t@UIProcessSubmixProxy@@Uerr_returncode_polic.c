/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Uset_traits@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@U?$equal_to@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@@std@@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800B07CC
 * Callers:
 *     ?_Rehash_for_1@?$_Hash@V?$_Uset_traits@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@U?$equal_to@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@@std@@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@$0A@@std@@@std@@IEAAXXZ @ 0x1800B099C (-_Rehash_for_1@-$_Hash@V-$_Uset_traits@V-$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy.c)
 * Callees:
 *     ??$?RV?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@?$_Uhash_compare@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@U?$equal_to@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@@std@@QEBA_KAEBV?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18009B7E8 (--$-RV-$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@-$_Uhash_compare@V-$c.c)
 *     ??1_Clear_guard@?$_Hash@V?$_Uset_traits@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@U?$equal_to@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@@std@@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x1800AD9F4 (--1_Clear_guard@-$_Hash@V-$_Uset_traits@V-$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_polic.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@U_Iterator_base0@2@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800B05D8 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_s.c)
 */

__int64 __fastcall std::_Hash<std::_Uset_traits<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>,std::_Uhash_compare<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>,std::hash<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>,std::equal_to<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>>,std::allocator<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>,0>>::_Forced_rehash(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 **v7; // rcx
  __int64 v8; // r10
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // r11
  __int64 *v13; // rax
  __int64 *v14; // rbx
  _QWORD *v15; // rdx
  _QWORD *v16; // rax
  __int64 **v17; // rbx
  __int64 *v18; // r8
  _QWORD *v19; // rdx
  _QWORD *v20; // rax
  _QWORD *v21; // rdx
  __int64 *v22; // rax
  __int64 v24; // [rsp+38h] [rbp+10h] BYREF

  LODWORD(v24) = 0;
  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  LODWORD(v24) = 0;
  v4 = a1[1];
  _BitScanReverse64(&v5, (a2 - 1) | 1);
  v6 = 1LL << ((unsigned __int8)v5 + 1);
  std::_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>>,std::_Iterator_base0>>>::_Assign_grow(
    (__int64)(a1 + 3),
    2 * v6,
    v4);
  a1[7] = v6;
  a1[6] = v6 - 1;
  v8 = *(_QWORD *)a1[1];
LABEL_4:
  while ( v8 != v4 )
  {
    v9 = std::_Uhash_compare<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>,std::hash<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>,std::equal_to<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>>::operator()<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>(
           (__int64)v7,
           (__int64 *)(v8 + 16));
    v11 = a1[3];
    v12 = 2 * (a1[6] & v9);
    if ( *(_QWORD *)(v11 + 16 * (a1[6] & v9)) == v4 )
    {
      *(_QWORD *)(v11 + 16 * (a1[6] & v9)) = v10;
      goto LABEL_7;
    }
    v13 = *(__int64 **)(v11 + 16 * (a1[6] & v9) + 8);
    v7 = *(__int64 ***)(v10 + 16);
    if ( v7 == (__int64 **)v13[2] )
    {
      v14 = (__int64 *)*v13;
      if ( *v13 != v10 )
      {
        v15 = *(_QWORD **)(v10 + 8);
        *v15 = v8;
        v7 = *(__int64 ***)(v8 + 8);
        *v7 = v14;
        v16 = (_QWORD *)v14[1];
        *v16 = v10;
        v14[1] = (__int64)v7;
        *(_QWORD *)(v8 + 8) = v15;
        *(_QWORD *)(v10 + 8) = v16;
      }
LABEL_7:
      *(_QWORD *)(v11 + 8 * v12 + 8) = v10;
    }
    else
    {
      while ( 1 )
      {
        v17 = (__int64 **)(v13 + 1);
        if ( *(__int64 **)(v11 + 8 * v12) == v13 )
          break;
        v13 = *v17;
        if ( v7 == (__int64 **)(*v17)[2] )
        {
          v18 = (__int64 *)*v13;
          v19 = *(_QWORD **)(v10 + 8);
          *v19 = v8;
          v7 = *(__int64 ***)(v8 + 8);
          *v7 = v18;
          v20 = (_QWORD *)v18[1];
          *v20 = v10;
          v18[1] = (__int64)v7;
          *(_QWORD *)(v8 + 8) = v19;
          *(_QWORD *)(v10 + 8) = v20;
          goto LABEL_4;
        }
      }
      v21 = *(_QWORD **)(v10 + 8);
      *v21 = v8;
      v7 = *(__int64 ***)(v8 + 8);
      *v7 = v13;
      v22 = *v17;
      *v22 = v10;
      *v17 = (__int64 *)v7;
      *(_QWORD *)(v8 + 8) = v21;
      *(_QWORD *)(v10 + 8) = v22;
      *(_QWORD *)(v11 + 8 * v12) = v10;
    }
  }
  v24 = 0LL;
  return std::_Hash<std::_Uset_traits<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>,std::_Uhash_compare<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>,std::hash<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>,std::equal_to<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>>,std::allocator<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>,0>>::_Clear_guard::~_Clear_guard(&v24);
}
