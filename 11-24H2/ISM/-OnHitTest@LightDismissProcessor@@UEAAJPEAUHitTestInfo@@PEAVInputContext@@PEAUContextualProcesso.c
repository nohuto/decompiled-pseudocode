/*
 * XREFs of ?OnHitTest@LightDismissProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1800576A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDismissableClients@LightDismissProcessor@@AEAA?AV?$vector@PEAVLightDismissClientProxy@@V?$allocator@PEAVLightDismissClientProxy@@@std@@@std@@PEAUHitTestResult@@@Z @ 0x180057710 (-GetDismissableClients@LightDismissProcessor@@AEAA-AV-$vector@PEAVLightDismissClientProxy@@V-$al.c)
 *     ??1?$_Hash_vec@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@U_Iterator_base0@2@@std@@@std@@@std@@QEAA@XZ @ 0x18005787C (--1-$_Hash_vec@V-$allocator@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_simple_types.c)
 *     ?Dismiss@BamoLightDismissClientProxy@@UEAAJXZ @ 0x18015C970 (-Dismiss@BamoLightDismissClientProxy@@UEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall LightDismissProcessor::OnHitTest(
        LightDismissProcessor *this,
        struct HitTestInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  __int64 i; // rbx
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+28h] [rbp-20h]

  *(_DWORD *)a4 = 0;
  if ( (*(_BYTE *)a2 & 0x3B) != 0 && (*((_DWORD *)a2 + 8) & 0x10000) != 0 )
  {
    LightDismissProcessor::GetDismissableClients(this, &v6, *((_QWORD *)a3 + 22));
    for ( i = v6; i != v7; i += 8LL )
      BamoLightDismissClientProxy::Dismiss((BamoLightDismissClientProxy *)(*(_QWORD *)i + 8LL));
    std::_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<unsigned __int64>>,std::_Iterator_base0>>>::~_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<unsigned __int64>>,std::_Iterator_base0>>>(&v6);
  }
  return 0LL;
}
