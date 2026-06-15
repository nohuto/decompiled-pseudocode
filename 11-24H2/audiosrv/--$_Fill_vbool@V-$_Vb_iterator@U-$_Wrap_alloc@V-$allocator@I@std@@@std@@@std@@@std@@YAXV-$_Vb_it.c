/*
 * XREFs of ??$_Fill_vbool@V?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@std@@@std@@YAXV?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@0@V10@_N@Z @ 0x18012EC9C
 * Callers:
 *     ?_Insert_n@?$vector@_NV?$allocator@_N@std@@@std@@QEAA?AV?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@V?$_Vb_const_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@_KAEB_N@Z @ 0x180139F70 (-_Insert_n@-$vector@_NV-$allocator@_N@std@@@std@@QEAA-AV-$_Vb_iterator@U-$_Wrap_alloc@V-$allocat.c)
 * Callees:
 *     memset_0 @ 0x1800A4EB4 (memset_0.c)
 */

int *__fastcall std::_Fill_vbool<std::_Vb_iterator<std::_Wrap_alloc<std::allocator<unsigned int>>>>(
        int **a1,
        __int64 a2,
        char a3)
{
  int *v3; // r9
  char *v5; // rsi
  int *result; // rax
  int v7; // ebp
  __int64 v8; // r14
  int v9; // r8d
  int v10; // r11d
  int v11; // ebx

  v3 = *a1;
  v5 = *(char **)a2;
  if ( *a1 != *(int **)a2 || (result = *(int **)(a2 + 8), a1[1] != result) )
  {
    v7 = *v3;
    v8 = *(_QWORD *)(a2 + 8);
    v9 = -1 << (char)a1[1];
    v10 = ~v9;
    v11 = -(a3 != 0);
    if ( v3 == (int *)v5 )
    {
      result = (int *)(v9 & (0xFFFFFFFF >> (32 - v8)) & v11 | v7 & (v10 | ~(0xFFFFFFFF >> (32 - v8))));
      *v3 = (int)result;
    }
    else
    {
      *v3 = v10 & v7 | v9 & v11;
      result = (int *)memset_0(v3 + 1, (unsigned __int8)-(a3 != 0), v5 - (char *)(v3 + 1));
      if ( v8 )
      {
        result = (int *)((0xFFFFFFFF >> (32 - v8)) & v11 | *(_DWORD *)v5 & ~(0xFFFFFFFF >> (32 - v8)));
        *(_DWORD *)v5 = (_DWORD)result;
      }
    }
  }
  return result;
}
