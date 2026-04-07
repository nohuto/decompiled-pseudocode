/*
 * XREFs of ?_Growmap@?$deque@IV?$allocator@I@std@@@std@@AEAAX_K@Z @ 0x1800F24AC
 * Callers:
 *     ??$_Emplace_back_internal@I@?$deque@IV?$allocator@I@std@@@std@@AEAAX$$QEAI@Z @ 0x1800EEEFC (--$_Emplace_back_internal@I@-$deque@IV-$allocator@I@std@@@std@@AEAAX$$QEAI@Z.c)
 *     ??$_Emplace_back_internal@W4NodeType@JSONOutputArchive@cereal@@@?$deque@W4NodeType@JSONOutputArchive@cereal@@V?$allocator@W4NodeType@JSONOutputArchive@cereal@@@std@@@std@@AEAAX$$QEAW4NodeType@JSONOutputArchive@cereal@@@Z @ 0x1800EEFB0 (--$_Emplace_back_internal@W4NodeType@JSONOutputArchive@cereal@@@-$deque@W4NodeType@JSONOutputArc.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18001D1B4 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001F154 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180032448 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memset_0 @ 0x18005D520 (memset_0.c)
 *     memmove_0 @ 0x180066224 (memmove_0.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x18010DD40 (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall std::deque<unsigned int>::_Growmap(_QWORD *a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // r12
  unsigned __int64 size_of; // rax
  __int64 v7; // r15
  char *v8; // r14
  size_t v9; // rbx
  const void *v10; // rdx
  char *v11; // rbx
  size_t v12; // r8
  char *v13; // rcx
  __int64 result; // rax
  void *v15; // rcx

  v1 = a1[2];
  v3 = 1LL;
  if ( v1 )
    v3 = v1;
  while ( 1 )
  {
    v4 = v3 - v1;
    if ( v3 != v1 && v3 >= 8 )
      break;
    if ( 0xFFFFFFFFFFFFFFFLL - v3 < v3 )
      std::_Dwm_Xlength_error((const char *)v3);
    v3 *= 2LL;
  }
  v5 = a1[3] >> 2;
  size_of = std::_Get_size_of_n<8>(v3);
  v7 = 8 * v5;
  v8 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v9 = 8LL * a1[2] - 8 * v5;
  memmove_0(&v8[8 * v5], (const void *)(a1[1] + 8 * v5), v9);
  v10 = (const void *)a1[1];
  v11 = &v8[8 * v5 + v9];
  if ( v5 > v4 )
  {
    memmove_0(v11, v10, 8 * v4);
    memmove_0(v8, (const void *)(8 * v4 + a1[1]), v7 - 8 * v4);
    v13 = &v8[v7 - 8 * v4];
    v12 = 8 * v4;
  }
  else
  {
    memmove_0(v11, v10, 8 * v5);
    memset_0(&v11[v7], 0, 8 * (v4 - v5));
    v12 = 8 * v5;
    v13 = v8;
  }
  result = (__int64)memset_0(v13, 0, v12);
  v15 = (void *)a1[1];
  if ( v15 )
    result = std::_Deallocate<16,0>(v15, 8LL * a1[2]);
  a1[1] = v8;
  a1[2] += v4;
  return result;
}
