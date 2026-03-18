/*
 * XREFs of ?FreeMdls@FxRequestBase@@QEAAXXZ @ 0x140056E50
 * Callers:
 *     ?ReleaseAndRestore@FxUsbPipeTransferContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x140056CC0 (-ReleaseAndRestore@FxUsbPipeTransferContext@@UEAAXPEAVFxRequestBase@@@Z.c)
 *     ?ReleaseAndRestore@FxInternalIoctlOthersContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x140056D80 (-ReleaseAndRestore@FxInternalIoctlOthersContext@@UEAAXPEAVFxRequestBase@@@Z.c)
 * Callees:
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832D8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxRequestBase::FreeMdls(FxRequestBase *this)
{
  _MDL *MdlAddress; // rdi
  _MDL *Next; // rsi

  if ( this->m_IrpAllocation && !this->m_CanComplete )
  {
    MdlAddress = this->m_Irp.m_Irp->MdlAddress;
    if ( MdlAddress )
    {
      do
      {
        Next = MdlAddress->Next;
        if ( (MdlAddress->MdlFlags & 2) != 0 )
        {
          MmUnlockPages(MdlAddress);
        }
        else if ( this->m_Globals->FxVerifierOn )
        {
          DbgPrint(
            "pMdl %p, Flags 0x%x in PIRP %p should be locked",
            MdlAddress,
            MdlAddress->MdlFlags,
            this->m_Irp.m_Irp);
          FxVerifierDbgBreakPoint(this->m_Globals);
        }
        IoFreeMdl(MdlAddress);
        MdlAddress = Next;
      }
      while ( Next );
    }
    this->m_Irp.m_Irp->MdlAddress = 0LL;
  }
}
