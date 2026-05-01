/*
 * XREFs of ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18014E794
 * Callers:
 *     ?_Erase_unchecked@?$_Tree@V?$_Tmap_traits@U?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@U?$less@U?$com_ptr@UIApplicationView@@@winrt@@@4@V?$allocator@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@@4@$0A@@std@@@std@@AEAAPEAU?$_Tree_node@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18014E6EC (-_Erase_unchecked@-$_Tree@V-$_Tmap_traits@U-$com_ptr@UIApplicationView@@@winrt@@V-$shared_ptr@VI.c)
 *     ?UpdateTelemetry@InteractionTracker@SnapInteraction@@AEAAXXZ @ 0x1805A972C (-UpdateTelemetry@InteractionTracker@SnapInteraction@@AEAAXXZ.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@PEAX@2@PEAU32@@Z @ 0x18005C8DC (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 */

_BYTE *__fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::com_ptr<IApplicationView> const,std::shared_ptr<SnapInteraction::InteractionRecord>>>>::_Extract(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v2; // r11
  __int64 v4; // rcx
  _QWORD **v5; // r10
  _BYTE *v6; // rbx
  _QWORD *i; // rax
  _QWORD *v8; // r9
  _QWORD *v9; // r8
  _QWORD *v10; // rcx
  _QWORD *v11; // r10
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  char v14; // dl
  __int64 v15; // rcx
  _QWORD *v17; // r11
  __int64 *v18; // rcx
  __int64 *v19; // rcx
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rdx
  __int64 *v23; // rdx
  _QWORD *v24; // rcx
  __int64 v25; // rax
  _QWORD *v26; // rax
  _QWORD *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // rcx
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  __int64 **v34; // rax

  v2 = a2 + 2;
  v4 = a2[2];
  v5 = (_QWORD **)(a2 + 1);
  v6 = a2;
  if ( *(_BYTE *)(v4 + 25) )
  {
    for ( i = *v5; !*((_BYTE *)i + 25) && a2 == (_QWORD *)i[2]; i = (_QWORD *)i[1] )
      a2 = i;
  }
  else
  {
    i = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>>>::_Min((_QWORD *)v4);
  }
  v8 = (_QWORD *)*v2;
  if ( !*(_BYTE *)(*(_QWORD *)v6 + 25LL) )
  {
    if ( *((_BYTE *)v8 + 25) )
    {
      v8 = *(_QWORD **)v6;
    }
    else
    {
      v8 = (_QWORD *)i[2];
      if ( i != (_QWORD *)v6 )
      {
        *(_QWORD *)(*(_QWORD *)v6 + 8LL) = i;
        *i = *(_QWORD *)v6;
        if ( i == (_QWORD *)*v2 )
        {
          v9 = i;
        }
        else
        {
          v9 = (_QWORD *)i[1];
          if ( !*((_BYTE *)v8 + 25) )
            v8[1] = v9;
          *v9 = v8;
          i[2] = *v2;
          *(_QWORD *)(*v2 + 8LL) = i;
        }
        if ( *(_BYTE **)(*a1 + 8LL) == v6 )
        {
          *(_QWORD *)(*a1 + 8LL) = i;
        }
        else
        {
          v10 = *v5;
          if ( (_BYTE *)**v5 == v6 )
            *v10 = i;
          else
            v10[2] = i;
        }
        i[1] = *v5;
        v14 = *((_BYTE *)i + 24);
        *((_BYTE *)i + 24) = v6[24];
        v6[24] = v14;
        goto LABEL_27;
      }
    }
  }
  v9 = *v5;
  if ( !*((_BYTE *)v8 + 25) )
    v8[1] = v9;
  if ( *(_BYTE **)(*a1 + 8LL) == v6 )
  {
    *(_QWORD *)(*a1 + 8LL) = v8;
  }
  else if ( (_BYTE *)*v9 == v6 )
  {
    *v9 = v8;
  }
  else
  {
    v9[2] = v8;
  }
  v11 = (_QWORD *)*a1;
  if ( *(_BYTE **)*a1 == v6 )
  {
    if ( *((_BYTE *)v8 + 25) )
      v12 = v9;
    else
      v12 = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>>>::_Min(v8);
    *v11 = v12;
  }
  if ( *(_BYTE **)(*a1 + 16LL) == v6 )
  {
    if ( *((_BYTE *)v8 + 25) )
    {
      v13 = v9;
    }
    else
    {
      v31 = v8[2];
      v13 = v8;
      while ( !*(_BYTE *)(v31 + 25) )
      {
        v13 = (_QWORD *)v31;
        v31 = *(_QWORD *)(v31 + 16);
      }
    }
    *(_QWORD *)(*a1 + 16LL) = v13;
  }
LABEL_27:
  if ( v6[24] != 1 )
    goto LABEL_28;
  while ( 1 )
  {
    v17 = v9;
    if ( v8 == *(_QWORD **)(*a1 + 8LL) || *((_BYTE *)v8 + 24) != 1 )
      break;
    v18 = (__int64 *)*v9;
    if ( v8 == (_QWORD *)*v9 )
    {
      v18 = (__int64 *)v9[2];
      if ( !*((_BYTE *)v18 + 24) )
      {
        *((_BYTE *)v18 + 24) = 1;
        v27 = (_QWORD *)v9[2];
        *((_BYTE *)v9 + 24) = 0;
        v9[2] = *v27;
        if ( !*(_BYTE *)(*v27 + 25LL) )
          *(_QWORD *)(*v27 + 8LL) = v9;
        v27[1] = v9[1];
        if ( v9 == *(_QWORD **)(*a1 + 8LL) )
        {
          *(_QWORD *)(*a1 + 8LL) = v27;
        }
        else
        {
          v32 = (_QWORD *)v9[1];
          if ( v9 == (_QWORD *)*v32 )
            *v32 = v27;
          else
            v32[2] = v27;
        }
        *v27 = v9;
        v9[1] = v27;
        v18 = (__int64 *)v9[2];
      }
      if ( !*((_BYTE *)v18 + 25) )
      {
        if ( *(_BYTE *)(*v18 + 24) != 1 || *(_BYTE *)(v18[2] + 24) != 1 )
        {
          if ( *(_BYTE *)(v18[2] + 24) == 1 )
          {
            *(_BYTE *)(*v18 + 24) = 1;
            v28 = *v18;
            *((_BYTE *)v18 + 24) = 0;
            *v18 = *(_QWORD *)(v28 + 16);
            v29 = *(_QWORD *)(v28 + 16);
            if ( !*(_BYTE *)(v29 + 25) )
              *(_QWORD *)(v29 + 8) = v18;
            *(_QWORD *)(v28 + 8) = v18[1];
            if ( v18 == *(__int64 **)(*a1 + 8LL) )
            {
              *(_QWORD *)(*a1 + 8LL) = v28;
            }
            else
            {
              v30 = (_QWORD *)v18[1];
              if ( v18 == (__int64 *)v30[2] )
                v30[2] = v28;
              else
                *v30 = v28;
            }
            *(_QWORD *)(v28 + 16) = v18;
            v18[1] = v28;
            v18 = (__int64 *)v9[2];
          }
          *((_BYTE *)v18 + 24) = *((_BYTE *)v9 + 24);
          *((_BYTE *)v9 + 24) = 1;
          *(_BYTE *)(v18[2] + 24) = 1;
          v24 = (_QWORD *)v9[2];
          v9[2] = *v24;
          if ( !*(_BYTE *)(*v24 + 25LL) )
            *(_QWORD *)(*v24 + 8LL) = v9;
          v24[1] = v9[1];
          if ( v9 == *(_QWORD **)(*a1 + 8LL) )
          {
            *(_QWORD *)(*a1 + 8LL) = v24;
          }
          else
          {
            v33 = (_QWORD *)v9[1];
            if ( v9 == (_QWORD *)*v33 )
              *v33 = v24;
            else
              v33[2] = v24;
          }
          *v24 = v9;
          goto LABEL_89;
        }
        goto LABEL_103;
      }
    }
    else
    {
      if ( !*((_BYTE *)v18 + 24) )
      {
        *((_BYTE *)v18 + 24) = 1;
        v19 = (__int64 *)*v9;
        *((_BYTE *)v9 + 24) = 0;
        *v9 = v19[2];
        v20 = v19[2];
        if ( !*(_BYTE *)(v20 + 25) )
          *(_QWORD *)(v20 + 8) = v9;
        v19[1] = v9[1];
        if ( v9 == *(_QWORD **)(*a1 + 8LL) )
        {
          *(_QWORD *)(*a1 + 8LL) = v19;
        }
        else
        {
          v21 = (_QWORD *)v9[1];
          if ( v9 == (_QWORD *)v21[2] )
            v21[2] = v19;
          else
            *v21 = v19;
        }
        v19[2] = (__int64)v9;
        v9[1] = v19;
        v18 = (__int64 *)*v9;
      }
      if ( !*((_BYTE *)v18 + 25) )
      {
        v22 = v18[2];
        if ( *(_BYTE *)(v22 + 24) != 1 || *(_BYTE *)(*v18 + 24) != 1 )
        {
          if ( *(_BYTE *)(*v18 + 24) == 1 )
          {
            *(_BYTE *)(v22 + 24) = 1;
            v23 = (__int64 *)v18[2];
            *((_BYTE *)v18 + 24) = 0;
            v18[2] = *v23;
            if ( !*(_BYTE *)(*v23 + 25) )
              *(_QWORD *)(*v23 + 8) = v18;
            v23[1] = v18[1];
            if ( v18 == *(__int64 **)(*a1 + 8LL) )
            {
              *(_QWORD *)(*a1 + 8LL) = v23;
            }
            else
            {
              v34 = (__int64 **)v18[1];
              if ( v18 == *v34 )
                *v34 = v23;
              else
                v34[2] = v23;
            }
            *v23 = (__int64)v18;
            v18[1] = (__int64)v23;
            v18 = (__int64 *)*v9;
          }
          *((_BYTE *)v18 + 24) = *((_BYTE *)v9 + 24);
          *((_BYTE *)v9 + 24) = 1;
          *(_BYTE *)(*v18 + 24) = 1;
          v24 = (_QWORD *)*v9;
          *v9 = *(_QWORD *)(*v9 + 16LL);
          v25 = v24[2];
          if ( !*(_BYTE *)(v25 + 25) )
            *(_QWORD *)(v25 + 8) = v9;
          v24[1] = v9[1];
          if ( v9 == *(_QWORD **)(*a1 + 8LL) )
          {
            *(_QWORD *)(*a1 + 8LL) = v24;
          }
          else
          {
            v26 = (_QWORD *)v9[1];
            if ( v9 == (_QWORD *)v26[2] )
              v26[2] = v24;
            else
              *v26 = v24;
          }
          v24[2] = v9;
LABEL_89:
          v9[1] = v24;
          break;
        }
LABEL_103:
        *((_BYTE *)v18 + 24) = 0;
      }
    }
    v9 = (_QWORD *)v9[1];
    v8 = v17;
  }
  *((_BYTE *)v8 + 24) = 1;
LABEL_28:
  v15 = a1[1];
  if ( v15 )
    a1[1] = v15 - 1;
  return v6;
}
