/*
 * XREFs of ??1?$queue@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@V?$deque@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@V?$allocator@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@std@@@std@@@std@@QEAA@XZ @ 0x1800EF860
 * Callers:
 *     _KeyboardOverriderDispatcher::KeyboardOverriderDispatcher_::_1_::dtor$1 @ 0x1801D632E (_KeyboardOverriderDispatcher--KeyboardOverriderDispatcher_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::queue<_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE>::~queue<_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE,std::deque<_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE>>(
        char **a1)
{
  std::deque<_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE>::~deque<_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE>(a1);
}
