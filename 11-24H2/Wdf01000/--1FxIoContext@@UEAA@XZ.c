/*
 * XREFs of ??1FxIoContext@@UEAA@XZ @ 0x14000EBB8
 * Callers:
 *     FxIoTargetSendIo @ 0x14000BF50 (FxIoTargetSendIo.c)
 *     FxIoTargetSendIoctl @ 0x14000D490 (FxIoTargetSendIoctl.c)
 *     ??_GFxIoContext@@UEAAPEAXI@Z @ 0x1400211C0 (--_GFxIoContext@@UEAAPEAXI@Z.c)
 *     ?CyclePort@FxUsbDevice@@QEAAJXZ @ 0x14009EEF8 (-CyclePort@FxUsbDevice@@QEAAJXZ.c)
 *     ?Reset@FxUsbDevice@@QEAAJXZ @ 0x14009FF84 (-Reset@FxUsbDevice@@QEAAJXZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x14000EC70 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x140082ED4 (-FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 */

void __fastcall FxIoContext::~FxIoContext(FxIoContext *this)
{
  void *m_BufferToFree; // rcx
  _MDL *m_MdlToFree; // rcx

  this->__vftable = (FxIoContext_vtbl *)FxIoContext::`vftable';
  m_BufferToFree = this->m_BufferToFree;
  if ( m_BufferToFree )
  {
    FxPoolFree(m_BufferToFree);
    this->m_BufferToFree = 0LL;
  }
  this->m_BufferToFreeLength = 0LL;
  m_MdlToFree = this->m_MdlToFree;
  this->m_CopyBackToBuffer = 0;
  if ( m_MdlToFree )
  {
    if ( this->m_UnlockPages )
    {
      MmUnlockPages(m_MdlToFree);
      this->m_UnlockPages = 0;
    }
    if ( BYTE4(this->m_OriginalMdl[6].StartVa) )
      FxMdlFreeDebug(this->m_DriverGlobals, this->m_MdlToFree);
    else
      IoFreeMdl(this->m_MdlToFree);
    this->m_MdlToFree = 0LL;
  }
  this->__vftable = (FxIoContext_vtbl *)FxRequestContext::`vftable';
}
