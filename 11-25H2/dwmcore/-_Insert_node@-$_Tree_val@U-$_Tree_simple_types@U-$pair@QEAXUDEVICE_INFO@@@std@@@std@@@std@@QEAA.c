/*
 * XREFs of ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x1802260E4
 * Callers:
 *     ??$_Try_emplace@AEBQEAX$$V@?$map@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@std@@_N@1@AEBQEAX@Z @ 0x180179800 (--$_Try_emplace@AEBQEAX$$V@-$map@PEAXUDEVICE_INFO@@U-$less@PEAX@std@@V-$allocator@U-$pair@QEAXUD.c)
 * Callees:
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@2@@Z @ 0x18023009C (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@QEAAXPEA.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@2@@Z @ 0x1802366D8 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@QEAAXPEA.c)
 */

__int64 __fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,DEVICE_INFO>>>::_Insert_node(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r9
  _QWORD *v4; // r11
  _QWORD *v6; // rax
  __int64 v8; // rax
  __int64 i; // r10
  __int64 v10; // rax
  __int64 *v11; // rdx
  __int64 v12; // rcx

  ++*(_QWORD *)(a1 + 8);
  v3 = a3;
  v4 = *(_QWORD **)a1;
  v6 = *(_QWORD **)a2;
  *(_QWORD *)(a3 + 8) = *(_QWORD *)a2;
  if ( v6 != v4 )
  {
    if ( *(_DWORD *)(a2 + 8) )
    {
      *v6 = a3;
      if ( v6 == (_QWORD *)*v4 )
        *v4 = a3;
    }
    else
    {
      v6[2] = a3;
      if ( v6 == (_QWORD *)v4[2] )
        v4[2] = a3;
    }
    v8 = *(_QWORD *)(a3 + 8);
    for ( i = a3; ; v8 = *(_QWORD *)(i + 8) )
    {
      if ( *(_BYTE *)(v8 + 24) )
      {
        *(_BYTE *)(v4[1] + 24LL) = 1;
        return v3;
      }
      v10 = *(_QWORD *)(i + 8);
      v11 = *(__int64 **)(v10 + 8);
      v12 = *v11;
      if ( v10 == *v11 )
      {
        v12 = v11[2];
        if ( !*(_BYTE *)(v12 + 24) )
        {
LABEL_11:
          *(_BYTE *)(v10 + 24) = 1;
          *(_BYTE *)(v12 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(i + 8) + 8LL) + 24LL) = 0;
          i = *(_QWORD *)(*(_QWORD *)(i + 8) + 8LL);
          continue;
        }
        if ( i == *(_QWORD *)(v10 + 16) )
          std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,DEVICE_INFO>>>::_Lrotate(a1);
        *(_BYTE *)(*(_QWORD *)(i + 8) + 24LL) = 1;
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(i + 8) + 8LL) + 24LL) = 0;
        std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,DEVICE_INFO>>>::_Rrotate(
          a1,
          *(_QWORD *)(*(_QWORD *)(i + 8) + 8LL));
      }
      else
      {
        if ( !*(_BYTE *)(v12 + 24) )
          goto LABEL_11;
        if ( i == *(_QWORD *)v10 )
          std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,DEVICE_INFO>>>::_Rrotate(a1, *(_QWORD *)(i + 8));
        *(_BYTE *)(*(_QWORD *)(i + 8) + 24LL) = 1;
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(i + 8) + 8LL) + 24LL) = 0;
        std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,DEVICE_INFO>>>::_Lrotate(a1);
      }
    }
  }
  *v4 = a3;
  v4[1] = a3;
  v4[2] = a3;
  *(_BYTE *)(a3 + 24) = 1;
  return v3;
}
