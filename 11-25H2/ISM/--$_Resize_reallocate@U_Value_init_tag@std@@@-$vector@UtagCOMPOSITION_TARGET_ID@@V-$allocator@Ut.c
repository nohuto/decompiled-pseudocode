/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UtagCOMPOSITION_TARGET_ID@@V?$allocator@UtagCOMPOSITION_TARGET_ID@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18013F39C
 * Callers:
 *     ?GetDCompStatisticsAndLogTelemetry@GestureServices@@AEAAXUtagPOINT@@_KPEAVGestureHandler@@@Z @ 0x180140298 (-GetDCompStatisticsAndLogTelemetry@GestureServices@@AEAAXUtagPOINT@@_KPEAVGestureHandler@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180017AF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18009AC3C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@UtagCOMPOSITION_TARGET_ID@@@std@@@std@@YAPEAUtagCOMPOSITION_TARGET_ID@@PEAU1@_KAEAV?$allocator@UtagCOMPOSITION_TARGET_ID@@@0@@Z @ 0x18013F784 (--$_Uninitialized_value_construct_n@V-$allocator@UtagCOMPOSITION_TARGET_ID@@@std@@@std@@YAPEAUta.c)
 *     memmove_0 @ 0x1801C7D08 (memmove_0.c)
 */

char *__fastcall std::vector<tagCOMPOSITION_TARGET_ID>::_Resize_reallocate<std::_Value_init_tag>(
        __int64 a1,
        unsigned __int64 a2)
{
  __int64 v4; // r14
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rax
  __int64 v8; // r15
  char *v9; // rax
  char *v10; // rdi
  char *result; // rax
  char *v12; // [rsp+58h] [rbp+10h]
  unsigned __int64 v13; // [rsp+60h] [rbp+18h]

  if ( a2 > 0x924924924924924LL )
    std::_Xlength_error("vector too long");
  v4 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 2);
  v5 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 2);
  v6 = v5 >> 1;
  if ( v5 > 0x924924924924924LL - (v5 >> 1) )
  {
    v7 = 0x924924924924924LL;
LABEL_5:
    v13 = v7;
    goto LABEL_6;
  }
  v7 = v6 + v5;
  if ( v6 + v5 < a2 )
  {
    v7 = a2;
    goto LABEL_5;
  }
  v13 = v6 + v5;
  if ( v7 > 0x924924924924924LL )
    std::_Throw_bad_array_new_length();
LABEL_6:
  v8 = 28 * v7;
  v9 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(28 * v7);
  v10 = v9;
  v12 = v9;
  try
  {
    std::_Uninitialized_value_construct_n<std::allocator<tagCOMPOSITION_TARGET_ID>>(&v9[28 * v4], a2 - v4);
    memmove_0(v10, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
    if ( *(_QWORD *)a1 )
      std::_Deallocate<16,0>(
        *(char **)a1,
        (const struct std::nothrow_t *)(4 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 2)));
    *(_QWORD *)a1 = v10;
    *(_QWORD *)(a1 + 8) = &v10[28 * a2];
    result = &v10[v8];
    *(_QWORD *)(a1 + 16) = &v10[v8];
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v12, (const struct std::nothrow_t *)(28 * v13));
    throw;
  }
  return result;
}
