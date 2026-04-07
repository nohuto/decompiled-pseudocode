/*
 * XREFs of ?UnregisterIndirectSwapchainRenderTarget@CTopLevelWindow@@QEAAJPEA_N@Z @ 0x18002D900
 * Callers:
 *     ??1CTopLevelWindow@@EEAA@XZ @ 0x18002D450 (--1CTopLevelWindow@@EEAA@XZ.c)
 *     ?UnregisterIndirectSwapchainRenderTargetFromWindow@CWindowList@@UEAAJPEAUIDwmWindow@@PEA_N@Z @ 0x1800F3900 (-UnregisterIndirectSwapchainRenderTargetFromWindow@CWindowList@@UEAAJPEAUIDwmWindow@@PEA_N@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Unregister@CIndirectSwapchainRenderTargetProxy@@QEAAJXZ @ 0x180097C64 (-Unregister@CIndirectSwapchainRenderTargetProxy@@QEAAJXZ.c)
 */

__int64 __fastcall CTopLevelWindow::UnregisterIndirectSwapchainRenderTarget(CTopLevelWindow *this, bool *a2)
{
  unsigned int v2; // ebx
  CIndirectSwapchainRenderTargetProxy *v5; // rcx
  int v7; // eax
  CBaseObject *v8; // rcx

  v2 = 0;
  *a2 = 0;
  v5 = (CIndirectSwapchainRenderTargetProxy *)*((_QWORD *)this + 95);
  if ( v5 )
  {
    v7 = CIndirectSwapchainRenderTargetProxy::Unregister(v5);
    v2 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x1769u, 0LL);
    }
    else
    {
      v8 = (CBaseObject *)*((_QWORD *)this + 95);
      if ( v8 )
      {
        CBaseObject::Release(v8);
        *((_QWORD *)this + 95) = 0LL;
      }
      *((_BYTE *)this + 752) = 0;
      *a2 = 1;
    }
  }
  return v2;
}
