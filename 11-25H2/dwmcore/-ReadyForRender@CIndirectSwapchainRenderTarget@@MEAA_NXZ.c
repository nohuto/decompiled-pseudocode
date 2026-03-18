/*
 * XREFs of ?ReadyForRender@CIndirectSwapchainRenderTarget@@MEAA_NXZ @ 0x1800C4BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReadyForRender@COffScreenRenderTarget@@MEAA_NXZ @ 0x1800C4C70 (-ReadyForRender@COffScreenRenderTarget@@MEAA_NXZ.c)
 *     ?IsEmpty@CTreeDirty@@QEBA_NXZ @ 0x1800C4D58 (-IsEmpty@CTreeDirty@@QEBA_NXZ.c)
 *     ?TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1800C4D70 (-TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x18028ED1C (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 */

bool __fastcall CIndirectSwapchainRenderTarget::ReadyForRender(CIndirectSwapchainRenderTarget *this)
{
  int Buffer; // eax
  int v3; // edi

  if ( !COffScreenRenderTarget::ReadyForRender(this)
    || CTreeDirty::IsEmpty((CTreeDirty *)(*((_QWORD *)this + 14) + 112LL)) && !*((_DWORD *)this + 84) )
  {
    return 0;
  }
  Buffer = CIndirectSwapchainRenderTarget::TryTargetNextBuffer(this);
  v3 = Buffer;
  if ( Buffer < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Buffer, 0xEBu, 0LL);
    if ( v3 == -2003304307 )
      CIndirectSwapchainRenderTarget::Unregister(this);
    return 0;
  }
  if ( !*((_BYTE *)this + 2800) )
    return 0;
  return *((_QWORD *)this + 352) != 0LL;
}
