/*
 * XREFs of ?_Change_array@?$vector@V?$sub_match@PEBG@std@@V?$allocator@V?$sub_match@PEBG@std@@@2@@std@@AEAAXQEAV?$sub_match@PEBG@2@_K1@Z @ 0x1801395B0
 * Callers:
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@V?$sub_match@PEBG@std@@V?$allocator@V?$sub_match@PEBG@std@@@2@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18012F6D8 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@V-$sub_match@PEBG@std@@V-$allocator@V-$sub.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180018614 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<std::sub_match<unsigned short const *>>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char *v6; // rcx
  __int64 result; // rax

  v6 = *(char **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)(24 * ((*(_QWORD *)(a1 + 16) - (_QWORD)v6) / 24LL)));
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 24 * a3;
  result = 3 * a4;
  *(_QWORD *)(a1 + 16) = a2 + 24 * a4;
  return result;
}
