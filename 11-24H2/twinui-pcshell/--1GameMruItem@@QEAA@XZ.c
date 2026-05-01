/*
 * XREFs of ??1GameMruItem@@QEAA@XZ @ 0x180315410
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@UGameMruItem@@@std@@EEAAXXZ @ 0x180319AB0 (-_Destroy@-$_Ref_count_obj2@UGameMruItem@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall GameMruItem::~GameMruItem(void **this)
{
  std::wstring::_Tidy_deallocate(this + 9);
  std::wstring::_Tidy_deallocate(this + 5);
  std::wstring::_Tidy_deallocate(this + 1);
}
