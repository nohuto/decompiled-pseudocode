/*
 * XREFs of _CSleepStudyPowerReferenceManager::CreatePowerReferenceSubBlocker_::_1_::catch$19 @ 0x18016882C
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800B056C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CSleepStudyPowerReferenceManager::CreatePowerReferenceSubBlocker_::_1_::catch_19(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 152),
                           (void *)0x108,
                           (int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
                           a4);
  return 0LL;
}
