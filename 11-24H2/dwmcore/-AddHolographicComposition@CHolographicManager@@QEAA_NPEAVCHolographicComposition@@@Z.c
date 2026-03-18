/*
 * XREFs of ?AddHolographicComposition@CHolographicManager@@QEAA_NPEAVCHolographicComposition@@@Z @ 0x1802CE7FC
 * Callers:
 *     ?ProcessCreate@CHolographicComposition@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICCOMPOSITION_CREATE@@@Z @ 0x1802D0F28 (-ProcessCreate@CHolographicComposition@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICCOMPOS.c)
 * Callees:
 *     ?IsEnabled@CompositorTracing@@SA_NE_K@Z @ 0x1802126E4 (-IsEnabled@CompositorTracing@@SA_NE_K@Z.c)
 *     ?Instance@CompositorTracing@@KAPEAV1@XZ @ 0x18021279C (-Instance@CompositorTracing@@KAPEAV1@XZ.c)
 *     ?DwmHolographicCompositionAdd_@CompositorTracing@@QEAAXXZ @ 0x1802CED48 (-DwmHolographicCompositionAdd_@CompositorTracing@@QEAAXXZ.c)
 *     ?EnsureHolographicClient@CHolographicManager@@AEAAJXZ @ 0x1802CF164 (-EnsureHolographicClient@CHolographicManager@@AEAAJXZ.c)
 *     ?InitializeClient@CHolographicManager@@AEAAXXZ @ 0x1802CF714 (-InitializeClient@CHolographicManager@@AEAAXXZ.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1802D3FEC (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

bool __fastcall CHolographicManager::AddHolographicComposition(
        CHolographicManager *this,
        struct CHolographicComposition *a2)
{
  CompositorTracing *v5; // rcx
  bool v6; // zf

  if ( *((_BYTE *)this + 240) )
    return 0;
  if ( (int)CHolographicManager::EnsureHolographicClient(this) >= 0 )
  {
    *((_BYTE *)this + 240) = CHolographicInteropTaskQueue::PostMessageW(
                               *((CHolographicInteropTaskQueue **)this + 6),
                               9u,
                               (struct IUnknown *)(((unsigned __int64)a2 + 80) & -(__int64)(a2 != 0LL)),
                               0LL,
                               0LL,
                               0LL,
                               0LL);
    if ( CompositorTracing::IsEnabled() )
    {
      CompositorTracing::Instance();
      CompositorTracing::DwmHolographicCompositionAdd_(v5);
    }
    v6 = *((_BYTE *)this + 240) == 0;
    *((_DWORD *)this + 16) = -6;
    if ( !v6 )
      CHolographicManager::InitializeClient(this);
  }
  return *((_BYTE *)this + 240);
}
