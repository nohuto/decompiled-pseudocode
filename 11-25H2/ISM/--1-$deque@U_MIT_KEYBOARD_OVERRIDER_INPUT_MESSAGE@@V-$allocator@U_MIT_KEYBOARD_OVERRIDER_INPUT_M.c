/*
 * XREFs of ??1?$deque@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@V?$allocator@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@std@@@std@@QEAA@XZ @ 0x1800EE4D8
 * Callers:
 *     ??1?$queue@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@V?$deque@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@V?$allocator@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@std@@@std@@@std@@QEAA@XZ @ 0x1800EE5B0 (--1-$queue@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@V-$deque@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSA.c)
 *     ??1KeyboardOverriderDispatcher@@UEAA@XZ @ 0x1800F2154 (--1KeyboardOverriderDispatcher@@UEAA@XZ.c)
 * Callees:
 *     ?_Tidy@?$deque@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@V?$allocator@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@std@@@std@@AEAAXXZ @ 0x1800F1050 (-_Tidy@-$deque@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@V-$allocator@U_MIT_KEYBOARD_OVERRIDER_INP.c)
 */

void __fastcall std::deque<_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE>::~deque<_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE>(
        char **a1)
{
  char *v2; // rcx

  std::deque<_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE>::_Tidy();
  v2 = *a1;
  *a1 = 0LL;
  std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)0x10);
}
