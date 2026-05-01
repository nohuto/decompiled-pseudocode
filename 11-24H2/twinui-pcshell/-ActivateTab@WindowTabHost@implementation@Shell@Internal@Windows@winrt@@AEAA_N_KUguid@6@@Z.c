/*
 * XREFs of ?ActivateTab@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_N_KUguid@6@@Z @ 0x1800C0310
 * Callers:
 *     ?ActivateTabAndUpdateTimestamps@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA?AUWindowTabView@3UI@456@_KAEBU738456@@Z @ 0x18057D8F8 (-ActivateTabAndUpdateTimestamps@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA-.c)
 * Callees:
 *     ??$_Try_emplace@AEBUguid@winrt@@$$V@?$_Hash@V?$_Umap_traits@Uguid@winrt@@_KV?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBUguid@winrt@@_K@std@@PEAX@std@@_N@1@AEBUguid@winrt@@@Z @ 0x1800C1358 (--$_Try_emplace@AEBUguid@winrt@@$$V@-$_Hash@V-$_Umap_traits@Uguid@winrt@@_KV-$_Uhash_compare@Ugu.c)
 *     ??$_Emplace_front_internal@AEB_K@?$deque@_KV?$allocator@_K@std@@@std@@AEAAXAEB_K@Z @ 0x1800C1528 (--$_Emplace_front_internal@AEB_K@-$deque@_KV-$allocator@_K@std@@@std@@AEAAXAEB_K@Z.c)
 *     ?ActivateTabUnderLock@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z @ 0x1800C4748 (-ActivateTabUnderLock@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z.c)
 *     ??$_Find_last@Uguid@winrt@@@?$_Hash@V?$_Umap_traits@Uguid@winrt@@_KV?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBUguid@winrt@@_K@std@@PEAX@std@@@1@AEBUguid@winrt@@_K@Z @ 0x18013488C (--$_Find_last@Uguid@winrt@@@-$_Hash@V-$_Umap_traits@Uguid@winrt@@_KV-$_Uhash_compare@Uguid@winrt.c)
 *     ??$?RUguid@winrt@@@?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@QEBA_KAEBUguid@winrt@@@Z @ 0x1801348F4 (--$-RUguid@winrt@@@-$_Uhash_compare@Uguid@winrt@@U-$hash@Uguid@winrt@@@std@@U-$equal_to@Uguid@wi.c)
 *     ?erase@?$deque@_KV?$allocator@_K@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@_K@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@_K@std@@@std@@@2@0@Z @ 0x18057F8B0 (-erase@-$deque@_KV-$allocator@_K@std@@@std@@QEAA-AV-$_Deque_iterator@V-$_Deque_val@U-$_Deque_sim.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::ActivateTab(
        _QWORD *a1,
        PVOID a2,
        __m128i *a3)
{
  __m128i v3; // xmm6
  __int64 v6; // rcx
  unsigned __int64 v7; // r8
  char v8; // r14
  __int64 v9; // rax
  __int64 v10; // rcx
  RTL_SRWLOCK *Ptr; // rbx
  _QWORD *v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rbx
  unsigned __int64 v20; // rdi
  __int64 v21; // rcx
  _QWORD *v22; // rcx
  _QWORD *i; // rax
  unsigned __int64 v24; // rdx
  __m128i v25; // [rsp+28h] [rbp-49h] BYREF
  __int64 v26; // [rsp+38h] [rbp-39h]
  _QWORD v27[4]; // [rsp+48h] [rbp-29h] BYREF
  char v28[48]; // [rsp+68h] [rbp-9h] BYREF
  void *v29; // [rsp+E0h] [rbp+6Fh] BYREF

  v29 = a2;
  v6 = 0xCBF29CE484222325uLL;
  v7 = 0LL;
  v8 = 1;
  do
    v6 = 0x100000001B3LL * (*((unsigned __int8 *)&v29 + v7++) ^ (unsigned __int64)v6);
  while ( v7 < 8 );
  v9 = 2 * (v6 & a1[84]);
  v10 = a1[81];
  Ptr = *(RTL_SRWLOCK **)(v10 + 8 * v9 + 8);
  if ( Ptr == (RTL_SRWLOCK *)a1[79] )
    goto LABEL_12;
  while ( a2 != Ptr[2].Ptr )
  {
    if ( Ptr == *(RTL_SRWLOCK **)(v10 + 8 * v9) )
      goto LABEL_12;
    Ptr = (RTL_SRWLOCK *)Ptr[1].Ptr;
  }
  if ( !Ptr )
  {
LABEL_12:
    std::_Xout_of_range("invalid unordered_map<K, T> key");
  }
  else
  {
    Ptr += 3;
    v3 = *a3;
    AcquireSRWLockExclusive(Ptr);
    v27[3] = Ptr;
    if ( !Ptr[23].Ptr )
    {
LABEL_7:
      if ( Ptr )
        ReleaseSRWLockExclusive(Ptr);
      return 0;
    }
  }
  v13 = (_QWORD *)*((_QWORD *)Ptr[20].Ptr + ((__int64)Ptr[22].Ptr & ((__int64)Ptr[21].Ptr - 1)));
  v14 = *v13 - v3.m128i_i64[0];
  if ( *v13 == v3.m128i_i64[0] )
    v14 = v13[1] - _mm_srli_si128(v3, 8).m128i_u64[0];
  if ( !v14 )
    goto LABEL_7;
  v25 = v3;
  winrt::Windows::Internal::Shell::implementation::WindowData::ActivateTabUnderLock(Ptr, &v25);
  if ( Ptr )
    ReleaseSRWLockExclusive(Ptr);
  v16 = a1[90];
  v17 = std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>::operator()<winrt::guid>(
          v15,
          a3);
  v18 = *(_QWORD *)(std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::_Find_last<winrt::guid>(
                      a1 + 91,
                      &v25,
                      a3,
                      v17)
                  + 8);
  if ( !v18 )
    v18 = a1[92];
  if ( v18 != a1[92] )
  {
    v19 = a1[89];
    v20 = a1[86];
    v21 = v19
        + *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::_Try_emplace<winrt::guid const &,>(
                                   a1 + 91,
                                   &v25,
                                   a3)
                    + 32LL);
    v25 = (__m128i)v20;
    v26 = v21 + 1;
    v27[1] = 0LL;
    v27[0] = v20;
    v27[2] = v21;
    ((void (__fastcall *)(_QWORD *, char *, _QWORD *, __m128i *))std::deque<unsigned __int64>::erase)(
      a1 + 86,
      v28,
      v27,
      &v25);
    v16 = *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::_Try_emplace<winrt::guid const &,>(
                                   a1 + 91,
                                   &v25,
                                   a3)
                    + 32LL);
  }
  v22 = (_QWORD *)a1[92];
  for ( i = (_QWORD *)*v22; i != v22; i = (_QWORD *)*i )
  {
    v24 = i[4];
    if ( v24 < v16 )
      i[4] = v24 + 1;
  }
  *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::_Try_emplace<winrt::guid const &,>(
                           a1 + 91,
                           &v25,
                           a3)
            + 32LL) = 0LL;
  std::deque<unsigned __int64>::_Emplace_front_internal<unsigned __int64 const &>(a1 + 86, &v29);
  return v8;
}
