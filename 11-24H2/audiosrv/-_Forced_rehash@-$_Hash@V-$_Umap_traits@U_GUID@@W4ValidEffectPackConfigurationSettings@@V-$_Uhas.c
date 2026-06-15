/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@U_GUID@@W4ValidEffectPackConfigurationSettings@@V?$_Uhash_compare@U_GUID@@U?$hash@U_GUID@@@std@@U?$equal_to@U_GUID@@@3@@std@@V?$allocator@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x180148704
 * Callers:
 *     ??$emplace@AEBU?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@?$_Hash@V?$_Umap_traits@U_GUID@@W4ValidEffectPackConfigurationSettings@@V?$_Uhash_compare@U_GUID@@U?$hash@U_GUID@@@std@@U?$equal_to@U_GUID@@@3@@std@@V?$allocator@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@std@@@std@@@std@@_N@1@AEBU?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@1@@Z @ 0x180143520 (--$emplace@AEBU-$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@-$_Hash@V-$_Uma.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@std@@@std@@@2@@Z @ 0x180029828 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_180029828.c)
 *     ??1_Clear_guard@?$_Hash@V?$_Umap_traits@U_GUID@@W4ValidEffectPackConfigurationSettings@@V?$_Uhash_compare@U_GUID@@U?$hash@U_GUID@@@std@@U?$equal_to@U_GUID@@@3@@std@@V?$allocator@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x180144438 (--1_Clear_guard@-$_Hash@V-$_Umap_traits@U_GUID@@W4ValidEffectPackConfigurationSettings@@V-$_Uhas.c)
 */

unsigned __int64 __fastcall std::_Hash<std::_Umap_traits<_GUID,enum ValidEffectPackConfigurationSettings,std::_Uhash_compare<_GUID,std::hash<_GUID>,std::equal_to<_GUID>>,std::allocator<std::pair<_GUID const,enum ValidEffectPackConfigurationSettings>>,0>>::_Forced_rehash(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rcx
  __int64 v3; // rbx
  unsigned __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // r8
  _QWORD *v7; // rax
  _QWORD *v8; // rdx
  __int64 v9; // r11
  __int64 v10; // rcx
  unsigned __int64 v11; // r10
  _QWORD *v12; // rcx
  __int64 v13; // r8
  _QWORD *v14; // rdi
  _QWORD *v15; // r9
  _QWORD *v16; // r8
  _QWORD *v17; // rcx
  _QWORD *v18; // rdi
  __int64 v19; // r8
  _QWORD *v20; // r10
  _QWORD *v21; // r9
  _QWORD *v22; // r8
  _QWORD *v23; // rcx
  _QWORD *v24; // r9
  _QWORD *v25; // r8
  _QWORD *v26; // rcx
  __int64 v28; // [rsp+30h] [rbp+8h] BYREF

  HIDWORD(v28) = HIDWORD(a1);
  LODWORD(v28) = 0;
  _BitScanReverse64(&v2, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v2 )
    std::_Xlength_error("invalid hash bucket count");
  LODWORD(v28) = 0;
  v3 = qword_1801DCF48;
  _BitScanReverse64(&v4, (a2 - 1) | 1);
  v5 = 1LL << ((unsigned __int8)v4 + 1);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<_GUID const,enum ValidEffectPackConfigurationSettings>>>>>>::_Assign_grow(
    (__int64)&qword_1801DCF58,
    2 * v5,
    qword_1801DCF48);
  v6 = v5 - 1;
  qword_1801DCF70 = v5 - 1;
  qword_1801DCF78 = v5;
  v7 = *(_QWORD **)qword_1801DCF48;
  v8 = *(_QWORD **)qword_1801DCF48;
  while ( v7 != (_QWORD *)v3 )
  {
    v9 = qword_1801DCF58;
    v8 = (_QWORD *)*v8;
    v10 = *((unsigned int *)v7 + 4);
    v11 = 2
        * (v6 & (v10 ^ *((unsigned int *)v7 + 5) ^ *((unsigned int *)v7 + 6) ^ (unsigned __int64)*((unsigned int *)v7 + 7)));
    if ( *(_QWORD *)(qword_1801DCF58
                   + 16
                   * (v6 & (v10 ^ *((unsigned int *)v7 + 5) ^ *((unsigned int *)v7 + 6) ^ (unsigned __int64)*((unsigned int *)v7 + 7)))) == v3 )
    {
      *(_QWORD *)(qword_1801DCF58
                + 16
                * (v6 & (v10 ^ *((unsigned int *)v7 + 5) ^ *((unsigned int *)v7 + 6) ^ (unsigned __int64)*((unsigned int *)v7 + 7)))) = v7;
LABEL_7:
      *(_QWORD *)(v9 + 8 * v11 + 8) = v7;
      goto LABEL_19;
    }
    v12 = *(_QWORD **)(qword_1801DCF58
                     + 16
                     * (v6 & (v10 ^ *((unsigned int *)v7 + 5) ^ *((unsigned int *)v7 + 6) ^ (unsigned __int64)*((unsigned int *)v7 + 7)))
                     + 8);
    v13 = v7[2] - v12[2];
    if ( !v13 )
      v13 = v7[3] - v12[3];
    if ( !v13 )
    {
      v14 = (_QWORD *)*v12;
      if ( (_QWORD *)*v12 != v7 )
      {
        v15 = (_QWORD *)v7[1];
        *v15 = v8;
        v16 = (_QWORD *)v8[1];
        *v16 = v14;
        v17 = (_QWORD *)v14[1];
        *v17 = v7;
        v14[1] = v16;
        v8[1] = v15;
        v7[1] = v17;
      }
      goto LABEL_7;
    }
    while ( 1 )
    {
      v18 = v12 + 1;
      if ( *(_QWORD **)(qword_1801DCF58 + 8 * v11) == v12 )
        break;
      v12 = (_QWORD *)*v18;
      v19 = v7[2] - *(_QWORD *)(*v18 + 16LL);
      if ( !v19 )
        v19 = v7[3] - v12[3];
      if ( !v19 )
      {
        v20 = (_QWORD *)*v12;
        v21 = (_QWORD *)v7[1];
        *v21 = v8;
        v22 = (_QWORD *)v8[1];
        *v22 = v20;
        v23 = (_QWORD *)v20[1];
        *v23 = v7;
        v20[1] = v22;
        v8[1] = v21;
        v7[1] = v23;
        goto LABEL_19;
      }
    }
    v24 = (_QWORD *)v7[1];
    *v24 = v8;
    v25 = (_QWORD *)v8[1];
    *v25 = v12;
    v26 = (_QWORD *)*v18;
    *v26 = v7;
    *v18 = v25;
    v8[1] = v24;
    v7[1] = v26;
    *(_QWORD *)(v9 + 8 * v11) = v7;
LABEL_19:
    v6 = qword_1801DCF70;
    v7 = v8;
  }
  v28 = 0LL;
  return std::_Hash<std::_Umap_traits<_GUID,enum ValidEffectPackConfigurationSettings,std::_Uhash_compare<_GUID,std::hash<_GUID>,std::equal_to<_GUID>>,std::allocator<std::pair<_GUID const,enum ValidEffectPackConfigurationSettings>>,0>>::_Clear_guard::~_Clear_guard(&v28);
}
