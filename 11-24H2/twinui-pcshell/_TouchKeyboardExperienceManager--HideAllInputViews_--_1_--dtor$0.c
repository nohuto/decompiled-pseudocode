/*
 * XREFs of _TouchKeyboardExperienceManager::HideAllInputViews_::_1_::dtor$0 @ 0x1806D6A85
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TouchKeyboardExperienceManager::HideAllInputViews_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  std::vector<std::shared_ptr<GameMruItem>>::_Tidy(a2 + 32);
}
