/*
 * XREFs of ??$_Emplace_reallocate@AEBVEdge@@@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@AEAAPEAVEdge@@QEAV2@AEBV2@@Z @ 0x1801A1AD8
 * Callers:
 *     ?AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801A2070 (-AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 *     ?AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1801A2194 (-AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180017AF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0IA@@std@@YA_K_K@Z @ 0x18009BAD0 (--$_Get_size_of_n@$0IA@@std@@YA_K_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@VEdge@@@std@@@std@@YAXPEAVEdge@@QEAV1@AEAV?$allocator@VEdge@@@0@@Z @ 0x1801A0610 (--$_Destroy_range@V-$allocator@VEdge@@@std@@@std@@YAXPEAVEdge@@QEAV1@AEAV-$allocator@VEdge@@@0@@.c)
 *     ??$_Uninitialized_move@PEAVEdge@@V?$allocator@VEdge@@@std@@@std@@YAPEAVEdge@@QEAV1@0PEAV1@AEAV?$allocator@VEdge@@@0@@Z @ 0x1801A1D38 (--$_Uninitialized_move@PEAVEdge@@V-$allocator@VEdge@@@std@@@std@@YAPEAVEdge@@QEAV1@0PEAV1@AEAV-$.c)
 *     ??0Edge@@QEAA@AEBV0@@Z @ 0x1801A1E78 (--0Edge@@QEAA@AEBV0@@Z.c)
 */

char *__fastcall std::vector<Edge>::_Emplace_reallocate<Edge const &>(char **a1, char *a2, const struct Edge *a3)
{
  __int64 v5; // r15
  __int64 v6; // rsi
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  size_t size_of; // rax
  char *v12; // r14
  char *v13; // r15
  char *v14; // rdx
  char *v15; // r8
  char *v16; // rcx
  Edge *v18; // [rsp+70h] [rbp+8h]

  v5 = a2 - *a1;
  v6 = (a1[1] - *a1) >> 7;
  v7 = 0x1FFFFFFFFFFFFFFLL;
  if ( v6 == 0x1FFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v9 = (a1[2] - *a1) >> 7;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v7 = v10 + v9;
    if ( v10 + v9 < v8 )
      v7 = v8;
  }
  size_of = std::_Get_size_of_n<128>(v7);
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v13 = &v12[v5 & 0xFFFFFFFFFFFFFF80uLL];
  try
  {
    Edge::Edge((Edge *)v13, a3);
    v18 = (Edge *)v13;
    v14 = a1[1];
    v15 = v12;
    v16 = *a1;
    if ( a2 != v14 )
    {
      std::_Uninitialized_move<Edge *>(v16, a2, v12);
      v18 = (Edge *)v12;
      v15 = v13 + 128;
      v14 = a1[1];
      v16 = a2;
    }
    std::_Uninitialized_move<Edge *>(v16, v14, v15);
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<Edge>>(v18, (Edge *)(v13 + 128));
    std::_Deallocate<16,0>(v12, (const struct std::nothrow_t *)(v7 << 7));
    throw;
  }
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<Edge>>((Edge *)*a1, (Edge *)a1[1]);
    std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)((a1[2] - *a1) & 0xFFFFFFFFFFFFFF80uLL));
  }
  *a1 = v12;
  a1[1] = &v12[128 * v8];
  a1[2] = &v12[128 * v7];
  return v13;
}
