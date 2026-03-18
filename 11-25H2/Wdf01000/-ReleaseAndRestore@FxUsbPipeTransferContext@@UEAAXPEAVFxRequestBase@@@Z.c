/*
 * XREFs of ?ReleaseAndRestore@FxUsbPipeTransferContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x140059BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeMdls@FxRequestBase@@QEAAXXZ @ 0x140059D30 (-FreeMdls@FxRequestBase@@QEAAXXZ.c)
 *     ?FxMdlFree@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x140059DF8 (-FxMdlFree@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 *     memset @ 0x1400AC740 (memset.c)
 */

void __fastcall FxUsbPipeTransferContext::ReleaseAndRestore(FxUsbPipeTransferContext *this, FxRequestBase *Request)
{
  _MDL *m_PartialMdl; // rcx
  IFxMemory *m_RequestMemory; // rcx

  m_PartialMdl = this->m_PartialMdl;
  if ( m_PartialMdl )
  {
    if ( this->m_UnlockPages )
    {
      MmUnlockPages(m_PartialMdl);
      this->m_UnlockPages = 0;
    }
    FxMdlFree(Request->m_Globals, this->m_PartialMdl);
    this->m_PartialMdl = 0LL;
  }
  FxRequestBase::FreeMdls(Request);
  m_RequestMemory = this->m_RequestMemory;
  if ( m_RequestMemory )
  {
    m_RequestMemory->Release(
      m_RequestMemory,
      this,
      112,
      "minkernel\\wdf\\framework\\shared\\core\\fxrequestcontext.cpp");
    this->m_RequestMemory = 0LL;
  }
  memset(&this->m_CompletionParams, 0, sizeof(this->m_CompletionParams));
  this->m_CompletionParams.Size = 72;
  this->m_CompletionParams.Type = WdfRequestTypeNoFormat;
}
