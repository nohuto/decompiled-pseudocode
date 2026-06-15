/*
 * XREFs of ??$_Copy_backward_unchecked@V?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@std@@V12@@std@@YA?AV?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@0@V10@00@Z @ 0x18012690C
 * Callers:
 *     ?_Insert_x@?$vector@_NV?$allocator@_N@std@@@std@@QEAA_KV?$_Vb_const_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@_K@Z @ 0x180130FC8 (-_Insert_x@-$vector@_NV-$allocator@_N@std@@@std@@QEAA_KV-$_Vb_const_iterator@U-$_Wrap_alloc@V-$a.c)
 * Callees:
 *     ??4?$_Vb_reference@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@std@@QEAAAEAV01@_N@Z @ 0x1801288E4 (--4-$_Vb_reference@U-$_Wrap_alloc@V-$allocator@I@std@@@std@@@std@@QEAAAEAV01@_N@Z.c)
 */

_OWORD *__fastcall std::_Copy_backward_unchecked<std::_Vb_iterator<std::_Wrap_alloc<std::allocator<unsigned int>>>,std::_Vb_iterator<std::_Wrap_alloc<std::allocator<unsigned int>>>>(
        _OWORD *a1,
        __int64 *a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v4; // rdi
  _QWORD *v5; // r11
  __int64 v6; // rsi
  __int64 v7; // r10
  _DWORD *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r8
  bool v14; // zf
  _OWORD *result; // rax
  _QWORD v16[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = *a2;
  v5 = a4;
  v6 = a2[1];
  v7 = a3;
  while ( 1 )
  {
    v9 = *(_DWORD **)v7;
    if ( v4 == *(_QWORD *)v7 && v6 == *(_QWORD *)(v7 + 8) )
      break;
    v10 = *(_QWORD *)(v7 + 8);
    if ( v10 )
    {
      v11 = v10 - 1;
    }
    else
    {
      --v9;
      v11 = 31LL;
      *(_QWORD *)v7 = v9;
    }
    *(_QWORD *)(v7 + 8) = v11;
    v12 = v5[1];
    if ( v12 )
    {
      v13 = v12 - 1;
    }
    else
    {
      *v5 -= 4LL;
      v13 = 31LL;
    }
    v5[1] = v13;
    v16[0] = *v5;
    v14 = ((1 << v11) & *v9) == 0;
    v16[1] = v13;
    LOBYTE(v9) = !v14;
    std::_Vb_reference<std::_Wrap_alloc<std::allocator<unsigned int>>>::operator=(v16, v9);
  }
  result = a1;
  *a1 = *(_OWORD *)v5;
  return result;
}
