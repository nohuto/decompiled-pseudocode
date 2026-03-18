/*
 * XREFs of ??1DXGADAPTERSTOPRESETLOCKEXCLUSIVE@@QEAA@XZ @ 0x1400682AC
 * Callers:
 *     DxgkStartPnPStop @ 0x1401A0B10 (DxgkStartPnPStop.c)
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1400391A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTERSTOPRESETLOCKEXCLUSIVE::~DXGADAPTERSTOPRESETLOCKEXCLUSIVE(
        DXGADAPTERSTOPRESETLOCKEXCLUSIVE *this)
{
  __int64 v2; // rcx

  if ( *((_BYTE *)this + 8) )
  {
    *((_BYTE *)this + 8) = 0;
    v2 = *(_QWORD *)this;
    *(_QWORD *)(v2 + 144) = 0LL;
    ExReleasePushLockExclusiveEx(v2 + 136, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER::ReleaseReferenceNoTracking(*(DXGADAPTER **)this);
  }
}
