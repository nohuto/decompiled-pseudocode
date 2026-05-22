/*
 * XREFs of ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKI@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKI@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKI@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800E1544
 * Callers:
 *     ?OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z @ 0x1800E0A5C (-OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z.c)
 *     ?ClearGamepadKeyRoutingEnabled@GamepadInterceptionHelper@@QEAAXK@Z @ 0x180106018 (-ClearGamepadKeyRoutingEnabled@GamepadInterceptionHelper@@QEAAXK@Z.c)
 *     ?ClearGamepadMouseModeEnabled@GamepadInterceptionHelper@@QEAAXK@Z @ 0x18010606C (-ClearGamepadMouseModeEnabled@GamepadInterceptionHelper@@QEAAXK@Z.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180032CB0 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUDockInputIde.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4GazeProperty@@G@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBW4GazeProperty@@G@std@@PEAX@2@@Z @ 0x180033068 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4GazeProperty@@G@std@@@std@@@std@@QEAAX.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@2@@Z @ 0x180067C40 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@PEAX@2@PEAU32@@Z @ 0x18008F934 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBa.c)
 */

__int64 *__fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,unsigned int>>>::_Extract(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *v5; // r11
  __int64 v6; // r10
  __int64 v7; // rax
  __int64 v8; // r9
  _QWORD *v9; // r8
  _QWORD *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 *v13; // rcx
  char v14; // dl
  __int64 v15; // rdi
  _BYTE *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 *v20; // [rsp+38h] [rbp+10h] BYREF

  v20 = (__int64 *)a2;
  std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<DockInputIdentity const,DockInputInfo>>>,std::_Iterator_base0>::operator++(
    (__int64 *)&v20,
    a2,
    a3,
    a4);
  v6 = v5[2];
  if ( *(_BYTE *)(*v5 + 25) )
    goto LABEL_5;
  if ( *(_BYTE *)(v6 + 25) )
  {
    v6 = *v5;
LABEL_5:
    v8 = v5[1];
    if ( !*(_BYTE *)(v6 + 25) )
      *(_QWORD *)(v6 + 8) = v8;
    if ( *(__int64 **)(*a1 + 8LL) == v5 )
    {
      *(_QWORD *)(*a1 + 8LL) = v6;
    }
    else if ( *(__int64 **)v8 == v5 )
    {
      *(_QWORD *)v8 = v6;
    }
    else
    {
      *(_QWORD *)(v8 + 16) = v6;
    }
    v9 = (_QWORD *)*a1;
    if ( *(__int64 **)*a1 == v5 )
    {
      if ( *(_BYTE *)(v6 + 25) )
        v10 = (_QWORD *)v8;
      else
        v10 = std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<MPCManagerBamo_AutoBamos::BamoPeer,wil::err_exception_policy> const,wil::com_ptr_t<IMPCManagerClientProxy,wil::err_exception_policy>>>>::_Min((_QWORD *)v6);
      *v9 = v10;
    }
    if ( *(__int64 **)(*a1 + 16LL) == v5 )
    {
      if ( *(_BYTE *)(v6 + 25) )
      {
        v11 = v8;
      }
      else
      {
        v12 = *(_QWORD *)(v6 + 16);
        v11 = v6;
        while ( !*(_BYTE *)(v12 + 25) )
        {
          v11 = v12;
          v12 = *(_QWORD *)(v12 + 16);
        }
      }
      *(_QWORD *)(*a1 + 16LL) = v11;
    }
    goto LABEL_35;
  }
  v7 = (__int64)v20;
  v6 = v20[2];
  if ( v20 == v5 )
    goto LABEL_5;
  *(_QWORD *)(*v5 + 8) = v20;
  *(_QWORD *)v7 = *v5;
  if ( v7 == v5[2] )
  {
    v8 = v7;
  }
  else
  {
    v8 = *(_QWORD *)(v7 + 8);
    if ( !*(_BYTE *)(v6 + 25) )
      *(_QWORD *)(v6 + 8) = v8;
    *(_QWORD *)v8 = v6;
    *(_QWORD *)(v7 + 16) = v5[2];
    *(_QWORD *)(v5[2] + 8) = v7;
  }
  if ( *(__int64 **)(*a1 + 8LL) == v5 )
  {
    *(_QWORD *)(*a1 + 8LL) = v7;
  }
  else
  {
    v13 = (__int64 *)v5[1];
    if ( (__int64 *)*v13 == v5 )
      *v13 = v7;
    else
      v13[2] = v7;
  }
  v14 = *(_BYTE *)(v7 + 24);
  *(_QWORD *)(v7 + 8) = v5[1];
  *(_BYTE *)(v7 + 24) = *((_BYTE *)v5 + 24);
  *((_BYTE *)v5 + 24) = v14;
LABEL_35:
  if ( *((_BYTE *)v5 + 24) == 1 )
  {
    if ( v6 != *(_QWORD *)(*a1 + 8LL) )
    {
      do
      {
        v15 = v8;
        if ( *(_BYTE *)(v6 + 24) != 1 )
          break;
        v16 = *(_BYTE **)v8;
        if ( v6 == *(_QWORD *)v8 )
        {
          v16 = *(_BYTE **)(v8 + 16);
          if ( !v16[24] )
          {
            v16[24] = 1;
            *(_BYTE *)(v8 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<enum GazeProperty const,unsigned short>>>::_Lrotate(
              (__int64)a1,
              v8);
            v16 = *(_BYTE **)(v8 + 16);
          }
          if ( v16[25] )
            goto LABEL_53;
          if ( *(_BYTE *)(*(_QWORD *)v16 + 24LL) != 1 || *(_BYTE *)(*((_QWORD *)v16 + 2) + 24LL) != 1 )
          {
            if ( *(_BYTE *)(*((_QWORD *)v16 + 2) + 24LL) == 1 )
            {
              *(_BYTE *)(*(_QWORD *)v16 + 24LL) = 1;
              v16[24] = 0;
              std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>>::_Rrotate(
                (__int64)a1,
                v16);
              v16 = *(_BYTE **)(v8 + 16);
            }
            v16[24] = *(_BYTE *)(v8 + 24);
            *(_BYTE *)(v8 + 24) = 1;
            *(_BYTE *)(*((_QWORD *)v16 + 2) + 24LL) = 1;
            std::_Tree_val<std::_Tree_simple_types<std::pair<enum GazeProperty const,unsigned short>>>::_Lrotate(
              (__int64)a1,
              v8);
            break;
          }
        }
        else
        {
          if ( !v16[24] )
          {
            v16[24] = 1;
            *(_BYTE *)(v8 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>>::_Rrotate(
              (__int64)a1,
              (_QWORD *)v8);
            v16 = *(_BYTE **)v8;
          }
          if ( v16[25] )
            goto LABEL_53;
          v17 = *((_QWORD *)v16 + 2);
          if ( *(_BYTE *)(v17 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v16 + 24LL) != 1 )
          {
            if ( *(_BYTE *)(*(_QWORD *)v16 + 24LL) == 1 )
            {
              *(_BYTE *)(v17 + 24) = 1;
              v16[24] = 0;
              std::_Tree_val<std::_Tree_simple_types<std::pair<enum GazeProperty const,unsigned short>>>::_Lrotate(
                (__int64)a1,
                (__int64)v16);
              v16 = *(_BYTE **)v8;
            }
            v16[24] = *(_BYTE *)(v8 + 24);
            *(_BYTE *)(v8 + 24) = 1;
            *(_BYTE *)(*(_QWORD *)v16 + 24LL) = 1;
            std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>>::_Rrotate(
              (__int64)a1,
              (_QWORD *)v8);
            break;
          }
        }
        v16[24] = 0;
LABEL_53:
        v6 = v15;
        v8 = *(_QWORD *)(v8 + 8);
      }
      while ( v15 != *(_QWORD *)(*a1 + 8LL) );
    }
    *(_BYTE *)(v6 + 24) = 1;
  }
  v18 = a1[1];
  if ( v18 )
    a1[1] = v18 - 1;
  return v5;
}
