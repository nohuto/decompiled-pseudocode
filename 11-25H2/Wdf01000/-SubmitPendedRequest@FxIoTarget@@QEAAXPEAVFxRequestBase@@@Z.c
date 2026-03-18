/*
 * XREFs of ?SubmitPendedRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x140004694
 * Callers:
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x140011E70 (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 *     ?Start@FxUsbDevice@@MEAAJXZ @ 0x14006BEA0 (-Start@FxUsbDevice@@MEAAJXZ.c)
 *     ?Start@FxIoTarget@@UEAAJXZ @ 0x14006C050 (-Start@FxIoTarget@@UEAAJXZ.c)
 * Callees:
 *     ?DecrementIoCount@FxIoTarget@@IEAAXXZ @ 0x1400051EC (-DecrementIoCount@FxIoTarget@@IEAAXXZ.c)
 *     WPP_IFR_SF_qq @ 0x140011A74 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qqd @ 0x14002A590 (WPP_IFR_SF_qqd.c)
 *     ?Submit@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x140031540 (-Submit@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z.c)
 *     ?HandleFailedResubmit@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x14009B710 (-HandleFailedResubmit@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall FxIoTarget::SubmitPendedRequest(FxIoTarget *this, FxRequestBase *Request)
{
  char v4; // bp
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int64 v6; // rdx
  FxRequestBase *_a1; // rax
  _FX_DRIVER_GLOBALS *v8; // rcx
  unsigned __int64 v9; // r9
  FxRequestBase *v10; // rax

  v4 = FxIoTarget::Submit(this, Request, 0LL, 0);
  if ( (v4 & 1) != 0 )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      v6 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
      _a1 = Request;
      if ( !Request->m_ObjectSize )
        v6 = 0LL;
      if ( v6 )
        _a1 = (FxRequestBase *)v6;
      WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0xCu, WPP_FxIoTarget_cpp_Traceguids, _a1, Request->m_Irp.m_Irp);
    }
    this->Send(this, Request->m_Irp.m_Irp);
  }
  if ( (v4 & 3) != 0 )
  {
    FxIoTarget::DecrementIoCount(this);
    Request->Release(Request, this, 263, "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp");
  }
  else
  {
    v8 = this->m_Globals;
    if ( v8->FxVerboseOn )
    {
      v9 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
      v10 = Request;
      if ( !Request->m_ObjectSize )
        v9 = 0LL;
      if ( v9 )
        v10 = (FxRequestBase *)v9;
      WPP_IFR_SF_qqd(
        v8,
        5u,
        0xEu,
        0xDu,
        WPP_FxIoTarget_cpp_Traceguids,
        v10,
        Request->m_Irp.m_Irp,
        Request->m_Irp.m_Irp->IoStatus.Status);
    }
    Request->m_Irp.m_Irp->IoStatus.Information = 0LL;
    FxIoTarget::HandleFailedResubmit(this, Request);
  }
}
