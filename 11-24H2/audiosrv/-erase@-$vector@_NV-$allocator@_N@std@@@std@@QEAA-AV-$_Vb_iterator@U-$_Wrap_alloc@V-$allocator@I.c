/*
 * XREFs of ?erase@?$vector@_NV?$allocator@_N@std@@@std@@QEAA?AV?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@V?$_Vb_const_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@0@Z @ 0x18013AACC
 * Callers:
 *     ?resize@?$vector@_NV?$allocator@_N@std@@@std@@QEAAX_K_N@Z @ 0x18013AD28 (-resize@-$vector@_NV-$allocator@_N@std@@@std@@QEAAX_K_N@Z.c)
 * Callees:
 *     ??$_Copy_unchecked@V?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@std@@V12@V12@@std@@YA?AV?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@0@V10@00@Z @ 0x18012E8C8 (--$_Copy_unchecked@V-$_Vb_iterator@U-$_Wrap_alloc@V-$allocator@I@std@@@std@@@std@@V12@V12@@std@@.c)
 *     ?_Make_iter@?$vector@_NV?$allocator@_N@std@@@std@@QEAA?AV?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@V?$_Vb_const_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@@Z @ 0x18013A29C (-_Make_iter@-$vector@_NV-$allocator@_N@std@@@std@@QEAA-AV-$_Vb_iterator@U-$_Wrap_alloc@V-$alloca.c)
 *     ?_Trim@?$vector@_NV?$allocator@_N@std@@@std@@QEAAX_K@Z @ 0x18013A8BC (-_Trim@-$vector@_NV-$allocator@_N@std@@@std@@QEAAX_K@Z.c)
 *     ?end@?$vector@_NV?$allocator@_N@std@@@std@@QEAA?AV?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@XZ @ 0x18013A9C8 (-end@-$vector@_NV-$allocator@_N@std@@@std@@QEAA-AV-$_Vb_iterator@U-$_Wrap_alloc@V-$allocator@I@s.c)
 */

_OWORD *__fastcall std::vector<bool>::erase(__int64 *a1, _OWORD *a2, __int128 *a3)
{
  __int128 *v5; // r10
  __int64 v6; // rdi
  __int128 *v7; // rax
  _QWORD *v8; // rax
  unsigned __int64 *v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r8
  __int64 v12; // rax
  __int128 v14; // [rsp+20h] [rbp-50h] BYREF
  __int128 v15; // [rsp+30h] [rbp-40h] BYREF
  __int128 v16; // [rsp+40h] [rbp-30h] BYREF
  __int128 v17; // [rsp+50h] [rbp-20h] BYREF
  __int128 v18; // [rsp+60h] [rbp-10h] BYREF

  v15 = *a3;
  std::vector<bool>::_Make_iter(a1, (__int64 *)&v14, &v15);
  v16 = *v5;
  std::vector<bool>::_Make_iter(a1, (__int64 *)&v15, &v16);
  v6 = *((_QWORD *)&v14 + 1) + 32 * (((__int64)v14 - *a1) >> 2);
  if ( v14 != v15 )
  {
    v7 = std::vector<bool>::end((unsigned __int64 *)a1, &v17);
    v16 = v14;
    v14 = *v7;
    v8 = std::_Copy_unchecked<std::_Vb_iterator<std::_Wrap_alloc<std::allocator<unsigned int>>>,std::_Vb_iterator<std::_Wrap_alloc<std::allocator<unsigned int>>>,std::_Vb_iterator<std::_Wrap_alloc<std::allocator<unsigned int>>>>(
           &v18,
           (__int64)&v15,
           (__int64 *)&v14,
           (__int64 *)&v16);
    std::vector<bool>::_Trim(a1, v8[1] + 32 * ((*v8 - *a1) >> 2));
  }
  v15 = (unsigned __int64)*a1;
  *a2 = v15;
  v9 = (unsigned __int64 *)a2 + 1;
  if ( v6 >= 0 || (v10 = *v9, *v9 >= -v6) )
  {
    v11 = v6 + *v9;
    v12 = 4 * (v11 >> 5);
  }
  else
  {
    v11 = v10 + v6;
    v12 = -4LL - 4 * (~(v10 + v6) >> 5);
  }
  *(_QWORD *)a2 += v12;
  *v9 = v11;
  *v9 = v11 & 0x1F;
  return a2;
}
