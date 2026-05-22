/*
 * XREFs of ?_Growmap@?$deque@UKeyboardEvent@@V?$allocator@UKeyboardEvent@@@std@@@std@@AEAAX_K@Z @ 0x1800F51B8
 * Callers:
 *     ??$_Emplace_back_internal@AEBUKeyboardEvent@@@?$deque@UKeyboardEvent@@V?$allocator@UKeyboardEvent@@@std@@@std@@AEAAXAEBUKeyboardEvent@@@Z @ 0x1800F3C04 (--$_Emplace_back_internal@AEBUKeyboardEvent@@@-$deque@UKeyboardEvent@@V-$allocator@UKeyboardEven.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180018090 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800180C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     memmove_0 @ 0x1801CF1A8 (memmove_0.c)
 */

void __fastcall std::deque<KeyboardEvent>::_Growmap(_QWORD *a1)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // r12
  size_t size_of; // rax
  char *v6; // rax
  __int64 v7; // r15
  __int64 v8; // rbx
  char *v9; // r14
  unsigned __int64 v10; // rsi
  char *v11; // rdi
  size_t v12; // rbx
  const void *v13; // rdx
  char *v14; // rbx
  size_t v15; // r8
  char *v16; // rcx
  char *v17; // rcx

  v2 = 1LL;
  v3 = a1[2];
  if ( v3 )
    v2 = v3;
  while ( v2 == v3 || v2 < 8 )
  {
    if ( 0xDD67C8A60DD67CLL - v2 < v2 )
      std::_Xlength_error("deque<T> too long");
    v2 *= 2LL;
  }
  v4 = a1[3];
  size_of = std::_Get_size_of_n<8>(v2);
  v6 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v7 = 8 * v4;
  v8 = a1[2];
  v9 = v6;
  v10 = v2 - v8;
  v11 = &v6[8 * v4];
  v12 = 8 * v8 - 8 * v4;
  memmove_0(v11, (const void *)(a1[1] + 8 * v4), v12);
  v13 = (const void *)a1[1];
  v14 = &v11[v12];
  if ( v4 > v10 )
  {
    memmove_0(v14, v13, 8 * v10);
    memmove_0(v9, (const void *)(8 * v10 + a1[1]), v7 - 8 * v10);
    v16 = &v9[v7 - 8 * v10];
    v15 = 8 * v10;
  }
  else
  {
    memmove_0(v14, v13, 8 * v4);
    memset_0(&v14[v7], 0, 8 * (v10 - v4));
    v15 = 8 * v4;
    v16 = v9;
  }
  memset_0(v16, 0, v15);
  v17 = (char *)a1[1];
  if ( v17 )
    std::_Deallocate<16,0>(v17, (const struct std::nothrow_t *)(8LL * a1[2]));
  a1[1] = v9;
  a1[2] += v10;
}
