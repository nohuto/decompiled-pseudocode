/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@EV?$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1800FBB30
 * Callers:
 *     ?SetShapeForInputType@DesktopSystemCursorService@@UEAAJW4InputType@@PEBU_MIT_CURSOR_MANAGEMENT_MESSAGE@@@Z @ 0x180077720 (-SetShapeForInputType@DesktopSystemCursorService@@UEAAJW4InputType@@PEBU_MIT_CURSOR_MANAGEMENT_M.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800180C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     memmove_0 @ 0x1801CF1A8 (memmove_0.c)
 */

char *__fastcall std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>(__int64 a1, unsigned __int64 a2)
{
  size_t v4; // rbx
  __int64 v5; // r15
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  char *v8; // rax
  char *v9; // rsi
  char *result; // rax
  char *v11; // [rsp+48h] [rbp+10h]

  v4 = 0x7FFFFFFFFFFFFFFFLL;
  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v5 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
  v6 = *(_QWORD *)(a1 + 16) - *(_QWORD *)a1;
  v7 = v6 >> 1;
  if ( v6 <= 0x7FFFFFFFFFFFFFFFLL - (v6 >> 1) )
  {
    v4 = v7 + v6;
    if ( v7 + v6 < a2 )
      v4 = a2;
  }
  v8 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v4);
  v9 = v8;
  v11 = v8;
  try
  {
    memset_0(&v8[v5], 0, a2 - v5);
    memmove_0(v9, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
    if ( *(_QWORD *)a1 )
      std::_Deallocate<16,0>(*(char **)a1, (const struct std::nothrow_t *)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1));
    *(_QWORD *)a1 = v9;
    *(_QWORD *)(a1 + 8) = &v9[a2];
    result = &v9[v4];
    *(_QWORD *)(a1 + 16) = &v9[v4];
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v11, (const struct std::nothrow_t *)v4);
    throw;
  }
  return result;
}
