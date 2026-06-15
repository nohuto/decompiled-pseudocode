/*
 * XREFs of ??$_Copy_unchecked@V?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@std@@V12@V12@@std@@YA?AV?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@0@V10@00@Z @ 0x1801269BC
 * Callers:
 *     ?erase@?$vector@_NV?$allocator@_N@std@@@std@@QEAA?AV?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@V?$_Vb_const_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@0@Z @ 0x180131A24 (-erase@-$vector@_NV-$allocator@_N@std@@@std@@QEAA-AV-$_Vb_iterator@U-$_Wrap_alloc@V-$allocator@I.c)
 * Callees:
 *     ??4?$_Vb_reference@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@std@@QEAAAEAV01@_N@Z @ 0x1801288E4 (--4-$_Vb_reference@U-$_Wrap_alloc@V-$allocator@I@std@@@std@@@std@@QEAAAEAV01@_N@Z.c)
 */

_OWORD *__fastcall std::_Copy_unchecked<std::_Vb_iterator<std::_Wrap_alloc<std::allocator<unsigned int>>>,std::_Vb_iterator<std::_Wrap_alloc<std::allocator<unsigned int>>>,std::_Vb_iterator<std::_Wrap_alloc<std::allocator<unsigned int>>>>(
        _OWORD *a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 v4; // r12
  __int64 v6; // r15
  __int64 v7; // r11
  unsigned __int64 v8; // r10
  _DWORD *v10; // rsi
  __int64 v11; // r14
  unsigned __int64 v12; // rbp
  bool v13; // zf
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // rax
  _OWORD *result; // rax
  _QWORD v17[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = *a3;
  v6 = a3[1];
  v7 = a2;
  v8 = *(_QWORD *)(a2 + 8);
  while ( 1 )
  {
    v10 = *(_DWORD **)v7;
    if ( *(_QWORD *)v7 == v4 && v8 == v6 )
      break;
    v11 = *a4;
    v12 = a4[1];
    v13 = ((1 << v8) & *v10) == 0;
    v17[0] = *a4;
    LOBYTE(a2) = !v13;
    v17[1] = v12;
    std::_Vb_reference<std::_Wrap_alloc<std::allocator<unsigned int>>>::operator=(v17, a2);
    if ( v12 >= 0x1F )
    {
      *a4 = v11 + 4;
      v15 = 0LL;
    }
    else
    {
      v15 = v12 + 1;
    }
    a4[1] = v15;
    if ( v14 >= 0x1F )
    {
      *(_QWORD *)(v7 + 8) = 0LL;
      *(_QWORD *)v7 = v10 + 1;
      v8 = 0LL;
    }
    else
    {
      v8 = v14 + 1;
      *(_QWORD *)(v7 + 8) = v8;
    }
  }
  result = a1;
  *a1 = *(_OWORD *)a4;
  return result;
}
