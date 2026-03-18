/*
 * XREFs of ?RemoveInteropTexture@CHolographicManager@@QEAAXPEAVCHolographicInteropTexture@@@Z @ 0x1802CFE2C
 * Callers:
 *     ?DetachFromChannel@CHolographicInteropTexture@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1802D2810 (-DetachFromChannel@CHolographicInteropTexture@@UEAAXPEAVCChannelContext@@_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?IsEnabled@CompositorTracing@@SA_NE_K@Z @ 0x1802126E4 (-IsEnabled@CompositorTracing@@SA_NE_K@Z.c)
 *     ?Instance@CompositorTracing@@KAPEAV1@XZ @ 0x18021279C (-Instance@CompositorTracing@@KAPEAV1@XZ.c)
 *     ?DwmHolographicInteropTextureRemove_@CompositorTracing@@QEAAXI@Z @ 0x1802CEFF8 (-DwmHolographicInteropTextureRemove_@CompositorTracing@@QEAAXI@Z.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1802D3FEC (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

void __fastcall CHolographicManager::RemoveInteropTexture(RTL_SRWLOCK *this, struct CHolographicInteropTexture *a2)
{
  RTL_SRWLOCK *v2; // rbx
  struct CHolographicInteropTexture **i; // rcx
  CHolographicInteropTaskQueue *Ptr; // rcx
  int v7; // esi
  __int64 v8; // rdx
  __int64 v9; // r8
  CompositorTracing *v10; // rcx

  v2 = this + 13;
  AcquireSRWLockExclusive(this + 13);
  for ( i = (struct CHolographicInteropTexture **)this[18].Ptr; i != this[19].Ptr; ++i )
  {
    if ( *i == a2 )
    {
      memmove_0(i, i + 1, (char *)this[19].Ptr - (char *)(i + 1));
      this[19].Ptr = (char *)this[19].Ptr - 8;
      Ptr = (CHolographicInteropTaskQueue *)this[6].Ptr;
      if ( Ptr && LOBYTE(this[30].Ptr) )
        CHolographicInteropTaskQueue::PostMessageW(
          Ptr,
          3u,
          (struct IUnknown *)(((unsigned __int64)a2 + 80) & -(__int64)(a2 != 0LL)),
          0LL,
          0LL,
          0LL,
          0LL);
      v7 = *((_DWORD *)a2 + 534);
      if ( CompositorTracing::IsEnabled() )
      {
        CompositorTracing::Instance();
        CompositorTracing::DwmHolographicInteropTextureRemove_(v10, v7);
      }
      CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(a2, v8, v9);
      break;
    }
  }
  ReleaseSRWLockExclusive(v2);
}
