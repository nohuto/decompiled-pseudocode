/*
 * XREFs of _KBViewInfo::KBViewInfo_::_1_::dtor$1 @ 0x18050BF0A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KBViewInfo::KBViewInfo_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<ITabletModeInputSource>::~ComPtr<ITabletModeInputSource>((__int64 *)(*(_QWORD *)(a2 + 48) + 8LL));
}
