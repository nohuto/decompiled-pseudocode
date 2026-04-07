/*
 * XREFs of ??$_Fnv1a_append_value@W4ShellTransitionType@Transitions@Udwm@winrt@@@std@@YA_K_KAEBW4ShellTransitionType@Transitions@Udwm@winrt@@@Z @ 0x18004E460
 * Callers:
 *     ??$_Hash_representation@W4ShellTransitionType@Transitions@Udwm@winrt@@@std@@YA_KAEBW4ShellTransitionType@Transitions@Udwm@winrt@@@Z @ 0x18004C158 (--$_Hash_representation@W4ShellTransitionType@Transitions@Udwm@winrt@@@std@@YA_KAEBW4ShellTransi.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall std::_Fnv1a_append_value<enum winrt::Udwm::Transitions::ShellTransitionType>(
        __int64 a1,
        unsigned __int8 *a2)
{
  return 0x100000001B3LL
       * (a2[3] ^ (0x100000001B3LL
                 * (a2[2] ^ (0x100000001B3LL * ((0x100000001B3LL * (*a2 ^ 0xCBF29CE484222325uLL)) ^ a2[1])))));
}
