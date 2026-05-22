/*
 * XREFs of ??$_Reallocate@$0A@@?$vector@UINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@AEAAXAEA_K@Z @ 0x180183690
 * Callers:
 *     ??$construct@UInputSpacePayload@@AEAUINPUT_SPACE_PAYLOAD@@@?$_Default_allocator_traits@V?$allocator@UInputSpacePayload@@@std@@@std@@SAXAEAV?$allocator@UInputSpacePayload@@@1@QEAUInputSpacePayload@@AEAUINPUT_SPACE_PAYLOAD@@@Z @ 0x18008F53C (--$construct@UInputSpacePayload@@AEAUINPUT_SPACE_PAYLOAD@@@-$_Default_allocator_traits@V-$alloca.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180017AF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18009AC3C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     memmove_0 @ 0x1801C7D08 (memmove_0.c)
 */

__int64 __fastcall std::vector<INPUT_SPACE_REGION>::_Reallocate<0>(__int64 a1, __int64 *a2)
{
  unsigned __int64 v4; // rbx
  char *v5; // rax
  char *v6; // rdi
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  char *v12; // [rsp+40h] [rbp+8h]

  v4 = 0x8F5C28F5C28F5C29uLL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3);
  if ( (unsigned __int64)*a2 > 0x147AE147AE147AELL )
    std::_Throw_bad_array_new_length();
  v5 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(200 * *a2);
  v6 = v5;
  v12 = v5;
  try
  {
    memmove_0(v5, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
    v7 = *a2;
    v8 = v4;
    v9 = (__int64)v6;
    v10 = a1;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v12, (const struct std::nothrow_t *)(200 * *a2));
    throw;
  }
  return std::vector<INPUT_SPACE_REGION>::_Change_array(v10, v9, v8, v7);
}
