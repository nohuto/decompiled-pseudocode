/*
 * XREFs of ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800D8EFC
 * Callers:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@@std@@@2@$0A@@std@@@std@@AEAA_KU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VBluetoothVolumeAndMute@BluetoothControls@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@PEAU12@@2@@Z @ 0x1800D8E24 (-_Erase@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@_KV?$function@$$A6AXXZ@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$function@$$A6AXXZ@std@@@std@@@2@$0A@@std@@@std@@AEAA_KU?$pair@PEAU?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6AXXZ@std@@@std@@PEAX@std@@PEAU12@@2@@Z @ 0x1800E20B0 (-_Erase@-$_Tree@V-$_Tmap_traits@_KV-$function@$$A6AXXZ@std@@U-$less@_K@2@V-$allocator@U-$pair@$$.c)
 * Callees:
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$function@$$A6AXXZ@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6AXXZ@std@@@std@@PEAX@2@@Z @ 0x18002AB30 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KV-$function@$$A6AXXZ@std@@@std@@@std@@.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@@Z @ 0x18002AB84 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKK@std@@@std@@@std@@QEAAXPEAU-$_Tree_nod.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@2@PEAU32@@Z @ 0x18004CF94 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@SAPEAU-$.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18006310C (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KV-$function.c)
 */

