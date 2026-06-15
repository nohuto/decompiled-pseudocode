/*
 * XREFs of ?_Insert_x@?$vector@_NV?$allocator@_N@std@@@std@@QEAA_KV?$_Vb_const_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@_K@Z @ 0x18013A098
 * Callers:
 *     ?_Insert_n@?$vector@_NV?$allocator@_N@std@@@std@@QEAA?AV?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@V?$_Vb_const_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@_KAEB_N@Z @ 0x180139F70 (-_Insert_n@-$vector@_NV-$allocator@_N@std@@@std@@QEAA-AV-$_Vb_iterator@U-$_Wrap_alloc@V-$allocat.c)
 * Callees:
 *     ??$_Copy_backward_unchecked@V?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@std@@V12@@std@@YA?AV?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@0@V10@00@Z @ 0x18012E818 (--$_Copy_backward_unchecked@V-$_Vb_iterator@U-$_Wrap_alloc@V-$allocator@I@std@@@std@@@std@@V12@@.c)
 *     ??$_Resize_reallocate@I@?$vector@IV?$allocator@I@std@@@std@@AEAAX_KAEBI@Z @ 0x18012F49C (--$_Resize_reallocate@I@-$vector@IV-$allocator@I@std@@@std@@AEAAX_KAEBI@Z.c)
 *     ??$_Uninitialized_fill_n@V?$allocator@I@std@@@std@@YAPEAIPEAI_KAEBIAEAV?$allocator@I@0@@Z @ 0x18012F7F4 (--$_Uninitialized_fill_n@V-$allocator@I@std@@@std@@YAPEAIPEAI_KAEBIAEAV-$allocator@I@0@@Z.c)
 *     ?_Xlen@?$vector@_NV?$allocator@_N@std@@@std@@SAXXZ @ 0x18013A928 (-_Xlen@-$vector@_NV-$allocator@_N@std@@@std@@SAXXZ.c)
 *     ?end@?$vector@_NV?$allocator@_N@std@@@std@@QEAA?AV?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@XZ @ 0x18013A9C8 (-end@-$vector@_NV-$allocator@_N@std@@@std@@QEAA-AV-$_Vb_iterator@U-$_Wrap_alloc@V-$allocator@I@s.c)
 */

__int64 __fastcall std::vector<bool>::_Insert_x(__int64 *a1, _QWORD *a2, unsigned __int64 a3)
{
  __int64 v4; // r8
  __int64 v6; // rdi
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  _DWORD *v10; // rax
  __int64 v11; // r10
  __int128 *v12; // rax
  __int64 v13; // rdx
  __int128 v14; // xmm0
  __int64 v16[2]; // [rsp+20h] [rbp-50h] BYREF
  __int128 v17; // [rsp+30h] [rbp-40h] BYREF
  __int128 v18; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v19[16]; // [rsp+50h] [rbp-20h] BYREF
  __int128 v20; // [rsp+60h] [rbp-10h] BYREF
  int v21; // [rsp+80h] [rbp+10h] BYREF

  v4 = *a1;
  v6 = a2[1] + 32 * ((*a2 - *a1) >> 2);
  if ( !a3 )
    return v6;
  v7 = a1[3];
  if ( 0x7FFFFFFFFFFFFFFFLL - v7 < a3 )
    std::vector<bool>::_Xlen();
  v21 = 0;
  v8 = (a3 + v7 + 31) >> 5;
  v9 = (a1[1] - v4) >> 2;
  if ( v8 >= v9 )
  {
    if ( v8 <= v9 )
      goto LABEL_10;
    if ( v8 > (a1[2] - v4) >> 2 )
    {
      std::vector<unsigned int>::_Resize_reallocate<unsigned int>((__int64)a1, v8, (__int64)&v21);
      goto LABEL_10;
    }
    v10 = std::_Uninitialized_fill_n<std::allocator<unsigned int>>((_DWORD *)a1[1], v8 - v9, &v21);
  }
  else
  {
    v10 = (_DWORD *)(v4 + 4 * v8);
  }
  a1[1] = (__int64)v10;
LABEL_10:
  if ( a1[3] )
  {
    std::vector<bool>::end(a1, &v17);
    a1[3] = v11;
    v12 = (__int128 *)std::vector<bool>::end(a1, v19);
    v13 = *a1;
    if ( v6 >= 0 )
      v16[0] = v13 + 4 * ((unsigned __int64)v6 >> 5);
    else
      v16[0] = v13 - (4 * ((unsigned __int64)~v6 >> 5) + 4);
    v14 = *v12;
    v16[1] = v6 & 0x1F;
    v18 = v14;
    std::_Copy_backward_unchecked<std::_Vb_iterator<std::_Wrap_alloc<std::allocator<unsigned int>>>,std::_Vb_iterator<std::_Wrap_alloc<std::allocator<unsigned int>>>>(
      &v20,
      v16,
      (__int64)&v17,
      &v18);
  }
  else
  {
    a1[3] = a3;
  }
  return v6;
}
