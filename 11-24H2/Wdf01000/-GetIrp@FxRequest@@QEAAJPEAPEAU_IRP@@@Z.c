/*
 * XREFs of ?GetIrp@FxRequest@@QEAAJPEAPEAU_IRP@@@Z @ 0x140056790
 * Callers:
 *     ?GetRequestorProcessId@FxRequest@@QEAAKXZ @ 0x1400566F0 (-GetRequestorProcessId@FxRequest@@QEAAKXZ.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x14002BD60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14002C4B0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140056F48 (-VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxRequest::GetIrp(FxRequest *this, _IRP **ppIrp, unsigned __int8 a3)
{
  int IsNotCompleted; // esi
  unsigned __int8 v7; // r8
  _IRP *m_Irp; // rax
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  if ( this->m_Globals->FxVerifierIO )
  {
    irql = 0;
    FxNonPagedObject::Lock(this, &irql, a3);
    IsNotCompleted = FxRequest::VerifyRequestIsNotCompleted(this, this->m_Globals);
    if ( IsNotCompleted >= 0 )
    {
      m_Irp = this->m_Irp.m_Irp;
    }
    else
    {
      IsNotCompleted = -1073741808;
      m_Irp = 0LL;
    }
    *ppIrp = m_Irp;
    FxNonPagedObject::Unlock(this, irql, v7);
    return (unsigned int)IsNotCompleted;
  }
  else
  {
    *ppIrp = this->m_Irp.m_Irp;
    return 0LL;
  }
}
