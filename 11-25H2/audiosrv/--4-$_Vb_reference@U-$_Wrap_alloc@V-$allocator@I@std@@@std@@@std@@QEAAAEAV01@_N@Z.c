/*
 * XREFs of ??4?$_Vb_reference@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@std@@QEAAAEAV01@_N@Z @ 0x1801288E4
 * Callers:
 *     ??$_Copy_backward_unchecked@V?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@std@@V12@@std@@YA?AV?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@0@V10@00@Z @ 0x18012690C (--$_Copy_backward_unchecked@V-$_Vb_iterator@U-$_Wrap_alloc@V-$allocator@I@std@@@std@@@std@@V12@@.c)
 *     ??$_Copy_unchecked@V?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@std@@V12@V12@@std@@YA?AV?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@0@V10@00@Z @ 0x1801269BC (--$_Copy_unchecked@V-$_Vb_iterator@U-$_Wrap_alloc@V-$allocator@I@std@@@std@@@std@@V12@V12@@std@@.c)
 * Callees:
 *     <none>
 */

int **__fastcall std::_Vb_reference<std::_Wrap_alloc<std::allocator<unsigned int>>>::operator=(int **a1, char a2)
{
  int v2; // r9d
  int v3; // eax
  int v4; // eax

  v2 = *((_DWORD *)a1 + 2);
  v3 = **a1;
  if ( a2 )
    v4 = v3 | (1 << v2);
  else
    v4 = v3 & ~(1 << v2);
  **a1 = v4;
  return a1;
}
