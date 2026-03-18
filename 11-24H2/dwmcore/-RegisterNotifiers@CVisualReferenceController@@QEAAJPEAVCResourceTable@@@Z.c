/*
 * XREFs of ?RegisterNotifiers@CVisualReferenceController@@QEAAJPEAVCResourceTable@@@Z @ 0x180095FF4
 * Callers:
 *     ?ProcessUpdate@CVisualReferenceController@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALREFERENCECONTROLLER@@@Z @ 0x180095ED8 (-ProcessUpdate@CVisualReferenceController@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALREFERENC.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Create@?$CWeakReference@VCVisual@@@@SAXPEAVCVisual@@PEAPEAV1@@Z @ 0x180095AF0 (-Create@-$CWeakReference@VCVisual@@@@SAXPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?AddListener@CResourceWeakRef@@QEAAXPEAVCResource@@@Z @ 0x1800960F4 (-AddListener@CResourceWeakRef@@QEAAXPEAVCResource@@@Z.c)
 */

__int64 __fastcall CVisualReferenceController::RegisterNotifiers(
        CVisualReferenceController *this,
        struct CResourceTable *a2)
{
  struct IUnknownWeakRef **v3; // rbx

  if ( *((_QWORD *)this + 9) )
  {
    v3 = (struct IUnknownWeakRef **)((char *)this + 80);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 10);
    CWeakReference<CVisual>::Create(*((CResource **)this + 9), v3);
    CResourceWeakRef::AddListener(*v3, this);
    *((_QWORD *)this + 9) = 0LL;
  }
  return 0LL;
}
