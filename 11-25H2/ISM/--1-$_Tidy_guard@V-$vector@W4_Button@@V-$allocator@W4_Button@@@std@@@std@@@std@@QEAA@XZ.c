/*
 * XREFs of ??1?$_Tidy_guard@V?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@@std@@QEAA@XZ @ 0x18019E480
 * Callers:
 *     ??0?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAA@AEBV01@@Z @ 0x18019E260 (--0-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAA@V?$initializer_list@W4_Button@@@1@AEBV?$allocator@W4_Button@@@1@@Z @ 0x18019E308 (--0-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QEAA@V-$initializer_list@W4_Button@@@.c)
 * Callees:
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x180015AA8 (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall std::_Tidy_guard<std::vector<enum _Button>>::~_Tidy_guard<std::vector<enum _Button>>(__int64 *a1)
{
  __int64 v1; // rcx

  v1 = *a1;
  if ( v1 )
    std::vector<Windows::UI::Color>::_Tidy(v1);
}
