/*
 * XREFs of ?EnsureInteropRenderTarget@CHolographicManager@@AEAAJXZ @ 0x1802CF294
 * Callers:
 *     CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_db6293ec4389496e05a5db7898b72386___ @ 0x1802CE194 (CHolographicInteropTaskQueue--ProcessPendingMessages__lambda_db6293ec4389496e05a5db7898b72386___.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddToRenderTargetManager@CRenderTarget@@QEAAXXZ @ 0x180189C54 (-AddToRenderTargetManager@CRenderTarget@@QEAAXXZ.c)
 *     ?IsEnabled@CompositorTracing@@SA_NE_K@Z @ 0x1802126E4 (-IsEnabled@CompositorTracing@@SA_NE_K@Z.c)
 *     ?Instance@CompositorTracing@@KAPEAV1@XZ @ 0x18021279C (-Instance@CompositorTracing@@KAPEAV1@XZ.c)
 *     ?HolographicInteropTargetCreated_@CompositorTracing@@QEAAXAEBU_LUID@@@Z @ 0x1802CF6AC (-HolographicInteropTargetCreated_@CompositorTracing@@QEAAXAEBU_LUID@@@Z.c)
 *     ?Create@CHolographicInteropTarget@@SAJPEAVCComposition@@PEAU_LUID@@PEAPEAV1@@Z @ 0x1802CFFD0 (-Create@CHolographicInteropTarget@@SAJPEAVCComposition@@PEAU_LUID@@PEAPEAV1@@Z.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1802D3FEC (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

__int64 __fastcall CHolographicManager::EnsureInteropRenderTarget(struct CComposition **this)
{
  unsigned int v1; // edi
  struct _LUID *v2; // rsi
  struct CHolographicInteropTarget **v4; // r14
  int v5; // eax
  CHolographicInteropTaskQueue *v6; // rcx
  CompositorTracing *v7; // rcx

  v1 = 0;
  v2 = (struct _LUID *)((char *)this + 68);
  if ( (*((_DWORD *)this + 17) || *((_DWORD *)this + 18)) && *((_BYTE *)this + 240) )
  {
    v4 = this + 4;
    if ( !this[4] )
    {
      v5 = CHolographicInteropTarget::Create(this[3], v2, v4);
      v1 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x3DBu, 0LL);
      }
      else
      {
        CRenderTarget::AddToRenderTargetManager(*v4);
        v6 = this[6];
        if ( v6 && *((_BYTE *)this + 240) )
          CHolographicInteropTaskQueue::PostMessageW(v6, 0x14u, (struct IUnknown *)*v4, 0LL, 0LL, 0LL, 0LL);
        if ( CompositorTracing::IsEnabled() )
        {
          CompositorTracing::Instance();
          CompositorTracing::HolographicInteropTargetCreated_(v7, v2);
        }
      }
    }
  }
  else
  {
    v1 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147467259, 0x3D6u, 0LL);
  }
  return v1;
}
