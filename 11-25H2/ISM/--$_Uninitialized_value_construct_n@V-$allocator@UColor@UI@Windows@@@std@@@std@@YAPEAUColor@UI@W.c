/*
 * XREFs of ??$_Uninitialized_value_construct_n@V?$allocator@UColor@UI@Windows@@@std@@@std@@YAPEAUColor@UI@Windows@@PEAU123@_KAEAV?$allocator@UColor@UI@Windows@@@0@@Z @ 0x1800E4980
 * Callers:
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1800E48D0 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@.c)
 *     ?Initialize@LampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800E4F54 (-Initialize@LampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 */

char *__fastcall std::_Uninitialized_value_construct_n<std::allocator<Windows::UI::Color>>(char *a1, __int64 a2)
{
  char *v2; // rdi
  __int64 v3; // rbx

  v2 = a1;
  if ( a2 )
  {
    v3 = 4 * a2;
    memset_0(a1, 0, 4 * a2);
    v2 += v3;
  }
  return v2;
}
