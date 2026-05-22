/*
 * XREFs of ??$_Emplace_reallocate@AEBQEAVLightDismissClientProxy@@@?$vector@PEAVLightDismissClientProxy@@V?$allocator@PEAVLightDismissClientProxy@@@std@@@std@@AEAAPEAPEAVLightDismissClientProxy@@QEAPEAV2@AEBQEAV2@@Z @ 0x18015CCFC
 * Callers:
 *     ?OnConnected@LightDismissClientProxy@@MEAAJXZ @ 0x18015CB50 (-OnConnected@LightDismissClientProxy@@MEAAJXZ.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180018090 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800180C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memmove_0 @ 0x1801CF1A8 (memmove_0.c)
 */

char *__fastcall std::vector<LightDismissClientProxy *>::_Emplace_reallocate<LightDismissClientProxy * const &>(
        __int64 a1,
        _BYTE *a2,
        _QWORD *a3)
{
  __int64 v5; // rsi
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  size_t size_of; // rax
  char *v12; // rax
  void *v13; // rdi
  char *v14; // rsi
  const void *v15; // rdx
  void *v16; // rcx
  size_t v17; // r8
  char *result; // rax
  char *v19; // [rsp+58h] [rbp+10h]

  v5 = (a2 - (_BYTE *)LightDismissProcessor::s_clients) >> 3;
  v6 = (qword_180250F20 - (__int64)LightDismissProcessor::s_clients) >> 3;
  v7 = 0x1FFFFFFFFFFFFFFFLL;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v9 = (qword_180250F28 - (__int64)LightDismissProcessor::s_clients) >> 3;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v7 = v10 + v9;
    if ( v10 + v9 < v8 )
      v7 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v7);
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v13 = v12;
  v19 = v12;
  try
  {
    v14 = &v12[8 * v5];
    *(_QWORD *)v14 = *a3;
    v15 = LightDismissProcessor::s_clients;
    v16 = v12;
    if ( a2 == (_BYTE *)qword_180250F20 )
    {
      v17 = qword_180250F20 - (_QWORD)LightDismissProcessor::s_clients;
    }
    else
    {
      memmove_0(v12, LightDismissProcessor::s_clients, a2 - (_BYTE *)LightDismissProcessor::s_clients);
      v16 = v14 + 8;
      v17 = qword_180250F20 - (_QWORD)a2;
      v15 = a2;
    }
    memmove_0(v16, v15, v17);
    if ( LightDismissProcessor::s_clients )
      std::_Deallocate<16,0>(
        (char *)LightDismissProcessor::s_clients,
        (const struct std::nothrow_t *)((qword_180250F28 - (_QWORD)LightDismissProcessor::s_clients) & 0xFFFFFFFFFFFFFFF8uLL));
    LightDismissProcessor::s_clients = v13;
    qword_180250F20 = (__int64)v13 + 8 * v8;
    qword_180250F28 = (__int64)v13 + 8 * v7;
    result = v14;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v19, (const struct std::nothrow_t *)(8 * v7));
    throw;
  }
  return result;
}