__int64 *__fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,wil::com_ptr_t<BluetoothControls::BluetoothVolumeAndMute,wil::err_exception_policy>>>>::_Extract(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 *v3; // r11
  __int64 v4; // r10
  __int64 v5; // rax
  __int64 v6; // r9
  _QWORD *v7; // r8
  _QWORD *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 *v11; // rcx
  char v12; // dl
  __int64 v13; // rdi
  _BYTE *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 *v18; // [rsp+38h] [rbp+10h] BYREF

  v18 = a2;
  std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::function<void (bool)>>>>,std::_Iterator_base0>::operator++(&v18);
  v4 = v3[2];
  if ( *(_BYTE *)(*v3 + 25) )
    goto LABEL_5;
  if ( *(_BYTE *)(v4 + 25) )
  {
    v4 = *v3;
LABEL_5:
    v6 = v3[1];
    if ( !*(_BYTE *)(v4 + 25) )
      *(_QWORD *)(v4 + 8) = v6;
    if ( *(__int64 **)(*a1 + 8LL) == v3 )
    {
      *(_QWORD *)(*a1 + 8LL) = v4;
    }
    else if ( *(__int64 **)v6 == v3 )
    {
      *(_QWORD *)v6 = v4;
    }
    else
    {
      *(_QWORD *)(v6 + 16) = v4;
    }
    v7 = (_QWORD *)*a1;
    if ( *(__int64 **)*a1 == v3 )
    {
      if ( *(_BYTE *)(v4 + 25) )
        v8 = (_QWORD *)v6;
      else
        v8 = std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,HmdInfo>>>::_Min((_QWORD *)v4);
      *v7 = v8;
    }
    if ( *(__int64 **)(*a1 + 16LL) == v3 )
    {
      if ( *(_BYTE *)(v4 + 25) )
      {
        v9 = v6;
      }
      else
      {
        v10 = *(_QWORD *)(v4 + 16);
        v9 = v4;
        while ( !*(_BYTE *)(v10 + 25) )
        {
          v9 = v10;
          v10 = *(_QWORD *)(v10 + 16);
        }
      }
      *(_QWORD *)(*a1 + 16LL) = v9;
    }
    goto LABEL_35;
  }
  v5 = (__int64)v18;
  v4 = v18[2];
  if ( v18 == v3 )
    goto LABEL_5;
  *(_QWORD *)(*v3 + 8) = v18;
  *(_QWORD *)v5 = *v3;
  if ( v5 == v3[2] )
  {
    v6 = v5;
  }
  else
  {
    v6 = *(_QWORD *)(v5 + 8);
    if ( !*(_BYTE *)(v4 + 25) )
      *(_QWORD *)(v4 + 8) = v6;
    *(_QWORD *)v6 = v4;
    *(_QWORD *)(v5 + 16) = v3[2];
    *(_QWORD *)(v3[2] + 8) = v5;
  }
  if ( *(__int64 **)(*a1 + 8LL) == v3 )
  {
    *(_QWORD *)(*a1 + 8LL) = v5;
  }
  else
  {
    v11 = (__int64 *)v3[1];
    if ( (__int64 *)*v11 == v3 )
      *v11 = v5;
    else
      v11[2] = v5;
  }
  v12 = *(_BYTE *)(v5 + 24);
  *(_QWORD *)(v5 + 8) = v3[1];
  *(_BYTE *)(v5 + 24) = *((_BYTE *)v3 + 24);
  *((_BYTE *)v3 + 24) = v12;
LABEL_35:
  if ( *((_BYTE *)v3 + 24) == 1 )
  {
    if ( v4 != *(_QWORD *)(*a1 + 8LL) )
    {
      do
      {
        v13 = v6;
        if ( *(_BYTE *)(v4 + 24) != 1 )
          break;
        v14 = *(_BYTE **)v6;
        if ( v4 == *(_QWORD *)v6 )
        {
          v14 = *(_BYTE **)(v6 + 16);
          if ( !v14[24] )
          {
            v14[24] = 1;
            *(_BYTE *)(v6 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,unsigned long>>>::_Lrotate(
              (__int64)a1,
              v6);
            v14 = *(_BYTE **)(v6 + 16);
          }
          if ( v14[25] )
            goto LABEL_53;
          if ( *(_BYTE *)(*(_QWORD *)v14 + 24LL) != 1 || *(_BYTE *)(*((_QWORD *)v14 + 2) + 24LL) != 1 )
          {
            if ( *(_BYTE *)(*((_QWORD *)v14 + 2) + 24LL) == 1 )
            {
              *(_BYTE *)(*(_QWORD *)v14 + 24LL) = 1;
              v14[24] = 0;
              std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::function<void (void)>>>>::_Rrotate(
                (__int64)a1,
                v14);
              v14 = *(_BYTE **)(v6 + 16);
            }
            v14[24] = *(_BYTE *)(v6 + 24);
            *(_BYTE *)(v6 + 24) = 1;
            *(_BYTE *)(*((_QWORD *)v14 + 2) + 24LL) = 1;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,unsigned long>>>::_Lrotate(
              (__int64)a1,
              v6);
            break;
          }
        }
        else
        {
          if ( !v14[24] )
          {
            v14[24] = 1;
            *(_BYTE *)(v6 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::function<void (void)>>>>::_Rrotate(
              (__int64)a1,
              (_QWORD *)v6);
            v14 = *(_BYTE **)v6;
          }
          if ( v14[25] )
            goto LABEL_53;
          v15 = *((_QWORD *)v14 + 2);
          if ( *(_BYTE *)(v15 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v14 + 24LL) != 1 )
          {
            if ( *(_BYTE *)(*(_QWORD *)v14 + 24LL) == 1 )
            {
              *(_BYTE *)(v15 + 24) = 1;
              v14[24] = 0;
              std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,unsigned long>>>::_Lrotate(
                (__int64)a1,
                (__int64)v14);
              v14 = *(_BYTE **)v6;
            }
            v14[24] = *(_BYTE *)(v6 + 24);
            *(_BYTE *)(v6 + 24) = 1;
            *(_BYTE *)(*(_QWORD *)v14 + 24LL) = 1;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::function<void (void)>>>>::_Rrotate(
              (__int64)a1,
              (_QWORD *)v6);
            break;
          }
        }
        v14[24] = 0;
LABEL_53:
        v4 = v13;
        v6 = *(_QWORD *)(v6 + 8);
      }
      while ( v13 != *(_QWORD *)(*a1 + 8LL) );
    }
    *(_BYTE *)(v4 + 24) = 1;
  }
  v16 = a1[1];
  if ( v16 )
    a1[1] = v16 - 1;
  return v3;
}
