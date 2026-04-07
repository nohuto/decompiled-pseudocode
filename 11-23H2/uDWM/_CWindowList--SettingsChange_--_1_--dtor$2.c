/*
 * XREFs of _CWindowList::SettingsChange_::_1_::dtor$2 @ 0x180067100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CWindowList::SettingsChange_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  CGuard<CDwmCS>::~CGuard<CDwmCS>((struct _RTL_CRITICAL_SECTION **)(a2 + 48));
}
