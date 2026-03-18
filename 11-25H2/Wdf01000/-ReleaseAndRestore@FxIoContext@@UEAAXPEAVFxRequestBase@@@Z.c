/*
 * XREFs of ?ReleaseAndRestore@FxIoContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1400591A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall FxIoContext::ReleaseAndRestore(FxIoContext *this, FxRequestBase *Request)
{
  FxIrp *p_m_Irp; // rsi
  _IRP *m_Irp; // rcx
  _MDL *m_MdlToFree; // rcx
  IFxMemory *m_OtherMemory; // rcx
  _MDL *MdlAddress; // r14
  IFxMemory *m_RequestMemory; // rcx
  _MDL *Next; // rbp

  p_m_Irp = &Request->m_Irp;
  if ( this->m_RestoreState )
  {
    p_m_Irp->m_Irp->AssociatedIrp.MasterIrp = (_IRP *)this->m_OriginalSystemBuffer;
    p_m_Irp->m_Irp->UserBuffer = this->m_OriginalUserBuffer;
    p_m_Irp->m_Irp->MdlAddress = this->m_OriginalMdl;
    m_Irp = p_m_Irp->m_Irp;
    p_m_Irp = &Request->m_Irp;
    m_Irp->Flags = this->m_OriginalFlags;
    this->m_OriginalSystemBuffer = 0LL;
    this->m_OriginalUserBuffer = 0LL;
    this->m_OriginalMdl = 0LL;
    this->m_OriginalFlags = 0;
    this->m_RestoreState = 0;
  }
  m_MdlToFree = this->m_MdlToFree;
  if ( m_MdlToFree )
  {
    if ( this->m_UnlockPages )
    {
      MmUnlockPages(m_MdlToFree);
      this->m_UnlockPages = 0;
      p_m_Irp = &Request->m_Irp;
    }
    this->m_OriginalMdl = (_MDL *)Request->m_Globals;
  }
  m_OtherMemory = this->m_OtherMemory;
  if ( m_OtherMemory )
  {
    m_OtherMemory->Release(
      m_OtherMemory,
      this,
      123,
      "minkernel\\wdf\\framework\\shared\\inc\\private\\km\\FxIoTargetKm.hpp");
    this->m_OtherMemory = 0LL;
  }
  if ( Request->m_IrpAllocation && !Request->m_CanComplete )
  {
    MdlAddress = p_m_Irp->m_Irp->MdlAddress;
    if ( MdlAddress )
    {
      do
      {
        Next = MdlAddress->Next;
        if ( (MdlAddress->MdlFlags & 2) != 0 )
        {
          MmUnlockPages(MdlAddress);
        }
        else if ( Request->m_Globals->FxVerifierOn )
        {
          DbgPrint("pMdl %p, Flags 0x%x in PIRP %p should be locked", MdlAddress, MdlAddress->MdlFlags, p_m_Irp->m_Irp);
          FxVerifierDbgBreakPoint(Request->m_Globals);
        }
        IoFreeMdl(MdlAddress);
        MdlAddress = Next;
      }
      while ( Next );
      p_m_Irp = &Request->m_Irp;
    }
    p_m_Irp->m_Irp->MdlAddress = 0LL;
  }
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
  this->m_CompletionParams.IoStatus.Pointer = 0LL;
  this->m_CompletionParams.IoStatus.Information = 0LL;
  this->m_CompletionParams.Parameters.Others.Argument1.Value = 0LL;
  this->m_CompletionParams.Parameters.Write.Length = 0LL;
  this->m_CompletionParams.Parameters.Write.Offset = 0LL;
  this->m_CompletionParams.Parameters.Others.Argument4.Value = 0LL;
  this->m_CompletionParams.Parameters.Ioctl.Output.Offset = 0LL;
  this->m_CompletionParams.Parameters.Ioctl.Output.Length = 0LL;
  this->m_CompletionParams.Size = 72;
  this->m_CompletionParams.Type = WdfRequestTypeNoFormat;
  this->m_CompletionParams.Type = WdfRequestTypeNoFormat;
}
