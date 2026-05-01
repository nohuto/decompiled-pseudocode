/*
 * XREFs of ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x180169288
 * Callers:
 *     ?_OnViewGainedForeground@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180029060 (-_OnViewGainedForeground@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ??$_Try_emplace@AEBQEAUHWND__@@$$V@?$map@PEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@std@@_N@1@AEBQEAUHWND__@@@Z @ 0x180169160 (--$_Try_emplace@AEBQEAUHWND__@@$$V@-$map@PEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@U-$les.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>>::_Insert_node(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v4; // r10
  _QWORD *v5; // rax
  __int64 v6; // rax
  _QWORD *v7; // rdx
  __int64 v9; // rcx
  __int64 *v10; // r9
  __int64 v11; // rax
  _QWORD *v12; // r9
  _QWORD *v13; // rax
  _QWORD *v14; // r9
  __int64 v15; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rcx
  _QWORD *v18; // r9
  _QWORD *v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rax

  ++a1[1];
  v4 = (_QWORD *)*a1;
  v5 = *(_QWORD **)a2;
  *(_QWORD *)(a3 + 8) = *(_QWORD *)a2;
  if ( v5 == v4 )
  {
    *v4 = a3;
    v4[1] = a3;
    v4[2] = a3;
    *(_BYTE *)(a3 + 24) = 1;
    return a3;
  }
  if ( *(_DWORD *)(a2 + 8) )
  {
    *v5 = a3;
    if ( v5 == (_QWORD *)*v4 )
      *v4 = a3;
  }
  else
  {
    v5[2] = a3;
    if ( v5 == (_QWORD *)v4[2] )
      v4[2] = a3;
  }
  v6 = *(_QWORD *)(a3 + 8);
  v7 = (_QWORD *)a3;
  while ( !*(_BYTE *)(v6 + 24) )
  {
    v9 = v7[1];
    v10 = *(__int64 **)(v9 + 8);
    v11 = *v10;
    if ( v9 == *v10 )
    {
      v11 = v10[2];
      if ( *(_BYTE *)(v11 + 24) )
      {
        v12 = *(_QWORD **)(v9 + 16);
        if ( v7 == v12 )
        {
          v7 = (_QWORD *)v7[1];
          *(_QWORD *)(v9 + 16) = *v12;
          if ( !*(_BYTE *)(*v12 + 25LL) )
            *(_QWORD *)(*v12 + 8LL) = v9;
          v12[1] = *(_QWORD *)(v9 + 8);
          if ( v9 == *(_QWORD *)(*a1 + 8LL) )
          {
            *(_QWORD *)(*a1 + 8LL) = v12;
          }
          else
          {
            v13 = *(_QWORD **)(v9 + 8);
            if ( v9 == *v13 )
              *v13 = v12;
            else
              v13[2] = v12;
          }
          *v12 = v9;
          *(_QWORD *)(v9 + 8) = v12;
        }
        *(_BYTE *)(v7[1] + 24LL) = 1;
        *(_BYTE *)(*(_QWORD *)(v7[1] + 8LL) + 24LL) = 0;
        v17 = *(_QWORD **)(v7[1] + 8LL);
        v18 = (_QWORD *)*v17;
        *v17 = *(_QWORD *)(*v17 + 16LL);
        v20 = v18[2];
        if ( !*(_BYTE *)(v20 + 25) )
          *(_QWORD *)(v20 + 8) = v17;
        v18[1] = v17[1];
        if ( v17 == *(_QWORD **)(*a1 + 8LL) )
        {
          *(_QWORD *)(*a1 + 8LL) = v18;
        }
        else
        {
          v21 = (_QWORD *)v17[1];
          if ( v17 == (_QWORD *)v21[2] )
            v21[2] = v18;
          else
            *v21 = v18;
        }
        v18[2] = v17;
LABEL_36:
        v17[1] = v18;
        goto LABEL_37;
      }
    }
    else if ( *(_BYTE *)(v11 + 24) )
    {
      v14 = *(_QWORD **)v9;
      if ( v7 == *(_QWORD **)v9 )
      {
        v7 = (_QWORD *)v7[1];
        *(_QWORD *)v9 = v14[2];
        v15 = v14[2];
        if ( !*(_BYTE *)(v15 + 25) )
          *(_QWORD *)(v15 + 8) = v9;
        v14[1] = *(_QWORD *)(v9 + 8);
        if ( v9 == *(_QWORD *)(*a1 + 8LL) )
        {
          *(_QWORD *)(*a1 + 8LL) = v14;
        }
        else
        {
          v16 = *(_QWORD **)(v9 + 8);
          if ( v9 == v16[2] )
            v16[2] = v14;
          else
            *v16 = v14;
        }
        v14[2] = v9;
        *(_QWORD *)(v9 + 8) = v14;
      }
      *(_BYTE *)(v7[1] + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(v7[1] + 8LL) + 24LL) = 0;
      v17 = *(_QWORD **)(v7[1] + 8LL);
      v18 = (_QWORD *)v17[2];
      v17[2] = *v18;
      if ( !*(_BYTE *)(*v18 + 25LL) )
        *(_QWORD *)(*v18 + 8LL) = v17;
      v18[1] = v17[1];
      if ( v17 == *(_QWORD **)(*a1 + 8LL) )
      {
        *(_QWORD *)(*a1 + 8LL) = v18;
      }
      else
      {
        v19 = (_QWORD *)v17[1];
        if ( v17 == (_QWORD *)*v19 )
          *v19 = v18;
        else
          v19[2] = v18;
      }
      *v18 = v17;
      goto LABEL_36;
    }
    *(_BYTE *)(v9 + 24) = 1;
    *(_BYTE *)(v11 + 24) = 1;
    *(_BYTE *)(*(_QWORD *)(v7[1] + 8LL) + 24LL) = 0;
    v7 = *(_QWORD **)(v7[1] + 8LL);
LABEL_37:
    v6 = v7[1];
  }
  *(_BYTE *)(v4[1] + 24LL) = 1;
  return a3;
}
