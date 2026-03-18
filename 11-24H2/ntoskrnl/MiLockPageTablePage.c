/*
 * XREFs of MiLockPageTablePage @ 0x140284A20
 * Callers:
 *     MiProbeLockFrame @ 0x140282AC0 (MiProbeLockFrame.c)
 *     MiBuildForkPte @ 0x1402C53E8 (MiBuildForkPte.c)
 *     NtLockVirtualMemory @ 0x1403FD910 (NtLockVirtualMemory.c)
 *     MiLockPageTableRange @ 0x14048FA4C (MiLockPageTableRange.c)
 * Callees:
 *     MiReturnResident @ 0x14020F6B0 (MiReturnResident.c)
 *     MiReleasePageFileInfo @ 0x14021B9A0 (MiReleasePageFileInfo.c)
 *     MiCaptureDirtyBitToPfn @ 0x14023ED00 (MiCaptureDirtyBitToPfn.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiChargePartitionResidentAvailable @ 0x1402F6BC0 (MiChargePartitionResidentAvailable.c)
 *     MiIncrementPageTableLockCheckWrap @ 0x140430BB0 (MiIncrementPageTableLockCheckWrap.c)
 */

__int64 __fastcall MiLockPageTablePage(__int64 a1, int a2)
{
  unsigned int v2; // edi
  __int64 v4; // rbx
  _QWORD *v5; // r11
  unsigned int v6; // r12d
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned int v9; // ebp
  __int64 result; // rax
  unsigned __int64 v11; // rbp
  ULONG *v12; // r10
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int32 CachedResidentAvailable; // eax
  __int64 v15; // rcx
  unsigned __int32 v16; // ett
  unsigned int i; // r15d
  unsigned int v18; // r13d
  __int64 v19; // r9
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // rax
  _QWORD *v22; // [rsp+60h] [rbp+8h]
  __int64 v23; // [rsp+70h] [rbp+18h]

  v2 = 0;
  v4 = a1;
  if ( a2 != 1 )
  {
    a1 = 0LL;
    if ( !a2 )
      a1 = v4;
  }
  v5 = (_QWORD *)(a1 + 40);
  v22 = (_QWORD *)(a1 + 40);
  v6 = 1;
  v7 = 0xFFFFFFFFFFLL;
  v8 = 0x3FFFFFFFFFFFFFFFLL;
  if ( a2 == 1 )
    goto LABEL_44;
  while ( (*(_QWORD *)(v4 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
  {
LABEL_19:
    if ( a2 == 2 )
    {
      v11 = 3LL;
    }
    else
    {
      v11 = 1LL;
      if ( !a2 )
        v11 = 4LL;
    }
    v12 = (ULONG *)*((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v4 + 40) >> 43) & 0x3FFLL));
    v23 = (__int64)v12;
    if ( v12 == &MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
      while ( v11 <= CachedResidentAvailable && CachedResidentAvailable != -1 )
      {
        v15 = CachedResidentAvailable - (unsigned int)v11;
        v16 = CachedResidentAvailable;
        CachedResidentAvailable = _InterlockedCompareExchange(
                                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                    v15,
                                    CachedResidentAvailable);
        if ( v16 == CachedResidentAvailable )
          goto LABEL_26;
      }
    }
    result = MiChargePartitionResidentAvailable(v12, v11, 512LL);
    if ( !(_DWORD)result )
      return result;
LABEL_26:
    for ( i = 0; ; ++i )
    {
      if ( i >= v11 )
      {
        if ( i == v11 )
          return v6;
LABEL_47:
        MiReturnResident(v23, v11 - i);
        return v6;
      }
      v18 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v18 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v15) )
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
      if ( a2 == 1 && v4 != 48 * (*v22 & 0xFFFFFFFFFFLL) - 0x220000000000LL )
        break;
      v19 = *(_QWORD *)(v4 + 24) & 0x3FFFFFFFFFFFFFFFLL;
      if ( i )
      {
        MiIncrementPageTableLockCheckWrap(v4, CurrentPrcb, v8, v19);
      }
      else if ( !(unsigned int)MiIncrementPageTableLockCheckWrap(v4, CurrentPrcb, v8, v19) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v6 = 0;
        goto LABEL_47;
      }
      if ( v20 >= 0x10000 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_47;
      }
      v21 = MiCaptureDirtyBitToPfn(v4);
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v21 )
        MiReleasePageFileInfo(v23, v21, 1LL);
      v15 = 0xFFFFFFFFFFLL;
      v4 = 48 * (*(_QWORD *)(v4 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiReturnResident(v23, v11 - i);
LABEL_43:
    v22 = v5;
    v7 = 0xFFFFFFFFFFLL;
    v8 = 0x3FFFFFFFFFFFFFFFLL;
LABEL_44:
    v4 = 48 * (*v5 & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  }
  v9 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v9 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v7) )
      {
        HvlNotifyLongSpinWait(v9);
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
    v5 = v22;
    if ( v4 != 48 * (*v22 & 0xFFFFFFFFFFLL) - 0x220000000000LL )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      goto LABEL_43;
    }
  }
  v8 = 0x3FFFFFFFFFFFFFFFLL;
  if ( (*(_QWORD *)(v4 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
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
