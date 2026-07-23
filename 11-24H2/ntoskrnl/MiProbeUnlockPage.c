/*
 * XREFs of MiProbeUnlockPage @ 0x140299FB0
 * Callers:
 *     MmUnlockPages @ 0x14025F510 (MmUnlockPages.c)
 *     MiUnlockPhysicalPageByVa @ 0x14066FD70 (MiUnlockPhysicalPageByVa.c)
 * Callees:
 *     MiFinishLargePageFree @ 0x14021B7C8 (MiFinishLargePageFree.c)
 *     ExReleaseRundownProtectionCacheAware @ 0x14022B370 (ExReleaseRundownProtectionCacheAware.c)
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14029C130 (MiRemoveLockedPageChargeAndDecRef.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiCanPfnOriginalPteBeLost @ 0x1402EE318 (MiCanPfnOriginalPteBeLost.c)
 *     MiClearPageFileReservation @ 0x14030714C (MiClearPageFileReservation.c)
 *     MiGetBaseResidentPage @ 0x140310FE0 (MiGetBaseResidentPage.c)
 *     MiUnlockPageTableCharges @ 0x1403DB820 (MiUnlockPageTableCharges.c)
 *     MiDereferenceControlAreaProbe @ 0x14043F320 (MiDereferenceControlAreaProbe.c)
 */

void __fastcall MiProbeUnlockPage(__int64 a1, __int16 a2, __int64 *a3, int *a4)
{
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rsi
  __int64 v12; // r13
  __int64 v13; // r12
  unsigned __int64 v14; // rbx
  unsigned int v15; // ebp
  __int64 v16; // r14
  char v17; // bp
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 BaseResidentPage; // rax
  __int64 v21; // rdx
  unsigned __int64 v22; // [rsp+70h] [rbp+8h] BYREF
  int v23; // [rsp+78h] [rbp+10h]

  v7 = a1;
  v8 = 0xFFFFFFFFFFLL;
  if ( (a2 & 0x100) != 0 && (*(_QWORD *)(a1 + 40) & 0x10000000000LL) == 0 && ((*(_QWORD *)(a1 + 40) >> 60) & 7) != 1 )
  {
    v9 = *(_QWORD *)(a1 + 40);
    a1 = 0x3FFFFFFFFELL;
    if ( (v9 & 0xFFFFFFFFFFLL) != 0x3FFFFFFFFELL )
    {
      a1 = *a3;
      if ( *a3 != (*(_QWORD *)(v7 + 40) & 0xFFFFFFFFFFLL) )
      {
        if ( a1 != 0x3FFFFFFFFFLL )
        {
          MiUnlockPageTableCharges(48 * a1 - 0x220000000000LL);
          v8 = 0xFFFFFFFFFFLL;
        }
        if ( *(__int64 *)(v7 + 40) < 0 )
          v10 = 1;
        else
          v10 = 2;
        *a4 = v10;
        *a3 = *(_QWORD *)(v7 + 40) & 0xFFFFFFFFFFLL;
      }
    }
  }
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v15 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1, v8, a3, a4) )
      {
        HvlNotifyLongSpinWait(v15);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v7 + 24) < 0 );
  }
  v16 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v7 + 40) >> 43) & 0x3FFLL));
  if ( (*(_DWORD *)(v7 + 32) & 0x200000) != 0
    && (*(_DWORD *)(v7 + 32) & 0x80000) == 0
    && (*(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0 )
  {
    v13 = *(_QWORD *)v7 - 32LL;
    _InterlockedDecrement64((volatile signed __int64 *)(v13 + 264));
  }
  if ( (a2 & 0x80u) != 0 )
  {
    if ( !v13 )
    {
      if ( (*(_DWORD *)(v7 + 16) & 0x400LL) == 0 && (*(_BYTE *)(v7 + 34) & 8) == 0 )
      {
        v22 = *(_QWORD *)(v7 + 16);
        if ( (v22 & 4) != 0 )
        {
          *(_QWORD *)(v7 + 16) &= ~4uLL;
          MiClearPageFileReservation(&v22);
          v14 = v22;
        }
        else
        {
          v22 = 0LL;
        }
      }
      v23 = *(_DWORD *)(v7 + 32);
      v17 = BYTE2(v23);
      if ( (v23 & 0x80000) != 0
        && (unsigned int)MiCanPfnOriginalPteBeLost(v7)
        && (((*(_QWORD *)(v7 + 16) & 4) != 0) & (unsigned __int8)~(*(_BYTE *)(v7 + 34) >> 4)) != 0 )
      {
        *(_QWORD *)(v7 + 16) &= ~4uLL;
      }
      BYTE2(v23) = v17 | 0x10;
      *(_DWORD *)(v7 + 32) = v23;
    }
    if ( (*(_QWORD *)(v7 + 40) & 0x10000000000LL) == 0 && *(__int64 *)(v7 + 40) < 0 )
    {
      v19 = *(_QWORD *)(v7 + 16);
      if ( (v19 & 0x400) != 0 )
      {
        if ( qword_140E2DCC0 && (v19 & 0x10) == 0 )
          v19 &= ~qword_140E2DCC0;
        v12 = *(_QWORD *)(v19 >> 16);
      }
    }
  }
  MiRemoveLockedPageChargeAndDecRef(v7);
  if ( (*(_QWORD *)(v7 + 40) & 0x10000000000LL) != 0
    && (*(_QWORD *)(v7 + 24) & 0x4000000000000000LL) != 0
    && (unsigned __int16)*(_DWORD *)(v7 + 32) == 2 )
  {
    *(_QWORD *)(v7 + 24) &= ~0x4000000000000000uLL;
    BaseResidentPage = MiGetBaseResidentPage(v7);
    v21 = (*(_QWORD *)BaseResidentPage & 0xFFFFFFFFFFLL) - 1;
    *(_QWORD *)BaseResidentPage = v21 ^ (v21 ^ *(_QWORD *)BaseResidentPage) & 0xFFFFFF0000000000uLL;
    if ( BaseResidentPage != v7 )
      _InterlockedAnd64((volatile signed __int64 *)(BaseResidentPage + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v21 )
      BaseResidentPage = 0LL;
    v11 = BaseResidentPage;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v14 )
    MiReleasePageFileInfo(v16, v14, 1LL, v18);
  if ( v11 )
    MiFinishLargePageFree(v11, 1LL, 1, 0x10u);
  if ( v12 )
    MiDereferenceControlAreaProbe(v12, 1LL);
  if ( (ULONG *)v16 != &MiSystemPartition )
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v16 + 2784));
}
