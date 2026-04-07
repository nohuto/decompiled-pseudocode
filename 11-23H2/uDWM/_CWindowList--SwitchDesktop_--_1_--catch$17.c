/*
 * XREFs of _CWindowList::SwitchDesktop_::_1_::catch$17 @ 0x180067AB2
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CWindowList::SwitchDesktop_::_1_::catch_17(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 48) = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147467259, 0x1CC7u);
  return 0LL;
}
