/*
 * XREFs of ?SetSwapchainTarget@CTopLevelWindow@@AEAAJPEAVCIndirectSwapchainRenderTargetProxy@@_N@Z @ 0x1800DB728
 * Callers:
 *     ?RegisterIndirectSwapChainRenderTarget@CTopLevelWindow@@QEAAJPEAX_NU_LUID@@@Z @ 0x1800DB54C (-RegisterIndirectSwapChainRenderTarget@CTopLevelWindow@@QEAAJPEAX_NU_LUID@@@Z.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SendBoundsToSwapchainTarget@CTopLevelWindow@@AEAAJXZ @ 0x180029B8C (-SendBoundsToSwapchainTarget@CTopLevelWindow@@AEAAJXZ.c)
 */

__int64 __fastcall CTopLevelWindow::SetSwapchainTarget(
        CTopLevelWindow *this,
        struct CIndirectSwapchainRenderTargetProxy *a2,
        char a3)
{
  CIndirectSwapchainRenderTargetProxy **v3; // r9
  int v4; // eax
  unsigned int v5; // ebx

  *((_BYTE *)this + 752) = a3;
  *((_QWORD *)this + 95) = a2;
  CMILRefCountBase::AddRef(a2);
  v4 = CTopLevelWindow::SendBoundsToSwapchainTarget(v3);
  v5 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x177Du, 0LL);
  return v5;
}
