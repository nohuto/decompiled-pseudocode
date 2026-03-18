/*
 * XREFs of ?_Growmap@?$deque@PEAVCMegaRectBatchCommand@@V?$allocator@PEAVCMegaRectBatchCommand@@@std@@@std@@AEAAX_K@Z @ 0x180042760
 * Callers:
 *     ?AppendMegaRectCommand@CMegaRectCollection@@QEAAXPEAVCMegaRectBatchCommand@@@Z @ 0x180042650 (-AppendMegaRectCommand@CMegaRectCollection@@QEAAXPEAVCMegaRectBatchCommand@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1802461D8 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

void __fastcall std::deque<CMegaRectBatchCommand *>::_Growmap(_QWORD *a1)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // r12
  __int64 v7; // rbx
  char *v8; // r15
  unsigned __int64 v9; // rsi
  char *v10; // rdi
  size_t v11; // rbx
  const void *v12; // rdx
  char *v13; // rbx
  size_t v14; // r8
  char *v15; // rcx
  _QWORD *v16; // rcx
  unsigned __int64 v17; // rdx

  v2 = 1LL;
  v3 = a1[2];
  if ( v3 )
    v2 = v3;
  while ( v2 == v3 || v2 < 8 )
  {
    if ( 0xFFFFFFFFFFFFFFFLL - v2 < v2 )
      std::_Xlength_error("deque<T> too long");
    v2 *= 2LL;
  }
  v4 = a1[3] >> 1;
  if ( v2 > 0x1FFFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(8 * v2);
  v6 = 8 * v4;
  v7 = a1[2];
  v8 = (char *)v5;
  v9 = v2 - v7;
  v10 = (char *)(8 * v4 + v5);
  v11 = 8 * v7 - 8 * v4;
  memmove_0(v10, (const void *)(a1[1] + 8 * v4), v11);
  v12 = (const void *)a1[1];
  v13 = &v10[v11];
  if ( v4 > v9 )
  {
    memmove_0(v13, v12, 8 * v9);
    memmove_0(v8, (const void *)(8 * v9 + a1[1]), v6 - 8 * v9);
    v15 = &v8[v6 - 8 * v9];
    v14 = 8 * v9;
  }
  else
  {
    memmove_0(v13, v12, 8 * v4);
    memset_0(&v13[v6], 0, 8 * (v9 - v4));
    v14 = 8 * v4;
    v15 = v8;
  }
  memset_0(v15, 0, v14);
  v16 = (_QWORD *)a1[1];
  if ( v16 )
  {
    v17 = 8LL * a1[2];
    if ( v17 >= 0x1000 )
    {
      v17 += 39LL;
      if ( (unsigned __int64)v16 - *(v16 - 1) - 8 > 0x1F )
        _invalid_parameter_noinfo_noreturn();
      v16 = (_QWORD *)*(v16 - 1);
    }
    operator delete(v16, v17);
  }
  a1[1] = v8;
  a1[2] += v9;
}
