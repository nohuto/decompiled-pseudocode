/*
 * XREFs of ?_Insert_n@?$vector@_NV?$allocator@_N@std@@@std@@QEAA?AV?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@V?$_Vb_const_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@_KAEB_N@Z @ 0x180139F70
 * Callers:
 *     ?resize@?$vector@_NV?$allocator@_N@std@@@std@@QEAAX_K_N@Z @ 0x18013AD28 (-resize@-$vector@_NV-$allocator@_N@std@@@std@@QEAAX_K_N@Z.c)
 * Callees:
 *     ??$_Fill_vbool@V?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@std@@@std@@YAXV?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@0@V10@_N@Z @ 0x18012EC9C (--$_Fill_vbool@V-$_Vb_iterator@U-$_Wrap_alloc@V-$allocator@I@std@@@std@@@std@@@std@@YAXV-$_Vb_it.c)
 *     ?_Insert_x@?$vector@_NV?$allocator@_N@std@@@std@@QEAA_KV?$_Vb_const_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@_K@Z @ 0x18013A098 (-_Insert_x@-$vector@_NV-$allocator@_N@std@@@std@@QEAA_KV-$_Vb_const_iterator@U-$_Wrap_alloc@V-$a.c)
 */

__int128 *__fastcall std::vector<bool>::_Insert_n(_QWORD *a1, __int128 *a2, __int128 *a3, __int64 a4, char *a5)
{
  __int64 inserted; // rax
  unsigned __int64 *v9; // rdx
  unsigned __int64 v10; // r8
  __int64 v11; // rax
  __int128 v12; // xmm1
  unsigned __int64 v13; // rcx
  char v14; // dl
  __int64 v15; // rcx
  __int128 v17; // [rsp+20h] [rbp-28h] BYREF
  __int128 v18; // [rsp+30h] [rbp-18h] BYREF

  v17 = *a3;
  inserted = std::vector<bool>::_Insert_x(a1, &v17, a4);
  *((_QWORD *)&v17 + 1) = 0LL;
  v9 = (unsigned __int64 *)a2 + 1;
  *(_QWORD *)&v17 = *a1;
  *a2 = (unsigned __int64)v17;
  if ( inserted >= 0 || *v9 >= -inserted )
  {
    v10 = *v9 + inserted;
    v11 = 4 * (v10 >> 5);
  }
  else
  {
    v10 = *v9 + inserted;
    v11 = -4LL - 4 * (~v10 >> 5);
  }
  *(_QWORD *)a2 += v11;
  *v9 = v10;
  *v9 = v10 & 0x1F;
  if ( a4 )
  {
    v12 = *a2;
    v13 = *((_QWORD *)a2 + 1);
    if ( a4 >= 0 || v13 >= -a4 )
    {
      v14 = v13 + a4;
      v15 = v12 + 4 * ((v13 + a4) >> 5);
    }
    else
    {
      v14 = v13 + a4;
      v15 = v12 - (4 * (~(v13 + a4) >> 5) + 4);
    }
    *(_QWORD *)&v17 = v15;
    *((_QWORD *)&v17 + 1) = v14 & 0x1F;
    v18 = v12;
    std::_Fill_vbool<std::_Vb_iterator<std::_Wrap_alloc<std::allocator<unsigned int>>>>(
      (int **)&v18,
      (__int64)&v17,
      *a5);
  }
  return a2;
}
