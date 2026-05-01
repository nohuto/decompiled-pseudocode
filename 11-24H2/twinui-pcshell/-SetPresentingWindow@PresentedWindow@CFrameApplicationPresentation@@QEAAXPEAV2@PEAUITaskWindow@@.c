/*
 * XREFs of ?SetPresentingWindow@PresentedWindow@CFrameApplicationPresentation@@QEAAXPEAV2@PEAUITaskWindow@@PEAUHWND__@@@Z @ 0x1800D0F08
 * Callers:
 *     _lambda_201adf67891f12ccd8a16b46f471aeff_::operator() @ 0x1800D11FC (_lambda_201adf67891f12ccd8a16b46f471aeff_--operator().c)
 *     _lambda_ffa95d5ea910b6ca98d895ec7ec1025e_::operator() @ 0x18030A098 (_lambda_ffa95d5ea910b6ca98d895ec7ec1025e_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180020A48 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800D1014 (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CFrameApplicationPresentation::PresentedWindow::SetPresentingWindow(
        CFrameApplicationPresentation::PresentedWindow *this,
        struct CFrameApplicationPresentation *a2,
        struct ITaskWindow *a3,
        HWND a4)
{
  __int64 v7; // rax
  __int64 v8; // rcx
  HWND *v9; // rbx
  __int64 v10; // rdx
  __int64 v12; // [rsp+28h] [rbp-8h] BYREF
  __int64 v13; // [rsp+50h] [rbp+20h] BYREF

  v12 = 0LL;
  v7 = (*(__int64 (__fastcall **)(struct CFrameApplicationPresentation *, __int64 *))(*(_QWORD *)a2 + 64LL))(a2, &v13);
  Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=(&v12, v7);
  v8 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = (HWND *)((char *)this + 24);
  if ( *((struct ITaskWindow **)this + 2) != a3 || *v9 != a4 )
    *((_BYTE *)this + 32) = 0;
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 2, (__int64)a3);
  *v9 = a4;
  (*(void (__fastcall **)(struct CFrameApplicationPresentation *, __int64 *))(*(_QWORD *)a2 + 64LL))(a2, &v13);
  v10 = v13;
  if ( v13 != v12 )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 80) + 520LL))(*((_QWORD *)a2 + 80));
    v10 = v13;
  }
  if ( v10 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
}
