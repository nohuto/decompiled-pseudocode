/*
 * XREFs of ?DetachFromChannel@CHolographicViewer@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1802DCB50
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveHolographicViewer@CHolographicManager@@QEAAXPEAVCHolographicViewer@@@Z @ 0x1802D8FDC (-RemoveHolographicViewer@CHolographicManager@@QEAAXPEAVCHolographicViewer@@@Z.c)
 *     ?Dispose@CHolographicViewer@@UEAAJXZ @ 0x1802DCBC0 (-Dispose@CHolographicViewer@@UEAAJXZ.c)
 */

void __fastcall CHolographicViewer::DetachFromChannel(CHolographicViewer *this, struct CChannelContext *a2)
{
  RTL_SRWLOCK *v3; // rcx

  v3 = (RTL_SRWLOCK *)*((_QWORD *)this + 22);
  if ( v3 && *((_BYTE *)this + 168) )
    CHolographicManager::RemoveHolographicViewer(v3, this);
  CHolographicViewer::Dispose((CHolographicViewer *)((char *)this + 80));
  CResource::DetachFromChannel(this, a2);
}
