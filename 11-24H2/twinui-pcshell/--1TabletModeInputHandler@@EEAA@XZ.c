/*
 * XREFs of ??1TabletModeInputHandler@@EEAA@XZ @ 0x180531114
 * Callers:
 *     ??_ETabletModeInputHandler@@EEAAPEAXI@Z @ 0x180531150 (--_ETabletModeInputHandler@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

void __fastcall TabletModeInputHandler::~TabletModeInputHandler(TabletModeInputHandler *this)
{
  *(_QWORD *)this = &TabletModeInputHandler::`vftable'{for `Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ITabletModeInputHandler>'};
  *((_QWORD *)this + 2) = &DragInputHandler::`vftable'{for `CWRLImpWndProc<DragInputHandler>'};
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 4);
  *((_DWORD *)this + 3) = -1073741823;
}
