/*
 * XREFs of ?AddIrpReference@FxRequest@@QEAAXXZ @ 0x140008224
 * Callers:
 *     ?ProbeAndLockForWrite@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z @ 0x140007B18 (-ProbeAndLockForWrite@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z.c)
 *     ?ProbeAndLockForRead@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z @ 0x140007F34 (-ProbeAndLockForRead@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z.c)
 *     ?AddRef@FxRequestOutputBuffer@@UEAAKPEAXJPEBD@Z @ 0x140008200 (-AddRef@FxRequestOutputBuffer@@UEAAKPEAXJPEBD@Z.c)
 *     imp_WdfDmaTransactionExecute @ 0x1400621F0 (imp_WdfDmaTransactionExecute.c)
 *     ?AddRef@FxRequestSystemBuffer@@UEAAKPEAXJPEBD@Z @ 0x1400746A0 (-AddRef@FxRequestSystemBuffer@@UEAAKPEAXJPEBD@Z.c)
 *     ?AddRefOverride@FxRequest@@UEAAKGPEAXJPEBD@Z @ 0x140094560 (-AddRefOverride@FxRequest@@UEAAKGPEAXJPEBD@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1400135F0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x140022C80 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140059E28 (-VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxRequest::AddIrpReference(FxRequest *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerifierOn )
  {
    irql = 0;
    FxNonPagedObject::Lock(this, &irql);
    FxRequest::VerifyRequestIsNotCompleted(this, m_Globals);
    FxNonPagedObject::Unlock(this, irql);
  }
  _InterlockedIncrement(&this->m_IrpReferenceCount);
}
