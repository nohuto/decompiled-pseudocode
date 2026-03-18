/*
 * XREFs of ??$_Try_emplace@AEBQEAX$$V@?$map@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@std@@_N@1@AEBQEAX@Z @ 0x180179800
 * Callers:
 *     ?Query@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAX@Z @ 0x1801796B8 (-Query@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAX@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAX@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAX@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1802222B8 (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@AEBQEAX@1@V-$tuple@$$V@1@@-$_Tree_temp_node@V-$allo.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1802260E4 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@QEAA.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1802591E0 (-_Throw_tree_length_error@std@@YAXXZ.c)
 */

__int64 __fastcall std::map<void *,DEVICE_INFO>::_Try_emplace<void * const &,>(
        unsigned __int64 *a1,
        __int64 a2,
        unsigned __int64 *a3)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdi
  char v10; // [rsp+30h] [rbp-30h] BYREF
  _QWORD *v11; // [rsp+38h] [rbp-28h]
  __int128 v12; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 *v13; // [rsp+70h] [rbp+10h] BYREF

  v13 = a1;
  v4 = CPointerDeviceCache::s_deviceCache;
  v5 = *(_QWORD *)(CPointerDeviceCache::s_deviceCache + 8);
  v12 = (unsigned __int64)v5;
  if ( !*(_BYTE *)(v5 + 25) )
  {
    v6 = *a3;
    do
    {
      *(_QWORD *)&v12 = v5;
      if ( *(_QWORD *)(v5 + 32) < v6 )
      {
        DWORD2(v12) = 0;
        v5 = *(_QWORD *)(v5 + 16);
      }
      else
      {
        v4 = v5;
        DWORD2(v12) = 1;
        v5 = *(_QWORD *)v5;
      }
    }
    while ( !*(_BYTE *)(v5 + 25) );
  }
  if ( *(_BYTE *)(v4 + 25) || *a3 < *(_QWORD *)(v4 + 32) )
  {
    if ( qword_180406740 == 0x2AAAAAAAAAAAAAALL )
      std::_Throw_tree_length_error();
    v13 = a3;
    v7 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<void * const,DEVICE_INFO>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<void * const,DEVICE_INFO>,void *>>>(
           (unsigned int)&v10,
           (unsigned int)&CPointerDeviceCache::s_deviceCache,
           CPointerDeviceCache::s_deviceCache,
           CPointerDeviceCache::s_deviceCache,
           (__int64)&v13);
    v8 = *(_QWORD *)(v7 + 8);
    *(_QWORD *)(v7 + 8) = 0LL;
    if ( v11 )
      std::_Deallocate<16,0>(v11, 0x60uLL);
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,DEVICE_INFO>>>::_Insert_node(
                      &CPointerDeviceCache::s_deviceCache,
                      &v12,
                      v8);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v4;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
