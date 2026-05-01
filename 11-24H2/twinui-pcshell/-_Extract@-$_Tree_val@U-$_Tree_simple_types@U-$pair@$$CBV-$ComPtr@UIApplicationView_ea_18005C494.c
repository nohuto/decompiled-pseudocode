/*
 * XREFs of ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18005C494
 * Callers:
 *     ?OnApplicationViewChangedTask@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x18005A714 (-OnApplicationViewChangedTask@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VI.c)
 *     ??$erase@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@@std@@$0A@@?$_Tree@V?$_Tmap_traits@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@U?$less@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@5@V?$allocator@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@@1@V21@@Z @ 0x1801EDA5C (--$erase@V-$_Tree_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$ComPtr@UIApplicatio.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18005C784 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$ComPtr@UIA.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@PEAX@2@PEAU32@@Z @ 0x18005C8DC (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@2@@Z @ 0x18006A764 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$basic_string@GU-$char_traits@G@std@@.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x18006A7B8 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKV-$ComPtr@UIObjectCollection@@@WRL@Micr.c)
 */

__int64 *__fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>::_Extract(
        __int64 **a1,
        __int64 *a2)
{
  __int64 v3; // rdx
  __int64 *v4; // r11
  __int64 v5; // r10
  __int64 v6; // r9
  __int64 *v7; // r8
  __int64 *v8; // rcx
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 *v13; // rax
  char v14; // dl
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 **v18; // rcx
  __int64 *v19; // [rsp+38h] [rbp+10h] BYREF

  v19 = a2;
  std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>,std::_Iterator_base0>::operator++(&v19);
  v5 = v4[2];
  if ( *(_BYTE *)(*v4 + 25) )
    goto LABEL_2;
  if ( *(_BYTE *)(v5 + 25) )
  {
    v5 = *v4;
    goto LABEL_2;
  }
  v13 = v19;
  v5 = v19[2];
  if ( v19 == v4 )
  {
LABEL_2:
    v6 = v4[1];
    if ( !*(_BYTE *)(v5 + 25) )
      *(_QWORD *)(v5 + 8) = v6;
    if ( (__int64 *)(*a1)[1] == v4 )
    {
      (*a1)[1] = v5;
    }
    else if ( *(__int64 **)v6 == v4 )
    {
      *(_QWORD *)v6 = v5;
    }
    else
    {
      *(_QWORD *)(v6 + 16) = v5;
    }
    v7 = *a1;
    if ( (__int64 *)**a1 == v4 )
    {
      if ( *(_BYTE *)(v5 + 25) )
        v15 = v6;
      else
        v15 = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>>>::_Min(
                v5,
                v3,
                v7,
                v6);
      *v7 = v15;
    }
    if ( (__int64 *)(*a1)[2] == v4 )
    {
      if ( *(_BYTE *)(v5 + 25) )
      {
        v16 = v6;
      }
      else
      {
        v17 = *(_QWORD *)(v5 + 16);
        v16 = v5;
        while ( !*(_BYTE *)(v17 + 25) )
        {
          v16 = v17;
          v17 = *(_QWORD *)(v17 + 16);
        }
      }
      (*a1)[2] = v16;
    }
    goto LABEL_9;
  }
  *(_QWORD *)(*v4 + 8) = v19;
  *v13 = *v4;
  if ( v13 == (__int64 *)v4[2] )
  {
    v6 = (__int64)v13;
  }
  else
  {
    v6 = v13[1];
    if ( !*(_BYTE *)(v5 + 25) )
      *(_QWORD *)(v5 + 8) = v6;
    *(_QWORD *)v6 = v5;
    v13[2] = v4[2];
    *(_QWORD *)(v4[2] + 8) = v13;
  }
  if ( (__int64 *)(*a1)[1] == v4 )
  {
    (*a1)[1] = (__int64)v13;
  }
  else
  {
    v18 = (__int64 **)v4[1];
    if ( *v18 == v4 )
      *v18 = v13;
    else
      v18[2] = v13;
  }
  v13[1] = v4[1];
  v14 = *((_BYTE *)v13 + 24);
  *((_BYTE *)v13 + 24) = *((_BYTE *)v4 + 24);
  *((_BYTE *)v4 + 24) = v14;
LABEL_9:
  if ( *((_BYTE *)v4 + 24) != 1 )
    goto LABEL_10;
  while ( 1 )
  {
    v10 = v6;
    if ( v5 == (*a1)[1] || *(_BYTE *)(v5 + 24) != 1 )
      break;
    v11 = *(_QWORD *)v6;
    if ( v5 == *(_QWORD *)v6 )
    {
      v11 = *(_QWORD *)(v6 + 16);
      if ( !*(_BYTE *)(v11 + 24) )
      {
        *(_BYTE *)(v11 + 24) = 1;
        *(_BYTE *)(v6 + 24) = 0;
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>>::_Lrotate(a1);
        v11 = *(_QWORD *)(v6 + 16);
      }
      if ( !*(_BYTE *)(v11 + 25) )
      {
        if ( *(_BYTE *)(*(_QWORD *)v11 + 24LL) != 1 || *(_BYTE *)(*(_QWORD *)(v11 + 16) + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(v11 + 16) + 24LL) == 1 )
          {
            *(_BYTE *)(*(_QWORD *)v11 + 24LL) = 1;
            *(_BYTE *)(v11 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Rrotate(a1, v11);
            v11 = *(_QWORD *)(v6 + 16);
          }
          *(_BYTE *)(v11 + 24) = *(_BYTE *)(v6 + 24);
          *(_BYTE *)(v6 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)(v11 + 16) + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>>::_Lrotate(a1);
          break;
        }
        goto LABEL_31;
      }
    }
    else
    {
      if ( !*(_BYTE *)(v11 + 24) )
      {
        *(_BYTE *)(v11 + 24) = 1;
        *(_BYTE *)(v6 + 24) = 0;
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Rrotate(a1, v6);
        v11 = *(_QWORD *)v6;
      }
      if ( !*(_BYTE *)(v11 + 25) )
      {
        v12 = *(_QWORD *)(v11 + 16);
        if ( *(_BYTE *)(v12 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v11 + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)v11 + 24LL) == 1 )
          {
            *(_BYTE *)(v12 + 24) = 1;
            *(_BYTE *)(v11 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>>::_Lrotate(a1);
            v11 = *(_QWORD *)v6;
          }
          *(_BYTE *)(v11 + 24) = *(_BYTE *)(v6 + 24);
          *(_BYTE *)(v6 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)v11 + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Rrotate(a1, v6);
          break;
        }
LABEL_31:
        *(_BYTE *)(v11 + 24) = 0;
      }
    }
    v6 = *(_QWORD *)(v6 + 8);
    v5 = v10;
  }
  *(_BYTE *)(v5 + 24) = 1;
LABEL_10:
  v8 = a1[1];
  if ( v8 )
    a1[1] = (__int64 *)((char *)v8 - 1);
  return v4;
}
