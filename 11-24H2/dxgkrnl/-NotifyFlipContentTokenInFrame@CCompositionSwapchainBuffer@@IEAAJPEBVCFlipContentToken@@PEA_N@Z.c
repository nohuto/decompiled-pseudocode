/*
 * XREFs of ?NotifyFlipContentTokenInFrame@CCompositionSwapchainBuffer@@IEAAJPEBVCFlipContentToken@@PEA_N@Z @ 0x140031C80
 * Callers:
 *     ?NotifyTokenInFrame@CCompositionSwapchainBuffer@@UEAAJAEBVCToken@@PEA_N_K@Z @ 0x1400A19C0 (-NotifyTokenInFrame@CCompositionSwapchainBuffer@@UEAAJAEBVCToken@@PEA_N_K@Z.c)
 * Callees:
 *     ?NotifyDirty@CCompositionBuffer@@QEAAXAEBUIRegion@@PEBUScrollOptimization@@@Z @ 0x140031D68 (-NotifyDirty@CCompositionBuffer@@QEAAXAEBUIRegion@@PEBUScrollOptimization@@@Z.c)
 *     ?UpdateAttributes@CCompositionSwapchainBuffer@@IEAA_NAEBVCFlipContentToken@@@Z @ 0x140031E3C (-UpdateAttributes@CCompositionSwapchainBuffer@@IEAA_NAEBVCFlipContentToken@@@Z.c)
 *     ?UpdateIndependentFlipState@CCompositionSwapchainBuffer@@IEAA_NAEBVCFlipContentToken@@@Z @ 0x14003219C (-UpdateIndependentFlipState@CCompositionSwapchainBuffer@@IEAA_NAEBVCFlipContentToken@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CCompositionSwapchainBuffer::NotifyFlipContentTokenInFrame(
        CCompositionSwapchainBuffer *this,
        const struct CFlipContentToken *a2,
        bool *a3)
{
  unsigned int v3; // ebx
  unsigned int v6; // ecx
  __int64 v8; // rax
  bool v9; // bp

  v3 = 0;
  *a3 = 0;
  v6 = *((_DWORD *)a2 + 28);
  if ( v6 == -1 || v6 < *((_DWORD *)this + 72) )
  {
    v8 = *((_QWORD *)a2 + 15);
    *((_QWORD *)this + 92) = v8;
    *((_DWORD *)this + 73) = v8;
    v9 = 0;
    if ( *((_DWORD *)this + 99) != v6 )
    {
      *((_DWORD *)this + 99) = v6;
      *a3 = 1;
      v9 = (*(unsigned __int8 (__fastcall **)(const struct CFlipContentToken *))(*(_QWORD *)a2 + 144LL))(a2) != 0;
    }
    if ( CCompositionSwapchainBuffer::UpdateAttributes(this, a2) )
      *a3 = 1;
    if ( CCompositionSwapchainBuffer::UpdateIndependentFlipState(this, a2) )
      *a3 = 1;
    if ( v9 )
      *((_BYTE *)this + 642) = 0;
    CCompositionBuffer::NotifyDirty(
      this,
      *((const struct IRegion **)a2 + 12),
      (const struct CFlipContentToken *)((char *)a2 + 68));
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
