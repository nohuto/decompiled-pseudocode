/*
 * XREFs of ?GetRequestorMode@FxRequest@@QEAADXZ @ 0x1400670EC
 * Callers:
 *     imp_WdfRequestGetRequestorMode @ 0x140066FF0 (imp_WdfRequestGetRequestorMode.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1400135F0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x140022C80 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140059E28 (-VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

char __fastcall FxRequest::GetRequestorMode(FxRequest *this, __int64 a2, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int8 v6; // r8
  char RequestorMode; // di
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  if ( !m_Globals->FxVerifierIO )
    return this->m_Irp.m_Irp->RequestorMode;
  irql = 0;
  FxNonPagedObject::Lock(this, &irql, a3);
  if ( FxRequest::VerifyRequestIsNotCompleted(this, m_Globals) >= 0 )
    RequestorMode = this->m_Irp.m_Irp->RequestorMode;
  else
    RequestorMode = 1;
  FxNonPagedObject::Unlock(this, irql, v6);
  return RequestorMode;
}
