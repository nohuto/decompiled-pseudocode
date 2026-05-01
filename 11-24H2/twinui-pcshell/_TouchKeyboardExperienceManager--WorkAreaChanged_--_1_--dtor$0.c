/*
 * XREFs of _TouchKeyboardExperienceManager::WorkAreaChanged_::_1_::dtor$0 @ 0x1806DD187
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TouchKeyboardExperienceManager::WorkAreaChanged_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  std::vector<std::shared_ptr<GameMruItem>>::_Tidy(a2 + 48);
}
