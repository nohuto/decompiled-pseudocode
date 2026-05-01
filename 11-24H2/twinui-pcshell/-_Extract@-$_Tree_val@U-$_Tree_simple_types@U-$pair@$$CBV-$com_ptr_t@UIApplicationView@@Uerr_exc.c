/*
 * XREFs of ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18018AD44
 * Callers:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@UApplicationViewComparator@456789@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@$0A@@std@@@std@@AEAA_KU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@PEAX@std@@PEAU12@@2@@Z @ 0x180403DBC (-_Erase@-$_Tree@V-$_Tmap_traits@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@PEAX@2@PEAU32@@Z @ 0x18005C8DC (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@2@@Z @ 0x18006A764 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$basic_string@GU-$char_traits@G@std@@.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x18006A7B8 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKV-$ComPtr@UIObjectCollection@@@WRL@Micr.c)
 */

_BYTE *__fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>>::_Extract(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 *v2; // rdi
  __int64 v4; // rcx
  __int64 *v5; // r8
  _BYTE *v6; // r11
  _QWORD *i; // rax
  __int64 v8; // r10
  __int64 v9; // r9
  _QWORD *v10; // rcx
  _QWORD *v11; // r8
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  char v15; // dl
  __int64 v16; // rcx
  __int64 v18; // rdi
  _BYTE *v19; // rdx
  _BYTE *v20; // rcx
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rcx

  v2 = a2 + 2;
  v4 = a2[2];
  v5 = a2 + 1;
  v6 = a2;
  if ( *(_BYTE *)(v4 + 25) )
  {
    for ( i = (_QWORD *)*v5; !*((_BYTE *)i + 25) && a2 == (_QWORD *)i[2]; i = (_QWORD *)i[1] )
      a2 = i;
  }
  else
  {
    i = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>>>::_Min((_QWORD *)v4);
  }
  v8 = *v2;
  if ( !*(_BYTE *)(*(_QWORD *)v6 + 25LL) )
  {
    if ( *(_BYTE *)(v8 + 25) )
    {
      v8 = *(_QWORD *)v6;
    }
    else
    {
      v8 = i[2];
      if ( i != (_QWORD *)v6 )
      {
        *(_QWORD *)(*(_QWORD *)v6 + 8LL) = i;
        *i = *(_QWORD *)v6;
        if ( i == (_QWORD *)*v2 )
        {
          v9 = (__int64)i;
        }
        else
        {
          v9 = i[1];
          if ( !*(_BYTE *)(v8 + 25) )
            *(_QWORD *)(v8 + 8) = v9;
          *(_QWORD *)v9 = v8;
          i[2] = *v2;
          *(_QWORD *)(*v2 + 8) = i;
        }
        if ( *(_BYTE **)(*a1 + 8LL) == v6 )
        {
          *(_QWORD *)(*a1 + 8LL) = i;
        }
        else
        {
          v10 = (_QWORD *)*v5;
          if ( *(_BYTE **)*v5 == v6 )
            *v10 = i;
          else
            v10[2] = i;
        }
        i[1] = *v5;
        v15 = *((_BYTE *)i + 24);
        *((_BYTE *)i + 24) = v6[24];
        v6[24] = v15;
        goto LABEL_25;
      }
    }
  }
  v9 = *v5;
  if ( !*(_BYTE *)(v8 + 25) )
    *(_QWORD *)(v8 + 8) = v9;
  if ( *(_BYTE **)(*a1 + 8LL) == v6 )
  {
    *(_QWORD *)(*a1 + 8LL) = v8;
  }
  else if ( *(_BYTE **)v9 == v6 )
  {
    *(_QWORD *)v9 = v8;
  }
  else
  {
    *(_QWORD *)(v9 + 16) = v8;
  }
  v11 = (_QWORD *)*a1;
  if ( *(_BYTE **)*a1 == v6 )
  {
    if ( *(_BYTE *)(v8 + 25) )
      v12 = (_QWORD *)v9;
    else
      v12 = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>>>::_Min((_QWORD *)v8);
    *v11 = v12;
  }
  if ( *(_BYTE **)(*a1 + 16LL) == v6 )
  {
    if ( *(_BYTE *)(v8 + 25) )
    {
      v14 = v9;
    }
    else
    {
      v13 = *(_QWORD *)(v8 + 16);
      v14 = v8;
      while ( !*(_BYTE *)(v13 + 25) )
      {
        v14 = v13;
        v13 = *(_QWORD *)(v13 + 16);
      }
    }
    *(_QWORD *)(*a1 + 16LL) = v14;
  }
LABEL_25:
  if ( v6[24] != 1 )
    goto LABEL_26;
  while ( 1 )
  {
    v18 = v9;
    if ( v8 == *(_QWORD *)(*a1 + 8LL) || *(_BYTE *)(v8 + 24) != 1 )
      break;
    v19 = *(_BYTE **)v9;
    if ( v8 == *(_QWORD *)v9 )
    {
      v19 = *(_BYTE **)(v9 + 16);
      if ( !v19[24] )
      {
        v19[24] = 1;
        *(_BYTE *)(v9 + 24) = 0;
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>>::_Lrotate(
          (__int64)a1,
          v9);
        v19 = *(_BYTE **)(v9 + 16);
      }
      if ( !v19[25] )
      {
        if ( *(_BYTE *)(*(_QWORD *)v19 + 24LL) != 1 || *(_BYTE *)(*((_QWORD *)v19 + 2) + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*((_QWORD *)v19 + 2) + 24LL) == 1 )
          {
            *(_BYTE *)(*(_QWORD *)v19 + 24LL) = 1;
            v19[24] = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Rrotate(
              (__int64)a1,
              v19);
            v19 = *(_BYTE **)(v9 + 16);
          }
          v19[24] = *(_BYTE *)(v9 + 24);
          *(_BYTE *)(v9 + 24) = 1;
          *(_BYTE *)(*((_QWORD *)v19 + 2) + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>>::_Lrotate(
            (__int64)a1,
            v9);
          break;
        }
        goto LABEL_72;
      }
    }
    else
    {
      if ( !v19[24] )
      {
        v19[24] = 1;
        v20 = *(_BYTE **)v9;
        *(_BYTE *)(v9 + 24) = 0;
        *(_QWORD *)v9 = *((_QWORD *)v20 + 2);
        v21 = *((_QWORD *)v20 + 2);
        if ( !*(_BYTE *)(v21 + 25) )
          *(_QWORD *)(v21 + 8) = v9;
        *((_QWORD *)v20 + 1) = *(_QWORD *)(v9 + 8);
        if ( v9 == *(_QWORD *)(*a1 + 8LL) )
        {
          *(_QWORD *)(*a1 + 8LL) = v20;
        }
        else
        {
          v22 = *(_QWORD **)(v9 + 8);
          if ( v9 == v22[2] )
            v22[2] = v20;
          else
            *v22 = v20;
        }
        *((_QWORD *)v20 + 2) = v9;
        v19 = *(_BYTE **)v9;
        *(_QWORD *)(v9 + 8) = v20;
      }
      if ( !v19[25] )
      {
        v23 = *((_QWORD *)v19 + 2);
        if ( *(_BYTE *)(v23 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v19 + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)v19 + 24LL) == 1 )
          {
            *(_BYTE *)(v23 + 24) = 1;
            v19[24] = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>>::_Lrotate(
              (__int64)a1,
              (__int64)v19);
            v19 = *(_BYTE **)v9;
          }
          v19[24] = *(_BYTE *)(v9 + 24);
          *(_BYTE *)(v9 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)v19 + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,std::wstring>>>::_Rrotate(
            (__int64)a1,
            (_QWORD *)v9);
          break;
        }
LABEL_72:
        v19[24] = 0;
      }
    }
    v9 = *(_QWORD *)(v9 + 8);
    v8 = v18;
  }
  *(_BYTE *)(v8 + 24) = 1;
LABEL_26:
  v16 = a1[1];
  if ( v16 )
    a1[1] = v16 - 1;
  return v6;
}
