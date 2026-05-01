/*
 * XREFs of ?Cleanup@WindowArrangementView@@AEAAXXZ @ 0x18052A83C
 * Callers:
 *     wil::details::ScopeExitFn__lambda_f979e5553d16ff371761e90e29f383f9___::_ScopeExitFn__lambda_f979e5553d16ff371761e90e29f383f9___ @ 0x180529E3C (wil--details--ScopeExitFn__lambda_f979e5553d16ff371761e90e29f383f9___--_ScopeExitFn__lambda_f979.c)
 *     ?CommitPlaceModeTap@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z @ 0x18052A8E4 (-CommitPlaceModeTap@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z.c)
 *     ?EndDrag@WindowArrangementView@@AEAAJ_N@Z @ 0x18052AC7C (-EndDrag@WindowArrangementView@@AEAAJ_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

void __fastcall WindowArrangementView::Cleanup(WindowArrangementView *this)
{
  __int64 *v1; // rbx
  IUnknown *v2; // rcx

  v1 = (__int64 *)((char *)this + 96);
  v2 = (IUnknown *)*((_QWORD *)this + 12);
  if ( v2 )
  {
    IUnknown_SetSite(v2, 0LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v1);
  }
}
