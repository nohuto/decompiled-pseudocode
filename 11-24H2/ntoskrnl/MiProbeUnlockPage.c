/*
 * XREFs of MiProbeUnlockPage @ 0x14028A3B0
 * Callers:
 *     MmUnlockPages @ 0x140267F30 (MmUnlockPages.c)
 *     MiUnlockPhysicalPageByVa @ 0x14066EBA0 (MiUnlockPhysicalPageByVa.c)
 * Callees:
 *     MiClearPageFileReservation @ 0x140213DEC (MiClearPageFileReservation.c)
 *     MiReleasePageFileInfo @ 0x14021B9A0 (MiReleasePageFileInfo.c)
 *     ExReleaseRundownProtectionCacheAware @ 0x140275DE0 (ExReleaseRundownProtectionCacheAware.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14028C530 (MiRemoveLockedPageChargeAndDecRef.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiUnlockPageTableCharges @ 0x1402C7D50 (MiUnlockPageTableCharges.c)
 *     MiGetBaseResidentPage @ 0x140307100 (MiGetBaseResidentPage.c)
 *     MiDereferenceControlAreaProbe @ 0x14036F6B4 (MiDereferenceControlAreaProbe.c)
 *     MiCanPfnOriginalPteBeLost @ 0x14039E1D0 (MiCanPfnOriginalPteBeLost.c)
 *     MiFinishLargePageFree @ 0x1403A3D48 (MiFinishLargePageFree.c)
 */

void __fastcall MiProbeUnlockPage(__int64 a1, __int16 a2, __int64 *a3, int *a4)
{
  char v4; // r15
  __int64 v7; // rdi
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rsi
  __int64 v11; // r13
  __int64 v12; // r12
  unsigned __int64 v13; // rbx
  unsigned int v14; // ebp
  __int64 v15; // r14
  char v16; // bp
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 BaseResidentPage; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // [rsp+70h] [rbp+8h] BYREF
  int v22; // [rsp+78h] [rbp+10h]

  v4 = a2;
  v7 = a1;
  if ( (a2 & 0x100) != 0 && (*(_QWORD *)(a1 + 40) & 0x10000000000LL) == 0 && ((*(_QWORD *)(a1 + 40) >> 60) & 7) != 1 )
  {
    v8 = *(_QWORD *)(a1 + 40);
    a1 = 0x3FFFFFFFFELL;
    if ( (v8 & 0xFFFFFFFFFFLL) != 0x3FFFFFFFFELL )
    {
      a1 = *a3;
      if ( *a3 != (*(_QWORD *)(v7 + 40) & 0xFFFFFFFFFFLL) )
      {
        if ( a1 != 0x3FFFFFFFFFLL )
          MiUnlockPageTableCharges(48 * a1 - 0x220000000000LL);
        if ( *(__int64 *)(v7 + 40) < 0 )
          v9 = 1;
        else
          v9 = 2;
        *a4 = v9;
        *a3 = *(_QWORD *)(v7 + 40) & 0xFFFFFFFFFFLL;
      }
    }
  }
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v14 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
      {
        HvlNotifyLongSpinWait(v14);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v7 + 24) < 0 );
  }
  v15 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v7 + 40) >> 43) & 0x3FFLL));
  if ( (*(_DWORD *)(v7 + 32) & 0x200000) != 0
    && (*(_DWORD *)(v7 + 32) & 0x80000) == 0
    && (*(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 0 )
  {
    v12 = *(_QWORD *)v7 - 32LL;
    _InterlockedDecrement64((volatile signed __int64 *)(v12 + 264));
  }
  if ( v4 < 0 )
  {
    if ( !v12 )
    {
      if ( (*(_DWORD *)(v7 + 16) & 0x400LL) == 0 && (*(_BYTE *)(v7 + 34) & 8) == 0 )
      {
        v21 = *(_QWORD *)(v7 + 16);
        if ( (v21 & 4) != 0 )
        {
          *(_QWORD *)(v7 + 16) &= ~4uLL;
          MiClearPageFileReservation((__int64 *)&v21);
          v13 = v21;
        }
        else
        {
          v21 = 0LL;
        }
      }
      v22 = *(_DWORD *)(v7 + 32);
      v16 = BYTE2(v22);
      if ( (v22 & 0x80000) != 0
        && (unsigned int)MiCanPfnOriginalPteBeLost(v7)
        && (((*(_QWORD *)(v7 + 16) & 4) != 0) & (unsigned __int8)~(*(_BYTE *)(v7 + 34) >> 4)) != 0 )
      {
        *(_QWORD *)(v7 + 16) &= ~4uLL;
      }
      BYTE2(v22) = v16 | 0x10;
      *(_DWORD *)(v7 + 32) = v22;
    }
    if ( (*(_QWORD *)(v7 + 40) & 0x10000000000LL) == 0 && *(__int64 *)(v7 + 40) < 0 )
    {
      v18 = *(_QWORD *)(v7 + 16);
      if ( (v18 & 0x400) != 0 )
      {
        if ( qword_140E2DB80 && (v18 & 0x10) == 0 )
          v18 &= ~qword_140E2DB80;
        v11 = *(_QWORD *)(v18 >> 16);
      }
    }
  }
  MiRemoveLockedPageChargeAndDecRef(v7);
  if ( (*(_QWORD *)(v7 + 40) & 0x10000000000LL) != 0
    && (*(_QWORD *)(v7 + 24) & 0x4000000000000000LL) != 0
    && (unsigned __int16)*(_DWORD *)(v7 + 32) == 2 )
  {
    *(_QWORD *)(v7 + 24) &= ~0x4000000000000000uLL;
    BaseResidentPage = MiGetBaseResidentPage(v7, v17);
    v20 = (*(_QWORD *)BaseResidentPage & 0xFFFFFFFFFFLL) - 1;
    *(_QWORD *)BaseResidentPage = v20 ^ (v20 ^ *(_QWORD *)BaseResidentPage) & 0xFFFFFF0000000000uLL;
    if ( BaseResidentPage != v7 )
      _InterlockedAnd64((volatile signed __int64 *)(BaseResidentPage + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v20 )
      BaseResidentPage = 0LL;
    v10 = BaseResidentPage;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v13 )
    MiReleasePageFileInfo(v15, v13, 1LL);
  if ( v10 )
    MiFinishLargePageFree(v10, 1LL, 1LL, 16LL);
  if ( v11 )
    MiDereferenceControlAreaProbe(v11, 1LL);
  if ( (ULONG *)v15 != &MiSystemPartition )
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v15 + 2784));
}
