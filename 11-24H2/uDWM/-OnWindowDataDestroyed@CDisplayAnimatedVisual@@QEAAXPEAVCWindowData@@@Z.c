/*
 * XREFs of ?OnWindowDataDestroyed@CDisplayAnimatedVisual@@QEAAXPEAVCWindowData@@@Z @ 0x1800827A8
 * Callers:
 *     ?OnWindowDataDestroyed@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x18009052C (-OnWindowDataDestroyed@CWindowList@@QEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tset_traits@PEAVCWindowData@@U?$less@PEAVCWindowData@@@std@@V?$allocator@PEAVCWindowData@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowData@@@std@@@std@@@2@V32@@Z @ 0x1800BDC30 (-erase@-$_Tree@V-$_Tset_traits@PEAVCWindowData@@U-$less@PEAVCWindowData@@@std@@V-$allocator@PEAV.c)
 */

void __fastcall CDisplayAnimatedVisual::OnWindowDataDestroyed(CDisplayAnimatedVisual *this, struct CWindowData *a2)
{
  char *v4; // rcx
  __int64 *v5; // r8
  __int64 *v6; // rax
  __int64 *v7; // rcx
  __int64 *v8; // r8
  __int64 *v9; // rax
  char v10; // [rsp+58h] [rbp+10h] BYREF

  if ( a2 )
  {
    v4 = (char *)this + 336;
    v5 = *(__int64 **)v4;
    v6 = *(__int64 **)(*(_QWORD *)v4 + 8LL);
    while ( !*((_BYTE *)v6 + 25) )
    {
      if ( v6[4] >= (unsigned __int64)a2 )
      {
        v5 = v6;
        v6 = (__int64 *)*v6;
      }
      else
      {
        v6 = (__int64 *)v6[2];
      }
    }
    if ( !*((_BYTE *)v5 + 25) && v5 != *(__int64 **)v4 && (unsigned __int64)a2 >= v5[4] )
      std::_Tree<std::_Tset_traits<CWindowData *,std::less<CWindowData *>,std::allocator<CWindowData *>,0>>::erase(
        v4,
        &v10);
    v7 = (__int64 *)*((_QWORD *)this + 44);
    v8 = v7;
    v9 = (__int64 *)v7[1];
    while ( !*((_BYTE *)v9 + 25) )
    {
      if ( v9[4] >= (unsigned __int64)a2 )
      {
        v8 = v9;
        v9 = (__int64 *)*v9;
      }
      else
      {
        v9 = (__int64 *)v9[2];
      }
    }
    if ( !*((_BYTE *)v8 + 25) && v8 != v7 && (unsigned __int64)a2 >= v8[4] )
      std::_Tree<std::_Tset_traits<CWindowData *,std::less<CWindowData *>,std::allocator<CWindowData *>,0>>::erase(
        (char *)this + 352,
        &v10);
  }
}
