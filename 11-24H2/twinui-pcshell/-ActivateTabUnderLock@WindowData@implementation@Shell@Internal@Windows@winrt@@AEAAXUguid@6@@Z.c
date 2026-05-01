/*
 * XREFs of ?ActivateTabUnderLock@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z @ 0x1800C4748
 * Callers:
 *     ?ActivateTab@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_N_KUguid@6@@Z @ 0x1800C0310 (-ActivateTab@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_N_KUguid@6@@Z.c)
 *     ?SyncWindowTabDataModel@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_KW4AltTabFilterScope@MultiTasking@SystemSettings@@_K@Z @ 0x1800C2984 (-SyncWindowTabDataModel@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_KW4AltTabFi.c)
 * Callees:
 *     ?HideFromAltTab@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAX_N@Z @ 0x1800C4474 (-HideFromAltTab@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAX_N@Z.c)
 *     ??$_Emplace_front_internal@AEBUguid@winrt@@@?$deque@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@AEAAXAEBUguid@winrt@@@Z @ 0x1801344A8 (--$_Emplace_front_internal@AEBUguid@winrt@@@-$deque@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@Uguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@@std@@@std@@@1@AEBUguid@winrt@@@Z @ 0x18015EA54 (--$find@X@-$_Hash@V-$_Umap_traits@Uguid@winrt@@U-$com_ptr@UTabProxyWindow@implementation@Shell@I.c)
 *     ?erase@?$deque@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@2@0@Z @ 0x18015F0D0 (-erase@-$deque@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@@@std@@QEAA-AV-$_Deque_iterator@V-$_D.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::WindowData::ActivateTabUnderLock(
        _QWORD *a1,
        __int128 *a2)
{
  __int64 **v2; // rbx
  __int64 v4; // r8
  __int64 v6; // r10
  __int64 *v7; // rdx
  __int64 v8; // r9
  unsigned __int64 v9; // rax
  __int128 v10; // [rsp+20h] [rbp-50h] BYREF
  __int64 v11; // [rsp+30h] [rbp-40h]
  _QWORD v12[3]; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v13[24]; // [rsp+58h] [rbp-18h] BYREF

  v2 = (__int64 **)(a1 + 19);
  v4 = a1[22];
  v6 = v4 + a1[23];
  if ( a1 == (_QWORD *)-152LL )
    v7 = 0LL;
  else
    v7 = *v2;
  v10 = *a2;
  if ( v7 )
    v8 = *v7;
  else
    v8 = 0LL;
  while ( v4 != v6 )
  {
    v9 = **(_QWORD **)(*(_QWORD *)(v8 + 8) + 8 * (v4 & (*(_QWORD *)(v8 + 16) - 1LL))) - v10;
    if ( !v9 )
      v9 = _mm_srli_si128(*(__m128i *)*(_QWORD *)(*(_QWORD *)(v8 + 8) + 8 * (v4 & (*(_QWORD *)(v8 + 16) - 1LL))), 8).m128i_u64[0]
         - *((_QWORD *)&v10 + 1);
    if ( !v9 )
    {
      v12[1] = 0LL;
      v10 = (unsigned __int64)v7;
      v11 = v4 + 1;
      v12[0] = v7;
      v12[2] = v4;
      std::deque<winrt::guid>::erase(v2, v13, v12, &v10);
      std::_Hash<std::_Umap_traits<winrt::guid,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>>>,0>>::find<void>(
        a1 + 3,
        &v10,
        v2[1][(unsigned __int64)v2[3] & ((unsigned __int64)v2[2] - 1)]);
      if ( (_QWORD)v10 != a1[4] )
        winrt::Windows::Internal::Shell::implementation::TabProxyWindow::HideFromAltTab(
          *(winrt::Windows::Internal::Shell::implementation::TabProxyWindow **)(v10 + 32),
          0);
      std::deque<winrt::guid>::_Emplace_front_internal<winrt::guid const &>(v2, a2);
      return;
    }
    ++v4;
  }
}
