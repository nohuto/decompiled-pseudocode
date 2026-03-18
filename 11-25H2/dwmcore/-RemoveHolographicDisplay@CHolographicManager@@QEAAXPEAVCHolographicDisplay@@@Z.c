/*
 * XREFs of ?RemoveHolographicDisplay@CHolographicManager@@QEAAXPEAVCHolographicDisplay@@@Z @ 0x1802D8EF0
 * Callers:
 *     ?DetachFromChannel@CHolographicDisplay@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1802DA470 (-DetachFromChannel@CHolographicDisplay@@UEAAXPEAVCChannelContext@@_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800AB610 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?IsEnabled@CompositorTracing@@SA_NE_K@Z @ 0x18021DB24 (-IsEnabled@CompositorTracing@@SA_NE_K@Z.c)
 *     ?Instance@CompositorTracing@@KAPEAV1@XZ @ 0x18021DBDC (-Instance@CompositorTracing@@KAPEAV1@XZ.c)
 *     ?DwmHolographicDisplayRemove_@CompositorTracing@@QEAAXI@Z @ 0x1802D8128 (-DwmHolographicDisplayRemove_@CompositorTracing@@QEAAXI@Z.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1802DD28C (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicManager::RemoveHolographicDisplay(RTL_SRWLOCK *this, struct CHolographicDisplay *a2)
{
  int v4; // ebx
  CompositorTracing *v5; // rcx
  unsigned int Ptr; // edx
  __int64 v7; // rcx
  struct CHolographicDisplay **i; // r8
  CHolographicInteropTaskQueue *v9; // rcx

  if ( a2 )
  {
    v4 = *((_DWORD *)a2 + 24);
    if ( CompositorTracing::IsEnabled() )
    {
      CompositorTracing::Instance();
      CompositorTracing::DwmHolographicDisplayRemove_(v5, v4);
    }
  }
  AcquireSRWLockExclusive(this + 13);
  Ptr = (unsigned int)this[17].Ptr;
  v7 = 0LL;
  for ( i = (struct CHolographicDisplay **)this[14].Ptr; (unsigned int)v7 < Ptr; v7 = (unsigned int)(v7 + 1) )
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
      Ptr = (unsigned int)this[17].Ptr;
    }
    LODWORD(this[17].Ptr) = Ptr - 1;
    v9 = (CHolographicInteropTaskQueue *)this[6].Ptr;
    if ( v9 )
      CHolographicInteropTaskQueue::PostMessageW(
        v9,
        7u,
        (struct IUnknown *)(((unsigned __int64)a2 + 80) & -(__int64)(a2 != 0LL)),
        0LL,
        0LL,
        0LL,
        0LL);
    CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(a2);
  }
  ReleaseSRWLockExclusive(this + 13);
}
