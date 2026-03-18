/*
 * XREFs of ?RemoveHolographicViewer@CHolographicManager@@QEAAXPEAVCHolographicViewer@@@Z @ 0x1802CFD3C
 * Callers:
 *     ?DetachFromChannel@CHolographicViewer@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1802D38B0 (-DetachFromChannel@CHolographicViewer@@UEAAXPEAVCChannelContext@@_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?IsEnabled@CompositorTracing@@SA_NE_K@Z @ 0x1802126E4 (-IsEnabled@CompositorTracing@@SA_NE_K@Z.c)
 *     ?Instance@CompositorTracing@@KAPEAV1@XZ @ 0x18021279C (-Instance@CompositorTracing@@KAPEAV1@XZ.c)
 *     ?DwmHolographicViewerRemove_@CompositorTracing@@QEAAXI@Z @ 0x1802CF0BC (-DwmHolographicViewerRemove_@CompositorTracing@@QEAAXI@Z.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1802D3FEC (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicManager::RemoveHolographicViewer(RTL_SRWLOCK *this, struct CHolographicViewer *a2)
{
  int v4; // ebx
  CompositorTracing *v5; // rcx
  __int64 Ptr_low; // rdx
  __int64 v7; // rcx
  __int64 i; // r8
  CHolographicInteropTaskQueue *Ptr; // rcx

  if ( a2 )
  {
    v4 = *((_DWORD *)a2 + 22);
    if ( CompositorTracing::IsEnabled() )
    {
      CompositorTracing::Instance();
      CompositorTracing::DwmHolographicViewerRemove_(v5, v4);
    }
  }
  AcquireSRWLockExclusive(this + 13);
  Ptr_low = LODWORD(this[28].Ptr);
  v7 = 0LL;
  for ( i = (__int64)this[25].Ptr; (unsigned int)v7 < (unsigned int)Ptr_low; v7 = (unsigned int)(v7 + 1) )
  {
    if ( a2 == *(struct CHolographicViewer **)(i + 8 * v7) )
      break;
  }
  if ( (unsigned int)v7 < (unsigned int)Ptr_low )
  {
    while ( (unsigned int)v7 < (int)Ptr_low - 1 )
    {
      *(_QWORD *)(i + 8 * v7) = *(_QWORD *)(i + 8LL * (unsigned int)(v7 + 1));
      v7 = (unsigned int)(v7 + 1);
      Ptr_low = LODWORD(this[28].Ptr);
    }
    LODWORD(this[28].Ptr) = Ptr_low - 1;
    Ptr = (CHolographicInteropTaskQueue *)this[6].Ptr;
    if ( Ptr )
      CHolographicInteropTaskQueue::PostMessageW(
        Ptr,
        0x1Au,
        (struct IUnknown *)(((unsigned __int64)a2 + 72) & -(__int64)(a2 != 0LL)),
        0LL,
        0LL,
        0LL,
        0LL);
    CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(a2, Ptr_low, i);
  }
  ReleaseSRWLockExclusive(this + 13);
}
