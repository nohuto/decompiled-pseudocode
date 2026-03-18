/*
 * XREFs of ?OnDisconnected@DataSourceProxy@@MEAAJXZ @ 0x180271D80
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@X@?$_Hash@V?$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@V?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@std@@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@1@AEBQEAVCInteractionTracker@@@Z @ 0x1800DF7B8 (--$find@X@-$_Hash@V-$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@.c)
 *     ??$_Emplace_reallocate@AEA_K@?$vector@_KV?$allocator@_K@std@@@std@@AEAAPEA_KQEA_KAEA_K@Z @ 0x1801FFAEC (--$_Emplace_reallocate@AEA_K@-$vector@_KV-$allocator@_K@std@@@std@@AEAAPEA_KQEA_KAEA_K@Z.c)
 *     ??$GetUniqueId@VDataSourceProxy@@@DataProviderHelper@@YA_KPEAVDataSourceProxy@@@Z @ 0x18025E7B4 (--$GetUniqueId@VDataSourceProxy@@@DataProviderHelper@@YA_KPEAVDataSourceProxy@@@Z.c)
 */

__int64 __fastcall DataSourceProxy::OnDisconnected(DataSourceProxy *this)
{
  _QWORD *v1; // rbx
  __int64 v2; // rdi
  _BYTE *v3; // rdx
  __int64 Unique; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = (_QWORD *)*((_QWORD *)this + 24);
  if ( v1 )
  {
    Unique = DataProviderHelper::GetUniqueId<DataSourceProxy>((__int64)this);
    v2 = Unique;
    if ( *std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::find<void>(
            v1 + 10,
            &v6,
            &Unique) != v1[11] )
    {
      v3 = (_BYTE *)v1[19];
      if ( v3 == (_BYTE *)v1[20] )
      {
        std::vector<unsigned __int64>::_Emplace_reallocate<unsigned __int64 &>(v1 + 18, v3, &Unique);
      }
      else
      {
        *(_QWORD *)v3 = v2;
        v1[19] += 8LL;
      }
    }
  }
  return 0LL;
}
