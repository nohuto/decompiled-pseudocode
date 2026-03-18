/*
 * XREFs of ?SetHardwareProtection@CConversionSwapChain@@UEAAJ_N@Z @ 0x1802D4B30
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180147AD0 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?SetHardwareProtection@CLegacySwapChain@@UEAAJ_N@Z @ 0x1802D3170 (-SetHardwareProtection@CLegacySwapChain@@UEAAJ_N@Z.c)
 *     ?EnsureTargetBitmap@CConversionSwapChain@@IEAAJXZ @ 0x1802D46A8 (-EnsureTargetBitmap@CConversionSwapChain@@IEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CConversionSwapChain::SetHardwareProtection(CGlobalDrawingContext **this, unsigned __int8 a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  CGlobalDrawingContext *v6; // rcx
  int v7; // eax

  v4 = CLegacySwapChain::SetHardwareProtection((CLegacySwapChain *)this, a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0xACu, 0LL);
  }
  else
  {
    v6 = this[62];
    if ( v6
      && ((*(int (__fastcall **)(CGlobalDrawingContext *))(*(_QWORD *)v6 + 24LL))(v6) < 0
       || (*(unsigned __int8 (__fastcall **)(CGlobalDrawingContext *))(*(_QWORD *)this[62] + 56LL))(this[62]) != a2) )
    {
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(this + 62);
    }
    v7 = CConversionSwapChain::EnsureTargetBitmap((CConversionSwapChain *)(this - 3));
    v5 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0xB7u, 0LL);
  }
  return v5;
}
