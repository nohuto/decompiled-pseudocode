/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVTileId@StartScreen@UI@WindowsUdk@@@Collections@Foundation@Windows@@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18002CD20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E10 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

_DWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<WindowsUdk::UI::StartScreen::TileId *> *>,Microsoft::WRL::FtmBase>::`vector deleting destructor'(
        _DWORD *a1,
        char a2)
{
  a1[11] = -1073741823;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1 + 8);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
