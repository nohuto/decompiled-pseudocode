/*
 * XREFs of ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@U_GUID@@W4ValidEffectPackConfigurationSettings@@V?$_Uhash_compare@U_GUID@@U?$hash@U_GUID@@@std@@U?$equal_to@U_GUID@@@3@@std@@V?$allocator@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@4@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x180140908
 * Callers:
 *     ??1_Clear_guard@?$_Hash@V?$_Umap_traits@U_GUID@@W4ValidEffectPackConfigurationSettings@@V?$_Uhash_compare@U_GUID@@U?$hash@U_GUID@@@std@@U?$equal_to@U_GUID@@@3@@std@@V?$allocator@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x18013B968 (--1_Clear_guard@-$_Hash@V-$_Umap_traits@U_GUID@@W4ValidEffectPackConfigurationSettings@@V-$_Uhas.c)
 * Callees:
 *     ?_Bump_erased@_Range_eraser@?$_Hash@V?$_Umap_traits@U_GUID@@W4ValidEffectPackConfigurationSettings@@V?$_Uhash_compare@U_GUID@@U?$hash@U_GUID@@@std@@U?$equal_to@U_GUID@@@3@@std@@V?$allocator@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x18013ED38 (-_Bump_erased@_Range_eraser@-$_Hash@V-$_Umap_traits@U_GUID@@W4ValidEffectPackConfigurationSettin.c)
 */

unsigned int *__fastcall std::_Hash<std::_Umap_traits<_GUID,enum ValidEffectPackConfigurationSettings,std::_Uhash_compare<_GUID,std::hash<_GUID>,std::equal_to<_GUID>>,std::allocator<std::pair<_GUID const,enum ValidEffectPackConfigurationSettings>>,0>>::_Unchecked_erase(
        _QWORD *a1,
        __int64 a2,
        unsigned int *a3)
{
  __int64 v6; // rbp
  _QWORD *v7; // rax
  unsigned int **v8; // r15
  unsigned int *v9; // rcx
  unsigned __int64 v10; // rdi
  unsigned int **v11; // r12
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rdi
  unsigned int *v15; // rax
  __int64 v16; // r13
  bool v17; // bl
  unsigned int **v18; // rax
  unsigned int *v20; // r12
  bool v21; // bl
  _QWORD *v22; // [rsp+20h] [rbp-58h] BYREF
  unsigned int **v23; // [rsp+28h] [rbp-50h]
  unsigned int *v24; // [rsp+30h] [rbp-48h]
  unsigned int *v26; // [rsp+88h] [rbp+10h]

  if ( (unsigned int *)a2 != a3 )
  {
    v6 = a1[3];
    v7 = a1 + 1;
    v8 = (unsigned int **)a1[1];
    v9 = (unsigned int *)a2;
    v10 = *(unsigned int *)(a2 + 28);
    v11 = *(unsigned int ***)(a2 + 8);
    v22 = v7;
    v12 = *(unsigned int *)(a2 + 24) ^ v10;
    v23 = v11;
    v13 = *(unsigned int *)(a2 + 20) ^ v12;
    v24 = (unsigned int *)a2;
    v14 = 2 * (a1[6] & (*(unsigned int *)(a2 + 16) ^ v13));
    v15 = *(unsigned int **)(v6 + 8 * v14 + 8);
    v16 = *(_QWORD *)(v6 + 8 * v14);
    v26 = v15;
    while ( 1 )
    {
      v17 = v9 == v15;
      std::_Hash<std::_Umap_traits<_GUID,enum ValidEffectPackConfigurationSettings,std::_Uhash_compare<_GUID,std::hash<_GUID>,std::equal_to<_GUID>>,std::allocator<std::pair<_GUID const,enum ValidEffectPackConfigurationSettings>>,0>>::_Range_eraser::_Bump_erased(&v22);
      if ( v17 )
        break;
      v9 = v24;
      v15 = v26;
      if ( v24 == a3 )
      {
        if ( v16 == a2 )
LABEL_6:
          *(_QWORD *)(v6 + 8 * v14) = v9;
        goto LABEL_7;
      }
    }
    if ( v16 == a2 )
    {
      *(_QWORD *)(v6 + 8 * v14) = v8;
      v11 = v8;
    }
    for ( *(_QWORD *)(v6 + 8 * v14 + 8) = v11; ; *(_QWORD *)(v6 + 8 * v14 + 8) = v8 )
    {
      v9 = v24;
      if ( v24 == a3 )
        break;
      v14 = 2 * (a1[6] & (v24[4] ^ v24[5] ^ v24[6] ^ (unsigned __int64)v24[7]));
      v20 = *(unsigned int **)(v6 + 16 * (a1[6] & (v24[4] ^ v24[5] ^ v24[6] ^ (unsigned __int64)v24[7])) + 8);
      while ( 1 )
      {
        v21 = v9 == v20;
        std::_Hash<std::_Umap_traits<_GUID,enum ValidEffectPackConfigurationSettings,std::_Uhash_compare<_GUID,std::hash<_GUID>,std::equal_to<_GUID>>,std::allocator<std::pair<_GUID const,enum ValidEffectPackConfigurationSettings>>,0>>::_Range_eraser::_Bump_erased(&v22);
        if ( v21 )
          break;
        v9 = v24;
        if ( v24 == a3 )
          goto LABEL_6;
      }
      *(_QWORD *)(v6 + 8 * v14) = v8;
    }
LABEL_7:
    v18 = v23;
    *v23 = v9;
    *((_QWORD *)v9 + 1) = v18;
  }
  return a3;
}
