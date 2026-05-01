/*
 * XREFs of ?FireInputPaneHiding@TouchKeyboardExperienceManager@@UEAAJIE@Z @ 0x180470790
 * Callers:
 *     <none>
 * Callees:
 *     ?FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@AEAAXI_N@Z @ 0x180292538 (-FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@AEAAXI_N@Z.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::FireInputPaneHiding(
        TouchKeyboardExperienceManager *this,
        unsigned int a2,
        char a3)
{
  TouchKeyboardExperienceManager::FireInputPaneHidingEvent(
    (TouchKeyboardExperienceManager *)((char *)this - 200),
    a2,
    a3 != 0);
  return 0LL;
}
