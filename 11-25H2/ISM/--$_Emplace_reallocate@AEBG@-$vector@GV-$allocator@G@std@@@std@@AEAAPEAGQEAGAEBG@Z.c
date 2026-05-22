/*
 * XREFs of ??$_Emplace_reallocate@AEBG@?$vector@GV?$allocator@G@std@@@std@@AEAAPEAGQEAGAEBG@Z @ 0x1800D6768
 * Callers:
 *     ?OnInvalidateInput@MobileButtonDeviceCollection@@UEAAJPEAX@Z @ 0x1800D7AF0 (-OnInvalidateInput@MobileButtonDeviceCollection@@UEAAJPEAX@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180017AF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18009AC3C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     memmove_0 @ 0x1801C7D08 (memmove_0.c)
 */

char *__fastcall std::vector<unsigned short>::_Emplace_reallocate<unsigned short const &>(
        __int64 a1,
        _BYTE *a2,
        _WORD *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  __int64 v11; // r14
  char *v12; // rax
  char *v13; // rdi
  char *v14; // rsi
  _BYTE *v15; // r8
  _BYTE *v16; // rdx
  char *v17; // rcx
  size_t v18; // r8
  unsigned __int64 v19; // rax
  char *result; // rax
  __int64 v21; // [rsp+50h] [rbp+8h]
  char *v22; // [rsp+58h] [rbp+10h]

  v6 = (__int64)&a2[-*(_QWORD *)a1] >> 1;
  v7 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 1;
  if ( v7 == 0x7FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v7 + 1;
  v9 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 1;
  if ( v9 <= 0x7FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v19 = (v9 >> 1) + v9;
    v10 = v8;
    if ( v19 >= v8 )
      v10 = v19;
    v21 = v10;
    if ( v10 > 0x7FFFFFFFFFFFFFFFLL )
      std::_Throw_bad_array_new_length();
  }
  else
  {
    v10 = 0x7FFFFFFFFFFFFFFFLL;
    v21 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v11 = 2 * v10;
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(2 * v10);
  v13 = v12;
  v22 = v12;
  try
  {
    v14 = &v12[2 * v6];
    *(_WORD *)v14 = *a3;
    v15 = *(_BYTE **)(a1 + 8);
    v16 = *(_BYTE **)a1;
    v17 = v12;
    if ( a2 == v15 )
    {
      v18 = v15 - v16;
    }
    else
    {
      memmove_0(v12, v16, (size_t)&a2[-*(_QWORD *)a1]);
      v17 = v14 + 2;
      v18 = *(_QWORD *)(a1 + 8) - (_QWORD)a2;
      v16 = a2;
    }
    memmove_0(v17, v16, v18);
    if ( *(_QWORD *)a1 )
      std::_Deallocate<16,0>(
        *(char **)a1,
        (const struct std::nothrow_t *)(2 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 1)));
    *(_QWORD *)a1 = v13;
    *(_QWORD *)(a1 + 8) = &v13[2 * v8];
    *(_QWORD *)(a1 + 16) = &v13[v11];
    result = v14;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v22, (const struct std::nothrow_t *)(2 * v21));
    throw;
  }
  return result;
}
