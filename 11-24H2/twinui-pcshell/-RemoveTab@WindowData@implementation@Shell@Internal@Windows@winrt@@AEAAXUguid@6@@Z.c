/*
 * XREFs of ?RemoveTab@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z @ 0x18015E594
 * Callers:
 *     ?SyncWindowTabDataModel@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_KW4AltTabFilterScope@MultiTasking@SystemSettings@@_K@Z @ 0x1800C2984 (-SyncWindowTabDataModel@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_KW4AltTabFi.c)
 * Callees:
 *     ??$_Erase@Uguid@winrt@@@?$_Hash@V?$_Umap_traits@Uguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@@9@$0A@@std@@@std@@AEAA_KAEBUguid@winrt@@@Z @ 0x18015E8A8 (--$_Erase@Uguid@winrt@@@-$_Hash@V-$_Umap_traits@Uguid@winrt@@UWindowTabView@Shell@UI@Internal@Wi.c)
 *     ?RemoveTabProxyWindow@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z @ 0x18015E9F0 (-RemoveTabProxyWindow@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z.c)
 *     ?erase@?$deque@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@2@0@Z @ 0x18015F0D0 (-erase@-$deque@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@@@std@@QEAA-AV-$_Deque_iterator@V-$_D.c)
 *     ??$_Erase@Uguid@winrt@@@?$_Hash@V?$_Umap_traits@Uguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@@5@$0A@@std@@@std@@AEAA_KAEBUguid@winrt@@@Z @ 0x1802ACD80 (--$_Erase@Uguid@winrt@@@-$_Hash@V-$_Umap_traits@Uguid@winrt@@U-$com_ptr@UTabProxyWindow@implemen.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::WindowData::RemoveTab(__int64 a1, __int128 *a2)
{
  __int64 **v2; // r10
  __int64 v4; // rdx
  __int64 v6; // r11
  __int64 *v7; // r8
  __int64 v8; // r9
  __m128i *v9; // rcx
  unsigned __int64 v10; // rax
  __int128 v12; // [rsp+20h] [rbp-50h] BYREF
  __int64 v13; // [rsp+30h] [rbp-40h]
  _QWORD v14[3]; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v15[24]; // [rsp+58h] [rbp-18h] BYREF

  v2 = (__int64 **)(a1 + 152);
  v4 = *(_QWORD *)(a1 + 176);
  v6 = v4 + *(_QWORD *)(a1 + 184);
  if ( a1 == -152 )
    v7 = 0LL;
  else
    v7 = *v2;
  v12 = *a2;
  if ( v7 )
    v8 = *v7;
  else
    v8 = 0LL;
  while ( v4 != v6 )
  {
    v9 = *(__m128i **)(*(_QWORD *)(v8 + 8) + 8 * (v4 & (*(_QWORD *)(v8 + 16) - 1LL)));
    v10 = v9->m128i_i64[0] - v12;
    if ( !v10 )
      v10 = _mm_srli_si128(*v9, 8).m128i_u64[0] - *((_QWORD *)&v12 + 1);
    if ( !v10 )
      break;
    ++v4;
  }
  v14[1] = 0LL;
  v12 = (unsigned __int64)v7;
  v14[0] = v7;
  v14[2] = v4;
  v13 = v4 + 1;
  std::deque<winrt::guid>::erase(v2, v15, v14, &v12);
  std::_Hash<std::_Umap_traits<winrt::guid,winrt::Windows::Internal::UI::Shell::WindowTabView,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,winrt::Windows::Internal::UI::Shell::WindowTabView>>,0>>::_Erase<winrt::guid>(
    a1 + 88,
    a2);
  v12 = *a2;
  winrt::Windows::Internal::Shell::implementation::WindowData::RemoveTabProxyWindow(a1, &v12);
  return std::_Hash<std::_Umap_traits<winrt::guid,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>>>,0>>::_Erase<winrt::guid>(
           a1 + 24,
           a2);
}
