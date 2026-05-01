/*
 * XREFs of ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKUDisplayRegionInfo@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x180184398
 * Callers:
 *     _lambda_687e5a8c7a4f05ed052b2b78739515ed_::operator() @ 0x180183860 (_lambda_687e5a8c7a4f05ed052b2b78739515ed_--operator().c)
 *     _lambda_16e39da7052e4c67737ceb9c18ac8be9_::operator() @ 0x180183B98 (_lambda_16e39da7052e4c67737ceb9c18ac8be9_--operator().c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$shared_ptr@UBroadcastDVRActiveAppInfo@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18005C784 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$ComPtr@UIA.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@PEAX@2@PEAU32@@Z @ 0x18005C8DC (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@2@@Z @ 0x18006A764 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$basic_string@GU-$char_traits@G@std@@.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x18006A7B8 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKV-$ComPtr@UIObjectCollection@@@WRL@Micr.c)
 */

__int64 __fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,DisplayRegionInfo>>>::_Extract(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // r11
  __int64 v6; // r10
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 *v9; // rcx
  _QWORD *v10; // r8
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  char v14; // dl
  __int64 v15; // rcx
  __int64 v17; // rdi
  _BYTE *v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // [rsp+38h] [rbp+10h] BYREF

  v20 = a2;
  std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::ComPtr<IApplicationView> const,std::shared_ptr<BroadcastDVRActiveAppInfo>>>>,std::_Iterator_base0>::operator++(
    &v20,
    a2,
    a3,
    a4);
  v6 = *(_QWORD *)(v5 + 16);
  if ( !*(_BYTE *)(*(_QWORD *)v5 + 25LL) )
  {
    if ( *(_BYTE *)(v6 + 25) )
    {
      v6 = *(_QWORD *)v5;
    }
    else
    {
      v7 = v20;
      v6 = *(_QWORD *)(v20 + 16);
      if ( v20 != v5 )
      {
        *(_QWORD *)(*(_QWORD *)v5 + 8LL) = v20;
        *(_QWORD *)v7 = *(_QWORD *)v5;
        if ( v7 == *(_QWORD *)(v5 + 16) )
        {
          v8 = v7;
        }
        else
        {
          v8 = *(_QWORD *)(v7 + 8);
          if ( !*(_BYTE *)(v6 + 25) )
            *(_QWORD *)(v6 + 8) = v8;
          *(_QWORD *)v8 = v6;
          *(_QWORD *)(v7 + 16) = *(_QWORD *)(v5 + 16);
          *(_QWORD *)(*(_QWORD *)(v5 + 16) + 8LL) = v7;
        }
        if ( *(_QWORD *)(*a1 + 8LL) == v5 )
        {
          *(_QWORD *)(*a1 + 8LL) = v7;
        }
        else
        {
          v9 = *(__int64 **)(v5 + 8);
          if ( *v9 == v5 )
            *v9 = v7;
          else
            v9[2] = v7;
        }
        *(_QWORD *)(v7 + 8) = *(_QWORD *)(v5 + 8);
        v14 = *(_BYTE *)(v7 + 24);
        *(_BYTE *)(v7 + 24) = *(_BYTE *)(v5 + 24);
        *(_BYTE *)(v5 + 24) = v14;
        goto LABEL_23;
      }
    }
  }
  v8 = *(_QWORD *)(v5 + 8);
  if ( !*(_BYTE *)(v6 + 25) )
    *(_QWORD *)(v6 + 8) = v8;
  if ( *(_QWORD *)(*a1 + 8LL) == v5 )
  {
    *(_QWORD *)(*a1 + 8LL) = v6;
  }
  else if ( *(_QWORD *)v8 == v5 )
  {
    *(_QWORD *)v8 = v6;
  }
  else
  {
    *(_QWORD *)(v8 + 16) = v6;
  }
  v10 = (_QWORD *)*a1;
  if ( *(_QWORD *)*a1 == v5 )
  {
    if ( *(_BYTE *)(v6 + 25) )
      v11 = (_QWORD *)v8;
    else
      v11 = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>>>::_Min((_QWORD *)v6);
    *v10 = v11;
  }
  if ( *(_QWORD *)(*a1 + 16LL) == v5 )
  {
    if ( *(_BYTE *)(v6 + 25) )
    {
      v13 = v8;
    }
    else
    {
      v12 = *(_QWORD *)(v6 + 16);
      v13 = v6;
      while ( !*(_BYTE *)(v12 + 25) )
      {
        v13 = v12;
        v12 = *(_QWORD *)(v12 + 16);
      }
    }
    *(_QWORD *)(*a1 + 16LL) = v13;
  }
LABEL_23:
  if ( *(_BYTE *)(v5 + 24) != 1 )
    goto LABEL_24;
  while ( 1 )
  {
    v17 = v8;
    if ( v6 == *(_QWORD *)(*a1 + 8LL) || *(_BYTE *)(v6 + 24) != 1 )
      break;
    v18 = *(_BYTE **)v8;
    if ( v6 == *(_QWORD *)v8 )
    {
      v18 = *(_BYTE **)(v8 + 16);
      if ( !v18[24] )
      {
        v18[24] = 1;
        *(_BYTE *)(v8 + 24) = 0;
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>>::_Lrotate(
          (__int64)a1,
          v8);
        v18 = *(_BYTE **)(v8 + 16);
      }
      if ( !v18[25] )
      {
        if ( *(_BYTE *)(*(_QWORD *)v18 + 24LL) != 1 || *(_BYTE *)(*((_QWORD *)v18 + 2) + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*((_QWORD *)v18 + 2) + 24LL) == 1 )
          {
            *(_BYTE *)(*(_QWORD *)v18 + 24LL) = 1;
            v18[24] = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Rrotate(
              (__int64)a1,
              v18);
            v18 = *(_BYTE **)(v8 + 16);
          }
          v18[24] = *(_BYTE *)(v8 + 24);
          *(_BYTE *)(v8 + 24) = 1;
          *(_BYTE *)(*((_QWORD *)v18 + 2) + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>>::_Lrotate(
            (__int64)a1,
            v8);
          break;
        }
        goto LABEL_59;
      }
    }
    else
    {
      if ( !v18[24] )
      {
        v18[24] = 1;
        *(_BYTE *)(v8 + 24) = 0;
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Rrotate(
          (__int64)a1,
          (_QWORD *)v8);
        v18 = *(_BYTE **)v8;
      }
      if ( !v18[25] )
      {
        v19 = *((_QWORD *)v18 + 2);
        if ( *(_BYTE *)(v19 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v18 + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)v18 + 24LL) == 1 )
          {
            *(_BYTE *)(v19 + 24) = 1;
            v18[24] = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>>::_Lrotate(
              (__int64)a1,
              (__int64)v18);
            v18 = *(_BYTE **)v8;
          }
          v18[24] = *(_BYTE *)(v8 + 24);
          *(_BYTE *)(v8 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)v18 + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Rrotate(
            (__int64)a1,
            (_QWORD *)v8);
          break;
        }
LABEL_59:
        v18[24] = 0;
      }
    }
    v8 = *(_QWORD *)(v8 + 8);
    v6 = v17;
  }
  *(_BYTE *)(v6 + 24) = 1;
LABEL_24:
  v15 = a1[1];
  if ( v15 )
    a1[1] = v15 - 1;
  return v5;
}
