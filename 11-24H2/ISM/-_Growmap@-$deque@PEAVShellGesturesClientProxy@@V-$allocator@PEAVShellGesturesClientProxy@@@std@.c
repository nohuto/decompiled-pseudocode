/*
 * XREFs of ?_Growmap@?$deque@PEAVShellGesturesClientProxy@@V?$allocator@PEAVShellGesturesClientProxy@@@std@@@std@@AEAAX_K@Z @ 0x18015A644
 * Callers:
 *     ??$_Emplace_back_internal@AEAPEAVShellGesturesClientProxy@@@?$deque@PEAVShellGesturesClientProxy@@V?$allocator@PEAVShellGesturesClientProxy@@@std@@@std@@AEAAXAEAPEAVShellGesturesClientProxy@@@Z @ 0x18002E198 (--$_Emplace_back_internal@AEAPEAVShellGesturesClientProxy@@@-$deque@PEAVShellGesturesClientProxy.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180018090 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800180C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     memmove_0 @ 0x1801CF1A8 (memmove_0.c)
 */

void std::deque<ShellGesturesClientProxy *>::_Growmap()
{
  unsigned __int64 v0; // rsi
  unsigned __int64 v1; // r15
  size_t size_of; // rax
  char *v3; // rax
  __int64 v4; // r14
  unsigned __int64 v5; // rsi
  char *v6; // rbp
  char *v7; // rdi
  char *v8; // rdx
  size_t v9; // rbx
  char *v10; // rdi
  size_t v11; // r8
  char *v12; // rcx
  size_t v13; // r14

  v0 = 1LL;
  if ( qword_180250F00 )
    v0 = qword_180250F00;
  while ( v0 == qword_180250F00 || v0 < 8 )
  {
    if ( 0xFFFFFFFFFFFFFFFLL - v0 < v0 )
      std::_Xlength_error("deque<T> too long");
    v0 *= 2LL;
  }
  v1 = (unsigned __int64)qword_180250F08 >> 1;
  size_of = std::_Get_size_of_n<8>(v0);
  v3 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v4 = 8 * v1;
  v5 = v0 - qword_180250F00;
  v6 = v3;
  v7 = &v3[8 * v1];
  v8 = (char *)Src + 8 * v1;
  v9 = (size_t)Src + 8 * qword_180250F00 - (_QWORD)v8;
  memmove_0(v7, v8, v9);
  v10 = &v7[v9];
  if ( v1 > v5 )
  {
    memmove_0(v10, Src, 8 * v5);
    v13 = (size_t)Src + v4 - ((_QWORD)Src + 8 * v5);
    memmove_0(v6, (char *)Src + 8 * v5, v13);
    v12 = &v6[v13];
    v11 = 8 * v5;
  }
  else
  {
    memmove_0(v10, Src, 8 * v1);
    memset_0(&v10[v4], 0, 8 * (v5 - v1));
    v11 = 8 * v1;
    v12 = v6;
  }
  memset_0(v12, 0, v11);
  if ( Src )
    std::_Deallocate<16,0>((char *)Src, (const struct std::nothrow_t *)(8 * qword_180250F00));
  qword_180250F00 += v5;
  Src = v6;
}
