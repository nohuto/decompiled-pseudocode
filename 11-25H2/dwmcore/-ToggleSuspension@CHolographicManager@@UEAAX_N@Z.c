/*
 * XREFs of ?ToggleSuspension@CHolographicManager@@UEAAX_N@Z @ 0x18021DAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEnabled@CompositorTracing@@SA_NE_K@Z @ 0x18021DB24 (-IsEnabled@CompositorTracing@@SA_NE_K@Z.c)
 *     ?DwmHolographicSuspendRequest_@CompositorTracing@@QEAAX_N@Z @ 0x18021DB40 (-DwmHolographicSuspendRequest_@CompositorTracing@@QEAAX_N@Z.c)
 *     ?Instance@CompositorTracing@@KAPEAV1@XZ @ 0x18021DBDC (-Instance@CompositorTracing@@KAPEAV1@XZ.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1802DD28C (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicManager::ToggleSuspension(CHolographicManager *this, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  CompositorTracing *v4; // rcx
  CHolographicInteropTaskQueue *v5; // rcx

  v2 = (unsigned __int8)a2;
  if ( (_BYTE)a2 != *((_BYTE *)this + 241) )
  {
    if ( CompositorTracing::IsEnabled((unsigned __int8)this, a2) )
    {
      CompositorTracing::Instance();
      CompositorTracing::DwmHolographicSuspendRequest_(v4, v2);
    }
    v5 = (CHolographicInteropTaskQueue *)*((_QWORD *)this + 6);
    *((_BYTE *)this + 241) = v2;
    if ( v5 )
      CHolographicInteropTaskQueue::PostMessageW(v5, 0x1Bu, 0LL, (void *)v2, 0LL, 0LL, 0LL);
  }
}
