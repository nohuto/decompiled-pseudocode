/*
 * XREFs of ?Present@CIndirectSwapchainRenderTarget@@MEAAJXZ @ 0x1801AA1C0
 * Callers:
 *     <none>
 * Callees:
 *     ?TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1800C4D70 (-TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureMetadataBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1801AA26C (-EnsureMetadataBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1801AA44C (-ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::Present(CIndirectSwapchainRenderTarget *this)
{
  unsigned int v1; // ebx
  int v4; // eax
  int v5; // eax
  int Buffer; // eax

  v1 = 0;
  if ( *((_BYTE *)this + 2803) || *((_BYTE *)this + 2801) || *((_BYTE *)this + 2802) )
  {
    if ( *((_QWORD *)this + 352)
      || (Buffer = CIndirectSwapchainRenderTarget::TryTargetNextBuffer(this), v1 = Buffer, Buffer >= 0) )
    {
      v4 = CIndirectSwapchainRenderTarget::EnsureMetadataBuffer(this);
      v1 = v4;
      if ( v4 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x130u, 0LL);
      }
      else
      {
        v5 = CIndirectSwapchainRenderTarget::ReleaseCurrentBuffer(this);
        v1 = v5;
        if ( v5 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x134u, 0LL);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Buffer, 0x12Du, 0LL);
    }
  }
  return v1;
}
