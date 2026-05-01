/*
 * XREFs of ?SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@1@Z @ 0x1800C1D74
 * Callers:
 *     ?UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z @ 0x18005103C (-UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z.c)
 *     ?OnTabsChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabDataModel@3UI@456@AEBUWindowTabDataModelTabsChangedEventArgs@38456@@Z @ 0x1800C1890 (-OnTabsChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabData.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$_Hash@V?$_Uset_traits@Uguid@winrt@@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@Uguid@winrt@@@4@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@1@AEBV?$allocator@Uguid@winrt@@@1@@Z @ 0x1800C0808 (--0-$_Hash@V-$_Uset_traits@Uguid@winrt@@V-$_Uhash_compare@Uguid@winrt@@U-$hash@Uguid@winrt@@@std.c)
 *     ??1?$deque@_KV?$allocator@_K@std@@@std@@QEAA@XZ @ 0x1800C0A28 (--1-$deque@_KV-$allocator@_K@std@@@std@@QEAA@XZ.c)
 *     ??1?$_Hash@V?$_Umap_traits@Uguid@winrt@@_KV?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x1800C0A78 (--1-$_Hash@V-$_Umap_traits@Uguid@winrt@@_KV-$_Uhash_compare@Uguid@winrt@@U-$hash@Uguid@winrt@@@s.c)
 *     ??$_Emplace_front_internal@AEB_K@?$deque@_KV?$allocator@_K@std@@@std@@AEAAXAEB_K@Z @ 0x1800C1528 (--$_Emplace_front_internal@AEB_K@-$deque@_KV-$allocator@_K@std@@@std@@AEAAXAEB_K@Z.c)
 *     ??$emplace@AEBUguid@winrt@@@?$_Hash@V?$_Uset_traits@Uguid@winrt@@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@Uguid@winrt@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@Uguid@winrt@@@std@@@std@@@std@@_N@1@AEBUguid@winrt@@@Z @ 0x1800C22C0 (--$emplace@AEBUguid@winrt@@@-$_Hash@V-$_Uset_traits@Uguid@winrt@@V-$_Uhash_compare@Uguid@winrt@@.c)
 *     ??1?$_Hash@V?$_Uset_traits@Uguid@winrt@@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@Uguid@winrt@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x1800C2530 (--1-$_Hash@V-$_Uset_traits@Uguid@winrt@@V-$_Uhash_compare@Uguid@winrt@@U-$hash@Uguid@winrt@@@std.c)
 *     ?RemoveTabsFromWindowOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@AEBV?$unordered_map@_KUguid@winrt@@U?$hash@_K@std@@U?$equal_to@_K@4@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@@8@@Z @ 0x1800C2584 (-RemoveTabsFromWindowOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV-.c)
 *     ??0?$_Hash@V?$_Umap_traits@Uguid@winrt@@_KV?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@4@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@1@AEBV?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@1@@Z @ 0x180126768 (--0-$_Hash@V-$_Umap_traits@Uguid@winrt@@_KV-$_Uhash_compare@Uguid@winrt@@U-$hash@Uguid@winrt@@@s.c)
 *     ??$_Find_last@_K@?$_Hash@V?$_Umap_traits@_KUguid@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CB_KUguid@winrt@@@std@@PEAX@std@@@1@AEB_K_K@Z @ 0x1801E92D4 (--$_Find_last@_K@-$_Hash@V-$_Umap_traits@_KUguid@winrt@@V-$_Uhash_compare@_KU-$hash@_K@std@@U-$e.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@std@@@4@$0A@@std@@@std@@IEBA_K_K@Z @ 0x180223670 (-_Desired_grow_bucket_count@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@V-$unordered_set@IU-$hash@I@.c)
 *     ??$emplace@AEBUguid@winrt@@_K@?$_Hash@V?$_Umap_traits@Uguid@winrt@@_KV?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@_K@std@@@std@@@std@@@std@@_N@1@AEBUguid@winrt@@$$QEA_K@Z @ 0x1802B7040 (--$emplace@AEBUguid@winrt@@_K@-$_Hash@V-$_Umap_traits@Uguid@winrt@@_KV-$_Uhash_compare@Uguid@win.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@_KUguid@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x1802CB4A0 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@_KUguid@winrt@@V-$_Uhash_compare@_KU-$hash@_K@std@@U-$eq.c)
 *     ??$emplace@AEBUguid@winrt@@AEA_K@?$_Hash@V?$_Umap_traits@Uguid@winrt@@_KV?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@_K@std@@@std@@@std@@@std@@_N@1@AEBUguid@winrt@@AEA_K@Z @ 0x18057C96C (--$emplace@AEBUguid@winrt@@AEA_K@-$_Hash@V-$_Umap_traits@Uguid@winrt@@_KV-$_Uhash_compare@Uguid@.c)
 *     ??0?$deque@_KV?$allocator@_K@std@@@std@@QEAA@_KAEB_K@Z @ 0x18057D404 (--0-$deque@_KV-$allocator@_K@std@@@std@@QEAA@_KAEB_K@Z.c)
 *     ??4?$deque@_KV?$allocator@_K@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18057D778 (--4-$deque@_KV-$allocator@_K@std@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

// Hidden C++ exception states: #wind=6
void winrt::Windows::Internal::Shell::implementation::WindowTabHost::SyncGlobalTabOrder(
        RTL_SRWLOCK *a1,
        __int64 a2,
        __int64 *a3,
        ...)
{
  __int64 *v3; // r15
  RTL_SRWLOCK *v6; // r13
  unsigned __int64 v7; // r8
  __int64 v8; // rdi
  __int64 v9; // rbx
  _QWORD *Ptr; // rdi
  _QWORD *v11; // rbx
  _QWORD *v12; // r8
  __int64 v13; // rcx
  unsigned __int64 i; // rdx
  __int64 v15; // rax
  _QWORD *v16; // rcx
  _QWORD *v17; // r9
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // r13
  unsigned __int64 j; // rcx
  _QWORD *v22; // rax
  _QWORD *v23; // r15
  char *v24; // rsi
  __int64 v25; // r8
  unsigned __int64 v26; // rdx
  float v27; // xmm0_4
  float v28; // xmm1_4
  _QWORD *v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rcx
  _QWORD *v32; // r8
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  RTL_SRWLOCK *v36; // rsi
  __int64 v37; // r9
  _QWORD **v38; // rcx
  _QWORD *k; // rax
  unsigned __int64 v40; // rdi
  __int64 v41; // rdx
  __int64 v42; // rsi
  __int64 v43; // r13
  __int64 v44; // rax
  _QWORD *v45; // rax
  __int64 v46; // rax
  __int64 v47; // rdx
  unsigned __int64 v48; // rcx
  void *v49; // [rsp+28h] [rbp-89h] BYREF
  _QWORD *v50; // [rsp+30h] [rbp-81h] BYREF
  __int64 v51; // [rsp+38h] [rbp-79h]
  __int64 v52; // [rsp+40h] [rbp-71h]
  __int64 v53; // [rsp+58h] [rbp-59h]
  __int64 v54; // [rsp+60h] [rbp-51h]
  _QWORD *v55; // [rsp+68h] [rbp-49h] BYREF
  char *v56; // [rsp+70h] [rbp-41h]
  RTL_SRWLOCK *v57; // [rsp+78h] [rbp-39h]
  _BYTE v58[16]; // [rsp+80h] [rbp-31h] BYREF
  RTL_SRWLOCK *v59; // [rsp+90h] [rbp-21h]
  char v60[8]; // [rsp+98h] [rbp-19h] BYREF
  _QWORD *v61; // [rsp+A0h] [rbp-11h]
  __int64 v62; // [rsp+B0h] [rbp-1h]
  __int64 v63; // [rsp+C8h] [rbp+17h]
  int v64; // [rsp+118h] [rbp+67h] BYREF
  __int64 v65; // [rsp+120h] [rbp+6Fh] BYREF
  __int64 *v66; // [rsp+130h] [rbp+7Fh] BYREF
  va_list va; // [rsp+130h] [rbp+7Fh]
  va_list va1; // [rsp+138h] [rbp+87h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v66 = va_arg(va1, __int64 *);
  v65 = a2;
  v3 = v66;
  v6 = a1 + 77;
  v57 = a1 + 77;
  AcquireSRWLockExclusive(a1 + 77);
  v59 = v6;
  v8 = v3[1];
  v9 = *v3;
  if ( (v8 - *v3) >> 4 )
  {
    v64 = 0;
    std::_Hash<std::_Uset_traits<winrt::guid,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<winrt::guid>,0>>::_Hash<std::_Uset_traits<winrt::guid,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<winrt::guid>,0>>(
      (__int64)v60,
      &v64,
      v7);
    while ( v9 != v8 )
    {
      std::_Hash<std::_Uset_traits<winrt::guid,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<winrt::guid>,0>>::emplace<winrt::guid const &>(
        v60,
        &v55,
        v9);
      v9 += 16LL;
    }
    v64 = 0;
    std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>(
      &v49,
      &v64);
    Ptr = a1[92].Ptr;
    v11 = (_QWORD *)*Ptr;
    v12 = v61;
    while ( 1 )
    {
      if ( v11 == Ptr )
      {
        winrt::Windows::Internal::Shell::implementation::WindowTabHost::RemoveTabsFromWindowOrder(
          a1,
          v66,
          &v49,
          0xCBF29CE484222325uLL);
        std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::~_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>((__int64)&v49);
        std::_Hash<std::_Uset_traits<winrt::guid,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<winrt::guid>,0>>::~_Hash<std::_Uset_traits<winrt::guid,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<winrt::guid>,0>>(
          v60,
          v33,
          v34,
          v35);
        v6 = a1 + 77;
        goto LABEL_37;
      }
      v13 = 0xCBF29CE484222325uLL;
      for ( i = 0LL; i < 0x10; ++i )
        v13 = 0x100000001B3LL * (*((unsigned __int8 *)v11 + i + 16) ^ (unsigned __int64)v13);
      v15 = 2 * (v13 & v63);
      v16 = *(_QWORD **)(v62 + 16 * (v13 & v63) + 8);
      if ( v16 == v12 )
      {
        v16 = 0LL;
      }
      else
      {
        v17 = *(_QWORD **)(v62 + 8 * v15);
        while ( 1 )
        {
          v18 = v11[2] - v16[2];
          if ( !v18 )
            v18 = v11[3] - v16[3];
          if ( !v18 )
            break;
          if ( v16 == v17 )
          {
            v16 = 0LL;
            break;
          }
          v16 = (_QWORD *)v16[1];
        }
      }
      v19 = v12;
      if ( v16 )
        v19 = v16;
      if ( v19 == v12 )
      {
        v20 = 0xCBF29CE484222325uLL;
        for ( j = 0LL; j < 8; ++j )
          v20 = 0x100000001B3LL * (*((unsigned __int8 *)v11 + j + 32) ^ (unsigned __int64)v20);
        v22 = *(_QWORD **)(v52 + 16 * (v20 & v53) + 8);
        v23 = v50;
        if ( v22 == v50 )
          break;
        while ( 1 )
        {
          if ( v11[4] == v22[2] )
          {
            v23 = (_QWORD *)*v22;
            goto LABEL_34;
          }
          if ( v22 == *(_QWORD **)(v52 + 16 * (v20 & v53)) )
            break;
          v22 = (_QWORD *)v22[1];
        }
        v23 = v22;
        v22 = 0LL;
LABEL_34:
        if ( !v22 )
          break;
      }
LABEL_35:
      v11 = (_QWORD *)*v11;
    }
    if ( v51 == 0x666666666666666LL )
      std::_Xlength_error("unordered_map/set too long");
    v55 = &v50;
    v56 = 0LL;
    v24 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
    v56 = v24;
    *((_QWORD *)v24 + 2) = v11[4];
    *(_OWORD *)(v24 + 24) = *((_OWORD *)v11 + 1);
    v25 = v51;
    v26 = v51 + 1;
    if ( v51 + 1 < 0 )
      v27 = (float)(int)(v26 & 1 | (v26 >> 1)) + (float)(int)(v26 & 1 | (v26 >> 1));
    else
      v27 = (float)(int)v26;
    if ( v54 < 0 )
      v28 = (float)(v54 & 1 | (unsigned int)((unsigned __int64)v54 >> 1))
          + (float)(v54 & 1 | (unsigned int)((unsigned __int64)v54 >> 1));
    else
      v28 = (float)(int)v54;
    if ( (float)(v27 / v28) > *(float *)&v49 )
    {
      v44 = std::_Hash<std::_Umap_traits<winrt::hstring,std::unordered_set<unsigned int>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::unordered_set<unsigned int>>>,0>>::_Desired_grow_bucket_count(&v49);
      std::_Hash<std::_Umap_traits<unsigned __int64,winrt::guid,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::guid>>,0>>::_Forced_rehash(
        &v49,
        v44);
      v45 = (_QWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,winrt::guid,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::guid>>,0>>::_Find_last<unsigned __int64>(
                        &v49,
                        v58,
                        v24 + 16,
                        v20);
      v25 = v51;
      v23 = (_QWORD *)*v45;
    }
    v56 = 0LL;
    v29 = (_QWORD *)v23[1];
    v51 = v25 + 1;
    *(_QWORD *)v24 = v23;
    *((_QWORD *)v24 + 1) = v29;
    *v29 = v24;
    v23[1] = v24;
    v30 = 2 * (v20 & v53);
    v31 = v52;
    v32 = *(_QWORD **)(v52 + 16 * (v20 & v53));
    if ( v32 == v50 )
    {
      *(_QWORD *)(v52 + 16 * (v20 & v53)) = v24;
    }
    else
    {
      if ( v32 == v23 )
      {
        *(_QWORD *)(v52 + 16 * (v20 & v53)) = v24;
LABEL_32:
        v12 = v61;
        goto LABEL_35;
      }
      if ( *(_QWORD **)(v52 + 16 * (v20 & v53) + 8) != v29 )
        goto LABEL_32;
    }
    *(_QWORD *)(v31 + 8 * v30 + 8) = v24;
    goto LABEL_32;
  }
LABEL_37:
  v36 = a1 + 92;
  v37 = (a3[1] - *a3) >> 4;
  if ( v37 )
  {
    if ( a1[90].Ptr )
    {
      v38 = (_QWORD **)v36->Ptr;
      for ( k = *(_QWORD **)v36->Ptr; k != v38; k = (_QWORD *)*k )
      {
        v41 = k[4];
        if ( v41 )
          k[4] = v37 + v41;
      }
      v40 = 0LL;
      if ( (a3[1] - *a3) >> 4 )
      {
        v42 = 0LL;
        v43 = v65;
        do
        {
          std::deque<unsigned __int64>::_Emplace_front_internal<unsigned __int64 const &>(
            (__int64)&a1[86],
            (__int64 *)(*((_QWORD *)a1[87].Ptr + (((__int64)a1[88].Ptr - 1) & ((unsigned __int64)a1[89].Ptr >> 1)))
                      + 8 * ((__int64)a1[89].Ptr & 1)));
          *(_QWORD *)(*((_QWORD *)a1[87].Ptr
                      + (((unsigned __int64)a1[88].Ptr - 1) & (((unsigned __int64)a1[89].Ptr + 1) >> 1)))
                    + 8LL * ((LODWORD(a1[89].Ptr) + 1) & 1)) = v43;
          v66 = (__int64 *)++v40;
          std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::emplace<winrt::guid const &,unsigned __int64>(
            &a1[91],
            v58,
            v42 + *a3,
            (__int64 **)va);
          v42 += 16LL;
        }
        while ( v40 < (a3[1] - *a3) >> 4 );
        v6 = v57;
      }
    }
    else
    {
      v46 = std::deque<unsigned __int64>::deque<unsigned __int64>(&v49, (a3[1] - *a3) >> 4, &v65);
      std::deque<unsigned __int64>::operator=(&a1[86], v46);
      std::deque<unsigned __int64>::~deque<unsigned __int64>(&v49);
      v66 = 0LL;
      v47 = *a3;
      if ( (a3[1] - *a3) >> 4 )
      {
        v48 = 0LL;
        do
        {
          std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::emplace<winrt::guid const &,unsigned __int64 &>(
            &a1[91],
            v58,
            v47 + 16 * v48,
            (__int64 **)va);
          v48 = (unsigned __int64)v66 + 1;
          v66 = (__int64 *)v48;
          v47 = *a3;
        }
        while ( v48 < (a3[1] - *a3) >> 4 );
      }
    }
  }
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
}
