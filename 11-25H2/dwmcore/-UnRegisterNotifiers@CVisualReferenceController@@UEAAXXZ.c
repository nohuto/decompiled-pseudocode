/*
 * XREFs of ?UnRegisterNotifiers@CVisualReferenceController@@UEAAXXZ @ 0x18013B060
 * Callers:
 *     ?ProcessUpdate@CVisualReferenceController@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALREFERENCECONTROLLER@@@Z @ 0x18013AEF0 (-ProcessUpdate@CVisualReferenceController@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALREFERENC.c)
 *     ??1CVisualReferenceController@@MEAA@XZ @ 0x18013C3AC (--1CVisualReferenceController@@MEAA@XZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?RemoveListener@CResourceWeakRef@@QEAAXPEBVCResource@@@Z @ 0x18013B090 (-RemoveListener@CResourceWeakRef@@QEAAXPEBVCResource@@@Z.c)
 */

void __fastcall CVisualReferenceController::UnRegisterNotifiers(CVisualReferenceController *this)
{
  CResourceWeakRef **v1; // rbx

  v1 = (CResourceWeakRef **)((char *)this + 80);
  if ( *((_QWORD *)this + 10) )
  {
    CResourceWeakRef::RemoveListener(*v1, this);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)v1);
  }
}
