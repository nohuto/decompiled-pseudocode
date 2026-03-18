/*
 * XREFs of ?NotifyDirty@CCompositionBuffer@@QEAAXAEBUIRegion@@PEBUScrollOptimization@@@Z @ 0x140031D68
 * Callers:
 *     ?NotifyFlipContentTokenInFrame@CCompositionSwapchainBuffer@@IEAAJPEBVCFlipContentToken@@PEA_N@Z @ 0x140031C80 (-NotifyFlipContentTokenInFrame@CCompositionSwapchainBuffer@@IEAAJPEBVCFlipContentToken@@PEA_N@Z.c)
 *     ?NotifyTokenInFrame@CFlipExBuffer@@UEAAJAEBVCToken@@PEA_N_K@Z @ 0x14009D920 (-NotifyTokenInFrame@CFlipExBuffer@@UEAAJAEBVCToken@@PEA_N_K@Z.c)
 * Callees:
 *     ?AddScrollAsDirty@CCompositionBuffer@@IEAAXAEBUScrollOptimization@@@Z @ 0x14003227C (-AddScrollAsDirty@CCompositionBuffer@@IEAAXAEBUScrollOptimization@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

void __fastcall CCompositionBuffer::NotifyDirty(
        CCompositionBuffer *this,
        const struct IRegion *a2,
        const struct ScrollOptimization *a3)
{
  char *v3; // rsi
  _BYTE *v5; // rdi

  v3 = (char *)this + 304;
  v5 = (char *)this + 43;
  if ( *((_DWORD *)this + 76) )
  {
    CCompositionBuffer::AddScrollAsDirty(this, (CCompositionBuffer *)((char *)this + 304));
    *(_DWORD *)v3 = 0;
    *v5 = 1;
  }
  if ( a3 && *(_DWORD *)a3 )
  {
    if ( *v5 )
    {
      CCompositionBuffer::AddScrollAsDirty(this, a3);
    }
    else
    {
      *(_OWORD *)v3 = *(_OWORD *)a3;
      *((_QWORD *)v3 + 2) = *((_QWORD *)a3 + 2);
      *((_DWORD *)v3 + 6) = *((_DWORD *)a3 + 6);
    }
  }
  if ( !(*(unsigned __int8 (__fastcall **)(const struct IRegion *))(*(_QWORD *)a2 + 8LL))(a2) )
  {
    (*(void (__fastcall **)(_QWORD, const struct IRegion *, __int64))(**((_QWORD **)this + 37) + 48LL))(
      *((_QWORD *)this + 37),
      a2,
      2LL);
    *v5 = 1;
  }
}
