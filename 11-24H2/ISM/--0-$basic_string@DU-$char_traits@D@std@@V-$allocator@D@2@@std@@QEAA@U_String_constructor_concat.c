/*
 * XREFs of ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@U_String_constructor_concat_tag@1@AEAV01@1@Z @ 0x1800C4D20
 * Callers:
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@0@Z @ 0x1800C4A38 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800180C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x18009C2CC (-_Xlen_string@std@@YAXXZ.c)
 *     ?_Calculate_growth@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@CA_K_K00@Z @ 0x1800C6268 (-_Calculate_growth@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@CA_K_K00@Z.c)
 *     memcpy_0 @ 0x1801CF19C (memcpy_0.c)
 *     memmove_0 @ 0x1801CF1A8 (memmove_0.c)
 */

__int64 *__fastcall std::string::string(__int64 *a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  _QWORD *v5; // rdi
  size_t v6; // rbp
  _QWORD *v7; // rsi
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r13
  __int64 *v11; // rax
  size_t v12; // r8
  const void *v13; // rdx
  char *v14; // rcx
  char *v15; // rbx
  __int64 v16; // rbx
  char *v17; // rax
  char *v18; // r12

  *(_OWORD *)a1 = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  v5 = a4;
  v6 = a3[2];
  v7 = a3;
  v8 = a4[2];
  v9 = a4[3];
  v10 = v8 + v6;
  if ( v8 <= a3[3] - v6 && v9 <= a3[3] )
  {
    v11 = a1;
    *(_OWORD *)a1 = *(_OWORD *)a3;
    *((_OWORD *)a1 + 1) = *((_OWORD *)a3 + 1);
    a3[2] = 0LL;
    a3[3] = 15LL;
    *(_BYTE *)a3 = 0;
    if ( (unsigned __int64)a1[3] > 0xF )
      v11 = (__int64 *)*a1;
    if ( a4[3] > 0xFuLL )
      v5 = (_QWORD *)*a4;
    v12 = v8 + 1;
    v13 = v5;
    v14 = (char *)v11 + v6;
LABEL_8:
    memcpy_0(v14, v13, v12);
    a1[2] = v10;
    return a1;
  }
  if ( v6 <= v9 - v8 )
  {
    *(_OWORD *)a1 = *(_OWORD *)a4;
    *((_OWORD *)a1 + 1) = *((_OWORD *)a4 + 1);
    a4[2] = 0LL;
    a4[3] = 15LL;
    *(_BYTE *)a4 = 0;
    v15 = (char *)*a1;
    memmove_0((void *)(*a1 + v6), (const void *)*a1, v8 + 1);
    if ( v7[3] > 0xFuLL )
      v7 = (_QWORD *)*v7;
    v12 = v6;
    v13 = v7;
    v14 = v15;
    goto LABEL_8;
  }
  if ( 0x7FFFFFFFFFFFFFFFLL - v6 < v8 )
    std::_Xlen_string();
  v16 = std::string::_Calculate_growth(v8 + v6);
  v17 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v16 + 1);
  *a1 = (__int64)v17;
  v18 = v17;
  a1[2] = v10;
  a1[3] = v16;
  if ( v7[3] > 0xFuLL )
    v7 = (_QWORD *)*v7;
  memcpy_0(v17, v7, v6);
  if ( v5[3] > 0xFuLL )
    v5 = (_QWORD *)*v5;
  memcpy_0(&v18[v6], v5, v8 + 1);
  return a1;
}
