/*
 * XREFs of ?RegisterIndirectSwapChainRenderTarget@CTopLevelWindow@@QEAAJPEAX_NU_LUID@@@Z @ 0x1800E63DC
 * Callers:
 *     ?RegisterIndirectSwapchainRenderTargetForWindow@CWindowList@@UEAAJPEAUIDwmWindow@@PEAX_NU_LUID@@@Z @ 0x18010BAC0 (-RegisterIndirectSwapchainRenderTargetForWindow@CWindowList@@UEAAJPEAUIDwmWindow@@PEAX_NU_LUID@@.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$CreateProxy@VCIndirectSwapchainRenderTargetProxy@@@CCompositor@@IEAAJPEAPEAVCIndirectSwapchainRenderTargetProxy@@@Z @ 0x1800AD200 (--$CreateProxy@VCIndirectSwapchainRenderTargetProxy@@@CCompositor@@IEAAJPEAPEAVCIndirectSwapchai.c)
 *     ?Unregister@CIndirectSwapchainRenderTargetProxy@@QEAAJXZ @ 0x1800C4F20 (-Unregister@CIndirectSwapchainRenderTargetProxy@@QEAAJXZ.c)
 *     ?GetCanvasRootVisualProxy@CTopLevelWindow@@QEAAPEAVCVisualProxy@@XZ @ 0x1800E58CC (-GetCanvasRootVisualProxy@CTopLevelWindow@@QEAAPEAVCVisualProxy@@XZ.c)
 *     ?SendBoundsToSwapchainTarget@CTopLevelWindow@@AEAAJXZ @ 0x1800E65C0 (-SendBoundsToSwapchainTarget@CTopLevelWindow@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTopLevelWindow::RegisterIndirectSwapChainRenderTarget(
        CTopLevelWindow *this,
        HANDLE hObject,
        char a3,
        struct _LUID a4)
{
  volatile signed __int32 *v8; // rbx
  int v9; // esi
  unsigned int v10; // eax
  struct CVisualProxy *CanvasRootVisualProxy; // r14
  __int64 v12; // r14
  int v13; // eax
  int v14; // eax
  CIndirectSwapchainRenderTargetProxy *v16; // [rsp+60h] [rbp+8h] BYREF

  v8 = 0LL;
  v16 = 0LL;
  if ( *((_QWORD *)this + 100) )
  {
    v9 = -2147024891;
    v10 = 5853;
    goto LABEL_16;
  }
  if ( a3 )
  {
    CanvasRootVisualProxy = CTopLevelWindow::GetCanvasRootVisualProxy(this);
  }
  else
  {
    v12 = *((_QWORD *)this + 74);
    if ( !v12 )
    {
LABEL_15:
      v9 = -2147467261;
      v10 = 5870;
LABEL_16:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, v10);
      if ( hObject )
        CloseHandle(hObject);
      goto LABEL_18;
    }
    CanvasRootVisualProxy = *(struct CVisualProxy **)(v12 + 16);
  }
  if ( !CanvasRootVisualProxy )
    goto LABEL_15;
  v9 = CCompositor::CreateProxy<CIndirectSwapchainRenderTargetProxy>(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
         &v16);
  v8 = (volatile signed __int32 *)v16;
  if ( v9 < 0 )
  {
    v10 = 5876;
    goto LABEL_16;
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, HANDLE, struct _LUID, _DWORD))(**(_QWORD **)(*((_QWORD *)v16 + 2)
                                                                                              + 16LL)
                                                                                + 632LL))(
          *(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL),
          *(unsigned int *)(*((_QWORD *)v16 + 2) + 24LL),
          hObject,
          a4,
          *(_DWORD *)(*((_QWORD *)CanvasRootVisualProxy + 2) + 24LL));
  v9 = v13;
  if ( v13 >= 0 )
  {
    *((_BYTE *)this + 792) = a3;
    *((_QWORD *)this + 100) = v8;
    _InterlockedIncrement(v8 + 2);
    v14 = CTopLevelWindow::SendBoundsToSwapchainTarget(this);
    v9 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x1735u);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x1704u);
    }
    v8 = (volatile signed __int32 *)v16;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x16FFu);
  }
LABEL_18:
  if ( v8 && v9 < 0 )
    CIndirectSwapchainRenderTargetProxy::Unregister((CIndirectSwapchainRenderTargetProxy *)v8);
  if ( v8 )
    CBaseObject::Release((CBaseObject *)v8);
  return (unsigned int)v9;
}
