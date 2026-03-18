/*
 * XREFs of ?Abandon@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1401E42BC
 * Callers:
 *     ??1DXGDXGIKEYEDMUTEX@@QEAA@XZ @ 0x1401E40B4 (--1DXGDXGIKEYEDMUTEX@@QEAA@XZ.c)
 *     ?MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ @ 0x1401E7064 (-MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ.c)
 * Callees:
 *     ?SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x140394F94 (-SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 */

void __fastcall DXGDXGIKEYEDMUTEX::Abandon(DXGDXGIKEYEDMUTEX *this)
{
  __int64 v1; // rcx
  DXGKEYEDMUTEX *v2; // rcx

  v1 = *(_QWORD *)this;
  if ( v1 )
  {
    v2 = *(DXGKEYEDMUTEX **)(v1 + 24);
    if ( v2 )
      DXGKEYEDMUTEX::SignalAbandonedInternal(v2, 0, 1);
  }
}
