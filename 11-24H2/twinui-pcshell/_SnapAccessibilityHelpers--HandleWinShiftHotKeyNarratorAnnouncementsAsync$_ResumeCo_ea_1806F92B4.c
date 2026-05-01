/*
 * XREFs of _SnapAccessibilityHelpers::HandleWinShiftHotKeyNarratorAnnouncementsAsync$_ResumeCoro$1_::_1_::dtor$5 @ 0x1806F92B4
 * Callers:
 *     <none>
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002AEA8 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

void __fastcall SnapAccessibilityHelpers::HandleWinShiftHotKeyNarratorAnnouncementsAsync__ResumeCoro_1_::_1_::dtor_5(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 232) = *(_QWORD *)(a2 + 112) + 88LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(*(_QWORD *)(a2 + 232));
}
