/*
 * XREFs of ?DetachFromChannel@CHolographicComposition@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1802DA090
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEnabled@CompositorTracing@@SA_NE_K@Z @ 0x18021DB24 (-IsEnabled@CompositorTracing@@SA_NE_K@Z.c)
 *     ?Instance@CompositorTracing@@KAPEAV1@XZ @ 0x18021DBDC (-Instance@CompositorTracing@@KAPEAV1@XZ.c)
 *     ?DwmHolographicCompositionRemove_@CompositorTracing@@QEAAXXZ @ 0x1802D8028 (-DwmHolographicCompositionRemove_@CompositorTracing@@QEAAXXZ.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1802DD28C (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicComposition::DetachFromChannel(CHolographicComposition *this, struct CChannelContext *a2)
{
  __int64 v2; // rdi
  CompositorTracing *v5; // rcx
  CHolographicInteropTaskQueue *v6; // rcx

  v2 = *((_QWORD *)this + 12);
  if ( v2 && *((_BYTE *)this + 124) && *(_BYTE *)(v2 + 240) )
  {
    *(_BYTE *)(v2 + 240) = 0;
    if ( CompositorTracing::IsEnabled() )
    {
      CompositorTracing::Instance();
      CompositorTracing::DwmHolographicCompositionRemove_(v5);
    }
    v6 = *(CHolographicInteropTaskQueue **)(v2 + 48);
    if ( v6 )
      CHolographicInteropTaskQueue::PostMessageW(
        v6,
        0xAu,
        (struct IUnknown *)(((unsigned __int64)this + 80) & -(__int64)(this != 0LL)),
        0LL,
        0LL,
        0LL,
        0LL);
  }
  CNotificationResource::DetachFromChannel(this, a2);
}
