/*
 * XREFs of ?SetHardwareProtection@CConversionSwapChain@@UEAAJ_N@Z @ 0x1802CB8C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18010BE90 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?SetHardwareProtection@CLegacySwapChain@@UEAAJ_N@Z @ 0x1802C9EF0 (-SetHardwareProtection@CLegacySwapChain@@UEAAJ_N@Z.c)
 *     ?EnsureTargetBitmap@CConversionSwapChain@@IEAAJXZ @ 0x1802CB438 (-EnsureTargetBitmap@CConversionSwapChain@@IEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CConversionSwapChain::SetHardwareProtection(CGlobalDrawingContext **this, unsigned __int8 a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // r8
  unsigned int v7; // ebx
  CGlobalDrawingContext *v8; // rcx
  int v9; // eax

  v4 = CLegacySwapChain::SetHardwareProtection((CLegacySwapChain *)this, a2);
  v7 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0xACu, 0LL);
  }
  else
  {
    v8 = this[62];
    if ( v8
      && ((*(int (__fastcall **)(CGlobalDrawingContext *))(*(_QWORD *)v8 + 24LL))(v8) < 0
       || (*(unsigned __int8 (__fastcall **)(CGlobalDrawingContext *))(*(_QWORD *)this[62] + 56LL))(this[62]) != a2) )
    {
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(this + 62, v5, v6);
    }
    v9 = CConversionSwapChain::EnsureTargetBitmap((CConversionSwapChain *)(this - 3), v5, v6);
    v7 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0xB7u, 0LL);
  }
  return v7;
}
