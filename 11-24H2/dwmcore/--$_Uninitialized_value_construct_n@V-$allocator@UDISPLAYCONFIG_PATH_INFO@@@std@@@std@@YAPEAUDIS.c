/*
 * XREFs of ??$_Uninitialized_value_construct_n@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@YAPEAUDISPLAYCONFIG_PATH_INFO@@PEAU1@_KAEAV?$allocator@UDISPLAYCONFIG_PATH_INFO@@@0@@Z @ 0x180287910
 * Callers:
 *     CalculateDisplayBlankTime @ 0x180229E74 (CalculateDisplayBlankTime.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UDISPLAYCONFIG_PATH_INFO@@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18028769C (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UDISPLAYCONFIG_PATH_INFO@@V-$allocator@UDI.c)
 * Callees:
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 */

char *__fastcall std::_Uninitialized_value_construct_n<std::allocator<DISPLAYCONFIG_PATH_INFO>>(char *a1, __int64 a2)
{
  char *v2; // rdi
  __int64 v3; // rbx

  v2 = a1;
  if ( a2 )
  {
    v3 = 72 * a2;
    memset_0(a1, 0, 72 * a2);
    v2 += v3;
  }
  return v2;
}
