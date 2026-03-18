/*
 * XREFs of ??0CExcludeVisualReference@@QEAA@PEAVCVisual@@@Z @ 0x18013B7A8
 * Callers:
 *     ?Create@CExcludeVisualReference@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x18013B730 (-Create@CExcludeVisualReference@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x180198818 (-AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Create@?$CWeakReference@VCVisual@@@@SAXPEAVCVisual@@PEAPEAV1@@Z @ 0x18013AA70 (-Create@-$CWeakReference@VCVisual@@@@SAXPEAVCVisual@@PEAPEAV1@@Z.c)
 */

CExcludeVisualReference *__fastcall CExcludeVisualReference::CExcludeVisualReference(
        CExcludeVisualReference *this,
        struct CVisual *a2)
{
  struct IUnknownWeakRef **v2; // rbx

  v2 = (struct IUnknownWeakRef **)((char *)this + 8);
  *(_QWORD *)this = &CExcludeVisualReference::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 4) = 0;
  *((_BYTE *)this + 20) = 0;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 1);
  CWeakReference<CVisual>::Create(a2, v2);
  return this;
}
