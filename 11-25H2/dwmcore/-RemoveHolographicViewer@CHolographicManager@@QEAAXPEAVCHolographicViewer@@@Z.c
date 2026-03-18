/*
 * XREFs of ?RemoveHolographicViewer@CHolographicManager@@QEAAXPEAVCHolographicViewer@@@Z @ 0x1802D8FDC
 * Callers:
 *     ?DetachFromChannel@CHolographicViewer@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1802DCB50 (-DetachFromChannel@CHolographicViewer@@UEAAXPEAVCChannelContext@@_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800AB610 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?IsEnabled@CompositorTracing@@SA_NE_K@Z @ 0x18021DB24 (-IsEnabled@CompositorTracing@@SA_NE_K@Z.c)
 *     ?Instance@CompositorTracing@@KAPEAV1@XZ @ 0x18021DBDC (-Instance@CompositorTracing@@KAPEAV1@XZ.c)
 *     ?DwmHolographicViewerRemove_@CompositorTracing@@QEAAXI@Z @ 0x1802D835C (-DwmHolographicViewerRemove_@CompositorTracing@@QEAAXI@Z.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1802DD28C (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicManager::RemoveHolographicViewer(RTL_SRWLOCK *this, struct CHolographicViewer *a2)
{
  int v4; // ebx
  CompositorTracing *v5; // rcx
  unsigned int Ptr; // edx
  __int64 v7; // rcx
  struct CHolographicViewer **i; // r8
  CHolographicInteropTaskQueue *v9; // rcx

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
  Ptr = (unsigned int)this[28].Ptr;
  v7 = 0LL;
  for ( i = (struct CHolographicViewer **)this[25].Ptr; (unsigned int)v7 < Ptr; v7 = (unsigned int)(v7 + 1) )
  {
    if ( a2 == i[v7] )
      break;
  }
  if ( (unsigned int)v7 < Ptr )
  {
    while ( (unsigned int)v7 < Ptr - 1 )
    {
      i[v7] = i[(unsigned int)(v7 + 1)];
      v7 = (unsigned int)(v7 + 1);
      Ptr = (unsigned int)this[28].Ptr;
    }
    LODWORD(this[28].Ptr) = Ptr - 1;
    v9 = (CHolographicInteropTaskQueue *)this[6].Ptr;
    if ( v9 )
      CHolographicInteropTaskQueue::PostMessageW(
        v9,
        0x1Au,
        (struct IUnknown *)(((unsigned __int64)a2 + 72) & -(__int64)(a2 != 0LL)),
        0LL,
        0LL,
        0LL,
        0LL);
    CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(a2);
  }
  ReleaseSRWLockExclusive(this + 13);
}
