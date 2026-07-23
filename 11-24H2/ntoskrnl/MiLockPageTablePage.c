/*
 * XREFs of MiLockPageTablePage @ 0x140205E40
 * Callers:
 *     MiProbeLockFrame @ 0x140238050 (MiProbeLockFrame.c)
 *     MiBuildForkPte @ 0x1402687D0 (MiBuildForkPte.c)
 *     NtLockVirtualMemory @ 0x1403DBC30 (NtLockVirtualMemory.c)
 *     MiLockPageTableRange @ 0x140489C5C (MiLockPageTableRange.c)
 * Callees:
 *     MiIncrementPageTableLockCheckWrap @ 0x140204510 (MiIncrementPageTableLockCheckWrap.c)
 *     MiCaptureDirtyBitToPfn @ 0x140206E50 (MiCaptureDirtyBitToPfn.c)
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiReturnResident @ 0x140338A10 (MiReturnResident.c)
 *     MiChargePartitionResidentAvailable @ 0x14033ECD0 (MiChargePartitionResidentAvailable.c)
 */

__int64 __fastcall MiLockPageTablePage(__int64 a1, int a2)
{
  unsigned int v2; // edi
  __int64 v4; // rbx
  _QWORD *v5; // r11
  unsigned int v6; // r12d
  ULONG *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // ebp
  __int64 result; // rax
  unsigned __int64 v13; // rbp
  ULONG *v14; // r10
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int32 CachedResidentAvailable; // eax
  __int64 v17; // rcx
  unsigned __int32 v18; // ett
  unsigned int i; // r15d
  unsigned int v20; // r13d
  unsigned __int64 v21; // r9
  __int64 v22; // rax
  _QWORD *v23; // [rsp+60h] [rbp+8h]
  ULONG *v24; // [rsp+70h] [rbp+18h]

  v2 = 0;
  v4 = a1;
  if ( a2 != 1 )
  {
    a1 = 0LL;
    if ( !a2 )
      a1 = v4;
  }
  v5 = (_QWORD *)(a1 + 40);
  v23 = (_QWORD *)(a1 + 40);
  v6 = 1;
  v7 = &MiSystemPartition;
  v8 = 0xFFFFFFFFFFLL;
  v9 = 0x3FFFFFFFFFFFFFFFLL;
  v10 = 4LL;
  if ( a2 == 1 )
    goto LABEL_44;
  while ( (*(_QWORD *)(v4 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
  {
LABEL_19:
    if ( a2 == 2 )
    {
      v13 = 3LL;
    }
    else
    {
      v13 = 1LL;
      if ( !a2 )
        v13 = 4LL;
    }
    v14 = (ULONG *)*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v4 + 40) >> 43) & 0x3FFLL));
    v24 = v14;
    if ( v14 == &MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
      while ( v13 <= CachedResidentAvailable && CachedResidentAvailable != -1 )
      {
        v17 = CachedResidentAvailable - (unsigned int)v13;
        v18 = CachedResidentAvailable;
        CachedResidentAvailable = _InterlockedCompareExchange(
                                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                    v17,
                                    CachedResidentAvailable);
        if ( v18 == CachedResidentAvailable )
          goto LABEL_26;
      }
    }
    result = MiChargePartitionResidentAvailable(v14, v13, 512LL, 4LL);
    if ( !(_DWORD)result )
      return result;
LABEL_26:
    for ( i = 0; ; ++i )
    {
      if ( i >= v13 )
      {
        if ( i == v13 )
          return v6;
LABEL_47:
        MiReturnResident(v24, v13 - i);
        return v6;
      }
      v20 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v20 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v17, CurrentPrcb, v9, v10) )
          {
            HvlNotifyLongSpinWait(v20);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v4 + 24) < 0 );
      }
      if ( a2 == 1 && v4 != 48 * (*v23 & 0xFFFFFFFFFFLL) - 0x220000000000LL )
        break;
      if ( i )
      {
        MiIncrementPageTableLockCheckWrap(v4);
      }
      else if ( !(unsigned int)MiIncrementPageTableLockCheckWrap(v4) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v6 = 0;
        goto LABEL_47;
      }
      if ( v21 >= 0x10000 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_47;
      }
      v22 = MiCaptureDirtyBitToPfn(v4);
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v22 )
        MiReleasePageFileInfo(v24, v22, 1LL);
      v17 = 0xFFFFFFFFFFLL;
      v4 = 48 * (*(_QWORD *)(v4 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiReturnResident(v24, v13 - i);
LABEL_43:
    v23 = v5;
    v7 = &MiSystemPartition;
    v8 = 0xFFFFFFFFFFLL;
    v9 = 0x3FFFFFFFFFFFFFFFLL;
    v10 = 4LL;
LABEL_44:
    v4 = 48 * (*v5 & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  }
  v11 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v11 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v8, v7, v9, v10) )
      {
        HvlNotifyLongSpinWait(v11);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v4 + 24) < 0 );
  }
  if ( a2 == 1 )
  {
    v5 = v23;
    if ( v4 != 48 * (*v23 & 0xFFFFFFFFFFLL) - 0x220000000000LL )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      goto LABEL_43;
    }
  }
  v9 = 0x3FFFFFFFFFFFFFFFLL;
  if ( (*(_QWORD *)(v4 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v10 = 4LL;
    goto LABEL_19;
  }
  if ( (*(_QWORD *)(v4 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x3FFFFFFFFFFEFDFFLL )
  {
    v2 = 1;
    *(_QWORD *)(v4 + 24) = (*(_QWORD *)(v4 + 24) + 0x10000LL) ^ (*(_QWORD *)(v4 + 24) ^ (*(_QWORD *)(v4 + 24) + 0x10000LL)) & 0xC000000000000000uLL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v2;
}
