/*
 * XREFs of ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1400043F0
 * Callers:
 *     ?FormatAbortRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z @ 0x140001CF0 (-FormatAbortRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z.c)
 *     ?FormatResetRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z @ 0x140004208 (-FormatResetRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z.c)
 *     ?InitDevice@FxUsbDevice@@QEAAJK@Z @ 0x14005A0DC (-InitDevice@FxUsbDevice@@QEAAJK@Z.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x14005A73C (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x14005AEF8 (-GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x140074A30 (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 *     imp_WdfRequestChangeTarget @ 0x140092AD0 (imp_WdfRequestChangeTarget.c)
 *     ?Deconfig@FxUsbDevice@@QEAAJXZ @ 0x14009EEC0 (-Deconfig@FxUsbDevice@@QEAAJXZ.c)
 *     ?FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z @ 0x14009FC20 (-FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x140011A74 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qqd @ 0x14002A590 (WPP_IFR_SF_qqd.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x140083000 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxRequestBase::ValidateTarget(FxRequestBase *this, unsigned __int64 Target)
{
  _IRP *m_Irp; // rdi
  unsigned __int64 _a2; // rbx
  FxRequestContext *m_RequestContext; // rcx
  _FX_DRIVER_GLOBALS *v6; // rax
  CCHAR v7; // cl
  PIRP Irp; // rax
  _IRP *_a1; // rsi
  _FX_DRIVER_GLOBALS *v11; // r10
  unsigned __int64 v12; // rdx
  unsigned __int16 v13; // cx
  const void *v14; // rsi
  __int64 v15; // rax
  const void *v16; // rsi
  const void *v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned __int16 v19; // ax
  const void *v20; // rsi
  const void *v21; // rcx
  unsigned __int64 v22; // rdx

  m_Irp = this->m_Irp.m_Irp;
  _a2 = (unsigned __int64)this;
  m_RequestContext = this->m_RequestContext;
  if ( m_RequestContext )
  {
    if ( m_Irp )
    {
      m_RequestContext->ReleaseAndRestore(m_RequestContext, (FxRequestBase *)_a2);
      v6 = *(_FX_DRIVER_GLOBALS **)(_a2 + 16);
      if ( v6->FxVerifierOn )
      {
        if ( v6->FxVerifierIO )
          FxRequestBase::ClearVerifierFlags((FxRequestBase *)_a2, 128);
      }
    }
  }
  v7 = *(_BYTE *)(Target + 336);
  if ( v7 )
  {
    if ( !m_Irp )
      goto LABEL_8;
    if ( m_Irp->CurrentLocation > v7 )
      return 0LL;
    if ( *(_BYTE *)(_a2 + 213) == 1 )
    {
LABEL_8:
      Irp = IoAllocateIrp(v7, 0);
      if ( Irp )
      {
        _a1 = *(_IRP **)(_a2 + 152);
        *(_QWORD *)(_a2 + 152) = Irp;
        *(_BYTE *)(_a2 + 214) = 0;
        if ( !_a1 || _a1 == Irp || *(_BYTE *)(_a2 + 213) != 1 )
        {
          *(_BYTE *)(_a2 + 213) = 1;
          return 0LL;
        }
        *(_BYTE *)(_a2 + 213) = 1;
        v11 = *(_FX_DRIVER_GLOBALS **)(_a2 + 16);
        if ( v11->FxVerboseOn )
        {
          v12 = _a2 ^ 0xFFFFFFFFFFFFFFF8uLL;
          if ( !*(_WORD *)(_a2 + 10) )
            v12 = 0LL;
          if ( v12 )
            _a2 = v12;
          WPP_IFR_SF_qq(v11, 5u, 0xDu, 0xEu, WPP_FxRequestBase_cpp_Traceguids, _a1, (const void *)_a2);
        }
        IoFreeIrp(_a1);
        return 0LL;
      }
      else
      {
        v15 = *(unsigned __int16 *)(Target + 10);
        v16 = (const void *)(Target ^ 0xFFFFFFFFFFFFFFF8uLL);
        v17 = (const void *)_a2;
        if ( !(_WORD)v15 )
          v16 = 0LL;
        v18 = _a2 ^ 0xFFFFFFFFFFFFFFF8uLL;
        if ( !*(_WORD *)(_a2 + 10) )
          v18 = 0LL;
        if ( v18 )
          v17 = (const void *)v18;
        WPP_IFR_SF_qqd(
          *(_FX_DRIVER_GLOBALS **)(_a2 + 16),
          2u,
          0xEu,
          0xCu,
          WPP_FxRequestBase_cpp_Traceguids,
          v17,
          v16,
          0xC000009A);
        return 3221225626LL;
      }
    }
    else
    {
      v19 = *(_WORD *)(Target + 10);
      v20 = (const void *)(Target ^ 0xFFFFFFFFFFFFFFF8uLL);
      v21 = (const void *)_a2;
      if ( !v19 )
        v20 = 0LL;
      v22 = _a2 ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !*(_WORD *)(_a2 + 10) )
        v22 = 0LL;
      if ( v22 )
        v21 = (const void *)v22;
      WPP_IFR_SF_qqd(
        *(_FX_DRIVER_GLOBALS **)(_a2 + 16),
        2u,
        0xEu,
        0xDu,
        WPP_FxRequestBase_cpp_Traceguids,
        v21,
        v20,
        0xC00000D0);
      return 3221225680LL;
    }
  }
  else
  {
    v13 = *(_WORD *)(Target + 10);
    v14 = (const void *)(Target ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v13 )
      v14 = 0LL;
    WPP_IFR_SF_qd(
      *(_FX_DRIVER_GLOBALS **)(_a2 + 16),
      2u,
      0xEu,
      0xBu,
      WPP_FxRequestBase_cpp_Traceguids,
      v14,
      -1073741436);
    return 3221225860LL;
  }
}
