/*
 * XREFs of ??$_Reallocate@$0A@@?$vector@IV?$allocator@I@std@@@std@@AEAAXAEA_K@Z @ 0x18008B828
 * Callers:
 *     ?Initialize@PointerFrame@PointerInputMediator@@QEAAXPEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x180015084 (-Initialize@PointerFrame@PointerInputMediator@@QEAAXPEBUtagMANIPULATION_INPUT_INFO@@@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x180014ED8 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180017AF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1801C7D08 (memmove_0.c)
 */

__int64 __fastcall std::vector<unsigned int>::_Reallocate<0>(__int64 a1, unsigned __int64 *a2)
{
  __int64 v4; // rdi
  size_t size_of; // rax
  char *v6; // rax
  char *v7; // rsi
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  char *v13; // [rsp+40h] [rbp+8h]

  v4 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 2;
  size_of = std::_Get_size_of_n<4>(*a2);
  v6 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v7 = v6;
  v13 = v6;
  try
  {
    memmove_0(v6, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
    v8 = *a2;
    v9 = v4;
    v10 = (__int64)v7;
    v11 = a1;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v13, (const struct std::nothrow_t *)(4 * *a2));
    throw;
  }
  return std::vector<unsigned int>::_Change_array(v11, v10, v9, v8);
}
