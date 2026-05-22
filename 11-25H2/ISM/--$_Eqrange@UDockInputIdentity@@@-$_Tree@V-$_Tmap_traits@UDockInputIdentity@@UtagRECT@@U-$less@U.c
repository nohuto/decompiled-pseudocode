/*
 * XREFs of ??$_Eqrange@UDockInputIdentity@@@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UtagRECT@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@PEAX@std@@PEAU12@@1@AEBUDockInputIdentity@@@Z @ 0x18017D08C
 * Callers:
 *     ?OnDockInput@DeviceDockServer@@QEAAJPEAUDockInputInfo@@@Z @ 0x18017E424 (-OnDockInput@DeviceDockServer@@QEAAJPEAUDockInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<DockInputIdentity,tagRECT,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,tagRECT>>,0>>::_Eqrange<DockInputIdentity>(
        __int64 *a1,
        _QWORD *a2,
        unsigned int *a3)
{
  __int64 *v3; // rbx
  __int64 *v4; // r10
  __int64 *v5; // rcx
  __int64 *v6; // r9
  unsigned int v7; // r11d
  bool v8; // cf
  unsigned __int64 v9; // rax
  bool v10; // cf
  unsigned __int64 v11; // rax
  unsigned int v12; // r9d
  bool v13; // cf
  unsigned __int64 v14; // rax
  _QWORD *result; // rax

  v3 = (__int64 *)*a1;
  v4 = (__int64 *)*a1;
  v5 = *(__int64 **)(*a1 + 8);
  v6 = v5;
  while ( !*((_BYTE *)v6 + 25) )
  {
    v7 = *((_DWORD *)v6 + 8);
    v8 = v7 < *a3;
    if ( v7 == *a3 )
    {
      v9 = *((_QWORD *)a3 + 1);
      v8 = v6[5] < v9;
      if ( v6[5] == v9 )
        v8 = *((_WORD *)v6 + 24) < *((_WORD *)a3 + 8);
    }
    if ( v8 )
    {
      v6 = (__int64 *)v6[2];
    }
    else
    {
      if ( *((_BYTE *)v4 + 25) )
      {
        v10 = *a3 < v7;
        if ( *a3 == v7 )
        {
          v11 = v6[5];
          v10 = *((_QWORD *)a3 + 1) < v11;
          if ( *((_QWORD *)a3 + 1) == v11 )
            v10 = *((_WORD *)a3 + 8) < *((_WORD *)v6 + 24);
        }
        if ( v10 )
          v4 = v6;
      }
      v3 = v6;
      v6 = (__int64 *)*v6;
    }
  }
  if ( !*((_BYTE *)v4 + 25) )
    v5 = (__int64 *)*v4;
  if ( !*((_BYTE *)v5 + 25) )
  {
    v12 = *a3;
    do
    {
      v13 = v12 < *((_DWORD *)v5 + 8);
      if ( v12 == *((_DWORD *)v5 + 8) )
      {
        v14 = v5[5];
        v13 = *((_QWORD *)a3 + 1) < v14;
        if ( *((_QWORD *)a3 + 1) == v14 )
          v13 = *((_WORD *)a3 + 8) < *((_WORD *)v5 + 24);
      }
      if ( v13 )
      {
        v4 = v5;
        v5 = (__int64 *)*v5;
      }
      else
      {
        v5 = (__int64 *)v5[2];
      }
    }
    while ( !*((_BYTE *)v5 + 25) );
  }
  *a2 = v3;
  result = a2;
  a2[1] = v4;
  return result;
}
