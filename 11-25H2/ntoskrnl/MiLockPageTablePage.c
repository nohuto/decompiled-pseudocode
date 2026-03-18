/*
 * XREFs of MiLockPageTablePage @ 0x1402AC2E0
 * Callers:
 *     MiProbeLockFrame @ 0x1402ACAF0 (MiProbeLockFrame.c)
 *     MiBuildForkPte @ 0x1402CCF80 (MiBuildForkPte.c)
 *     NtLockVirtualMemory @ 0x140388E00 (NtLockVirtualMemory.c)
 *     MiLockPageTableRange @ 0x14049569C (MiLockPageTableRange.c)
 * Callees:
 *     MiChargePartitionResidentAvailable @ 0x14022BAA0 (MiChargePartitionResidentAvailable.c)
 *     MiReturnResident @ 0x14022F8D0 (MiReturnResident.c)
 *     MiCaptureDirtyBitToPfn @ 0x14022F970 (MiCaptureDirtyBitToPfn.c)
 *     MiReleasePageFileInfo @ 0x1402346B0 (MiReleasePageFileInfo.c)
 *     MiIncrementPageTableLockCheckWrap @ 0x1402AA740 (MiIncrementPageTableLockCheckWrap.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall MiLockPageTablePage(__int64 a1, int a2)
{
  unsigned int v2; // esi
  __int64 v4; // rbx
  _QWORD *v5; // r12
  unsigned int v6; // ebp
  __int64 v7; // rcx
  unsigned int v8; // r14d
  __int64 result; // rax
  unsigned __int64 v10; // r14
  ULONG *v11; // r10
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int32 CachedResidentAvailable; // eax
  __int64 v14; // rcx
  unsigned __int32 v15; // ett
  unsigned int i; // r13d
  __int64 v17; // r15
  unsigned int v18; // r15d
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // rax
  __int64 v21; // [rsp+60h] [rbp+8h]

  v2 = 0;
  v4 = a1;
  if ( a2 != 1 )
  {
    a1 = 0LL;
    if ( !a2 )
      a1 = v4;
  }
  v5 = (_QWORD *)(a1 + 40);
  v6 = 1;
  v7 = 0xFFFFFFFFFFLL;
  if ( a2 == 1 )
    goto LABEL_20;
  while ( (*(_QWORD *)(v4 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
  {
LABEL_22:
    if ( a2 == 2 )
    {
      v10 = 3LL;
    }
    else
    {
      v10 = 1LL;
      if ( !a2 )
        v10 = 4LL;
    }
    v11 = (ULONG *)*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v4 + 40) >> 43) & 0x3FFLL));
    v21 = (__int64)v11;
    if ( v11 == &MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
      while ( v10 <= CachedResidentAvailable && CachedResidentAvailable != -1 )
      {
        v14 = CachedResidentAvailable - (unsigned int)v10;
        v15 = CachedResidentAvailable;
        CachedResidentAvailable = _InterlockedCompareExchange(
                                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                    v14,
                                    CachedResidentAvailable);
        if ( v15 == CachedResidentAvailable )
          goto LABEL_29;
      }
    }
    result = MiChargePartitionResidentAvailable((__int64)v11, v10, 512LL);
    if ( !(_DWORD)result )
      return result;
LABEL_29:
    for ( i = 0; ; ++i )
    {
      v17 = i;
      if ( i >= v10 )
      {
        if ( i == v10 )
          return v6;
LABEL_42:
        MiReturnResident(v21, v10 - v17);
        return v6;
      }
      v18 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v18 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v14) )
          {
            HvlNotifyLongSpinWait(v18);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v4 + 24) < 0 );
      }
      v17 = i;
      if ( a2 == 1 && v4 != 48 * (*v5 & 0xFFFFFFFFFFLL) - 0x220000000000LL )
        break;
      if ( i )
      {
        MiIncrementPageTableLockCheckWrap(v4);
      }
      else if ( !(unsigned int)MiIncrementPageTableLockCheckWrap(v4) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v6 = 0;
        goto LABEL_42;
      }
      if ( v19 >= 0x10000 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_42;
      }
      v20 = MiCaptureDirtyBitToPfn(v4);
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v20 )
        MiReleasePageFileInfo(v21, v20, 1);
      v14 = 0xFFFFFFFFFFLL;
      v4 = 48 * (*(_QWORD *)(v4 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiReturnResident(v21, v10 - i);
LABEL_19:
    v7 = 0xFFFFFFFFFFLL;
LABEL_20:
    v4 = 48 * (*v5 & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  }
  v8 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v8 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v7) )
      {
        HvlNotifyLongSpinWait(v8);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v4 + 24) < 0 );
  }
  if ( a2 == 1 && v4 != 48 * (*v5 & 0xFFFFFFFFFFLL) - 0x220000000000LL )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_19;
  }
  if ( (*(_QWORD *)(v4 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_22;
  }
  if ( (*(_QWORD *)(v4 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x3FFFFFFFFFFEFDFFLL )
  {
    v2 = 1;
    *(_QWORD *)(v4 + 24) = (*(_QWORD *)(v4 + 24) + 0x10000LL) ^ (*(_QWORD *)(v4 + 24) ^ (*(_QWORD *)(v4 + 24) + 0x10000LL)) & 0xC000000000000000uLL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v2;
}
