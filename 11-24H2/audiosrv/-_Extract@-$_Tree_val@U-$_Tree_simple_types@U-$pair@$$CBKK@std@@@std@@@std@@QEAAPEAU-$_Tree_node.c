/*
 * XREFs of ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18004CCA4
 * Callers:
 *     ??$erase@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@std@@$0A@@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@1@V21@@Z @ 0x18004CC34 (--$erase@V-$_Tree_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKK@std@@@std@@@std@@@s.c)
 * Callees:
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$function@$$A6AXXZ@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6AXXZ@std@@@std@@PEAX@2@@Z @ 0x18002AB30 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KV-$function@$$A6AXXZ@std@@@std@@@std@@.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@@Z @ 0x18002AB84 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKK@std@@@std@@@std@@QEAAXPEAU-$_Tree_nod.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@2@PEAU32@@Z @ 0x18004CF94 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@SAPEAU-$.c)
 */

_BYTE *__fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,unsigned long>>>::_Extract(
        __int64 **a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *v4; // rdi
  __int64 v6; // rcx
  __int64 *v7; // r8
  _BYTE *v8; // r11
  _QWORD *i; // rax
  __int64 v10; // r10
  __int64 v11; // r9
  __int64 *v12; // r8
  __int64 v13; // rax
  __int64 *v14; // rcx
  __int64 v16; // rax
  __int64 v17; // rdi
  char v18; // dl
  __int64 v19; // rcx
  _QWORD *v20; // rcx
  _BYTE *v21; // rdx
  __int64 v22; // rcx

  v4 = a2 + 2;
  v6 = a2[2];
  v7 = a2 + 1;
  v8 = a2;
  if ( *(_BYTE *)(v6 + 25) )
  {
    for ( i = (_QWORD *)*v7; !*((_BYTE *)i + 25) && a2 == (_QWORD *)i[2]; i = (_QWORD *)i[1] )
      a2 = i;
  }
  else
  {
    i = (_QWORD *)std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,HmdInfo>>>::_Min(v6, a2, v7, a4);
  }
  v10 = *v4;
  if ( *(_BYTE *)(*(_QWORD *)v8 + 25LL) )
    goto LABEL_5;
  if ( *(_BYTE *)(v10 + 25) )
  {
    v10 = *(_QWORD *)v8;
    goto LABEL_5;
  }
  v10 = i[2];
  if ( i == (_QWORD *)v8 )
  {
LABEL_5:
    v11 = *v7;
    if ( !*(_BYTE *)(v10 + 25) )
      *(_QWORD *)(v10 + 8) = v11;
    if ( (_BYTE *)(*a1)[1] == v8 )
    {
      (*a1)[1] = v10;
    }
    else if ( *(_BYTE **)v11 == v8 )
    {
      *(_QWORD *)v11 = v10;
    }
    else
    {
      *(_QWORD *)(v11 + 16) = v10;
    }
    v12 = *a1;
    if ( (_BYTE *)**a1 == v8 )
    {
      if ( *(_BYTE *)(v10 + 25) )
        v16 = v11;
      else
        v16 = std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,HmdInfo>>>::_Min(v10, a2, v12, v11);
      *v12 = v16;
    }
    if ( (_BYTE *)(*a1)[2] == v8 )
    {
      if ( *(_BYTE *)(v10 + 25) )
      {
        v13 = v11;
      }
      else
      {
        v19 = *(_QWORD *)(v10 + 16);
        v13 = v10;
        while ( !*(_BYTE *)(v19 + 25) )
        {
          v13 = v19;
          v19 = *(_QWORD *)(v19 + 16);
        }
      }
      (*a1)[2] = v13;
    }
    goto LABEL_18;
  }
  *(_QWORD *)(*(_QWORD *)v8 + 8LL) = i;
  *i = *(_QWORD *)v8;
  if ( i == (_QWORD *)*v4 )
  {
    v11 = (__int64)i;
  }
  else
  {
    v11 = i[1];
    if ( !*(_BYTE *)(v10 + 25) )
      *(_QWORD *)(v10 + 8) = v11;
    *(_QWORD *)v11 = v10;
    i[2] = *v4;
    *(_QWORD *)(*v4 + 8) = i;
  }
  if ( (_BYTE *)(*a1)[1] == v8 )
  {
    (*a1)[1] = (__int64)i;
  }
  else
  {
    v20 = (_QWORD *)*v7;
    if ( *(_BYTE **)*v7 == v8 )
      *v20 = i;
    else
      v20[2] = i;
  }
  i[1] = *v7;
  v18 = *((_BYTE *)i + 24);
  *((_BYTE *)i + 24) = v8[24];
  v8[24] = v18;
LABEL_18:
  if ( v8[24] != 1 )
    goto LABEL_19;
  while ( 1 )
  {
    v17 = v11;
    if ( v10 == (*a1)[1] || *(_BYTE *)(v10 + 24) != 1 )
      break;
    v21 = *(_BYTE **)v11;
    if ( v10 == *(_QWORD *)v11 )
    {
      v21 = *(_BYTE **)(v11 + 16);
      if ( !v21[24] )
      {
        v21[24] = 1;
        *(_BYTE *)(v11 + 24) = 0;
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,unsigned long>>>::_Lrotate(
          (__int64)a1,
          v11);
        v21 = *(_BYTE **)(v11 + 16);
      }
      if ( !v21[25] )
      {
        if ( *(_BYTE *)(*(_QWORD *)v21 + 24LL) != 1 || *(_BYTE *)(*((_QWORD *)v21 + 2) + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*((_QWORD *)v21 + 2) + 24LL) == 1 )
          {
            *(_BYTE *)(*(_QWORD *)v21 + 24LL) = 1;
            v21[24] = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::function<void (void)>>>>::_Rrotate(
              (__int64)a1,
              v21);
            v21 = *(_BYTE **)(v11 + 16);
          }
          v21[24] = *(_BYTE *)(v11 + 24);
          *(_BYTE *)(v11 + 24) = 1;
          *(_BYTE *)(*((_QWORD *)v21 + 2) + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,unsigned long>>>::_Lrotate(
            (__int64)a1,
            v11);
          break;
        }
LABEL_63:
        v21[24] = 0;
      }
    }
    else
    {
      if ( !v21[24] )
      {
        v21[24] = 1;
        *(_BYTE *)(v11 + 24) = 0;
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::function<void (void)>>>>::_Rrotate(
          (__int64)a1,
          (_QWORD *)v11);
        v21 = *(_BYTE **)v11;
      }
      if ( !v21[25] )
      {
        v22 = *((_QWORD *)v21 + 2);
        if ( *(_BYTE *)(v22 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v21 + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)v21 + 24LL) == 1 )
          {
            *(_BYTE *)(v22 + 24) = 1;
            v21[24] = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,unsigned long>>>::_Lrotate(
              (__int64)a1,
              (__int64)v21);
            v21 = *(_BYTE **)v11;
          }
          v21[24] = *(_BYTE *)(v11 + 24);
          *(_BYTE *)(v11 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)v21 + 24LL) = 1;
          std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::function<void (void)>>>>::_Rrotate(
            (__int64)a1,
            (_QWORD *)v11);
          break;
        }
        goto LABEL_63;
      }
    }
    v11 = *(_QWORD *)(v11 + 8);
    v10 = v17;
  }
  *(_BYTE *)(v10 + 24) = 1;
LABEL_19:
  v14 = a1[1];
  if ( v14 )
    a1[1] = (__int64 *)((char *)v14 - 1);
  return v8;
}
